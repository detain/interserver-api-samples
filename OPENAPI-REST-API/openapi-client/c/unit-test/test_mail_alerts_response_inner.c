#ifndef mail_alerts_response_inner_TEST
#define mail_alerts_response_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_alerts_response_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_alerts_response_inner.h"
mail_alerts_response_inner_t* instantiate_mail_alerts_response_inner(int include_optional);



mail_alerts_response_inner_t* instantiate_mail_alerts_response_inner(int include_optional) {
  mail_alerts_response_inner_t* mail_alerts_response_inner = NULL;
  if (include_optional) {
    mail_alerts_response_inner = mail_alerts_response_inner_create(
      56,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    mail_alerts_response_inner = mail_alerts_response_inner_create(
      56,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return mail_alerts_response_inner;
}


#ifdef mail_alerts_response_inner_MAIN

void test_mail_alerts_response_inner(int include_optional) {
    mail_alerts_response_inner_t* mail_alerts_response_inner_1 = instantiate_mail_alerts_response_inner(include_optional);

	cJSON* jsonmail_alerts_response_inner_1 = mail_alerts_response_inner_convertToJSON(mail_alerts_response_inner_1);
	printf("mail_alerts_response_inner :\n%s\n", cJSON_Print(jsonmail_alerts_response_inner_1));
	mail_alerts_response_inner_t* mail_alerts_response_inner_2 = mail_alerts_response_inner_parseFromJSON(jsonmail_alerts_response_inner_1);
	cJSON* jsonmail_alerts_response_inner_2 = mail_alerts_response_inner_convertToJSON(mail_alerts_response_inner_2);
	printf("repeating mail_alerts_response_inner:\n%s\n", cJSON_Print(jsonmail_alerts_response_inner_2));
}

int main() {
  test_mail_alerts_response_inner(1);
  test_mail_alerts_response_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_alerts_response_inner_MAIN
#endif // mail_alerts_response_inner_TEST
