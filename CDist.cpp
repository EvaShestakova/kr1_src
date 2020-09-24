#include "CDist.h"
#include "CPoint.h"

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