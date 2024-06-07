#include "todoappsclass.h"

ToDoAppsClass::ToDoAppsClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ToDoAppsClass)
{
    ui->setupUi(this);

    initStylesheet();

    connect(ui->addNewBtn, SIGNAL(clicked()), this, SLOT(slotAddNewTask()));

    ui->newTaskLineEdit->setText("what do i want to do...");
    ui->newDateText->setText(QDate::currentDate().toString());
}

ToDoAppsClass::~ToDoAppsClass()
{
    delete ui;
}

void ToDoAppsClass::initStylesheet() {
    QFile style("C:/Users/admin/Documents/ToDoApp/style_generic.css");
    bool ok = style.open(QFile::ReadOnly);
    if(!ok) {
        qDebug() << "failed to open css file";
        return;
    }
        QString s = QString::fromLatin1(style.readAll());

    setStyleSheet(s);
}

void ToDoAppsClass::slotAddNewTask() {
    QString taskName = ui->newTaskLineEdit->text();
    QString date = QDate::currentDate().toString();

    createNewTask(taskName, date);
}

void ToDoAppsClass::createNewTask(QString taskName, QString date) {
    QVBoxLayout* vMainLayout = qobject_cast<QVBoxLayout*>(ui->allNewTasksContent->layout());

    QFrame* Hframe = new QFrame();
    Hframe->setFrameStyle(QFrame::StyledPanel);

    QHBoxLayout* newTask = new QHBoxLayout(Hframe);
    Hframe->setLayout(newTask);

    QFrame* Vframe = new QFrame();
    QVBoxLayout* taskDetails = new QVBoxLayout(Vframe);
    Vframe->setLayout(taskDetails);

    QLabel* titlelabel = new QLabel(tr("Take #%1").arg(vMainLayout->count()));
    taskDetails->addWidget(titlelabel);
    QLabel* tasklabel = new QLabel(taskName);
    taskDetails->addWidget(tasklabel);
    QLabel* datelabel = new QLabel(date);
    taskDetails->addWidget(datelabel);

    newTask->insertWidget(0, Vframe);

    QSpacerItem* spacer = new QSpacerItem(100,100, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
    newTask->insertSpacerItem(1, spacer);

    QPushButton* deleteBtn = new QPushButton("delete");
    newTask->insertWidget(2, deleteBtn);
    deleteBtn->setProperty("currentTask", QVariant(QVariant::fromValue<QFrame*>(Hframe)));

    vMainLayout->insertWidget(vMainLayout->count()-1, Hframe);

    connect(deleteBtn, SIGNAL(clicked()), this, SLOT(slotDeleteTask()));

    {
        QVector<QString> colors = { "rgba(66, 165, 245,1.0)", "rgba(41, 182, 246,1.0)", "rgba(38, 198, 218,1.0)", "rgba(38, 166, 154,1.0)", "rgba(102, 187, 106,1.0)",
                                    "rgba(156, 204, 101,1.0)", "rgba(212, 225, 87,1.0)", "rgba(255, 238, 88,1.0)", "rgba(255, 202, 40,1.0)", "rgba(255, 167, 38,1.0)"};
        int randomVal = (((rand() % 50) % 100) % (colors.size() - 1));

        Hframe->setObjectName("newTask");
        Hframe->setStyleSheet("#newTask { border-radius: 10px; border: 1px solid black; background-color: " + colors[randomVal] + "; }");

        tasklabel->setObjectName("taskName");
        tasklabel->setStyleSheet("#taskName { font: bold 11pt black 'Verdana'; }");

        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setStyleSheet("#deleteBtn { color: white: background-color: #ff2264; border-color: #b91043; }  #deleteBtn:hover{ background-color: #b91043; border-color: #ff2264; }");

    }
}

void ToDoAppsClass::slotDeleteTask() {

    QPushButton* fromButton = (QPushButton*)sender();

    QVariant var;
    var = fromButton->property("currentTask");
    QFrame* taskHBox = qvariant_cast<QFrame*>(var);


    delete taskHBox;
}


