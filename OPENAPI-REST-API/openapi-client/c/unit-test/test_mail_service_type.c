#ifndef mail_service_type_TEST
#define mail_service_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_service_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_service_type.h"
mail_service_type_t* instantiate_mail_service_type(int include_optional);



mail_service_type_t* instantiate_mail_service_type(int include_optional) {
  mail_service_type_t* mail_service_type = NULL;
  if (include_optional) {
    mail_service_type = mail_service_type_create(
      "10880",
      "MailBaby Mail",
      "1.00",
      "800",
      "1",
      "800",
      "0",
      "0",
      "mail"
    );
  } else {
    mail_service_type = mail_service_type_create(
      "10880",
      "MailBaby Mail",
      "1.00",
      "800",
      "1",
      "800",
      "0",
      "0",
      "mail"
    );
  }

  return mail_service_type;
}


#ifdef mail_service_type_MAIN

void test_mail_service_type(int include_optional) {
    mail_service_type_t* mail_service_type_1 = instantiate_mail_service_type(include_optional);

	cJSON* jsonmail_service_type_1 = mail_service_type_convertToJSON(mail_service_type_1);
	printf("mail_service_type :\n%s\n", cJSON_Print(jsonmail_service_type_1));
	mail_service_type_t* mail_service_type_2 = mail_service_type_parseFromJSON(jsonmail_service_type_1);
	cJSON* jsonmail_service_type_2 = mail_service_type_convertToJSON(mail_service_type_2);
	printf("repeating mail_service_type:\n%s\n", cJSON_Print(jsonmail_service_type_2));
}

int main() {
  test_mail_service_type(1);
  test_mail_service_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_service_type_MAIN
#endif // mail_service_type_TEST
