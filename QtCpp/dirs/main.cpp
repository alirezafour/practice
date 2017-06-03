#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir mDir("../dirs");
    QDir sDir("test");
    qDebug() << mDir.exists();
    qDebug() << sDir.exists();
    qDebug() << "\n";
    //--------------------------

    QDir dDirves;
    foreach (QFileInfo nItm, dDirves.drives())
    {
        qDebug() << nItm.absoluteFilePath();
    }
    qDebug() << "\n";
    //--------------------------

    QDir creatDir;
    QString mPath = "./new";
    if(!creatDir.exists(mPath))
    {
        creatDir.mkpath(mPath);
        qDebug() << "Created!";
    } else
    {
        qDebug() << "Already exists";
    }
    qDebug() << "\n";
    //--------------------------

    QDir entDir("..");
    foreach (QFileInfo mitm, entDir.entryInfoList()) {
        // qDebug() << mitm.absoluteFilePath();
        if (mitm.isDir()) {
            qDebug() << "Dir: " << mitm.absoluteFilePath();
        }
        if (mitm.isFile()) {
            qDebug() << "File: " << mitm.absoluteFilePath();
        }
    }
    return a.exec();
}
