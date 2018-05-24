#include "thought.hpp"
#include "errors.hpp"

#include <string>


Fact::Fact(Content content) {}


Answer::Answer(Content content) : content(content) {}


bool
Answer::IsMeaningful() const {
  return not this->content.empty();
}


Reasoning::Reasoning(Thoughts thoughts) : thoughts(thoughts) {}


bool
Reasoning::IsMeaningful() const {
  return not this->thoughts.empty();
}


Tokens tokens(std::string input) {
  return Tokens();
}
