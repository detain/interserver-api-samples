#ifndef mail_service_info_TEST
#define mail_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_service_info.h"
mail_service_info_t* instantiate_mail_service_info(int include_optional);



mail_service_info_t* instantiate_mail_service_info(int include_optional) {
  mail_service_info_t* mail_service_info = NULL;
  if (include_optional) {
    mail_service_info = mail_service_info_create(
      "43171",
      "10880",
      "USD",
      "2023-07-16T00:55:05.000Z",
      "771282",
      "0",
      "expired",
      "20410322",
      "0",
      "0",
      "0",
      "[]",
      "0",
      "0"
    );
  } else {
    mail_service_info = mail_service_info_create(
      "43171",
      "10880",
      "USD",
      "2023-07-16T00:55:05.000Z",
      "771282",
      "0",
      "expired",
      "20410322",
      "0",
      "0",
      "0",
      "[]",
      "0",
      "0"
    );
  }

  return mail_service_info;
}


#ifdef mail_service_info_MAIN

void test_mail_service_info(int include_optional) {
    mail_service_info_t* mail_service_info_1 = instantiate_mail_service_info(include_optional);

	cJSON* jsonmail_service_info_1 = mail_service_info_convertToJSON(mail_service_info_1);
	printf("mail_service_info :\n%s\n", cJSON_Print(jsonmail_service_info_1));
	mail_service_info_t* mail_service_info_2 = mail_service_info_parseFromJSON(jsonmail_service_info_1);
	cJSON* jsonmail_service_info_2 = mail_service_info_convertToJSON(mail_service_info_2);
	printf("repeating mail_service_info:\n%s\n", cJSON_Print(jsonmail_service_info_2));
}

int main() {
  test_mail_service_info(1);
  test_mail_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_service_info_MAIN
#endif // mail_service_info_TEST
