#include "option.h"
#include "ui_option.h"

Option::Option(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Option)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Luigi");
    ui->comboBox->addItem("Mario");
    ui->comboBox->addItem("Wario");
    ui->comboBox->addItem("Waluigi");
    ui->comboBox_2->addItem("Classique");
    ui->comboBox_2->addItem("Variant");
    ui->comboBox_2->addItem("Variant2");

}

Option::~Option()
{
    delete ui;
}


void Option::on_buttonBox_accepted()
{

    QString choix = ui->comboBox->currentText();
    QString choix2 = ui->comboBox_2->currentText();
    if(choix=="Luigi"){perso=0;}
    if(choix=="Mario"){perso=1;}
    if(choix=="Wario"){perso=2;}
    if(choix=="Waluigi"){perso=3;}
    if(choix2=="Classique"){deco=0;}
    if(choix2=="Variant"){deco=1;}
    if(choix2=="Variant2"){deco=2;}

}

int Option:: getPerso(){
    return perso;
}
int Option:: getDeco(){
    return deco;
}

