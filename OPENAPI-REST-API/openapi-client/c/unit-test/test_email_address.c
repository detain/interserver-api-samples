#ifndef email_address_TEST
#define email_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_address.h"
email_address_t* instantiate_email_address(int include_optional);



email_address_t* instantiate_email_address(int include_optional) {
  email_address_t* email_address = NULL;
  if (include_optional) {
    email_address = email_address_create(
      "user@domain.com"
    );
  } else {
    email_address = email_address_create(
      "user@domain.com"
    );
  }

  return email_address;
}


#ifdef email_address_MAIN

void test_email_address(int include_optional) {
    email_address_t* email_address_1 = instantiate_email_address(include_optional);

	cJSON* jsonemail_address_1 = email_address_convertToJSON(email_address_1);
	printf("email_address :\n%s\n", cJSON_Print(jsonemail_address_1));
	email_address_t* email_address_2 = email_address_parseFromJSON(jsonemail_address_1);
	cJSON* jsonemail_address_2 = email_address_convertToJSON(email_address_2);
	printf("repeating email_address:\n%s\n", cJSON_Print(jsonemail_address_2));
}

int main() {
  test_email_address(1);
  test_email_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_address_MAIN
#endif // email_address_TEST
