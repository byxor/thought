#include <exception>
#include <string>

class Question {
public:
  Question(std::string question);
};

struct UnansweredQuestion : public std::exception {
  const char *what() const throw();
};
