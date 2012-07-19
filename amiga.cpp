#include "amiga.h"
#include "ui_amiga.h"

amiga::amiga(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::amiga)
{
    ui->setupUi(this);
}

amiga::~amiga()
{
    delete ui;
}
