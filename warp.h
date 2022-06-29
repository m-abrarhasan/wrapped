#pragma once
#include <QString>
#include <QVector>

class Warp{

private:
    QString callWarp(QString cmd);
    const static QVector<QString> cmd_strings;

public:
    Warp();
    bool checkStatus();

    enum class Commands;

};
