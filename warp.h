#pragma once
#include <QString>

class Warp{

private:
    QString callWarp(QString cmd);

public:
    Warp();
    bool checkStatus();

    enum Cmd{
    };

};
