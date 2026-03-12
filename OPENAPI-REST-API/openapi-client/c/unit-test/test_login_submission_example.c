#ifndef login_submission_example_TEST
#define login_submission_example_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define login_submission_example_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/login_submission_example.h"
login_submission_example_t* instantiate_login_submission_example(int include_optional);

#include "test_login_submission_example_g_recaptcha_response.c"


login_submission_example_t* instantiate_login_submission_example(int include_optional) {
  login_submission_example_t* login_submission_example = NULL;
  if (include_optional) {
    login_submission_example = login_submission_example_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_login_submission_example_g_recaptcha_response(0),
      "0"
    );
  } else {
    login_submission_example = login_submission_example_create(
      "0",
      "0",
      "0",
      NULL,
      "0"
    );
  }

  return login_submission_example;
}


#ifdef login_submission_example_MAIN

void test_login_submission_example(int include_optional) {
    login_submission_example_t* login_submission_example_1 = instantiate_login_submission_example(include_optional);

	cJSON* jsonlogin_submission_example_1 = login_submission_example_convertToJSON(login_submission_example_1);
	printf("login_submission_example :\n%s\n", cJSON_Print(jsonlogin_submission_example_1));
	login_submission_example_t* login_submission_example_2 = login_submission_example_parseFromJSON(jsonlogin_submission_example_1);
	cJSON* jsonlogin_submission_example_2 = login_submission_example_convertToJSON(login_submission_example_2);
	printf("repeating login_submission_example:\n%s\n", cJSON_Print(jsonlogin_submission_example_2));
}

int main() {
  test_login_submission_example(1);
  test_login_submission_example(0);

  printf("Hello world \n");
  return 0;
}

#endif // login_submission_example_MAIN
#endif // login_submission_example_TEST
