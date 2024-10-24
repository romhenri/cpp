#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;

using std::exception; // Exceptions Base Class
using std::runtime_error; // Subclass of Exception

int main() {
    try {
        int age = 15;
        if (age < 18) {
            throw runtime_error("Minimum age is 18 years!");
        }
        cout << "Age allowed for entry.\n";
    } 
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
