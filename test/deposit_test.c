#include <stdio.h>
#include <ctest.h>
#include <deposit.h>

CTEST(deposit_test, percent_correct)
{
    int sum = 123;
    int time = 35;
    if (time >= 31 && time <= 120){
	    ASSERT_EQUAL(125, sum+(sum*(0.02)));   
    }
}

