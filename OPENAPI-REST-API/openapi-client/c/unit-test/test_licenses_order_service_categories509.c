#ifndef licenses_order_service_categories509_TEST
#define licenses_order_service_categories509_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licenses_order_service_categories509_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licenses_order_service_categories509.h"
licenses_order_service_categories509_t* instantiate_licenses_order_service_categories509(int include_optional);



licenses_order_service_categories509_t* instantiate_licenses_order_service_categories509(int include_optional) {
  licenses_order_service_categories509_t* licenses_order_service_categories509 = NULL;
  if (include_optional) {
    licenses_order_service_categories509 = licenses_order_service_categories509_create(
      "509",
      "Webuzo",
      "webuzo",
      "licenses"
    );
  } else {
    licenses_order_service_categories509 = licenses_order_service_categories509_create(
      "509",
      "Webuzo",
      "webuzo",
      "licenses"
    );
  }

  return licenses_order_service_categories509;
}


#ifdef licenses_order_service_categories509_MAIN

void test_licenses_order_service_categories509(int include_optional) {
    licenses_order_service_categories509_t* licenses_order_service_categories509_1 = instantiate_licenses_order_service_categories509(include_optional);

	cJSON* jsonlicenses_order_service_categories509_1 = licenses_order_service_categories509_convertToJSON(licenses_order_service_categories509_1);
	printf("licenses_order_service_categories509 :\n%s\n", cJSON_Print(jsonlicenses_order_service_categories509_1));
	licenses_order_service_categories509_t* licenses_order_service_categories509_2 = licenses_order_service_categories509_parseFromJSON(jsonlicenses_order_service_categories509_1);
	cJSON* jsonlicenses_order_service_categories509_2 = licenses_order_service_categories509_convertToJSON(licenses_order_service_categories509_2);
	printf("repeating licenses_order_service_categories509:\n%s\n", cJSON_Print(jsonlicenses_order_service_categories509_2));
}

int main() {
  test_licenses_order_service_categories509(1);
  test_licenses_order_service_categories509(0);

  printf("Hello world \n");
  return 0;
}

#endif // licenses_order_service_categories509_MAIN
#endif // licenses_order_service_categories509_TEST
