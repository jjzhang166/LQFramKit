﻿#include "demo_lineedit.h"
#include "ui_demo_lineedit.h"

Demo_lineEdit::Demo_lineEdit(const QString &title, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Demo_lineEdit)
{
    ui->setupUi(this);

    this->setWindowTitle(title);

    setAttribute(Qt::WA_DeleteOnClose);

    this->setFocusPolicy (Qt::ClickFocus);

    connect(ui->lineEdit,SIGNAL(signalSearchContent(QString)),
            this,SIGNAL(signalSearchContent(QString)));
}

Demo_lineEdit::~Demo_lineEdit()
{
    delete ui;
}
