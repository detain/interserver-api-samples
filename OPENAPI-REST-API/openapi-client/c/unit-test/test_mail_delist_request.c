#ifndef mail_delist_request_TEST
#define mail_delist_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_delist_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_delist_request.h"
mail_delist_request_t* instantiate_mail_delist_request(int include_optional);



mail_delist_request_t* instantiate_mail_delist_request(int include_optional) {
  mail_delist_request_t* mail_delist_request = NULL;
  if (include_optional) {
    mail_delist_request = mail_delist_request_create(
      "0"
    );
  } else {
    mail_delist_request = mail_delist_request_create(
      "0"
    );
  }

  return mail_delist_request;
}


#ifdef mail_delist_request_MAIN

void test_mail_delist_request(int include_optional) {
    mail_delist_request_t* mail_delist_request_1 = instantiate_mail_delist_request(include_optional);

	cJSON* jsonmail_delist_request_1 = mail_delist_request_convertToJSON(mail_delist_request_1);
	printf("mail_delist_request :\n%s\n", cJSON_Print(jsonmail_delist_request_1));
	mail_delist_request_t* mail_delist_request_2 = mail_delist_request_parseFromJSON(jsonmail_delist_request_1);
	cJSON* jsonmail_delist_request_2 = mail_delist_request_convertToJSON(mail_delist_request_2);
	printf("repeating mail_delist_request:\n%s\n", cJSON_Print(jsonmail_delist_request_2));
}

int main() {
  test_mail_delist_request(1);
  test_mail_delist_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_delist_request_MAIN
#endif // mail_delist_request_TEST
