// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.
#include <string>
std::string reverse_string(const std::string &str) {
    std::string reversed;
    // Write your code below this line 
    const char* start = str.c_str();
    const char* end = str.c_str() + str.size() - 1;   
    while (end >= start) {
        reversed.push_back(*end);
        end--;
    }    
    // Write your code abocve this line
    return reversed;
}