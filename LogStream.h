#pragma once

#include "StringPiece.h"

template<int SIZE>
class LogBuffer
{
public:
    LogBuffer() : size_(SIZE) {}
    LogBuffer();

    ~LogBuffer();

private:
    StringPeice str_;
};

template<typename T>
class LogStream
{
public:
    LogStream();
    


private:

};