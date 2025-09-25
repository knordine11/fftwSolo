#include "widget.h"
#include "ui_widget.h"
#include "fftstuff.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnStart_clicked()
{
    FftStuff test;
    test.DoIt();
}
