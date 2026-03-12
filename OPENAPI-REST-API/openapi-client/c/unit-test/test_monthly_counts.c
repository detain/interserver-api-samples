#ifndef monthly_counts_TEST
#define monthly_counts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define monthly_counts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/monthly_counts.h"
monthly_counts_t* instantiate_monthly_counts(int include_optional);



monthly_counts_t* instantiate_monthly_counts(int include_optional) {
  monthly_counts_t* monthly_counts = NULL;
  if (include_optional) {
    monthly_counts = monthly_counts_create(
    );
  } else {
    monthly_counts = monthly_counts_create(
    );
  }

  return monthly_counts;
}


#ifdef monthly_counts_MAIN

void test_monthly_counts(int include_optional) {
    monthly_counts_t* monthly_counts_1 = instantiate_monthly_counts(include_optional);

	cJSON* jsonmonthly_counts_1 = monthly_counts_convertToJSON(monthly_counts_1);
	printf("monthly_counts :\n%s\n", cJSON_Print(jsonmonthly_counts_1));
	monthly_counts_t* monthly_counts_2 = monthly_counts_parseFromJSON(jsonmonthly_counts_1);
	cJSON* jsonmonthly_counts_2 = monthly_counts_convertToJSON(monthly_counts_2);
	printf("repeating monthly_counts:\n%s\n", cJSON_Print(jsonmonthly_counts_2));
}

int main() {
  test_monthly_counts(1);
  test_monthly_counts(0);

  printf("Hello world \n");
  return 0;
}

#endif // monthly_counts_MAIN
#endif // monthly_counts_TEST
