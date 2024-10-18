#include <iostream>
#include <deque>

using std::cout;
using std::endl;
using std::deque;

int main(void) {
    deque<int> numbers = {0};

    numbers.push_front(-1);
    numbers.push_front(-2);
    numbers.push_front(-3);
    numbers.push_front(-4);

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    numbers.pop_back();
    numbers.pop_front();

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
    /*
    
    for (
        vector<int>::iterator it = numbers.begin();
        it != numbers.end();
        it++
    ) {
        *it *= 10;
        cout << *it << " ";
    }
    cout << endl;
    */
    return 0;
}
