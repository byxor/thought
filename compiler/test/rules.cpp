#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "thought.hpp"
#include "errors.hpp"


TEST_CASE("Answers") {
  SECTION("are meaningless when empty") {
    REQUIRE_FALSE( Answer("").IsMeaningful() );
  }
  SECTION("are meaningful otherwise") {
    Answer const answers[] = { Answer("Yes"), Answer("No"), Answer("250") };
    for (Answer const &notEmpty: answers)
      REQUIRE( notEmpty.IsMeaningful() );
  }
}

TEST_CASE("Reasoning") {
  SECTION("is meaningless without intermediate thoughts") {
    REQUIRE_FALSE( Reasoning().IsMeaningful() );
  }
  SECTION("is meaningful otherwise") {
    Reasoning reasoning({
      Fact("Glass is transparent"),
      Fact("Transparency allows light to pass through"),
    });
    REQUIRE( reasoning.IsMeaningful() );
  }
}
