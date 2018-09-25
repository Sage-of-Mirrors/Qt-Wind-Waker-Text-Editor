#ifndef BMG_H
#define BMG_H

#include "array.h"
#include "message.h"
#include "bstream.h"

class Bmg {
private:
    CArrayT<Message *> m_Messages;
public:
    Bmg();
    ~Bmg();

    void ReadBmgFile(bStream::CMemoryStream reader);
    void WriteBmgFile(bStream::CMemoryStream writer);

    Message * GetMessage(size_t index);
};

#endif // BMG_H
