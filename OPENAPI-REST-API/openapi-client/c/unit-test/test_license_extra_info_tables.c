#ifndef license_extra_info_tables_TEST
#define license_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_extra_info_tables.h"
license_extra_info_tables_t* instantiate_license_extra_info_tables(int include_optional);

#include "test_license_ip_info.c"


license_extra_info_tables_t* instantiate_license_extra_info_tables(int include_optional) {
  license_extra_info_tables_t* license_extra_info_tables = NULL;
  if (include_optional) {
    license_extra_info_tables = license_extra_info_tables_create(
       // false, not to have infinite recursion
      instantiate_license_ip_info(0)
    );
  } else {
    license_extra_info_tables = license_extra_info_tables_create(
      NULL
    );
  }

  return license_extra_info_tables;
}


#ifdef license_extra_info_tables_MAIN

void test_license_extra_info_tables(int include_optional) {
    license_extra_info_tables_t* license_extra_info_tables_1 = instantiate_license_extra_info_tables(include_optional);

	cJSON* jsonlicense_extra_info_tables_1 = license_extra_info_tables_convertToJSON(license_extra_info_tables_1);
	printf("license_extra_info_tables :\n%s\n", cJSON_Print(jsonlicense_extra_info_tables_1));
	license_extra_info_tables_t* license_extra_info_tables_2 = license_extra_info_tables_parseFromJSON(jsonlicense_extra_info_tables_1);
	cJSON* jsonlicense_extra_info_tables_2 = license_extra_info_tables_convertToJSON(license_extra_info_tables_2);
	printf("repeating license_extra_info_tables:\n%s\n", cJSON_Print(jsonlicense_extra_info_tables_2));
}

int main() {
  test_license_extra_info_tables(1);
  test_license_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_extra_info_tables_MAIN
#endif // license_extra_info_tables_TEST
