#ifndef licenses_order_service_types_TEST
#define licenses_order_service_types_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licenses_order_service_types_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licenses_order_service_types.h"
licenses_order_service_types_t* instantiate_licenses_order_service_types(int include_optional);

#include "test_licenses_order_service_types11482.c"


licenses_order_service_types_t* instantiate_licenses_order_service_types(int include_optional) {
  licenses_order_service_types_t* licenses_order_service_types = NULL;
  if (include_optional) {
    licenses_order_service_types = licenses_order_service_types_create(
       // false, not to have infinite recursion
      instantiate_licenses_order_service_types11482(0)
    );
  } else {
    licenses_order_service_types = licenses_order_service_types_create(
      NULL
    );
  }

  return licenses_order_service_types;
}


#ifdef licenses_order_service_types_MAIN

void test_licenses_order_service_types(int include_optional) {
    licenses_order_service_types_t* licenses_order_service_types_1 = instantiate_licenses_order_service_types(include_optional);

	cJSON* jsonlicenses_order_service_types_1 = licenses_order_service_types_convertToJSON(licenses_order_service_types_1);
	printf("licenses_order_service_types :\n%s\n", cJSON_Print(jsonlicenses_order_service_types_1));
	licenses_order_service_types_t* licenses_order_service_types_2 = licenses_order_service_types_parseFromJSON(jsonlicenses_order_service_types_1);
	cJSON* jsonlicenses_order_service_types_2 = licenses_order_service_types_convertToJSON(licenses_order_service_types_2);
	printf("repeating licenses_order_service_types:\n%s\n", cJSON_Print(jsonlicenses_order_service_types_2));
}

int main() {
  test_licenses_order_service_types(1);
  test_licenses_order_service_types(0);

  printf("Hello world \n");
  return 0;
}

#endif // licenses_order_service_types_MAIN
#endif // licenses_order_service_types_TEST
