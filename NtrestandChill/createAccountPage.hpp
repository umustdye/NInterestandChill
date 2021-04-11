#ifndef CREATEACCOUNTPAGE_H
#define CREATEACCOUNTPAGE_H

#include <QDialog>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QString>
#include <QDate>
#include <QDateTime>
#include <QTime>
#include <QByteArray>
#include <QVector>



namespace Ui {
class CreateAccountPage;
}

class CreateAccountPage : public QDialog
{
    Q_OBJECT

public:
    explicit CreateAccountPage(QWidget *parent = nullptr);
    ~CreateAccountPage();
    bool connectToAccountDB();
    bool addAccount(QString userName, QString password, QString firstName, QString lastName);
    bool validUserName(QString userName);
    bool validPassword(QString password);
    QJsonArray makeObjArray();

private slots:
    void on_createButton_clicked();

    void on_visiblePassword1_stateChanged(int state);

    void on_visiblePassword2_stateChanged(int state);

private:
    Ui::CreateAccountPage *ui;

};

#endif // CREATEACCOUNTPAGE_H
