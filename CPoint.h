#pragma once
#include <iostream>
#include <fstream>

class CDist;

class CPoint {
    int x, y;
public:
    CPoint() { x = 0; y = 0; }
    CPoint(int x, int y);
    void SetPoint(int x, int y);  
    int X()const;
    int Y()const;
    CPoint operator+(const CDist& d);
    CDist operator-(const CPoint& sp);
    void Print()const;
};