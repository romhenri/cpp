#include <iostream>

class vetor {
  int *items;
  int qtd;

public:
  vetor(int q) {
    qtd = q;
    items = (int *)malloc(qtd * sizeof(int));
    std::cout << "vetor(" << qtd << ")" << std::endl;
  }

  ~vetor() {
    free(items);
    std::cout << "~vetor(" << qtd << ")" << std::endl;
  }

  int get_item(int index) {
    if (index < qtd) {
      return items[index];
    } else {
      return -1;
    }
  }

  void set_item(int index, int value) {
    if (index < qtd) {
      items[index] = value;
    } else {
      std::cout << "ERROR: index out of bounds" << std::endl;
    }
  }
};

int main() {
  vetor v(10);

  v.set_item(0, 1000);
  v.set_item(1, 100);

  std::cout << v.get_item(0) << std::endl;
}