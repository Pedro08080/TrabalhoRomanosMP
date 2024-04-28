#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE( "Numeros romanos - algarismos unicos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("I") == 1 );
    
    REQUIRE( romanos_para_decimal("V") == 5 );

    REQUIRE( romanos_para_decimal("X") == 10);

    REQUIRE( romanos_para_decimal("L") == 50);

    REQUIRE( romanos_para_decimal("C") == 100);

    REQUIRE( romanos_para_decimal("D") == 500);

    REQUIRE( romanos_para_decimal("M") == 1000);
}




TEST_CASE( "Algarismos romanos inválidos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("G") == -1 );

    REQUIRE( romanos_para_decimal("i") == -1 );

    REQUIRE( romanos_para_decimal("IVX") == -1 );

    REQUIRE( romanos_para_decimal("VX") == -1 );

    REQUIRE( romanos_para_decimal("IL") == -1 );

    REQUIRE( romanos_para_decimal("IC") == -1 );

    REQUIRE( romanos_para_decimal("ID") == -1 );

    REQUIRE( romanos_para_decimal("IM") == -1 );

    REQUIRE( romanos_para_decimal("XD") == -1 );

    REQUIRE( romanos_para_decimal("XM") == -1 );

    REQUIRE( romanos_para_decimal("VV") == -1 );

    REQUIRE( romanos_para_decimal("LL") == -1 );

    REQUIRE( romanos_para_decimal("DD") == -1 );

    REQUIRE( romanos_para_decimal("MMMM") == -1 );
    
}