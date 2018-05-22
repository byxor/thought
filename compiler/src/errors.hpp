#ifndef ERRORS_HPP
#define ERRORS_HPP

#include <exception>

struct Meaningless : public std::exception {};

struct NotAnAnswer : Meaningless {
  const char *what() const throw() {
    return "Answers cannot be empty";
  }
};

struct NotReasoned : Meaningless {
  const char *what() const throw() {
    return "Reasoning requires at least 1 thought";
  }
};

#endif
