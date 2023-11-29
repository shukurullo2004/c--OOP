#include <iostream>
#include <cmath>
//  shapeni ichida yoziladi va :: bn chaqiriladi
namespace shape {
    double rec_area(double width, double length) {
        if (width <= 0 || length <= 0) {
            return 0;
        }
        return width * length;
    }

    double tri_area(double base, double height) {
        if (base <= 0 || height <= 0) {
            return 0; 
        }
        return 0.5 * base * height;
    }

    double circle_area(double radius) {
        if (radius <= 0) {
            return 0;
        }
        return M_PI * radius * radius;
    }
}

int main() {
    // foydalanish kk shu yerda
    using namespace std;

    cout << "Area of Rectangle (W:20, L:10): " << shape::rec_area(20, 10) << endl;
    cout << "Area of Triangle (b:20, h:10): " << shape::tri_area(20, 10) << endl;
    cout << "Area of Circle (r:20): " << shape::circle_area(20) << endl;
    return 0;
}
