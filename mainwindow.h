#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <QGraphicsRectItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QMediaPlayer music;
    QMediaPlaylist playlist;
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
