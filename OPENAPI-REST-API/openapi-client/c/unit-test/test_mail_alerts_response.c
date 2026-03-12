#ifndef mail_alerts_response_TEST
#define mail_alerts_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_alerts_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_alerts_response.h"
mail_alerts_response_t* instantiate_mail_alerts_response(int include_optional);



mail_alerts_response_t* instantiate_mail_alerts_response(int include_optional) {
  mail_alerts_response_t* mail_alerts_response = NULL;
  if (include_optional) {
    mail_alerts_response = mail_alerts_response_create(
    );
  } else {
    mail_alerts_response = mail_alerts_response_create(
    );
  }

  return mail_alerts_response;
}


#ifdef mail_alerts_response_MAIN

void test_mail_alerts_response(int include_optional) {
    mail_alerts_response_t* mail_alerts_response_1 = instantiate_mail_alerts_response(include_optional);

	cJSON* jsonmail_alerts_response_1 = mail_alerts_response_convertToJSON(mail_alerts_response_1);
	printf("mail_alerts_response :\n%s\n", cJSON_Print(jsonmail_alerts_response_1));
	mail_alerts_response_t* mail_alerts_response_2 = mail_alerts_response_parseFromJSON(jsonmail_alerts_response_1);
	cJSON* jsonmail_alerts_response_2 = mail_alerts_response_convertToJSON(mail_alerts_response_2);
	printf("repeating mail_alerts_response:\n%s\n", cJSON_Print(jsonmail_alerts_response_2));
}

int main() {
  test_mail_alerts_response(1);
  test_mail_alerts_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_alerts_response_MAIN
#endif // mail_alerts_response_TEST
