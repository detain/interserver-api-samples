#ifndef affiliate_payment_setup_TEST
#define affiliate_payment_setup_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define affiliate_payment_setup_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/affiliate_payment_setup.h"
affiliate_payment_setup_t* instantiate_affiliate_payment_setup(int include_optional);



affiliate_payment_setup_t* instantiate_affiliate_payment_setup(int include_optional) {
  affiliate_payment_setup_t* affiliate_payment_setup = NULL;
  if (include_optional) {
    affiliate_payment_setup = affiliate_payment_setup_create(
      "0",
      "0"
    );
  } else {
    affiliate_payment_setup = affiliate_payment_setup_create(
      "0",
      "0"
    );
  }

  return affiliate_payment_setup;
}


#ifdef affiliate_payment_setup_MAIN

void test_affiliate_payment_setup(int include_optional) {
    affiliate_payment_setup_t* affiliate_payment_setup_1 = instantiate_affiliate_payment_setup(include_optional);

	cJSON* jsonaffiliate_payment_setup_1 = affiliate_payment_setup_convertToJSON(affiliate_payment_setup_1);
	printf("affiliate_payment_setup :\n%s\n", cJSON_Print(jsonaffiliate_payment_setup_1));
	affiliate_payment_setup_t* affiliate_payment_setup_2 = affiliate_payment_setup_parseFromJSON(jsonaffiliate_payment_setup_1);
	cJSON* jsonaffiliate_payment_setup_2 = affiliate_payment_setup_convertToJSON(affiliate_payment_setup_2);
	printf("repeating affiliate_payment_setup:\n%s\n", cJSON_Print(jsonaffiliate_payment_setup_2));
}

int main() {
  test_affiliate_payment_setup(1);
  test_affiliate_payment_setup(0);

  printf("Hello world \n");
  return 0;
}

#endif // affiliate_payment_setup_MAIN
#endif // affiliate_payment_setup_TEST
