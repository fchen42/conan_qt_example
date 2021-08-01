#include "ui_widget.h"
#include "widget.h"
#include <QMessageBox>


Widget::Widget(QWidget *parent)
  : QWidget(parent),
    ui(new Ui::Widget)
{
  ui->setupUi(this);
}

Widget::~Widget()
{
  delete ui;
}

void Widget::greeting() {
  QMessageBox::information(this, "Greeting", "Hello world");
}
