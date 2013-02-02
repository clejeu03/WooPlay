#include <QtWidgets/QApplication>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "Player.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VideoCapture * capture = new VideoCapture("/home/cecilia/Vidéos/bunny.mp4");
    Player *player = new Player(capture);

    player->show();

    /*Setting CSS file*/
    QFile file("../player/playerStyleSheet.css");
    file.open(QFile::ReadOnly);
    QString playerStyleSheet = QLatin1String(file.readAll());
    player->setStyleSheet(playerStyleSheet);

    return app.exec();
}
