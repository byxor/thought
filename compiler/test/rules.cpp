#define CATCH_CONFIG_MAIN
#include "question.hpp"
#include "catch.hpp"

TEST_CASE("Questions") {

  const Question unanswered[] = {
    Question("Is this real life?"),
    Question("Are carrots orange?"),
    Question("How far can one push their productivity?"),
  };

  const Question answered[] = {
    Question("How many cars can you see?", "0"),
    Question("How old are you?", "20"),
    Question("Is bitcoin going to crash?", "Probably"),
  };

  SECTION("are invalid without answers") {
    for (auto const &question: unanswered) {
      REQUIRE_THROWS_AS(question.AssertCompliance(), UnansweredQuestion);
    }
  }

  SECTION("are valid otherwise") {
    for (auto const &question: answered) {
      question.AssertCompliance();
    }
  }
}
