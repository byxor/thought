#define CATCH_CONFIG_MAIN
#include "thought.hpp"
#include "catch.hpp"

const Answer valid[] = {
  Answer("Yes"),
  Answer("No"),
  Answer("250"),
};

TEST_CASE("Answers") {
  SECTION("are invalid when empty") {
    REQUIRE_THROWS_AS(Answer("").AssertCompliant(), NotAnAnswer);
  }
  SECTION("are valid otherwise") {
    for (auto const &answer: valid)
      answer.AssertCompliant();
  }
}
