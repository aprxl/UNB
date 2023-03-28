#include <iostream>

class A {
public:
  A( ) = default;
  A( int x ) : x{ x } { }

  void Input( ) {
    std::cout << "First number: ";
    std::cin >> x;
  }

  void Output( ) const {
    std::cout << "The first number is: " << x << std::endl;
  }

protected:
  int x;
};

class B {
public:
  B( ) = default;
  B( int y ) : y{ y } { }

  void Input( ) {
    std::cout << "Second number: ";
    std::cin >> y;
  }

  void Output( ) const {
    std::cout << "The second number is: " << y << std::endl;
  }

protected:
  int y;
};

class C : private A, private B {
public:
  using A::A, B::B;

  C( ) : A( ), B( ) { }
  C( int x, int y, int z ) : A( x ), B( y ), z{ z } { }

  void Input( ) {
    std::cout << "Third number: ";
    std::cin >> z;
  }

  void Output( ) const {
    // Call output functions from within the inherited
    // classes.
    A::Output( );
    B::Output( );

    std::cout << "The third number is: " << z << std::endl;

    std::cout << "And the sum is: " << x + y + z << std::endl;
  }

private:
  int z;
};

auto main() -> int {
  C c( 1, 2, 3 );

  c.Output( );
  return 0;
}
