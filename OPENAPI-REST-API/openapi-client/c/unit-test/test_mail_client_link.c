#ifndef mail_client_link_TEST
#define mail_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_client_link.h"
mail_client_link_t* instantiate_mail_client_link(int include_optional);



mail_client_link_t* instantiate_mail_client_link(int include_optional) {
  mail_client_link_t* mail_client_link = NULL;
  if (include_optional) {
    mail_client_link = mail_client_link_create(
      "Invoices",
      "invoices",
      "fas fa-file-invoice-dollar fa-w-12",
      "0",
      "Invoice History",
      "0"
    );
  } else {
    mail_client_link = mail_client_link_create(
      "Invoices",
      "invoices",
      "fas fa-file-invoice-dollar fa-w-12",
      "0",
      "Invoice History",
      "0"
    );
  }

  return mail_client_link;
}


#ifdef mail_client_link_MAIN

void test_mail_client_link(int include_optional) {
    mail_client_link_t* mail_client_link_1 = instantiate_mail_client_link(include_optional);

	cJSON* jsonmail_client_link_1 = mail_client_link_convertToJSON(mail_client_link_1);
	printf("mail_client_link :\n%s\n", cJSON_Print(jsonmail_client_link_1));
	mail_client_link_t* mail_client_link_2 = mail_client_link_parseFromJSON(jsonmail_client_link_1);
	cJSON* jsonmail_client_link_2 = mail_client_link_convertToJSON(mail_client_link_2);
	printf("repeating mail_client_link:\n%s\n", cJSON_Print(jsonmail_client_link_2));
}

int main() {
  test_mail_client_link(1);
  test_mail_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_client_link_MAIN
#endif // mail_client_link_TEST
