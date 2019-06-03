#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_open_webcam_clicked();

    void on_pushButton_close_webcam_clicked();

    void update_window();

private:
    Ui::MainWindow *ui;

    QTimer *timer;
    cv::VideoCapture cap;

    cv::Mat frame;
    QImage qt_image;
};

#endif // MAINWINDOW_H
