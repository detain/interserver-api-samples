#ifndef email_address_name_TEST
#define email_address_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_address_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_address_name.h"
email_address_name_t* instantiate_email_address_name(int include_optional);



email_address_name_t* instantiate_email_address_name(int include_optional) {
  email_address_name_t* email_address_name = NULL;
  if (include_optional) {
    email_address_name = email_address_name_create(
      "user@domain.com",
      "John Smith"
    );
  } else {
    email_address_name = email_address_name_create(
      "user@domain.com",
      "John Smith"
    );
  }

  return email_address_name;
}


#ifdef email_address_name_MAIN

void test_email_address_name(int include_optional) {
    email_address_name_t* email_address_name_1 = instantiate_email_address_name(include_optional);

	cJSON* jsonemail_address_name_1 = email_address_name_convertToJSON(email_address_name_1);
	printf("email_address_name :\n%s\n", cJSON_Print(jsonemail_address_name_1));
	email_address_name_t* email_address_name_2 = email_address_name_parseFromJSON(jsonemail_address_name_1);
	cJSON* jsonemail_address_name_2 = email_address_name_convertToJSON(email_address_name_2);
	printf("repeating email_address_name:\n%s\n", cJSON_Print(jsonemail_address_name_2));
}

int main() {
  test_email_address_name(1);
  test_email_address_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_address_name_MAIN
#endif // email_address_name_TEST
