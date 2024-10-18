#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::set;

int main(void) {
    set<int> numbers = {4, 2, 0, 3, 1, 5};

    numbers.insert(4);
    numbers.insert(5);
    numbers.insert(6);
    numbers.insert(7);

    numbers.erase(0);
    numbers.erase(7);

    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
