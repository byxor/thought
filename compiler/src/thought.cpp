#include "thought.hpp"
#include "errors.hpp"


Fact::Fact(Content content) {}


Answer::Answer(Content content) : content(content) {}


bool
Answer::IsMeaningful() const {
  return not this->content.empty();
}


Reasoning::Reasoning(Thoughts thoughts) : thoughts(thoughts) {}


void
Reasoning::AssertCompliant() const {
  if (this->thoughts.empty() )
    throw NotReasoned();
}
