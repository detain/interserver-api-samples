#ifndef webhosting_cancel_200_response_TEST
#define webhosting_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhosting_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhosting_cancel_200_response.h"
webhosting_cancel_200_response_t* instantiate_webhosting_cancel_200_response(int include_optional);



webhosting_cancel_200_response_t* instantiate_webhosting_cancel_200_response(int include_optional) {
  webhosting_cancel_200_response_t* webhosting_cancel_200_response = NULL;
  if (include_optional) {
    webhosting_cancel_200_response = webhosting_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    webhosting_cancel_200_response = webhosting_cancel_200_response_create(
      1,
      "0"
    );
  }

  return webhosting_cancel_200_response;
}


#ifdef webhosting_cancel_200_response_MAIN

void test_webhosting_cancel_200_response(int include_optional) {
    webhosting_cancel_200_response_t* webhosting_cancel_200_response_1 = instantiate_webhosting_cancel_200_response(include_optional);

	cJSON* jsonwebhosting_cancel_200_response_1 = webhosting_cancel_200_response_convertToJSON(webhosting_cancel_200_response_1);
	printf("webhosting_cancel_200_response :\n%s\n", cJSON_Print(jsonwebhosting_cancel_200_response_1));
	webhosting_cancel_200_response_t* webhosting_cancel_200_response_2 = webhosting_cancel_200_response_parseFromJSON(jsonwebhosting_cancel_200_response_1);
	cJSON* jsonwebhosting_cancel_200_response_2 = webhosting_cancel_200_response_convertToJSON(webhosting_cancel_200_response_2);
	printf("repeating webhosting_cancel_200_response:\n%s\n", cJSON_Print(jsonwebhosting_cancel_200_response_2));
}

int main() {
  test_webhosting_cancel_200_response(1);
  test_webhosting_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhosting_cancel_200_response_MAIN
#endif // webhosting_cancel_200_response_TEST
