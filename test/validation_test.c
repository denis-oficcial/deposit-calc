#include <stdio.h>
#include <ctest.h>

CTEST(validation_test, input_correct)
{
	int sum, time;
	scanf("%d %d", &sum, &time);

	ASSERT_INTERVAL(0, 365, time);
}

