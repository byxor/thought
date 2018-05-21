#define CATCH_CONFIG_MAIN
#include "question.hpp"
#include "catch.hpp"

TEST_CASE("Questions") {
  SECTION("are invalid without answers") {
    try {
      Question q("Is this real life?");
      FAIL("Should raise UnansweredQuestion error");
    } catch (UnansweredQuestion _) {}
  }
  // SECTION("are valid otherwise") {}
}
