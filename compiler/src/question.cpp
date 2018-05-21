#include "question.hpp"
#include <string>

Question::Question(const std::string question,
                   const std::string answer): answer(answer) {}

void
Question::AssertCompliance() const {
  if (this->answer.empty()) {
    throw UnansweredQuestion();
  }
}

const char *
UnansweredQuestion::what() const throw() {
  return "Question was not answered.";
}
