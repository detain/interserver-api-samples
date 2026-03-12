#ifndef login_success_response_TEST
#define login_success_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define login_success_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/login_success_response.h"
login_success_response_t* instantiate_login_success_response(int include_optional);



login_success_response_t* instantiate_login_success_response(int include_optional) {
  login_success_response_t* login_success_response = NULL;
  if (include_optional) {
    login_success_response = login_success_response_create(
      "0",
      56,
      "0",
      "0",
      "0"
    );
  } else {
    login_success_response = login_success_response_create(
      "0",
      56,
      "0",
      "0",
      "0"
    );
  }

  return login_success_response;
}


#ifdef login_success_response_MAIN

void test_login_success_response(int include_optional) {
    login_success_response_t* login_success_response_1 = instantiate_login_success_response(include_optional);

	cJSON* jsonlogin_success_response_1 = login_success_response_convertToJSON(login_success_response_1);
	printf("login_success_response :\n%s\n", cJSON_Print(jsonlogin_success_response_1));
	login_success_response_t* login_success_response_2 = login_success_response_parseFromJSON(jsonlogin_success_response_1);
	cJSON* jsonlogin_success_response_2 = login_success_response_convertToJSON(login_success_response_2);
	printf("repeating login_success_response:\n%s\n", cJSON_Print(jsonlogin_success_response_2));
}

int main() {
  test_login_success_response(1);
  test_login_success_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // login_success_response_MAIN
#endif // login_success_response_TEST
