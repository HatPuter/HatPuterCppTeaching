#include "../include/UserData.h"
#include "ui_UserData.h"

UserData::UserData(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserData)
{
    ui->setupUi(this);
}

UserData::~UserData()
{
    delete ui;
}
