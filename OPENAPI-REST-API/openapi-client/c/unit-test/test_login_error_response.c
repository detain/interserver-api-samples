#ifndef login_error_response_TEST
#define login_error_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define login_error_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/login_error_response.h"
login_error_response_t* instantiate_login_error_response(int include_optional);



login_error_response_t* instantiate_login_error_response(int include_optional) {
  login_error_response_t* login_error_response = NULL;
  if (include_optional) {
    login_error_response = login_error_response_create(
      "0",
      "0"
    );
  } else {
    login_error_response = login_error_response_create(
      "0",
      "0"
    );
  }

  return login_error_response;
}


#ifdef login_error_response_MAIN

void test_login_error_response(int include_optional) {
    login_error_response_t* login_error_response_1 = instantiate_login_error_response(include_optional);

	cJSON* jsonlogin_error_response_1 = login_error_response_convertToJSON(login_error_response_1);
	printf("login_error_response :\n%s\n", cJSON_Print(jsonlogin_error_response_1));
	login_error_response_t* login_error_response_2 = login_error_response_parseFromJSON(jsonlogin_error_response_1);
	cJSON* jsonlogin_error_response_2 = login_error_response_convertToJSON(login_error_response_2);
	printf("repeating login_error_response:\n%s\n", cJSON_Print(jsonlogin_error_response_2));
}

int main() {
  test_login_error_response(1);
  test_login_error_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // login_error_response_MAIN
#endif // login_error_response_TEST
