#ifndef TODOAPPSCLASS_H
#define TODOAPPSCLASS_H

#include <QMainWindow>
#include "ui_todoappsclass.h"
#include <QDate>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class ToDoAppsClass;
}
QT_END_NAMESPACE

class ToDoAppsClass : public QMainWindow
{
    Q_OBJECT

public:
    ToDoAppsClass(QWidget *parent = nullptr);
    ~ToDoAppsClass();

private:
    Ui::ToDoAppsClass *ui;


public:
    void initStylesheet();
    void createNewTask(QString taskName, QString date);

public slots:
    void slotAddNewTask();
    void slotDeleteTask();

signals:
    void signalAddNewTask(QString taskName, QString date);
};
#endif // TODOAPPSCLASS_H
