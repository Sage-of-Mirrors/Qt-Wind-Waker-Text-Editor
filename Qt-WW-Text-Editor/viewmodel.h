#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include <QFileDialog>

#include "message.h"
#include "bmg.h"

class Viewmodel {
private:
    Bmg * m_LoadedBmg;
    Message * m_CurrentMessage;

    void LoadFromArc();
    void LoadFromBmg();
    void LoadFromBmc();
public:
    Viewmodel();
    ~Viewmodel();

    void LoadFile();

    void AddMessage();
};

#endif // VIEWMODEL_H
