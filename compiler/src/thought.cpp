#include "thought.hpp"
#include <string>

Answer::Answer(const std::string content) : content(content) {}

void
Answer::AssertCompliant() const {
  if (this->content.empty())
    throw NotAnAnswer();
}

void
Reasoning::AssertCompliant() const {
  throw NotReasoned();
}

const char *
NotAnAnswer::what() const throw() {
  return "Answers cannot be empty";
}

const char *
NotReasoned::what() const throw() {
  return "Reasoning requires at least 1 thought";
}
