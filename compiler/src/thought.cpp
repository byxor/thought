#include "thought.hpp"
#include "errors.hpp"

Answer::Answer(Content content) : content(content) {}

void
Answer::AssertCompliant() const {
  if (this->content.empty())
    throw NotAnAnswer();
}

Fact::Fact(Content content) {}

Reasoning::Reasoning(Thoughts thoughts) : thoughts(thoughts) {}

void
Reasoning::AssertCompliant() const {
  if (this->thoughts.empty() )
    throw NotReasoned();
}
