#ifndef websites_order_service_types_TEST
#define websites_order_service_types_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_service_types_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_service_types.h"
websites_order_service_types_t* instantiate_websites_order_service_types(int include_optional);

#include "test_websites_order_service_types.c"


websites_order_service_types_t* instantiate_websites_order_service_types(int include_optional) {
  websites_order_service_types_t* websites_order_service_types = NULL;
  if (include_optional) {
    websites_order_service_types = websites_order_service_types_create(
       // false, not to have infinite recursion
      instantiate_websites_order_service_types(0)
    );
  } else {
    websites_order_service_types = websites_order_service_types_create(
      NULL
    );
  }

  return websites_order_service_types;
}


#ifdef websites_order_service_types_MAIN

void test_websites_order_service_types(int include_optional) {
    websites_order_service_types_t* websites_order_service_types_1 = instantiate_websites_order_service_types(include_optional);

	cJSON* jsonwebsites_order_service_types_1 = websites_order_service_types_convertToJSON(websites_order_service_types_1);
	printf("websites_order_service_types :\n%s\n", cJSON_Print(jsonwebsites_order_service_types_1));
	websites_order_service_types_t* websites_order_service_types_2 = websites_order_service_types_parseFromJSON(jsonwebsites_order_service_types_1);
	cJSON* jsonwebsites_order_service_types_2 = websites_order_service_types_convertToJSON(websites_order_service_types_2);
	printf("repeating websites_order_service_types:\n%s\n", cJSON_Print(jsonwebsites_order_service_types_2));
}

int main() {
  test_websites_order_service_types(1);
  test_websites_order_service_types(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_service_types_MAIN
#endif // websites_order_service_types_TEST
