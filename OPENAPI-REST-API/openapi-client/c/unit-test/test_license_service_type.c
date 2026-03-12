#ifndef license_service_type_TEST
#define license_service_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_service_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_service_type.h"
license_service_type_t* instantiate_license_service_type(int include_optional);



license_service_type_t* instantiate_license_service_type(int include_optional) {
  license_service_type_t* license_service_type = NULL;
  if (include_optional) {
    license_service_type = license_service_type_create(
      "5034",
      "KernelCare License",
      "2.95",
      "508",
      "1",
      "508",
      "16",
      "0",
      "licenses"
    );
  } else {
    license_service_type = license_service_type_create(
      "5034",
      "KernelCare License",
      "2.95",
      "508",
      "1",
      "508",
      "16",
      "0",
      "licenses"
    );
  }

  return license_service_type;
}


#ifdef license_service_type_MAIN

void test_license_service_type(int include_optional) {
    license_service_type_t* license_service_type_1 = instantiate_license_service_type(include_optional);

	cJSON* jsonlicense_service_type_1 = license_service_type_convertToJSON(license_service_type_1);
	printf("license_service_type :\n%s\n", cJSON_Print(jsonlicense_service_type_1));
	license_service_type_t* license_service_type_2 = license_service_type_parseFromJSON(jsonlicense_service_type_1);
	cJSON* jsonlicense_service_type_2 = license_service_type_convertToJSON(license_service_type_2);
	printf("repeating license_service_type:\n%s\n", cJSON_Print(jsonlicense_service_type_2));
}

int main() {
  test_license_service_type(1);
  test_license_service_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_service_type_MAIN
#endif // license_service_type_TEST
