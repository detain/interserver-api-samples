#ifndef login_service_counts_TEST
#define login_service_counts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define login_service_counts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/login_service_counts.h"
login_service_counts_t* instantiate_login_service_counts(int include_optional);



login_service_counts_t* instantiate_login_service_counts(int include_optional) {
  login_service_counts_t* login_service_counts = NULL;
  if (include_optional) {
    login_service_counts = login_service_counts_create(
      205172,
      205172,
      205172
    );
  } else {
    login_service_counts = login_service_counts_create(
      205172,
      205172,
      205172
    );
  }

  return login_service_counts;
}


#ifdef login_service_counts_MAIN

void test_login_service_counts(int include_optional) {
    login_service_counts_t* login_service_counts_1 = instantiate_login_service_counts(include_optional);

	cJSON* jsonlogin_service_counts_1 = login_service_counts_convertToJSON(login_service_counts_1);
	printf("login_service_counts :\n%s\n", cJSON_Print(jsonlogin_service_counts_1));
	login_service_counts_t* login_service_counts_2 = login_service_counts_parseFromJSON(jsonlogin_service_counts_1);
	cJSON* jsonlogin_service_counts_2 = login_service_counts_convertToJSON(login_service_counts_2);
	printf("repeating login_service_counts:\n%s\n", cJSON_Print(jsonlogin_service_counts_2));
}

int main() {
  test_login_service_counts(1);
  test_login_service_counts(0);

  printf("Hello world \n");
  return 0;
}

#endif // login_service_counts_MAIN
#endif // login_service_counts_TEST
