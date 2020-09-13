#pragma once
#include <iostream>
#include <fstream>

void AutoTest();
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

class CDist {
    int x_, y_;
public:
    CDist() { x_ = 0; y_ = 0; }
    CDist(int x_, int y_);
    void SetDist(int x_, int y_);
    int X_()const;
    int Y_()const;
    CPoint operator+(const CPoint& d);
    void Print()const;
};
