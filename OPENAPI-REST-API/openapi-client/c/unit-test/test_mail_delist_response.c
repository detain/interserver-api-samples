#ifndef mail_delist_response_TEST
#define mail_delist_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_delist_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_delist_response.h"
mail_delist_response_t* instantiate_mail_delist_response(int include_optional);



mail_delist_response_t* instantiate_mail_delist_response(int include_optional) {
  mail_delist_response_t* mail_delist_response = NULL;
  if (include_optional) {
    mail_delist_response = mail_delist_response_create(
      56,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    mail_delist_response = mail_delist_response_create(
      56,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return mail_delist_response;
}


#ifdef mail_delist_response_MAIN

void test_mail_delist_response(int include_optional) {
    mail_delist_response_t* mail_delist_response_1 = instantiate_mail_delist_response(include_optional);

	cJSON* jsonmail_delist_response_1 = mail_delist_response_convertToJSON(mail_delist_response_1);
	printf("mail_delist_response :\n%s\n", cJSON_Print(jsonmail_delist_response_1));
	mail_delist_response_t* mail_delist_response_2 = mail_delist_response_parseFromJSON(jsonmail_delist_response_1);
	cJSON* jsonmail_delist_response_2 = mail_delist_response_convertToJSON(mail_delist_response_2);
	printf("repeating mail_delist_response:\n%s\n", cJSON_Print(jsonmail_delist_response_2));
}

int main() {
  test_mail_delist_response(1);
  test_mail_delist_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_delist_response_MAIN
#endif // mail_delist_response_TEST
