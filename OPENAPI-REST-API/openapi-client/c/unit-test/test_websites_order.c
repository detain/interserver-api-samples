#ifndef websites_order_TEST
#define websites_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order.h"
websites_order_t* instantiate_websites_order(int include_optional);

#include "test_websites_order_packages.c"
#include "test_websites_order_json_services.c"
#include "test_websites_order_json_service_offers.c"
#include "test_websites_order_service_types.c"
#include "test_websites_order_service_offers.c"
#include "test_websites_order_packges.c"


websites_order_t* instantiate_websites_order(int include_optional) {
  websites_order_t* websites_order = NULL;
  if (include_optional) {
    websites_order = websites_order_create(
      "order_form",
      "0",
      1,
      0,
       // false, not to have infinite recursion
      instantiate_websites_order_packages(0),
      false,
       // false, not to have infinite recursion
      instantiate_websites_order_json_services(0),
       // false, not to have infinite recursion
      instantiate_websites_order_json_service_offers(0),
       // false, not to have infinite recursion
      instantiate_websites_order_service_types(0),
       // false, not to have infinite recursion
      instantiate_websites_order_service_offers(0),
       // false, not to have infinite recursion
      instantiate_websites_order_packges(0)
    );
  } else {
    websites_order = websites_order_create(
      "order_form",
      "0",
      1,
      0,
      NULL,
      false,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return websites_order;
}


#ifdef websites_order_MAIN

void test_websites_order(int include_optional) {
    websites_order_t* websites_order_1 = instantiate_websites_order(include_optional);

	cJSON* jsonwebsites_order_1 = websites_order_convertToJSON(websites_order_1);
	printf("websites_order :\n%s\n", cJSON_Print(jsonwebsites_order_1));
	websites_order_t* websites_order_2 = websites_order_parseFromJSON(jsonwebsites_order_1);
	cJSON* jsonwebsites_order_2 = websites_order_convertToJSON(websites_order_2);
	printf("repeating websites_order:\n%s\n", cJSON_Print(jsonwebsites_order_2));
}

int main() {
  test_websites_order(1);
  test_websites_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_MAIN
#endif // websites_order_TEST
