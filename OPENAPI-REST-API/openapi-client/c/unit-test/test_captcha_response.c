#ifndef captcha_response_TEST
#define captcha_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define captcha_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/captcha_response.h"
captcha_response_t* instantiate_captcha_response(int include_optional);



captcha_response_t* instantiate_captcha_response(int include_optional) {
  captcha_response_t* captcha_response = NULL;
  if (include_optional) {
    captcha_response = captcha_response_create(
      "data:image/jpeg;base64,/9j/4AAQ"
    );
  } else {
    captcha_response = captcha_response_create(
      "data:image/jpeg;base64,/9j/4AAQ"
    );
  }

  return captcha_response;
}


#ifdef captcha_response_MAIN

void test_captcha_response(int include_optional) {
    captcha_response_t* captcha_response_1 = instantiate_captcha_response(include_optional);

	cJSON* jsoncaptcha_response_1 = captcha_response_convertToJSON(captcha_response_1);
	printf("captcha_response :\n%s\n", cJSON_Print(jsoncaptcha_response_1));
	captcha_response_t* captcha_response_2 = captcha_response_parseFromJSON(jsoncaptcha_response_1);
	cJSON* jsoncaptcha_response_2 = captcha_response_convertToJSON(captcha_response_2);
	printf("repeating captcha_response:\n%s\n", cJSON_Print(jsoncaptcha_response_2));
}

int main() {
  test_captcha_response(1);
  test_captcha_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // captcha_response_MAIN
#endif // captcha_response_TEST
