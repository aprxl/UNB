#include <iostream>

auto factor_table( int x, int y ) -> void {
  for (int i = 1; i <= y; ++i) {
    std::cout << x << " * " << i << " = " << x * i << std::endl;
  }
}

auto main( ) -> int {
  int x;
  std::cin >> x;
  
  factor_table( x, 10 );
  return 0;
}
