#pragma once
#include "Exception.h"

class ArrayDataException : public Exception
{
    int r, c;
public:
    ArrayDataException(const char* mes, int r, int c);
    virtual const char* GetMessage() const;
    int getRow();
    int getCol();
};
