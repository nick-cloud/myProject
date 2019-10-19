#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlaylist>
#include <QMediaPlayer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist.addMedia(QUrl("qrc:/sound/Intro.mp3"));
    playlist.setPlaybackMode(QMediaPlaylist::Loop);

   // QMediaPlayer *music = new QMediaPlayer();
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
    QGraphicsScene *Scene = new QGraphicsScene;
    QGraphicsRectItem *Rect = new QGraphicsRectItem;
    Rect -> setRect(0,0,100,100);
    Scene -> addItem(Rect);
    Scene -> setSceneRect(0,0,1280,800);

    QGraphicsView *View = new QGraphicsView(Scene);

    View ->show();
}

void MainWindow::on_exitButton_clicked()
{
    this->window()->close();
}
