#include <iostream>

#include "Polygon/Triangle/Triangle.h"

int main() {
    Triangle triangle(Dot(0,0), Dot(0,3), Dot(4,0));

    std::cout << "Perimeter of given triangle must be 12 = 3 + 4 + 5" << std::endl;
    std::cout << triangle.perimeter() << std::endl;
    std::cout << (triangle.perimeter() != 12 ? "No, it's not" : "Yes, correct!" ) << std::endl;

    Dot dots[4];

    dots[0] = Dot(0,0);
    dots[1] = Dot(1,0);
    dots[2] = Dot(1,1);
    dots[3] = Dot(0,1);

    Polygon polygon(dots, 4);
    std::cout << "Perimeter of given polygon must be 4" << std::endl;
    std::cout << polygon.perimeter() << std::endl;
    std::cout << (polygon.perimeter() != 4 ? "No, it's not" : "Yes, correct!" ) << std::endl;

    return 0;
}
