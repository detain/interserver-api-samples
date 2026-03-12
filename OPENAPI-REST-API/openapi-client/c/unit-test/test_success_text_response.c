#ifndef success_text_response_TEST
#define success_text_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define success_text_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/success_text_response.h"
success_text_response_t* instantiate_success_text_response(int include_optional);



success_text_response_t* instantiate_success_text_response(int include_optional) {
  success_text_response_t* success_text_response = NULL;
  if (include_optional) {
    success_text_response = success_text_response_create(
      1,
      "0",
      "0"
    );
  } else {
    success_text_response = success_text_response_create(
      1,
      "0",
      "0"
    );
  }

  return success_text_response;
}


#ifdef success_text_response_MAIN

void test_success_text_response(int include_optional) {
    success_text_response_t* success_text_response_1 = instantiate_success_text_response(include_optional);

	cJSON* jsonsuccess_text_response_1 = success_text_response_convertToJSON(success_text_response_1);
	printf("success_text_response :\n%s\n", cJSON_Print(jsonsuccess_text_response_1));
	success_text_response_t* success_text_response_2 = success_text_response_parseFromJSON(jsonsuccess_text_response_1);
	cJSON* jsonsuccess_text_response_2 = success_text_response_convertToJSON(success_text_response_2);
	printf("repeating success_text_response:\n%s\n", cJSON_Print(jsonsuccess_text_response_2));
}

int main() {
  test_success_text_response(1);
  test_success_text_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // success_text_response_MAIN
#endif // success_text_response_TEST
