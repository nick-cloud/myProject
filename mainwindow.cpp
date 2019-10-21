#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlaylist>
#include <QMediaPlayer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    playlist.addMedia(QUrl("qrc:/sound/Intro.mp3"));
    playlist.setPlaybackMode(QMediaPlaylist::Loop);

    music.setPlaylist(&playlist);
    music.play();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this -> close();
    music.stop();
    game *maingame = new game;
}

void MainWindow::on_exitButton_clicked()
{
    this->window()->close();
}
