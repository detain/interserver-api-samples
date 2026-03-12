#ifndef license_row_TEST
#define license_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_row.h"
license_row_t* instantiate_license_row(int include_optional);



license_row_t* instantiate_license_row(int include_optional) {
  license_row_t* license_row = NULL;
  if (include_optional) {
    license_row = license_row_create(
      "386111",
      "0",
      "66.45.228.100",
      "Imunify360 up to 30 users",
      "25.00",
      "canceled",
      "1",
      "2019-08-28T14:27:22Z"
    );
  } else {
    license_row = license_row_create(
      "386111",
      "0",
      "66.45.228.100",
      "Imunify360 up to 30 users",
      "25.00",
      "canceled",
      "1",
      "2019-08-28T14:27:22Z"
    );
  }

  return license_row;
}


#ifdef license_row_MAIN

void test_license_row(int include_optional) {
    license_row_t* license_row_1 = instantiate_license_row(include_optional);

	cJSON* jsonlicense_row_1 = license_row_convertToJSON(license_row_1);
	printf("license_row :\n%s\n", cJSON_Print(jsonlicense_row_1));
	license_row_t* license_row_2 = license_row_parseFromJSON(jsonlicense_row_1);
	cJSON* jsonlicense_row_2 = license_row_convertToJSON(license_row_2);
	printf("repeating license_row:\n%s\n", cJSON_Print(jsonlicense_row_2));
}

int main() {
  test_license_row(1);
  test_license_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_row_MAIN
#endif // license_row_TEST
