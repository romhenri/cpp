#include <iostream>
#include <iomanip>
using namespace std;

float makeSpecialAverage(float n1, float n2, float n3, float n4) {
    float sum = (n1*2) + (n2*3) + (n3*4) + (n4*1);
    float divisor = 2 + 3 + 4 + 1;
    
    float result = sum / divisor;
    return result;
};

float makeSimpleAverage (float n1, float n2) {
    float sum = n1 + n2;
    
    float result = sum / 2;
    return result;
}

int main() {
    float n1, n2, n3, n4, result;
    
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    
    result = makeSpecialAverage(n1, n2, n3, n4);
    
    cout << "Media: " << fixed << setprecision(1) << result << endl;
    
    if (result >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (result < 5.0){
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        
        float exam;
        cin >> exam;
        
        cout << "Nota do exame: " << fixed << setprecision(1) << exam << endl;
        
        float new_result = makeSimpleAverage(result, exam);
        
        if (new_result >= 5) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        
        cout << "Media final: " << fixed << setprecision(1) << new_result << endl;
    }
 
    return 0;
}