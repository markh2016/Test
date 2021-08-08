#ifndef QTEMPDIALOG_H
#define QTEMPDIALOG_H

#include <QDialog>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class QTempDialog; }
QT_END_NAMESPACE

class QTempDialog : public QDialog
{
    Q_OBJECT

public:
    QTempDialog(QWidget *parent = nullptr);
    ~QTempDialog();


private:
    Ui::QTempDialog *ui;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id =  6790 ; //9025;
    static const quint16 arduino_uno_product_id = 29987 ; //1;
    QString arduino_port_name;
    bool arduino_is_available;
};
#endif // QTEMPDIALOG_H
