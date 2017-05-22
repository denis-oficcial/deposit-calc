#include <stdio.h>
#include <ctest.h>

CTEST(validation_test, date_correct)
{
	int time;
	scanf("%d", &time);

	ASSERT_INTERVAL(0, 365, time);
}

CTEST(validation_test, sum_correct)
{
	int sum;
	scanf("%d", &sum);
	ASSERT_TRUE(sum > 10);
	ASSERT_INTERVAL(10,10000000, sum);
	
}
