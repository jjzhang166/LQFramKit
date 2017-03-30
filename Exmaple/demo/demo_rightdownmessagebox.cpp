#include "demo_rightdownmessagebox.h"
#include "ui_demo_rightdownmessagebox.h"

#include "messageWidget/messagewidget.h"

Demo_RightDownMessageBox::Demo_RightDownMessageBox(const QString &title, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Demo_RightDownMessageBox)
{
    ui->setupUi(this);

    setWindowTitle (title);

    m_pMessageBox = new MessageWidget;
}

Demo_RightDownMessageBox::~Demo_RightDownMessageBox()
{
    delete ui;

    m_pMessageBox->deleteLater ();
    m_pMessageBox = Q_NULLPTR;
}

void Demo_RightDownMessageBox::on_pushButton_clicked()
{
    QString title,content;

    if( (!ui->comboBox->currentText().isEmpty()) &&
            (!ui->comboBox_2->currentText().isEmpty ()))
    {
        title = ui->comboBox->currentText();
        content = ui->comboBox_2->currentText();
    }
    m_pMessageBox->showMsg (":/image/RightMessageBox/title.png",title,content);
}

void Demo_RightDownMessageBox::on_comboBox_currentIndexChanged(int index)
{
    ui->comboBox_2->setCurrentIndex(index);
}

void Demo_RightDownMessageBox::on_comboBox_2_currentIndexChanged(int index)
{
    ui->comboBox->setCurrentIndex(index);
}
