#ifndef affiliate_banner_row_TEST
#define affiliate_banner_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define affiliate_banner_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/affiliate_banner_row.h"
affiliate_banner_row_t* instantiate_affiliate_banner_row(int include_optional);



affiliate_banner_row_t* instantiate_affiliate_banner_row(int include_optional) {
  affiliate_banner_row_t* affiliate_banner_row = NULL;
  if (include_optional) {
    affiliate_banner_row = affiliate_banner_row_create(
      "0",
      "0",
      "0"
    );
  } else {
    affiliate_banner_row = affiliate_banner_row_create(
      "0",
      "0",
      "0"
    );
  }

  return affiliate_banner_row;
}


#ifdef affiliate_banner_row_MAIN

void test_affiliate_banner_row(int include_optional) {
    affiliate_banner_row_t* affiliate_banner_row_1 = instantiate_affiliate_banner_row(include_optional);

	cJSON* jsonaffiliate_banner_row_1 = affiliate_banner_row_convertToJSON(affiliate_banner_row_1);
	printf("affiliate_banner_row :\n%s\n", cJSON_Print(jsonaffiliate_banner_row_1));
	affiliate_banner_row_t* affiliate_banner_row_2 = affiliate_banner_row_parseFromJSON(jsonaffiliate_banner_row_1);
	cJSON* jsonaffiliate_banner_row_2 = affiliate_banner_row_convertToJSON(affiliate_banner_row_2);
	printf("repeating affiliate_banner_row:\n%s\n", cJSON_Print(jsonaffiliate_banner_row_2));
}

int main() {
  test_affiliate_banner_row(1);
  test_affiliate_banner_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // affiliate_banner_row_MAIN
#endif // affiliate_banner_row_TEST
