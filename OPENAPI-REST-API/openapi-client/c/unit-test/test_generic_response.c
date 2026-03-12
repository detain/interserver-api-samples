#ifndef generic_response_TEST
#define generic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define generic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/generic_response.h"
generic_response_t* instantiate_generic_response(int include_optional);



generic_response_t* instantiate_generic_response(int include_optional) {
  generic_response_t* generic_response = NULL;
  if (include_optional) {
    generic_response = generic_response_create(
      "0",
      "0"
    );
  } else {
    generic_response = generic_response_create(
      "0",
      "0"
    );
  }

  return generic_response;
}


#ifdef generic_response_MAIN

void test_generic_response(int include_optional) {
    generic_response_t* generic_response_1 = instantiate_generic_response(include_optional);

	cJSON* jsongeneric_response_1 = generic_response_convertToJSON(generic_response_1);
	printf("generic_response :\n%s\n", cJSON_Print(jsongeneric_response_1));
	generic_response_t* generic_response_2 = generic_response_parseFromJSON(jsongeneric_response_1);
	cJSON* jsongeneric_response_2 = generic_response_convertToJSON(generic_response_2);
	printf("repeating generic_response:\n%s\n", cJSON_Print(jsongeneric_response_2));
}

int main() {
  test_generic_response(1);
  test_generic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // generic_response_MAIN
#endif // generic_response_TEST
