#ifndef license_TEST
#define license_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license.h"
license_t* instantiate_license(int include_optional);

#include "test_license_service_info.c"
#include "test_license_billing_details.c"
#include "test_license_extra_info_tables.c"
#include "test_license_service_type.c"


license_t* instantiate_license(int include_optional) {
  license_t* license = NULL;
  if (include_optional) {
    license = license_create(
       // false, not to have infinite recursion
      instantiate_license_service_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_license_billing_details(0),
      "USD",
      "$",
      "KernelCare License",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_license_extra_info_tables(0),
      "0",
       // false, not to have infinite recursion
      instantiate_license_service_type(0),
      "0"
    );
  } else {
    license = license_create(
      NULL,
      list_createList(),
      NULL,
      "USD",
      "$",
      "KernelCare License",
      list_createList(),
      NULL,
      "0",
      NULL,
      "0"
    );
  }

  return license;
}


#ifdef license_MAIN

void test_license(int include_optional) {
    license_t* license_1 = instantiate_license(include_optional);

	cJSON* jsonlicense_1 = license_convertToJSON(license_1);
	printf("license :\n%s\n", cJSON_Print(jsonlicense_1));
	license_t* license_2 = license_parseFromJSON(jsonlicense_1);
	cJSON* jsonlicense_2 = license_convertToJSON(license_2);
	printf("repeating license:\n%s\n", cJSON_Print(jsonlicense_2));
}

int main() {
  test_license(1);
  test_license(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_MAIN
#endif // license_TEST
