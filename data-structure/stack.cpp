#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::stack;

int main(void) {
    stack<int> numbers;

    for (int i = 1; i <= 5; ++i) {
        numbers.push(i);
    }

    numbers.push(6);
    numbers.push(7);

    numbers.pop();

    stack<int> tempStack = numbers;

    // Por ser uma pilha, a iteração é pelo topo kk
    cout << "Stack contents: ";
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    return 0;
}
