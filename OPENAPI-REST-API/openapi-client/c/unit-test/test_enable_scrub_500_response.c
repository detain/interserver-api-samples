#ifndef enable_scrub_500_response_TEST
#define enable_scrub_500_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define enable_scrub_500_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/enable_scrub_500_response.h"
enable_scrub_500_response_t* instantiate_enable_scrub_500_response(int include_optional);



enable_scrub_500_response_t* instantiate_enable_scrub_500_response(int include_optional) {
  enable_scrub_500_response_t* enable_scrub_500_response = NULL;
  if (include_optional) {
    enable_scrub_500_response = enable_scrub_500_response_create(
      false,
      "Unable to enable Scrub on your IP."
    );
  } else {
    enable_scrub_500_response = enable_scrub_500_response_create(
      false,
      "Unable to enable Scrub on your IP."
    );
  }

  return enable_scrub_500_response;
}


#ifdef enable_scrub_500_response_MAIN

void test_enable_scrub_500_response(int include_optional) {
    enable_scrub_500_response_t* enable_scrub_500_response_1 = instantiate_enable_scrub_500_response(include_optional);

	cJSON* jsonenable_scrub_500_response_1 = enable_scrub_500_response_convertToJSON(enable_scrub_500_response_1);
	printf("enable_scrub_500_response :\n%s\n", cJSON_Print(jsonenable_scrub_500_response_1));
	enable_scrub_500_response_t* enable_scrub_500_response_2 = enable_scrub_500_response_parseFromJSON(jsonenable_scrub_500_response_1);
	cJSON* jsonenable_scrub_500_response_2 = enable_scrub_500_response_convertToJSON(enable_scrub_500_response_2);
	printf("repeating enable_scrub_500_response:\n%s\n", cJSON_Print(jsonenable_scrub_500_response_2));
}

int main() {
  test_enable_scrub_500_response(1);
  test_enable_scrub_500_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // enable_scrub_500_response_MAIN
#endif // enable_scrub_500_response_TEST
