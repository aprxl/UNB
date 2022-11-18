#include <iostream>

auto main() -> int {
  char c;
  std::cin >> c;
  
  const auto is_vowel = [](char c) { 
    return c == 'a'
        || c == 'e'
        || c == 'i'
        || c == 'o'
        || c == 'u';
  };
  
  std::cout << is_vowel(c) << std::endl;
  return 0;
}
