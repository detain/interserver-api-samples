#ifndef license_service_info_TEST
#define license_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_service_info.h"
license_service_info_t* instantiate_license_service_info(int include_optional);



license_service_info_t* instantiate_license_service_info(int include_optional) {
  license_service_info_t* license_service_info = NULL;
  if (include_optional) {
    license_service_info = license_service_info_create(
      "386522",
      "5034",
      "USD",
      "2020-01-14T10:48:14Z",
      "771282",
      "1.2.3.4",
      "active",
      "18704419",
      "1836",
      "0",
      "0",
      "0"
    );
  } else {
    license_service_info = license_service_info_create(
      "386522",
      "5034",
      "USD",
      "2020-01-14T10:48:14Z",
      "771282",
      "1.2.3.4",
      "active",
      "18704419",
      "1836",
      "0",
      "0",
      "0"
    );
  }

  return license_service_info;
}


#ifdef license_service_info_MAIN

void test_license_service_info(int include_optional) {
    license_service_info_t* license_service_info_1 = instantiate_license_service_info(include_optional);

	cJSON* jsonlicense_service_info_1 = license_service_info_convertToJSON(license_service_info_1);
	printf("license_service_info :\n%s\n", cJSON_Print(jsonlicense_service_info_1));
	license_service_info_t* license_service_info_2 = license_service_info_parseFromJSON(jsonlicense_service_info_1);
	cJSON* jsonlicense_service_info_2 = license_service_info_convertToJSON(license_service_info_2);
	printf("repeating license_service_info:\n%s\n", cJSON_Print(jsonlicense_service_info_2));
}

int main() {
  test_license_service_info(1);
  test_license_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_service_info_MAIN
#endif // license_service_info_TEST
