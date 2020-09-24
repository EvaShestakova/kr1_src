#include "CPoint.h"
#include "CDist.h"

void AutoTest() {
	CPoint p;
	CDist d;
	CPoint point = p + d;
	if (point.X() == 0 && point.Y() == 0) { printf("Autotest passed\n"); } else{ printf("Autotest failed\n"); }
}