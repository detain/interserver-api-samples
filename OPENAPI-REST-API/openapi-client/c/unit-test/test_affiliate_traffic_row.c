#ifndef affiliate_traffic_row_TEST
#define affiliate_traffic_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define affiliate_traffic_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/affiliate_traffic_row.h"
affiliate_traffic_row_t* instantiate_affiliate_traffic_row(int include_optional);



affiliate_traffic_row_t* instantiate_affiliate_traffic_row(int include_optional) {
  affiliate_traffic_row_t* affiliate_traffic_row = NULL;
  if (include_optional) {
    affiliate_traffic_row = affiliate_traffic_row_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    affiliate_traffic_row = affiliate_traffic_row_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return affiliate_traffic_row;
}


#ifdef affiliate_traffic_row_MAIN

void test_affiliate_traffic_row(int include_optional) {
    affiliate_traffic_row_t* affiliate_traffic_row_1 = instantiate_affiliate_traffic_row(include_optional);

	cJSON* jsonaffiliate_traffic_row_1 = affiliate_traffic_row_convertToJSON(affiliate_traffic_row_1);
	printf("affiliate_traffic_row :\n%s\n", cJSON_Print(jsonaffiliate_traffic_row_1));
	affiliate_traffic_row_t* affiliate_traffic_row_2 = affiliate_traffic_row_parseFromJSON(jsonaffiliate_traffic_row_1);
	cJSON* jsonaffiliate_traffic_row_2 = affiliate_traffic_row_convertToJSON(affiliate_traffic_row_2);
	printf("repeating affiliate_traffic_row:\n%s\n", cJSON_Print(jsonaffiliate_traffic_row_2));
}

int main() {
  test_affiliate_traffic_row(1);
  test_affiliate_traffic_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // affiliate_traffic_row_MAIN
#endif // affiliate_traffic_row_TEST
