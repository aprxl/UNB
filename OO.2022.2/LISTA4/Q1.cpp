#include <iostream>
#include <string>
#include <limits>

class Pessoa {
public:
  Pessoa( ) = default;
  Pessoa(
    std::string id,
    std::string nome,
    std::string endereco
  ) : m_identidade{ id }, m_nome{ nome }, m_endereco{ endereco } { }

  void Input( ) {
    std::cout << "Digite o nome: ";
    std::cin >> m_nome;

    std::cout << "Digite a identidade (CPF): ";
    std::cin >> m_identidade;

    std::cout << "Digite o endereco: ";
    std::cin >> m_endereco;

    std::cin.clear();
  }

  void Output( ) const {
    std::cout << "O nome e: " << m_nome << std::endl;
    std::cout << "O CPF e: " << m_identidade << std::endl;
    std::cout << "O endereco e: " << m_endereco << std::endl;
  }

protected:
  std::string m_identidade;
  std::string m_nome;
  std::string m_endereco;
};

class Estudante : private Pessoa {
public:
  // Inherit the 'Pessoa' constructor.
  using Pessoa::Pessoa;

  Estudante( ) : Pessoa( ) { };
  Estudante(
    std::string id,
    std::string nome,
    std::string endereco,
    std::string matricula,
    std::string nota
  ) : Pessoa( id, nome, endereco ), 
      m_matricula{ matricula }, m_nota{ nota } { }

  void Input( ) {
    std::cout << "Digite o nome: ";
    std::cin >> m_nome;

    std::cout << "Digite a identidade (CPF): ";
    std::cin >> m_identidade;

    std::cout << "Digite o endereco: ";
    std::cin >> m_endereco;
   
    std::cout << "Digite a matricula do aluno: ";
    std::cin >> m_matricula;

    std::cout << "Digite a nota do aluno: ";
    std::cin >> m_nota;
  }

  void Output( ) const {
    std::cout << "O nome e: " << m_nome << std::endl;
    std::cout << "O CPF e: " << m_identidade << std::endl;
    std::cout << "O endereco e: " << m_endereco << std::endl;
    std::cout << "A matricula do aluno e: " << m_matricula << std::endl;
    std::cout << "A nota do aluno e: " << m_nota << std::endl;
  }

private:
  std::string m_matricula;
  std::string m_nota;
};

auto main() -> int {
  Pessoa p;

  p.Input( );
  p.Output( );

  Estudante e;

  e.Input( );
  e.Output( );
  return 0;
}
