#ifndef password_request_TEST
#define password_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define password_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/password_request.h"
password_request_t* instantiate_password_request(int include_optional);



password_request_t* instantiate_password_request(int include_optional) {
  password_request_t* password_request = NULL;
  if (include_optional) {
    password_request = password_request_create(
      "0"
    );
  } else {
    password_request = password_request_create(
      "0"
    );
  }

  return password_request;
}


#ifdef password_request_MAIN

void test_password_request(int include_optional) {
    password_request_t* password_request_1 = instantiate_password_request(include_optional);

	cJSON* jsonpassword_request_1 = password_request_convertToJSON(password_request_1);
	printf("password_request :\n%s\n", cJSON_Print(jsonpassword_request_1));
	password_request_t* password_request_2 = password_request_parseFromJSON(jsonpassword_request_1);
	cJSON* jsonpassword_request_2 = password_request_convertToJSON(password_request_2);
	printf("repeating password_request:\n%s\n", cJSON_Print(jsonpassword_request_2));
}

int main() {
  test_password_request(1);
  test_password_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // password_request_MAIN
#endif // password_request_TEST
