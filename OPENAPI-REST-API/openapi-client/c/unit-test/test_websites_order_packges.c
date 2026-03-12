#ifndef websites_order_packges_TEST
#define websites_order_packges_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_packges_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_packges.h"
websites_order_packges_t* instantiate_websites_order_packges(int include_optional);

#include "test_websites_order_packages_info.c"


websites_order_packges_t* instantiate_websites_order_packges(int include_optional) {
  websites_order_packges_t* websites_order_packges = NULL;
  if (include_optional) {
    websites_order_packges = websites_order_packges_create(
       // false, not to have infinite recursion
      instantiate_websites_order_packages_info(0)
    );
  } else {
    websites_order_packges = websites_order_packges_create(
      NULL
    );
  }

  return websites_order_packges;
}


#ifdef websites_order_packges_MAIN

void test_websites_order_packges(int include_optional) {
    websites_order_packges_t* websites_order_packges_1 = instantiate_websites_order_packges(include_optional);

	cJSON* jsonwebsites_order_packges_1 = websites_order_packges_convertToJSON(websites_order_packges_1);
	printf("websites_order_packges :\n%s\n", cJSON_Print(jsonwebsites_order_packges_1));
	websites_order_packges_t* websites_order_packges_2 = websites_order_packges_parseFromJSON(jsonwebsites_order_packges_1);
	cJSON* jsonwebsites_order_packges_2 = websites_order_packges_convertToJSON(websites_order_packges_2);
	printf("repeating websites_order_packges:\n%s\n", cJSON_Print(jsonwebsites_order_packges_2));
}

int main() {
  test_websites_order_packges(1);
  test_websites_order_packges(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_packges_MAIN
#endif // websites_order_packges_TEST
