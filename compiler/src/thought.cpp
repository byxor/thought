#include "thought.hpp"
#include "errors.hpp"


Fact::Fact(Content content) {}


Answer::Answer(Content content) : content(content) {}


void
Answer::AssertCompliant() const {
  if (this->content.empty())
    throw NotAnAnswer();
}


Reasoning::Reasoning(Thoughts thoughts) : thoughts(thoughts) {}


void
Reasoning::AssertCompliant() const {
  if (this->thoughts.empty() )
    throw NotReasoned();
}
