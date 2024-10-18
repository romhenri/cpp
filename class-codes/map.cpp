#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::map;
using std::string;

int main(void) {
    map<string, double> medias = {
        {"Alice", 9.5},
        {"Bob", 8.5},
        {"Joe", 7.5}
    };

    medias["Alice"] = 9.9;
    medias["Ana"] = 8.2;
    medias["Tony"] = 7.5;

    for (const auto& mediaPair : medias) {
        cout << mediaPair.first << ": " << mediaPair.second << endl;
    }

    return 0;
}

## algoritmos podem ser de:
- Ordenação
- Busca
- Tranformaçõo/Manipulção