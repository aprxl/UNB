#include <iostream>
#include <cmath>

auto main() -> int {
  std::int32_t x;
  std::cin >> x;
  
  // We don't need x's sign.
  x = std::abs( x );
  
  // Number of digits of 'x'
  std::uint32_t n = std::log10( x ) + 1;
  
  std::int32_t lowest = 9, highest = 0;
  for ( std::size_t i = 0; i < n; ++i )  {
    std::int32_t cur = x % 10;
    
    if ( cur < lowest )
      lowest = cur;
    
    if ( cur > highest )
      highest = cur;
    
    x /= 10;
  }
  
  std::cout << lowest << ", " << highest << std::endl;
  return 0;
}
