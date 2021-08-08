#include "qtempdialog.h"
#include "ui_qtempdialog.h"

QTempDialog::QTempDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QTempDialog)
{
    ui->setupUi(this);
}

QTempDialog::~QTempDialog()
{
    delete ui;
}

