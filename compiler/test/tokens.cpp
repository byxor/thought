#include "catch.hpp"
#include "thought.hpp"


TEST_CASE("Tokens") {
  SECTION("are empty with no input") {
    REQUIRE(tokens("") == Tokens());
  }
}
