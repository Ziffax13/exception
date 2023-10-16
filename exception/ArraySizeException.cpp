#include "ArraySizeException.h"
ArraySizeException::ArraySizeException(const char* mes) :Exception(mes)
{
}

const char* ArraySizeException::GetMessage() const
{
    return m_message;
}

