#ifndef disable_scrub_500_response_TEST
#define disable_scrub_500_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define disable_scrub_500_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/disable_scrub_500_response.h"
disable_scrub_500_response_t* instantiate_disable_scrub_500_response(int include_optional);



disable_scrub_500_response_t* instantiate_disable_scrub_500_response(int include_optional) {
  disable_scrub_500_response_t* disable_scrub_500_response = NULL;
  if (include_optional) {
    disable_scrub_500_response = disable_scrub_500_response_create(
      false,
      "Unable to disable scrub on your IP."
    );
  } else {
    disable_scrub_500_response = disable_scrub_500_response_create(
      false,
      "Unable to disable scrub on your IP."
    );
  }

  return disable_scrub_500_response;
}


#ifdef disable_scrub_500_response_MAIN

void test_disable_scrub_500_response(int include_optional) {
    disable_scrub_500_response_t* disable_scrub_500_response_1 = instantiate_disable_scrub_500_response(include_optional);

	cJSON* jsondisable_scrub_500_response_1 = disable_scrub_500_response_convertToJSON(disable_scrub_500_response_1);
	printf("disable_scrub_500_response :\n%s\n", cJSON_Print(jsondisable_scrub_500_response_1));
	disable_scrub_500_response_t* disable_scrub_500_response_2 = disable_scrub_500_response_parseFromJSON(jsondisable_scrub_500_response_1);
	cJSON* jsondisable_scrub_500_response_2 = disable_scrub_500_response_convertToJSON(disable_scrub_500_response_2);
	printf("repeating disable_scrub_500_response:\n%s\n", cJSON_Print(jsondisable_scrub_500_response_2));
}

int main() {
  test_disable_scrub_500_response(1);
  test_disable_scrub_500_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // disable_scrub_500_response_MAIN
#endif // disable_scrub_500_response_TEST
