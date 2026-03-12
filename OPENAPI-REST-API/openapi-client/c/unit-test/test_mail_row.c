#ifndef mail_row_TEST
#define mail_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_row.h"
mail_row_t* instantiate_mail_row(int include_optional);



mail_row_t* instantiate_mail_row(int include_optional) {
  mail_row_t* mail_row = NULL;
  if (include_optional) {
    mail_row = mail_row_create(
      "5652",
      "5.99",
      "mb5652",
      "expired",
      "MailBaby Mail"
    );
  } else {
    mail_row = mail_row_create(
      "5652",
      "5.99",
      "mb5652",
      "expired",
      "MailBaby Mail"
    );
  }

  return mail_row;
}


#ifdef mail_row_MAIN

void test_mail_row(int include_optional) {
    mail_row_t* mail_row_1 = instantiate_mail_row(include_optional);

	cJSON* jsonmail_row_1 = mail_row_convertToJSON(mail_row_1);
	printf("mail_row :\n%s\n", cJSON_Print(jsonmail_row_1));
	mail_row_t* mail_row_2 = mail_row_parseFromJSON(jsonmail_row_1);
	cJSON* jsonmail_row_2 = mail_row_convertToJSON(mail_row_2);
	printf("repeating mail_row:\n%s\n", cJSON_Print(jsonmail_row_2));
}

int main() {
  test_mail_row(1);
  test_mail_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_row_MAIN
#endif // mail_row_TEST
