#include <iostream>
#include <string>
#include <array>
#include <limits>

class Result {
public:
  Result(
      std::int64_t studentId = 0,
      const std::string& studentName = "Student",
      const std::array<int, 3>& studentGrades = { 0, 0, 0 }
  ) : m_studentID{ studentId }, m_studentName{ studentName }, m_studentGrades{ studentGrades } { }

  void Input( ) {
    std::string studentName;
    std::int64_t studentId;
    std::int32_t gradeA, gradeB, gradeC;

    std::cout << "Please, specify the student's registration ID\n";
    std::cin >> studentId;

    std::cout << "And now the student's name\n";
    std::cin >> studentName;

    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    std::cout << "And, lastly, their grades (A, B and C)\n";
    std::cin >> gradeA >> gradeB >> gradeC;
  
    m_studentID = studentId;
    m_studentName = studentName;
    m_studentGrades = { gradeA, gradeB, gradeC };
  }

  void Output( ) const {
    std::cout << "The student's registration ID is " << m_studentID << std::endl;
    std::cout << "The student's name is " << m_studentName << std::endl;
    std::cout << "The student's grades are: " << std::endl;
      std::cout << "Grade A: " << m_studentGrades[0] << std::endl;
      std::cout << "Grade B: " << m_studentGrades[1] << std::endl;
      std::cout << "Grade C: " << m_studentGrades[2] << std::endl;
  }

  int GetTotalGrades( ) const {
    return (float)(m_studentGrades[0] + m_studentGrades[1] + m_studentGrades[2]);
  }

  float GetAverageGrade( ) const {
    return static_cast<float>(GetTotalGrades( )) / m_studentGrades.size();
  }

private:
    std::int64_t m_studentID;
    std::string m_studentName;
    std::array<int, 3> m_studentGrades;
};

auto main( ) -> int {
  Result* res = new Result( );

  res->Input();
  res->Output();

  std::cout << "The student's total grades are: " << res->GetTotalGrades( ) << std::endl;
  std::cout << "The student's avg. grade is: " << res->GetAverageGrade( ) << std::endl;
  return 0;
}
