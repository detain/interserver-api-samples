#ifndef login_info_TEST
#define login_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define login_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/login_info.h"
login_info_t* instantiate_login_info(int include_optional);

#include "test_login_service_counts.c"


login_info_t* instantiate_login_info(int include_optional) {
  login_info_t* login_info = NULL;
  if (include_optional) {
    login_info = login_info_create(
      "data:image/jpeg;base64,/9j/",
      {"vps":290201,"websites":205172,"servers":27940},
      "//my.interserver.net/images/logos/mystaging.png",
      "en-US"
    );
  } else {
    login_info = login_info_create(
      "data:image/jpeg;base64,/9j/",
      {"vps":290201,"websites":205172,"servers":27940},
      "//my.interserver.net/images/logos/mystaging.png",
      "en-US"
    );
  }

  return login_info;
}


#ifdef login_info_MAIN

void test_login_info(int include_optional) {
    login_info_t* login_info_1 = instantiate_login_info(include_optional);

	cJSON* jsonlogin_info_1 = login_info_convertToJSON(login_info_1);
	printf("login_info :\n%s\n", cJSON_Print(jsonlogin_info_1));
	login_info_t* login_info_2 = login_info_parseFromJSON(jsonlogin_info_1);
	cJSON* jsonlogin_info_2 = login_info_convertToJSON(login_info_2);
	printf("repeating login_info:\n%s\n", cJSON_Print(jsonlogin_info_2));
}

int main() {
  test_login_info(1);
  test_login_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // login_info_MAIN
#endif // login_info_TEST
