#include <iostream>
#include <vector>

bool binary_search( const std::vector<int>& vec, int x ) {
  const std::size_t sz = vec.size();

  std::size_t low = 0,
              high = sz - 1;

  while ( low <= high ) {
    const int avg = ( low + high ) / 2;

    std::cout << "Avg, value: " << avg << ", " << vec[avg] << std::endl;

    if ( x == vec[avg] ) {
      return true;
    }

    else if ( x > vec[avg] ) {
      low = avg + 1;
    }

    else if ( x < vec[avg] ) {
      high = avg - 1;
    }
  }

  return false;
}

auto main() -> int {
  const std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  int x;
  std::cin >> x;

  if ( binary_search( vec, x ) ) {
    std::cout << "Exists\n";
  }

  else {
    std::cout << "Doesn't exist\n";
  }
  return 0;
}
