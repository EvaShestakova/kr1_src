#include "Header.h"


int CPoint::X()const {
    return x;
}
int CPoint::Y()const {
    return y;
}
void CPoint::SetPoint(int x, int y) {
    this->x = x;
    this->y = y;
}
CPoint::CPoint(int x, int y) {
    SetPoint(x, y);
}
CPoint CPoint::operator+(const CDist& d) {
    CPoint p(x + d.X_(), y + d.Y_());
    return p;
}
CDist CPoint::operator-(const CPoint& sp) {
    CDist d(x - sp.X(), y - sp.Y());
    return d;
}
void CPoint::Print()const {
    printf("(%d, %d)\n", x, y);
}





int CDist::X_()const {
    return x_;
}
int CDist::Y_()const {
    return y_;
}
void CDist::SetDist(int x_, int y_) {
    this->x_ = x_;
    this->y_ = y_;
}
CDist::CDist(int x_, int y_) {
    SetDist(x_, y_);
}
CPoint CDist::operator+(const CPoint& d) {
    CPoint p(x_ + d.X(), y_ + d.Y());
    return p;
}
void CDist::Print()const {
    printf("(%d, %d)\n", x_, y_);
}

