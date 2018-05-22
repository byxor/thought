#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "thought.hpp"
#include "errors.hpp"


TEST_CASE("Answers") {
  SECTION("must not be empty") {
    REQUIRE_THROWS_AS(Answer("").AssertCompliant(), NotAnAnswer);
  }
  SECTION("are valid otherwise") {
    Answer const answers[] = { Answer("Yes"), Answer("No"), Answer("250") };
    for (Answer const &notEmpty: answers)
      notEmpty.AssertCompliant();
  }
}

TEST_CASE("Reasoning") {
  SECTION("must have intermediate thoughts") {
    REQUIRE_THROWS_AS(Reasoning().AssertCompliant(), NotReasoned);
  }
  SECTION("is valid otherwise") {
    Reasoning reasoning({
      Fact("Glass is transparent"),
      Fact("Transparency allows light to pass through"),
    });
    reasoning.AssertCompliant();
  }
}
