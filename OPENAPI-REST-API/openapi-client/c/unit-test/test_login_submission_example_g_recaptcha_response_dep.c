#ifndef login_submission_example_g_recaptcha_response_dep_TEST
#define login_submission_example_g_recaptcha_response_dep_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define login_submission_example_g_recaptcha_response_dep_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/login_submission_example_g_recaptcha_response_dep.h"
login_submission_example_g_recaptcha_response_dep_t* instantiate_login_submission_example_g_recaptcha_response_dep(int include_optional);



login_submission_example_g_recaptcha_response_dep_t* instantiate_login_submission_example_g_recaptcha_response_dep(int include_optional) {
  login_submission_example_g_recaptcha_response_dep_t* login_submission_example_g_recaptcha_response_dep = NULL;
  if (include_optional) {
    login_submission_example_g_recaptcha_response_dep = login_submission_example_g_recaptcha_response_dep_create(
      56,
      56
    );
  } else {
    login_submission_example_g_recaptcha_response_dep = login_submission_example_g_recaptcha_response_dep_create(
      56,
      56
    );
  }

  return login_submission_example_g_recaptcha_response_dep;
}


#ifdef login_submission_example_g_recaptcha_response_dep_MAIN

void test_login_submission_example_g_recaptcha_response_dep(int include_optional) {
    login_submission_example_g_recaptcha_response_dep_t* login_submission_example_g_recaptcha_response_dep_1 = instantiate_login_submission_example_g_recaptcha_response_dep(include_optional);

	cJSON* jsonlogin_submission_example_g_recaptcha_response_dep_1 = login_submission_example_g_recaptcha_response_dep_convertToJSON(login_submission_example_g_recaptcha_response_dep_1);
	printf("login_submission_example_g_recaptcha_response_dep :\n%s\n", cJSON_Print(jsonlogin_submission_example_g_recaptcha_response_dep_1));
	login_submission_example_g_recaptcha_response_dep_t* login_submission_example_g_recaptcha_response_dep_2 = login_submission_example_g_recaptcha_response_dep_parseFromJSON(jsonlogin_submission_example_g_recaptcha_response_dep_1);
	cJSON* jsonlogin_submission_example_g_recaptcha_response_dep_2 = login_submission_example_g_recaptcha_response_dep_convertToJSON(login_submission_example_g_recaptcha_response_dep_2);
	printf("repeating login_submission_example_g_recaptcha_response_dep:\n%s\n", cJSON_Print(jsonlogin_submission_example_g_recaptcha_response_dep_2));
}

int main() {
  test_login_submission_example_g_recaptcha_response_dep(1);
  test_login_submission_example_g_recaptcha_response_dep(0);

  printf("Hello world \n");
  return 0;
}

#endif // login_submission_example_g_recaptcha_response_dep_MAIN
#endif // login_submission_example_g_recaptcha_response_dep_TEST
