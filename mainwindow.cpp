#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QImage>
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Apply new color over old color
void MainWindow::on_applyButton_clicked()
{
    //RGB values to be replaced
    int r_old = (ui->ReplaceR->toPlainText()).toInt();
    int g_old = (ui->ReplaceG->toPlainText()).toInt();
    int b_old = (ui->ReplaceB->toPlainText()).toInt();
    //RGB values of replacement color
    int r_new = (ui->NewR->toPlainText()).toInt();
    int g_new = (ui->NewG->toPlainText()).toInt();
    int b_new = (ui->NewB->toPlainText()).toInt();
    //Debug (prints RGB values to be replaced)
    std::cout << "Should be " << r_old << " " << g_old << " " << b_old << "\n";
    QColor old_color = QColor::fromRgb(r_old,g_old,b_old); //Color to look for
    QColor new_color = QColor::fromRgb(r_new,g_new,b_new); //Color to replace with
    //Gets the pixmap of the preview image label
    QPixmap Image = ui->label_image->pixmap();
    //Converts the pixmap to an image to be processed
    QImage ConvertingImage = Image.toImage();
    int width = Image.width();
    int height = Image.height();
    //Scans each pixel of the image, gets its color, if it matches old_color it is replaced.
    for(int x = 0; x < width; x++){
        for(int y = 0; y < height; y++){
            QColor pixel_color = QColor::fromRgba(ConvertingImage.pixel(x,y));
            if(pixel_color == old_color){
                //std::cout << "Found matching color \n";
                ConvertingImage.setPixelColor(x,y,new_color);
            }
        }
    }
    ui->label_image->setPixmap(QPixmap::fromImage(ConvertingImage));
    //ConvertingImage.save("testthisout.png","png",100);
}


//User file input
void MainWindow::on_actionOpen_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "file://", tr("Image Files (*.png *.jpg *.bmp)"));
    QImage newImage;
    newImage.load(fileName);
    ui->label_image->setPixmap(QPixmap::fromImage(newImage));
}

//User file output
void MainWindow::on_actionSave_triggered()
{
    QPixmap Image = ui->label_image->pixmap();
    QImage ConvertingImage = Image.toImage();
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Image"),"untitled.png",tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty()){
            qDebug() << "Saving to file:" << fileName;
        ConvertingImage.save(fileName);
        }
}

