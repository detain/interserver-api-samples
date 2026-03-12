#ifndef mail_deliverability_response_TEST
#define mail_deliverability_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_deliverability_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_deliverability_response.h"
mail_deliverability_response_t* instantiate_mail_deliverability_response(int include_optional);



mail_deliverability_response_t* instantiate_mail_deliverability_response(int include_optional) {
  mail_deliverability_response_t* mail_deliverability_response = NULL;
  if (include_optional) {
    mail_deliverability_response = mail_deliverability_response_create(
      0,
      1.337,
      list_createList()
    );
  } else {
    mail_deliverability_response = mail_deliverability_response_create(
      0,
      1.337,
      list_createList()
    );
  }

  return mail_deliverability_response;
}


#ifdef mail_deliverability_response_MAIN

void test_mail_deliverability_response(int include_optional) {
    mail_deliverability_response_t* mail_deliverability_response_1 = instantiate_mail_deliverability_response(include_optional);

	cJSON* jsonmail_deliverability_response_1 = mail_deliverability_response_convertToJSON(mail_deliverability_response_1);
	printf("mail_deliverability_response :\n%s\n", cJSON_Print(jsonmail_deliverability_response_1));
	mail_deliverability_response_t* mail_deliverability_response_2 = mail_deliverability_response_parseFromJSON(jsonmail_deliverability_response_1);
	cJSON* jsonmail_deliverability_response_2 = mail_deliverability_response_convertToJSON(mail_deliverability_response_2);
	printf("repeating mail_deliverability_response:\n%s\n", cJSON_Print(jsonmail_deliverability_response_2));
}

int main() {
  test_mail_deliverability_response(1);
  test_mail_deliverability_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_deliverability_response_MAIN
#endif // mail_deliverability_response_TEST
