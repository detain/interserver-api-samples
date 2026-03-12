#ifndef licenses_order_service_types11482_TEST
#define licenses_order_service_types11482_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licenses_order_service_types11482_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licenses_order_service_types11482.h"
licenses_order_service_types11482_t* instantiate_licenses_order_service_types11482(int include_optional);



licenses_order_service_types11482_t* instantiate_licenses_order_service_types11482(int include_optional) {
  licenses_order_service_types11482_t* licenses_order_service_types11482 = NULL;
  if (include_optional) {
    licenses_order_service_types11482 = licenses_order_service_types11482_create(
      "11482",
      "DirectAdmin Standard",
      "21.75",
      "506",
      "1",
      "506",
      "2704,Standard",
      "Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.",
      "licenses"
    );
  } else {
    licenses_order_service_types11482 = licenses_order_service_types11482_create(
      "11482",
      "DirectAdmin Standard",
      "21.75",
      "506",
      "1",
      "506",
      "2704,Standard",
      "Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.",
      "licenses"
    );
  }

  return licenses_order_service_types11482;
}


#ifdef licenses_order_service_types11482_MAIN

void test_licenses_order_service_types11482(int include_optional) {
    licenses_order_service_types11482_t* licenses_order_service_types11482_1 = instantiate_licenses_order_service_types11482(include_optional);

	cJSON* jsonlicenses_order_service_types11482_1 = licenses_order_service_types11482_convertToJSON(licenses_order_service_types11482_1);
	printf("licenses_order_service_types11482 :\n%s\n", cJSON_Print(jsonlicenses_order_service_types11482_1));
	licenses_order_service_types11482_t* licenses_order_service_types11482_2 = licenses_order_service_types11482_parseFromJSON(jsonlicenses_order_service_types11482_1);
	cJSON* jsonlicenses_order_service_types11482_2 = licenses_order_service_types11482_convertToJSON(licenses_order_service_types11482_2);
	printf("repeating licenses_order_service_types11482:\n%s\n", cJSON_Print(jsonlicenses_order_service_types11482_2));
}

int main() {
  test_licenses_order_service_types11482(1);
  test_licenses_order_service_types11482(0);

  printf("Hello world \n");
  return 0;
}

#endif // licenses_order_service_types11482_MAIN
#endif // licenses_order_service_types11482_TEST
