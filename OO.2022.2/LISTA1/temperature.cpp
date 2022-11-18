#include <iostream>
#include <iomanip>

enum : std::size_t {
  CELSIUS = 1,
  FAHRENHEIT 
};

static constexpr auto FAHRENHEIT_TO_CELCIUS = 5.f / 9.f;
static constexpr auto CELCIUS_TO_FAHRENHEIT = 9.f / 5.f;

auto main() -> int {
  std::int32_t o;
  float n;

  std::cout << "Press 1 to convert Fahrenheit to Celsius." << std::endl;
  std::cout << "Press 2 to convert Celsius to Fahrenheit." << std::endl;
  
  std::cin >> o;
  
  if ( o != CELSIUS && o != FAHRENHEIT ) {
    std::cout << "Invalid operation." << std::endl;
    return 1;
  }
  
  std::cout << "Specify the temperature in "
    << ( o == CELSIUS ? "Fahrenheit" : "Celsius" ) << std::endl;
  
  std::cin >> n;
  
  // Format the output.
  std::cout << std::setprecision( 1 ) << std::fixed;

  if ( o == CELSIUS ) {
    std::cout << ( n - 32.f ) * FAHRENHEIT_TO_CELCIUS << std::endl;
  }
  
  else {
    std::cout << ( n * CELCIUS_TO_FAHRENHEIT ) + 32.f << std::endl;
  }
  return 0;
}
