#include <iostream>
#include <string>

class TV {
public:
  TV( const std::string& brand, const std::string& model, float price ) 
    : m_brand{ brand }, m_model{ model }, m_price{ price } { }

  void Print( ) const {
    std::cout << "The TV's brand is: " << m_brand << std::endl;
    std::cout << "The TV's model is: " << m_model << std::endl;
    std::cout << "And, the TV's price is: " << m_price << std::endl;
  }

  void SetBrand( const string& newBrand ) {
    m_brand = newBrand;
  }

  void SetModel( const string& newModel ) {
    m_model = newModel;
  }

  void SetPrice( float newPrice ) {
    m_price = newPrice;
  }

private:
  std::string m_brand;
  std::string m_model;
  float price;
};

auto main( ) -> int {
  TV* tv = new TV( "", "", 0.f );

  tv->SetBrand("LG");
  tv->SetModel("Smart TV OLED 60\" 4K UHD");
  tv->SetPrice(1999.99f);

  tv->Print();
  return 0;
}
