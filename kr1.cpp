#include "CPoint.h"
#include "CDist.h"


int main() {
    std::ifstream inp("data.txt");
    if (!inp.is_open()) {
        std::cout << "Error! Cannot open\n";
        return 1;
    }
    AutoTest();
    int a,b;
    inp >> a;
    inp >> b;
    CPoint p1(a, b);
    inp >> a;
    inp >> b;
    CDist d1(a, b);
    CPoint point1 = p1+d1;
    std::cout << "Point+Dist:\n";
    point1.Print();

    inp >> a;
    inp >> b;
    CDist d2(a, b);
    inp >> a;
    inp >> b;
    CPoint p2(a, b);
    CPoint point2 = d2+p2;
    std::cout << "Dist+Point:\n";
    point2.Print();

    inp >> a;
    inp >> b;
    CPoint p3(a, b);
    inp >> a;
    inp >> b;
    CPoint p4(a, b);
    CDist dist= p3-p4;
    std::cout << "Point-Point:\n";
    dist.Print();

    return 0;
}
