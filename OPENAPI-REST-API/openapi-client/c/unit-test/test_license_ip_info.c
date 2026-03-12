#ifndef license_ip_info_TEST
#define license_ip_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_ip_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_ip_info.h"
license_ip_info_t* instantiate_license_ip_info(int include_optional);



license_ip_info_t* instantiate_license_ip_info(int include_optional) {
  license_ip_info_t* license_ip_info = NULL;
  if (include_optional) {
    license_ip_info = license_ip_info_create(
      "IP Information",
      list_createList()
    );
  } else {
    license_ip_info = license_ip_info_create(
      "IP Information",
      list_createList()
    );
  }

  return license_ip_info;
}


#ifdef license_ip_info_MAIN

void test_license_ip_info(int include_optional) {
    license_ip_info_t* license_ip_info_1 = instantiate_license_ip_info(include_optional);

	cJSON* jsonlicense_ip_info_1 = license_ip_info_convertToJSON(license_ip_info_1);
	printf("license_ip_info :\n%s\n", cJSON_Print(jsonlicense_ip_info_1));
	license_ip_info_t* license_ip_info_2 = license_ip_info_parseFromJSON(jsonlicense_ip_info_1);
	cJSON* jsonlicense_ip_info_2 = license_ip_info_convertToJSON(license_ip_info_2);
	printf("repeating license_ip_info:\n%s\n", cJSON_Print(jsonlicense_ip_info_2));
}

int main() {
  test_license_ip_info(1);
  test_license_ip_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_ip_info_MAIN
#endif // license_ip_info_TEST
