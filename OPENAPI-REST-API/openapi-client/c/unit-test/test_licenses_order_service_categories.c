#ifndef licenses_order_service_categories_TEST
#define licenses_order_service_categories_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licenses_order_service_categories_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licenses_order_service_categories.h"
licenses_order_service_categories_t* instantiate_licenses_order_service_categories(int include_optional);

#include "test_licenses_order_service_categories509.c"


licenses_order_service_categories_t* instantiate_licenses_order_service_categories(int include_optional) {
  licenses_order_service_categories_t* licenses_order_service_categories = NULL;
  if (include_optional) {
    licenses_order_service_categories = licenses_order_service_categories_create(
       // false, not to have infinite recursion
      instantiate_licenses_order_service_categories509(0)
    );
  } else {
    licenses_order_service_categories = licenses_order_service_categories_create(
      NULL
    );
  }

  return licenses_order_service_categories;
}


#ifdef licenses_order_service_categories_MAIN

void test_licenses_order_service_categories(int include_optional) {
    licenses_order_service_categories_t* licenses_order_service_categories_1 = instantiate_licenses_order_service_categories(include_optional);

	cJSON* jsonlicenses_order_service_categories_1 = licenses_order_service_categories_convertToJSON(licenses_order_service_categories_1);
	printf("licenses_order_service_categories :\n%s\n", cJSON_Print(jsonlicenses_order_service_categories_1));
	licenses_order_service_categories_t* licenses_order_service_categories_2 = licenses_order_service_categories_parseFromJSON(jsonlicenses_order_service_categories_1);
	cJSON* jsonlicenses_order_service_categories_2 = licenses_order_service_categories_convertToJSON(licenses_order_service_categories_2);
	printf("repeating licenses_order_service_categories:\n%s\n", cJSON_Print(jsonlicenses_order_service_categories_2));
}

int main() {
  test_licenses_order_service_categories(1);
  test_licenses_order_service_categories(0);

  printf("Hello world \n");
  return 0;
}

#endif // licenses_order_service_categories_MAIN
#endif // licenses_order_service_categories_TEST
