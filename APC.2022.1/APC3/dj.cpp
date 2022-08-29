#include <iostream>

typedef std::int32_t i32;

auto main( ) -> int {
  i32 n;

  std::cin >> n;

  for ( i32 i = 0; i < n; i++ ) {
    const bool even = i % 2 == 0;

    if ( even ) {
      std::cout << "THUMS THUMS THUMS THUMS THUMS THUMS" << std::endl;
    } 

    else {
      std::cout << "THUMS THUMS THUMS" << std::endl;
    }
  }

  std::cin.ignore();
  std::cin.get();
  return 0u;
}
