#ifndef MESSAGE_H
#define MESSAGE_H

#include <QtGlobal>
#include "box_enums.h"
#include "item_enum.h"

class Message {
private:
    quint16 mMessageId;
    quint16 mItemPrice;
    quint16 mNextMessageId;
    quint16 mUnknown1;

    BoxType mType;
    DrawStyle mStyle;
    BoxPosition mPosition;

    Item mItem;
    quint8 mUnknown2;

    quint8 mStartSound;
    quint8 mStartCamera;
    quint8 mStartAnim;

    quint8 mUnknown3;

    quint16 mLineCount;

    quint8 mUnknown4;

    // IDK what these do

};

#endif // MESSAGE_H
