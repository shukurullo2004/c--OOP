#include <iostream>

void sort3(double&, double&, double&, bool(*)(double&, double&));
void print3(const double&, const double&, const double&);
void swap2(double&, double&);
bool ascending(double&, double&);
bool descending(double&, double&);

int main() {
    double na1 = 10.3, na2 = -2.1, na3 = 8.0;
    double nd1 = 10.3, nd2 = -2.1, nd3 = 8.0;

    std::cout << "Before sort:" << std::endl;
    print3(na1, na2, na3);

    sort3(na1, na2, na3, ascending);
    sort3(nd1, nd2, nd3, descending);

    std::cout << "After sort (ascending):" << std::endl;
    print3(na1, na2, na3);

    std::cout << "After sort (descending):" << std::endl;
    print3(nd1, nd2, nd3);

    return 0;
}
