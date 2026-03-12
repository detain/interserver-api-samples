#ifndef mail_billing_details_TEST
#define mail_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_billing_details.h"
mail_billing_details_t* instantiate_mail_billing_details(int include_optional);



mail_billing_details_t* instantiate_mail_billing_details(int include_optional) {
  mail_billing_details_t* mail_billing_details = NULL;
  if (include_optional) {
    mail_billing_details = mail_billing_details_create(
      "July 16, 2023",
      "Unpaid",
      "Monthly",
      "2023-08-16T00:55:05.000Z",
      "August 16, 2023",
      "USD",
      "$",
      "1.00",
      [],
      "[]"
    );
  } else {
    mail_billing_details = mail_billing_details_create(
      "July 16, 2023",
      "Unpaid",
      "Monthly",
      "2023-08-16T00:55:05.000Z",
      "August 16, 2023",
      "USD",
      "$",
      "1.00",
      [],
      "[]"
    );
  }

  return mail_billing_details;
}


#ifdef mail_billing_details_MAIN

void test_mail_billing_details(int include_optional) {
    mail_billing_details_t* mail_billing_details_1 = instantiate_mail_billing_details(include_optional);

	cJSON* jsonmail_billing_details_1 = mail_billing_details_convertToJSON(mail_billing_details_1);
	printf("mail_billing_details :\n%s\n", cJSON_Print(jsonmail_billing_details_1));
	mail_billing_details_t* mail_billing_details_2 = mail_billing_details_parseFromJSON(jsonmail_billing_details_1);
	cJSON* jsonmail_billing_details_2 = mail_billing_details_convertToJSON(mail_billing_details_2);
	printf("repeating mail_billing_details:\n%s\n", cJSON_Print(jsonmail_billing_details_2));
}

int main() {
  test_mail_billing_details(1);
  test_mail_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_billing_details_MAIN
#endif // mail_billing_details_TEST
