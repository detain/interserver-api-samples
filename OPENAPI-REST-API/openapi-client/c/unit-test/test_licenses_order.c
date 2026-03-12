#ifndef licenses_order_TEST
#define licenses_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licenses_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licenses_order.h"
licenses_order_t* instantiate_licenses_order(int include_optional);

#include "test_licenses_order_service_categories.c"
#include "test_licenses_order_package_costs.c"
#include "test_licenses_order_service_types.c"


licenses_order_t* instantiate_licenses_order(int include_optional) {
  licenses_order_t* licenses_order = NULL;
  if (include_optional) {
    licenses_order = licenses_order_create(
       // false, not to have infinite recursion
      instantiate_licenses_order_service_categories(0),
       // false, not to have infinite recursion
      instantiate_licenses_order_package_costs(0),
       // false, not to have infinite recursion
      instantiate_licenses_order_service_types(0)
    );
  } else {
    licenses_order = licenses_order_create(
      NULL,
      NULL,
      NULL
    );
  }

  return licenses_order;
}


#ifdef licenses_order_MAIN

void test_licenses_order(int include_optional) {
    licenses_order_t* licenses_order_1 = instantiate_licenses_order(include_optional);

	cJSON* jsonlicenses_order_1 = licenses_order_convertToJSON(licenses_order_1);
	printf("licenses_order :\n%s\n", cJSON_Print(jsonlicenses_order_1));
	licenses_order_t* licenses_order_2 = licenses_order_parseFromJSON(jsonlicenses_order_1);
	cJSON* jsonlicenses_order_2 = licenses_order_convertToJSON(licenses_order_2);
	printf("repeating licenses_order:\n%s\n", cJSON_Print(jsonlicenses_order_2));
}

int main() {
  test_licenses_order(1);
  test_licenses_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // licenses_order_MAIN
#endif // licenses_order_TEST
