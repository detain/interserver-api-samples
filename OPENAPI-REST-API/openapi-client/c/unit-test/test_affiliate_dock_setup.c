#ifndef affiliate_dock_setup_TEST
#define affiliate_dock_setup_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define affiliate_dock_setup_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/affiliate_dock_setup.h"
affiliate_dock_setup_t* instantiate_affiliate_dock_setup(int include_optional);



affiliate_dock_setup_t* instantiate_affiliate_dock_setup(int include_optional) {
  affiliate_dock_setup_t* affiliate_dock_setup = NULL;
  if (include_optional) {
    affiliate_dock_setup = affiliate_dock_setup_create(
      "0",
      "0",
      "0"
    );
  } else {
    affiliate_dock_setup = affiliate_dock_setup_create(
      "0",
      "0",
      "0"
    );
  }

  return affiliate_dock_setup;
}


#ifdef affiliate_dock_setup_MAIN

void test_affiliate_dock_setup(int include_optional) {
    affiliate_dock_setup_t* affiliate_dock_setup_1 = instantiate_affiliate_dock_setup(include_optional);

	cJSON* jsonaffiliate_dock_setup_1 = affiliate_dock_setup_convertToJSON(affiliate_dock_setup_1);
	printf("affiliate_dock_setup :\n%s\n", cJSON_Print(jsonaffiliate_dock_setup_1));
	affiliate_dock_setup_t* affiliate_dock_setup_2 = affiliate_dock_setup_parseFromJSON(jsonaffiliate_dock_setup_1);
	cJSON* jsonaffiliate_dock_setup_2 = affiliate_dock_setup_convertToJSON(affiliate_dock_setup_2);
	printf("repeating affiliate_dock_setup:\n%s\n", cJSON_Print(jsonaffiliate_dock_setup_2));
}

int main() {
  test_affiliate_dock_setup(1);
  test_affiliate_dock_setup(0);

  printf("Hello world \n");
  return 0;
}

#endif // affiliate_dock_setup_MAIN
#endif // affiliate_dock_setup_TEST
