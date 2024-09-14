#include <iostream>

class ponto2d {
  int x;
  int y;

public:
  ponto2d(int xx, int yy) {
    x = xx;
    y = yy;
    print_new();
  };

  ponto2d() {
    x = 0;
    y = 0;
    print_new();
  };

  ~ponto2d() { print_del(); };

  void set_x(int xx) { x = xx; };
  void set_y(int yy) { y = yy; };

  int get_x() { return x; };
  int get_y() { return y; };

  std::string get_info() {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
  };

  void print_del() { std::cout << "DEL " << get_info() << std::endl; }
  void print_new() { std::cout << "NEW " << get_info() << std::endl; };

  void print_info() { std::cout << get_info() << std::endl; };
};

int main() {
  ponto2d p1(1, 2);
  ponto2d p2;

  p1.print_info();
  p2.print_info();
}
