#ifndef login_submission_example_g_recaptcha_response_TEST
#define login_submission_example_g_recaptcha_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define login_submission_example_g_recaptcha_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/login_submission_example_g_recaptcha_response.h"
login_submission_example_g_recaptcha_response_t* instantiate_login_submission_example_g_recaptcha_response(int include_optional);

#include "test_login_submission_example_g_recaptcha_response_dep.c"


login_submission_example_g_recaptcha_response_t* instantiate_login_submission_example_g_recaptcha_response(int include_optional) {
  login_submission_example_g_recaptcha_response_t* login_submission_example_g_recaptcha_response = NULL;
  if (include_optional) {
    login_submission_example_g_recaptcha_response = login_submission_example_g_recaptcha_response_create(
      1,
       // false, not to have infinite recursion
      instantiate_login_submission_example_g_recaptcha_response_dep(0),
      1,
      "0",
      "0"
    );
  } else {
    login_submission_example_g_recaptcha_response = login_submission_example_g_recaptcha_response_create(
      1,
      NULL,
      1,
      "0",
      "0"
    );
  }

  return login_submission_example_g_recaptcha_response;
}


#ifdef login_submission_example_g_recaptcha_response_MAIN

void test_login_submission_example_g_recaptcha_response(int include_optional) {
    login_submission_example_g_recaptcha_response_t* login_submission_example_g_recaptcha_response_1 = instantiate_login_submission_example_g_recaptcha_response(include_optional);

	cJSON* jsonlogin_submission_example_g_recaptcha_response_1 = login_submission_example_g_recaptcha_response_convertToJSON(login_submission_example_g_recaptcha_response_1);
	printf("login_submission_example_g_recaptcha_response :\n%s\n", cJSON_Print(jsonlogin_submission_example_g_recaptcha_response_1));
	login_submission_example_g_recaptcha_response_t* login_submission_example_g_recaptcha_response_2 = login_submission_example_g_recaptcha_response_parseFromJSON(jsonlogin_submission_example_g_recaptcha_response_1);
	cJSON* jsonlogin_submission_example_g_recaptcha_response_2 = login_submission_example_g_recaptcha_response_convertToJSON(login_submission_example_g_recaptcha_response_2);
	printf("repeating login_submission_example_g_recaptcha_response:\n%s\n", cJSON_Print(jsonlogin_submission_example_g_recaptcha_response_2));
}

int main() {
  test_login_submission_example_g_recaptcha_response(1);
  test_login_submission_example_g_recaptcha_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // login_submission_example_g_recaptcha_response_MAIN
#endif // login_submission_example_g_recaptcha_response_TEST
