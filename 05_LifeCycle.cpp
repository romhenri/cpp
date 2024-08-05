#include <iostream>

class ponto2d {
  int x;
  int y;

public:
  ponto2d(int xx, int yy) {
    x = xx;
    y = yy;
  };

  ponto2d() {
    x = 0;
    y = 0;
  };

  ~ponto2d() {
    std::cout << "Destruindo ponto2d";
    std::cout << std::endl;
  };

  void set_x(int xx) { x = xx; };
  void set_y(int yy) { y = yy; };

  int get_x() { return x; };
  int get_y() { return y; };

  void print_info() {
    std::cout << "(" << x ;
    std::cout << ", " << y << ")" << std::endl;
  }
};

int main() {
  ponto2d p1(1, 2);
  ponto2d p2;

  p1.print_info();
  p2.print_info();
}