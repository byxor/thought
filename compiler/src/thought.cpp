#include "thought.hpp"
#include <string>

Answer::Answer(const std::string content) : content(content) {}

void
Answer::AssertCompliant() const {
  if (this->content.empty())
    throw NotAnAnswer();
}

const char *
NotAnAnswer::what() const throw() {
  return "Answers cannot be empty";
}
