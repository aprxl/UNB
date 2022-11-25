#include <iostream>

auto show_last_and_next( int x ) -> void {
  std::cout << x - 1 << ", " << x + 1 << std::endl;
}

auto main( ) -> int {
  int x;
  std::cin >> x;
  
  show_last_and_next( x );
  return 0;
}
