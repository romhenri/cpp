#include <iostream>
#include <string>

using namespace std;

int main() {
    string e1, e2, e3;
    
    cin >> e1;
    cin >> e2;
    cin >> e3;
 
    if (e1 == "vertebrado") {
        
        if (e2 == "ave") {
            
            if (e3 == "carnivoro") {
                cout << "aguia" << endl;
            } else
            if (e3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } else 
        if (e2 == "mamifero") {
            
            if (e3 == "onivoro") {
                cout << "homem" << endl;
            } else 
            if (e3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
        
    } else
    if (e1 == "invertebrado") {
        
        if (e2 == "inseto") {
            if (e3 == "hematofago") {
                cout << "pulga" << endl;
            } else
            if (e3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else 
        if (e2 == "anelideo") {
            
            if (e3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else 
            if (e3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }
 
    return 0;
}