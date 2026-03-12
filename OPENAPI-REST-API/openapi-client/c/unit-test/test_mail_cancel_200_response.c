#ifndef mail_cancel_200_response_TEST
#define mail_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_cancel_200_response.h"
mail_cancel_200_response_t* instantiate_mail_cancel_200_response(int include_optional);



mail_cancel_200_response_t* instantiate_mail_cancel_200_response(int include_optional) {
  mail_cancel_200_response_t* mail_cancel_200_response = NULL;
  if (include_optional) {
    mail_cancel_200_response = mail_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    mail_cancel_200_response = mail_cancel_200_response_create(
      1,
      "0"
    );
  }

  return mail_cancel_200_response;
}


#ifdef mail_cancel_200_response_MAIN

void test_mail_cancel_200_response(int include_optional) {
    mail_cancel_200_response_t* mail_cancel_200_response_1 = instantiate_mail_cancel_200_response(include_optional);

	cJSON* jsonmail_cancel_200_response_1 = mail_cancel_200_response_convertToJSON(mail_cancel_200_response_1);
	printf("mail_cancel_200_response :\n%s\n", cJSON_Print(jsonmail_cancel_200_response_1));
	mail_cancel_200_response_t* mail_cancel_200_response_2 = mail_cancel_200_response_parseFromJSON(jsonmail_cancel_200_response_1);
	cJSON* jsonmail_cancel_200_response_2 = mail_cancel_200_response_convertToJSON(mail_cancel_200_response_2);
	printf("repeating mail_cancel_200_response:\n%s\n", cJSON_Print(jsonmail_cancel_200_response_2));
}

int main() {
  test_mail_cancel_200_response(1);
  test_mail_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_cancel_200_response_MAIN
#endif // mail_cancel_200_response_TEST
