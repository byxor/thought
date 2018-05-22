#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "thought.hpp"
#include "errors.hpp"


TEST_CASE("Answers") {
  SECTION("are meaningless when empty") {
    REQUIRE_THROWS_AS(Answer("").AssertCompliant(), Meaningless);
  }
  SECTION("are valid otherwise") {
    Answer const answers[] = { Answer("Yes"), Answer("No"), Answer("250") };
    for (Answer const &notEmpty: answers)
      notEmpty.AssertCompliant();
  }
}

TEST_CASE("Reasoning") {
  SECTION("is meaningless without intermediate thoughts") {
    REQUIRE_THROWS_AS(Reasoning().AssertCompliant(), Meaningless);
  }
  SECTION("is valid otherwise") {
    Reasoning reasoning({
      Fact("Glass is transparent"),
      Fact("Transparency allows light to pass through"),
    });
    reasoning.AssertCompliant();
  }
}
