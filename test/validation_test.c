#include <stdio.h>
#include <ctest.h>
#include <stdlib.h>
#include <time.h>

CTEST(validation_test, date_correct)
{
	int time;
	time = rand() % 366;
	ASSERT_INTERVAL(0, 365, time);
}

CTEST(validation_test, sum_correct)
{
	int sum;
	sum = random() % 1000 + 10;
	ASSERT_TRUE(sum > 10);
	ASSERT_INTERVAL(10,10000000, sum);
	
}
