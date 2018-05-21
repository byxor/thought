#include <exception>
#include <string>

class Answer {
public:
  Answer(const std::string content);
  void AssertCompliant() const;
private:
  const std::string content;
};

struct NotAnAnswer : public std::exception {
  const char *what() const throw();
};

// class Question {
// public:
//   Question(std::string question, std::string answer="");
//   void AssertCompliance() const;
// private:
//   const std::string answer;
// };


