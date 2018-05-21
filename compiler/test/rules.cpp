#define CATCH_CONFIG_MAIN
#include "thought.hpp"
#include "catch.hpp"

TEST_CASE("Answers") {
  SECTION("are invalid when empty") {
    REQUIRE_THROWS_AS(Answer("").AssertCompliant(), NotAnAnswer);
  }
  SECTION("are valid otherwise") {
    const Answer valid[] = {
      Answer("Yes"),
      Answer("No"),
      Answer("250"),
    };
    for (auto const &answer: valid)
      answer.AssertCompliant();
  }
}
