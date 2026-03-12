#ifndef mail_alert_update_request_TEST
#define mail_alert_update_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_alert_update_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_alert_update_request.h"
mail_alert_update_request_t* instantiate_mail_alert_update_request(int include_optional);



mail_alert_update_request_t* instantiate_mail_alert_update_request(int include_optional) {
  mail_alert_update_request_t* mail_alert_update_request = NULL;
  if (include_optional) {
    mail_alert_update_request = mail_alert_update_request_create(
      56,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    mail_alert_update_request = mail_alert_update_request_create(
      56,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return mail_alert_update_request;
}


#ifdef mail_alert_update_request_MAIN

void test_mail_alert_update_request(int include_optional) {
    mail_alert_update_request_t* mail_alert_update_request_1 = instantiate_mail_alert_update_request(include_optional);

	cJSON* jsonmail_alert_update_request_1 = mail_alert_update_request_convertToJSON(mail_alert_update_request_1);
	printf("mail_alert_update_request :\n%s\n", cJSON_Print(jsonmail_alert_update_request_1));
	mail_alert_update_request_t* mail_alert_update_request_2 = mail_alert_update_request_parseFromJSON(jsonmail_alert_update_request_1);
	cJSON* jsonmail_alert_update_request_2 = mail_alert_update_request_convertToJSON(mail_alert_update_request_2);
	printf("repeating mail_alert_update_request:\n%s\n", cJSON_Print(jsonmail_alert_update_request_2));
}

int main() {
  test_mail_alert_update_request(1);
  test_mail_alert_update_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_alert_update_request_MAIN
#endif // mail_alert_update_request_TEST
