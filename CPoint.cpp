#include "CPoint.h"
#include "CDist.h"

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







