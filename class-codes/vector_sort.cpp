#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;

class aluno {
    string nome;
    double cra;

public: 
   aluno(const string& n, double c) : nome(n), cra(c) {}

};

int main(void) {
    vector<aluno> turma;
    vector<int> numbers = {3, 5, 6, 2, 1, 4};

    sort(numbers.begin(), numbers.end());

    for (auto n : numbers) {
        cout << n << endl;
    }

    return 0;
}