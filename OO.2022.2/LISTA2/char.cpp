#include <iostream>

auto shape( char c, int x ) -> void {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      std::cout << c << ' ';
    }
    
    std::cout << std::endl;
  }
}

auto main( ) -> int {
  int x;
  char c;
  std::cin >> x >> c;
  
  shape( c, x );
  return 0;
}
