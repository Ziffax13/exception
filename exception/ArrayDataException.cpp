#include "ArrayDataException.h"

ArrayDataException::ArrayDataException(const char* mes, int r, int c) :Exception(mes), r(r), c(c)
{

}

const char* ArrayDataException::GetMessage() const
{
    return m_message;
}

int ArrayDataException::getRow()
{
    return r;
}

int ArrayDataException::getCol()
{
    return c;
}
