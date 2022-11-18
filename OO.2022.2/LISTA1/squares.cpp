#include <iostream>

auto main() -> int {
  std::int32_t x;
  std::uint64_t res{0};

  std::cin >> x;
  
  for (int i = 1; i <= x; ++i)
    res += i * i;
  
  std::cout << res << std::endl;
  return 0;
}
