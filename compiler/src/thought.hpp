#ifndef THOUGHT_HPP
#define THOUGHT_HPP

#include "errors.hpp"

#include <string>
#include <vector>


class Thought {};


typedef const std::vector<Thought> Thoughts;


typedef const std::string Content;


class Fact : public Thought {
  public: Fact(Content content);
};


class Answer {
public:
  Answer(Content content);
  bool IsMeaningful() const;
private:
  const std::string content;
};


class Reasoning {
public:
  Reasoning(Thoughts thoughts={});
  bool IsMeaningful() const;
private:
  Thoughts thoughts;
};

#endif
