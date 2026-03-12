#ifndef mail_schema_TEST
#define mail_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_schema.h"
mail_schema_t* instantiate_mail_schema(int include_optional);

#include "test_mail_service_info.c"
#include "test_mail_billing_details.c"
#include "test_mail_schema_extra_info_tables.c"
#include "test_mail_service_type.c"


mail_schema_t* instantiate_mail_schema(int include_optional) {
  mail_schema_t* mail_schema = NULL;
  if (include_optional) {
    mail_schema = mail_schema_create(
       // false, not to have infinite recursion
      instantiate_mail_service_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_mail_billing_details(0),
      "USD",
      "$",
      "MailBaby Mail",
       // false, not to have infinite recursion
      instantiate_mail_schema_extra_info_tables(0),
       // false, not to have infinite recursion
      instantiate_mail_service_type(0),
      "0",
      []
    );
  } else {
    mail_schema = mail_schema_create(
      NULL,
      list_createList(),
      NULL,
      "USD",
      "$",
      "MailBaby Mail",
      NULL,
      NULL,
      "0",
      []
    );
  }

  return mail_schema;
}


#ifdef mail_schema_MAIN

void test_mail_schema(int include_optional) {
    mail_schema_t* mail_schema_1 = instantiate_mail_schema(include_optional);

	cJSON* jsonmail_schema_1 = mail_schema_convertToJSON(mail_schema_1);
	printf("mail_schema :\n%s\n", cJSON_Print(jsonmail_schema_1));
	mail_schema_t* mail_schema_2 = mail_schema_parseFromJSON(jsonmail_schema_1);
	cJSON* jsonmail_schema_2 = mail_schema_convertToJSON(mail_schema_2);
	printf("repeating mail_schema:\n%s\n", cJSON_Print(jsonmail_schema_2));
}

int main() {
  test_mail_schema(1);
  test_mail_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_schema_MAIN
#endif // mail_schema_TEST
