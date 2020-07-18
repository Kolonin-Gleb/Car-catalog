#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>



MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Car catalog");


    // Установка значков марок машин для списка

  QListWidgetItem *HammerLabel = new QListWidgetItem(QIcon(":/Cars/Cars/HummerLabel.png"), "Hammer");
  ui->listWidget->addItem(HammerLabel);

  QListWidgetItem *TeslaLabel = new QListWidgetItem(QIcon(":/Cars/Cars/TeslaLabel.png"), "Tesla");
  ui->listWidget->addItem(TeslaLabel);

  QListWidgetItem *VolvoLabel = new QListWidgetItem(QIcon(":/Cars/Cars/VolvoLabel.png"), "Volvo");
  ui->listWidget->addItem(VolvoLabel);

  QListWidgetItem *MitsubishiLabel = new QListWidgetItem(QIcon(":/Cars/Cars/MitsubishiLabel.png"), "Mitsubishi");
  ui->listWidget->addItem(MitsubishiLabel);


}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->statusbar->showMessage(ui->listWidget->currentItem()->text());

    // Подгон размера изображения под размер поля Label
    int imageWidth = ui->label->width();
    int imageHeight = ui->label->height();

    if (ui->statusbar->currentMessage() == "Hammer")
      {
        QPixmap way(":/Cars/Cars/Hammer.jpg");

        ui->label->setPixmap(way.scaled(imageWidth, imageHeight, Qt::KeepAspectRatio));
      }

    else if (ui->statusbar->currentMessage() == "Tesla")
      {
        QPixmap way(":/Cars/Cars/Tesla.jpg");

        ui->label->setPixmap(way.scaled(imageWidth, imageHeight, Qt::KeepAspectRatio));
      }

    else if (ui->statusbar->currentMessage() == "Volvo")
      {
        QPixmap way(":/Cars/Cars/Volvo.jpg");

        ui->label->setPixmap(way.scaled(imageWidth, imageHeight, Qt::KeepAspectRatio));
      }

    else if (ui->statusbar->currentMessage() == "Mitsubishi")
      {
        QPixmap way(":/Cars/Cars/Mitsubishi.jpg");

        ui->label->setPixmap(way.scaled(imageWidth, imageHeight, Qt::KeepAspectRatio));
      }
}
