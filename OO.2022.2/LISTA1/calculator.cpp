#include <iostream>
#include <array>
#include <utility>
#include <functional>

using operation_t = std::function<double(double, double)>;

static const std::array<std::pair<char, operation_t>, 4> OPERATIONS = {
  std::make_pair( '+', [](double x, double y) -> double { return x + y; } ),
  std::make_pair( '-', [](double x, double y) -> double { return x - y; } ),
  std::make_pair( '/', [](double x, double y) -> double { return x / y; } ),
  std::make_pair( '*', [](double x, double y) -> double { return x * y; } ),
};

auto process( ) -> void {
  double x, y, res = 0.f;
  char op;

  std::cin >> x >> op >> y;
  
  for( auto operation : OPERATIONS ) {
    if( operation.first == op ) {
      res += operation.second( x, y );
      break;
    }
  }
  
  std::cout << "Result: " << res << std::endl;
}

auto main() -> int {
  bool is_running = true;
  
  while( is_running ) {
    char c;
    process( );
    
    std::cout << "Do you wish to make another operation? (Y/N)" << std::endl;
    std::cin >> c;
    
    is_running = c == 'Y' || c == 'y';
  }

  return 0;
}
