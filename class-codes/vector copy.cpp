#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(void) {
    vector<int> numbers = {1,2,3,4,5};

    numbers.push_back(6);
    numbers.push_back(7);

    numbers.pop_back();

    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    
    int signed size = numbers.size();
    for (int i = 0; i < size; i++) {
        numbers[i] *= 10;
        cout << numbers[i] << " ";
    }
    cout << endl;

    for (
        vector<int>::iterator it = numbers.begin();
        it != numbers.end();
        it++
    ) {
        *it *= 10;
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
