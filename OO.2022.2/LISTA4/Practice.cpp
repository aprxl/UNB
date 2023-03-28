#include <iostream>
#include <cmath>

/// The class wasn't over yet so I figured I'd mess around with inheritance some
/// more.

template<typename A>
constexpr A min(A x, A y) {
  return ( x < y ) ? x : y;
}

template<typename A>
constexpr A max(A x, A y) {
  return ( x > y ) ? x : y;
}

constexpr double pi( ) {
  return std::asin(1.f) * 2;
}

// An interface that represents a regular 2D shape.
class Shape {
public:
  virtual float area( );
  virtual float x( );
  virtual float y( );

public:
  float m_x, m_y;
};

// Another interface that inherits Shape and allows
// for a width and height values to be known.
class LengthedShape : public Shape {
public:
  virtual float w( );
  virtual float h( );

public:
  float m_x2, m_y2;
};

// Another interface that inherits Shape and allows
// for a radius value to be known.
class RadialShape : public Shape {
public:
  virtual float r( );

public:
  float m_r;
};

class Square : LengthedShape {
public:
  Square( ) = default;
  Square(
    float x = 0,
    float y = 0,
    float x2 = 0,
    float y2 = 0
  ) : m_x{ x }, m_y{ y }, m_x2{ x2 }, m_y2{ y2 } {
    // Checking if the shape is in fact a square.
    if ( x2 - x != y2 - y ) {
      const auto delta = min( x2 - x, y2 - y );

      // Trim the shape to be a perfect square.
      if ( x2 - x < y2 - y ) {
        y2 -= delta;
      }

      else {
        x2 -= delta;
      }
    }

  }

  float area( ) override {
    return this->w( ) * this->h( );
  }

  float x( ) override {
    return m_x;
  }

  float y( ) override {
    return m_y;
  }

  float w( ) override {
    return m_x2 - m_x;
  }

  float h( ) override {
    return m_y2 - m_y;
  }
};

class Ellipse : RadialShape {
public:
  Ellipse( ) = default;
  Ellipse(
    float x = 0,
    float y = 0,
    float r1 = 0,
    float r2 = 0
  ) : m_x{ x }, m_y{ y }, m_r{ r1 }, m_r2{ r2 } { }

  float area( ) override {
    return pi( ) * m_r * m_r2;
  }

  float x( ) override {
    return m_x;
  }

  float y( ) override {
    return m_y;
  }

  float r( ) override {
    return m_r;
  }

  float r2( ) {
    return m_r2;
  }

private:
  float m_r2;
};

auto main( ) -> int {
  Square sq( 2, 3, 5, 5 );
  Ellipse el( 2, 1, 3, 4 );

  std::printf("Square:\nx: %f, y: %f\nw: %f, h: %f\narea: %f",
      sq.x( ), sq.y( ), sq.w( ), sq.h( ), sq.area( ));
  std::printf("Ellipse:\nx: %f, y: %f\nr1: %f, r2: %f\narea: %f",
      el.x( ), el.y( ), el.r( ), el.r2( ), el.area( ));


  return 0;
}
