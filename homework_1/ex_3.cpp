#include <iostream>

void cout_int(int num, int base = 10) {
    if (base == 10) {
        std::cout << "Decimal " << num << std::endl;
    } else if (base == 8) {
        std::cout << "Octal " << std::oct << num << std::endl;
    } else if (base == 16) {
        std::cout << "Hexadecimal " << std::hex << num << std::endl;
    } else {
        std::cout << "ERROR: unknown base" << std::endl;
    }
}

int main() {
    cout_int(100);      
    cout_int(100, 8);  
    cout_int(100, 10);
    cout_int(100, 16);   
    cout_int(100, 20);   
    return 0;
}
