#ifndef licenses_order_package_costs_TEST
#define licenses_order_package_costs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licenses_order_package_costs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licenses_order_package_costs.h"
licenses_order_package_costs_t* instantiate_licenses_order_package_costs(int include_optional);



licenses_order_package_costs_t* instantiate_licenses_order_package_costs(int include_optional) {
  licenses_order_package_costs_t* licenses_order_package_costs = NULL;
  if (include_optional) {
    licenses_order_package_costs = licenses_order_package_costs_create(
      3.75
    );
  } else {
    licenses_order_package_costs = licenses_order_package_costs_create(
      3.75
    );
  }

  return licenses_order_package_costs;
}


#ifdef licenses_order_package_costs_MAIN

void test_licenses_order_package_costs(int include_optional) {
    licenses_order_package_costs_t* licenses_order_package_costs_1 = instantiate_licenses_order_package_costs(include_optional);

	cJSON* jsonlicenses_order_package_costs_1 = licenses_order_package_costs_convertToJSON(licenses_order_package_costs_1);
	printf("licenses_order_package_costs :\n%s\n", cJSON_Print(jsonlicenses_order_package_costs_1));
	licenses_order_package_costs_t* licenses_order_package_costs_2 = licenses_order_package_costs_parseFromJSON(jsonlicenses_order_package_costs_1);
	cJSON* jsonlicenses_order_package_costs_2 = licenses_order_package_costs_convertToJSON(licenses_order_package_costs_2);
	printf("repeating licenses_order_package_costs:\n%s\n", cJSON_Print(jsonlicenses_order_package_costs_2));
}

int main() {
  test_licenses_order_package_costs(1);
  test_licenses_order_package_costs(0);

  printf("Hello world \n");
  return 0;
}

#endif // licenses_order_package_costs_MAIN
#endif // licenses_order_package_costs_TEST
