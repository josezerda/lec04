#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Basic check", "[core]") {
    REQUIRE(1 + 1 == 2);
}
