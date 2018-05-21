#include <exception>
#include <string>

class Question {
public:
  Question(std::string question, std::string answer="");
  void AssertCompliance() const;
private:
  const std::string answer;
};

struct UnansweredQuestion : public std::exception {
  const char *what() const throw();
};
