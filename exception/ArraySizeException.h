#pragma once
#include "Exception.h"

class ArraySizeException : public Exception
{
public:
    ArraySizeException(const char* mes);
    virtual const char* GetMessage() const;
};
