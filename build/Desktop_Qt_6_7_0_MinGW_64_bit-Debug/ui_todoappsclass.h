/********************************************************************************
** Form generated from reading UI file 'todoappsclass.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOAPPSCLASS_H
#define UI_TODOAPPSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoAppsClass
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *titleBarFrame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QFrame *contentFrame;
    QVBoxLayout *verticalLayout_2;
    QFrame *addToDoList;
    QHBoxLayout *horizontalLayout_2;
    QFrame *addLeft;
    QVBoxLayout *verticalLayout_3;
    QLabel *newTaskText;
    QLineEdit *newTaskLineEdit;
    QLabel *newDateText;
    QFrame *addRight;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addNewBtn;
    QScrollArea *allNewTasks;
    QWidget *allNewTasksContent;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ToDoAppsClass)
    {
        if (ToDoAppsClass->objectName().isEmpty())
            ToDoAppsClass->setObjectName("ToDoAppsClass");
        ToDoAppsClass->resize(535, 802);
        centralwidget = new QWidget(ToDoAppsClass);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        titleBarFrame = new QFrame(centralwidget);
        titleBarFrame->setObjectName("titleBarFrame");
        titleBarFrame->setFrameShape(QFrame::StyledPanel);
        titleBarFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(titleBarFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(215, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(titleBarFrame);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(215, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(titleBarFrame);

        contentFrame = new QFrame(centralwidget);
        contentFrame->setObjectName("contentFrame");
        contentFrame->setFrameShape(QFrame::StyledPanel);
        contentFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(contentFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        addToDoList = new QFrame(contentFrame);
        addToDoList->setObjectName("addToDoList");
        addToDoList->setFrameShape(QFrame::StyledPanel);
        addToDoList->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(addToDoList);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        addLeft = new QFrame(addToDoList);
        addLeft->setObjectName("addLeft");
        addLeft->setFrameShape(QFrame::StyledPanel);
        addLeft->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(addLeft);
        verticalLayout_3->setObjectName("verticalLayout_3");
        newTaskText = new QLabel(addLeft);
        newTaskText->setObjectName("newTaskText");

        verticalLayout_3->addWidget(newTaskText);

        newTaskLineEdit = new QLineEdit(addLeft);
        newTaskLineEdit->setObjectName("newTaskLineEdit");

        verticalLayout_3->addWidget(newTaskLineEdit);

        newDateText = new QLabel(addLeft);
        newDateText->setObjectName("newDateText");

        verticalLayout_3->addWidget(newDateText);


        horizontalLayout_2->addWidget(addLeft);

        addRight = new QFrame(addToDoList);
        addRight->setObjectName("addRight");
        addRight->setFrameShape(QFrame::StyledPanel);
        addRight->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(addRight);
        verticalLayout_4->setObjectName("verticalLayout_4");
        addNewBtn = new QPushButton(addRight);
        addNewBtn->setObjectName("addNewBtn");

        verticalLayout_4->addWidget(addNewBtn);


        horizontalLayout_2->addWidget(addRight);


        verticalLayout_2->addWidget(addToDoList);

        allNewTasks = new QScrollArea(contentFrame);
        allNewTasks->setObjectName("allNewTasks");
        allNewTasks->setWidgetResizable(true);
        allNewTasksContent = new QWidget();
        allNewTasksContent->setObjectName("allNewTasksContent");
        allNewTasksContent->setGeometry(QRect(0, 0, 495, 556));
        verticalLayout_5 = new QVBoxLayout(allNewTasksContent);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer = new QSpacerItem(20, 535, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        allNewTasks->setWidget(allNewTasksContent);

        verticalLayout_2->addWidget(allNewTasks);


        verticalLayout->addWidget(contentFrame);

        ToDoAppsClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ToDoAppsClass);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 535, 21));
        ToDoAppsClass->setMenuBar(menubar);
        statusbar = new QStatusBar(ToDoAppsClass);
        statusbar->setObjectName("statusbar");
        ToDoAppsClass->setStatusBar(statusbar);

        retranslateUi(ToDoAppsClass);

        QMetaObject::connectSlotsByName(ToDoAppsClass);
    } // setupUi

    void retranslateUi(QMainWindow *ToDoAppsClass)
    {
        ToDoAppsClass->setWindowTitle(QCoreApplication::translate("ToDoAppsClass", "To do list", nullptr));
        label->setText(QCoreApplication::translate("ToDoAppsClass", "TextLabel", nullptr));
        newTaskText->setText(QCoreApplication::translate("ToDoAppsClass", "Add New Task", nullptr));
        newTaskLineEdit->setText(QCoreApplication::translate("ToDoAppsClass", "What do i want to do", nullptr));
        newDateText->setText(QCoreApplication::translate("ToDoAppsClass", "Date Created", nullptr));
        addNewBtn->setText(QCoreApplication::translate("ToDoAppsClass", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToDoAppsClass: public Ui_ToDoAppsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOAPPSCLASS_H
