#pragma once
#include <iostream>
#include <fstream>

void AutoTest();
class CPoint;

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