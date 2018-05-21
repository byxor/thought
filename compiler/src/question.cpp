#include "question.hpp"
#include <string>

Question::Question(std::string question) {
  throw UnansweredQuestion();
}

const char *
UnansweredQuestion::what() const throw() {
  return "Question was not implemented.";
}
