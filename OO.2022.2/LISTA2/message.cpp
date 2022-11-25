#include <iostream>
#include <string>

auto echo( const std::string& msg ) -> void {
  std::cout << msg << std::endl;
}

auto main( ) -> int {
  echo( "Programar torna a vida interessante" );
  return 0;
}
