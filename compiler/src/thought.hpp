#ifndef THOUGHT_HPP
#define THOUGHT_HPP

#include "errors.hpp"

#include <string>
#include <vector>


class Thought {};

typedef const std::vector<Thought> Thoughts;
typedef const std::string Content;

class Reasoning {
public:
  Reasoning(Thoughts thoughts={});
  void AssertCompliant() const;
private:
  Thoughts thoughts;
};

class Fact : public Thought {
public:
  Fact(Content content);
};

class Answer {
public:
  Answer(Content content);
  void AssertCompliant() const;
private:
  const std::string content;
};

#endif
