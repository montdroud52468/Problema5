#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Fisica Basica");
    ui->resultado->setText("");
    ui->inf1->setText("");
    ui->inf2->setText("");
    ui->inf3->setText("");
    ui->inf4->setText("");
    ui->inf5->setText("");
    ui->inf6->setText("");
    ui->s->setText("");
    ui->label_9->setText("");
    ui->label_8->setText("");
    ui->label_7->setText("");
    ui->label_6->setText("");
    ui->label_5->setText("");
    ui->label_11->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_re_clicked()
{
   int t,f;
   t=((ui->pe->value()*9.81)-(ui->pe->value()*ui->ac->value()));
   f=(((0*ui->ac->value())+t)/2);

   ui->label_11->setText(QString::number(ui->pe->value()));

    ui->s->setText("El resultado es: ");
    ui->resultado->setText(QString::number(f)+" N");
}


void MainWindow::on_pushButton_clicked()
{
     int t,f;

    t=((ui->pe->value()*9.81)-(ui->pe->value()*ui->ac->value()));
    f=(((0*ui->ac->value())+t)/2);

    ui->label_9->setText("T=");
    ui->label_8->setText("T=");
    ui->label_7->setText("w-T=ma");
    ui->label_6->setText("ΣFy=0");
    ui->label_5->setText("Analizando el bloque tenemos la formula");
    ui->inf1->setText("("+QString::number(ui->pe->value())+" kg)(9.81 m/s^2)-("+QString::number(ui->pe->value())+" kg)("+QString::number(ui->ac->value())+" m/s^2)");
    ui->inf2->setText(QString::number(t)+" N");
    ui->inf3->setText("Analizando  a la polea obtendremos: ");
    ui->inf4->setText("2F-T=ma");
    ui->inf5->setText("2F=(0kg)("+QString::number(ui->ac->value())+" m/s^2)+"+QString::number(t));
    ui->inf6->setText("F="+QString::number(f)+" N");
}
