#ifndef licenses_cancel_200_response_TEST
#define licenses_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define licenses_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/licenses_cancel_200_response.h"
licenses_cancel_200_response_t* instantiate_licenses_cancel_200_response(int include_optional);



licenses_cancel_200_response_t* instantiate_licenses_cancel_200_response(int include_optional) {
  licenses_cancel_200_response_t* licenses_cancel_200_response = NULL;
  if (include_optional) {
    licenses_cancel_200_response = licenses_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    licenses_cancel_200_response = licenses_cancel_200_response_create(
      1,
      "0"
    );
  }

  return licenses_cancel_200_response;
}


#ifdef licenses_cancel_200_response_MAIN

void test_licenses_cancel_200_response(int include_optional) {
    licenses_cancel_200_response_t* licenses_cancel_200_response_1 = instantiate_licenses_cancel_200_response(include_optional);

	cJSON* jsonlicenses_cancel_200_response_1 = licenses_cancel_200_response_convertToJSON(licenses_cancel_200_response_1);
	printf("licenses_cancel_200_response :\n%s\n", cJSON_Print(jsonlicenses_cancel_200_response_1));
	licenses_cancel_200_response_t* licenses_cancel_200_response_2 = licenses_cancel_200_response_parseFromJSON(jsonlicenses_cancel_200_response_1);
	cJSON* jsonlicenses_cancel_200_response_2 = licenses_cancel_200_response_convertToJSON(licenses_cancel_200_response_2);
	printf("repeating licenses_cancel_200_response:\n%s\n", cJSON_Print(jsonlicenses_cancel_200_response_2));
}

int main() {
  test_licenses_cancel_200_response(1);
  test_licenses_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // licenses_cancel_200_response_MAIN
#endif // licenses_cancel_200_response_TEST
