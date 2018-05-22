#define CATCH_CONFIG_MAIN
#include "thought.hpp"
#include "catch.hpp"

TEST_CASE("Answers") {
  SECTION("must not be empty") {
    REQUIRE_THROWS_AS(Answer("").AssertCompliant(), NotAnAnswer);
  }
  SECTION("are valid otherwise") {
    for (Answer const &notEmpty: { Answer("Yes"), Answer("No"), Answer("250") })
      notEmpty.AssertCompliant();
  }
}

TEST_CASE("Reasoning") {
  SECTION("must have intermediate thoughts") {
    REQUIRE_THROWS_AS(Reasoning().AssertCompliant(), NotReasoned);
  }
  // SECTION("are valid otherwise")
}
