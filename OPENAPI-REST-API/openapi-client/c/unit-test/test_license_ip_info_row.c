#ifndef license_ip_info_row_TEST
#define license_ip_info_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_ip_info_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_ip_info_row.h"
license_ip_info_row_t* instantiate_license_ip_info_row(int include_optional);



license_ip_info_row_t* instantiate_license_ip_info_row(int include_optional) {
  license_ip_info_row_t* license_ip_info_row = NULL;
  if (include_optional) {
    license_ip_info_row = license_ip_info_row_create(
      "Netmask",
      "255.255.255.248"
    );
  } else {
    license_ip_info_row = license_ip_info_row_create(
      "Netmask",
      "255.255.255.248"
    );
  }

  return license_ip_info_row;
}


#ifdef license_ip_info_row_MAIN

void test_license_ip_info_row(int include_optional) {
    license_ip_info_row_t* license_ip_info_row_1 = instantiate_license_ip_info_row(include_optional);

	cJSON* jsonlicense_ip_info_row_1 = license_ip_info_row_convertToJSON(license_ip_info_row_1);
	printf("license_ip_info_row :\n%s\n", cJSON_Print(jsonlicense_ip_info_row_1));
	license_ip_info_row_t* license_ip_info_row_2 = license_ip_info_row_parseFromJSON(jsonlicense_ip_info_row_1);
	cJSON* jsonlicense_ip_info_row_2 = license_ip_info_row_convertToJSON(license_ip_info_row_2);
	printf("repeating license_ip_info_row:\n%s\n", cJSON_Print(jsonlicense_ip_info_row_2));
}

int main() {
  test_license_ip_info_row(1);
  test_license_ip_info_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_ip_info_row_MAIN
#endif // license_ip_info_row_TEST
