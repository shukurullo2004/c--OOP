#include <iostream>

// Function prototypes
void sort3(double& a, double& b, double& c, bool (*compare)(double&, double&));
void print3(const double& a, const double& b, const double& c);
void swap2(double& a, double& b);
bool ascending(double& a, double& b);
bool descending(double& a, double& b);


int main() {
    double na1 = 10.3, na2 = -2.1, na3 = 8.0;
    double nd1 = 10.3, nd2 = -2.1, nd3 = 8.0;

    std::cout << "Before sort: ";
    print3(na1, na2, na3);

    sort3(na1, na2, na3, ascending);
    sort3(nd1, nd2, nd3, descending);

    std::cout << "After sort (ascending): ";
    print3(na1, na2, na3);

    std::cout << "After sort (descending): ";
    print3(nd1, nd2, nd3);

    return 0;
}

// Sort three numbers using the specified comparison function
void sort3(double& a, double& b, double& c, bool (*compare)(double&, double&)) {
    if (compare(a, b)) {
        swap2(a, b);
    }
    if (compare(b, c)) {
        swap2(b, c);
    }
    if (compare(a, b)) {
        swap2(a, b);
    }
}

// Print three numbers
void print3(const double& a, const double& b, const double& c) {
    std::cout << a << " " << b << " " << c << std::endl;
}

// Swap two numbers
void swap2(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

// Comparison function for ascending order
bool ascending(double& a, double& b) {
    return a > b;
}

// Comparison function for descending order
bool descending(double& a, double& b) {
    return a < b;
}
