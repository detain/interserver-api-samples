#ifndef mail_order_TEST
#define mail_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_order.h"
mail_order_t* instantiate_mail_order(int include_optional);



mail_order_t* instantiate_mail_order(int include_optional) {
  mail_order_t* mail_order = NULL;
  if (include_optional) {
    mail_order = mail_order_create(
      21472,
      "active",
      "mb21472",
      "0"
    );
  } else {
    mail_order = mail_order_create(
      21472,
      "active",
      "mb21472",
      "0"
    );
  }

  return mail_order;
}


#ifdef mail_order_MAIN

void test_mail_order(int include_optional) {
    mail_order_t* mail_order_1 = instantiate_mail_order(include_optional);

	cJSON* jsonmail_order_1 = mail_order_convertToJSON(mail_order_1);
	printf("mail_order :\n%s\n", cJSON_Print(jsonmail_order_1));
	mail_order_t* mail_order_2 = mail_order_parseFromJSON(jsonmail_order_1);
	cJSON* jsonmail_order_2 = mail_order_convertToJSON(mail_order_2);
	printf("repeating mail_order:\n%s\n", cJSON_Print(jsonmail_order_2));
}

int main() {
  test_mail_order(1);
  test_mail_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_order_MAIN
#endif // mail_order_TEST
