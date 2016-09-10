#include "MainWindow.h"
#include "PlatformConfig.h"
#include "QVideoWidget.h"
#include <QApplication>
#include <QTextCodec>
#include <QTranslator>


class QLoadSkin
{
public:
    static void setStyle(const QString &style)
    {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

#ifdef Q_OS_WIN32
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));
#endif
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));

    // make it internationalization
    QTranslator translator;
    translator.load(QString(":/cfg/director_zh"));
    app.installTranslator(&translator);

   // MainWindow w;
   // w.setWindowTitle(MainWindow::tr("DirectorPlatform"));




#if 1




#endif









    QVideoWidget w;






    w.show();

    return app.exec();




    return 0;
}
