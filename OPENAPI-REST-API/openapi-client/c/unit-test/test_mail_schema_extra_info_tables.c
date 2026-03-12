#ifndef mail_schema_extra_info_tables_TEST
#define mail_schema_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_schema_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_schema_extra_info_tables.h"
mail_schema_extra_info_tables_t* instantiate_mail_schema_extra_info_tables(int include_optional);

#include "test_mail_extra_info_table.c"
#include "test_mail_tutorials_table.c"


mail_schema_extra_info_tables_t* instantiate_mail_schema_extra_info_tables(int include_optional) {
  mail_schema_extra_info_tables_t* mail_schema_extra_info_tables = NULL;
  if (include_optional) {
    mail_schema_extra_info_tables = mail_schema_extra_info_tables_create(
       // false, not to have infinite recursion
      instantiate_mail_extra_info_table(0),
       // false, not to have infinite recursion
      instantiate_mail_tutorials_table(0)
    );
  } else {
    mail_schema_extra_info_tables = mail_schema_extra_info_tables_create(
      NULL,
      NULL
    );
  }

  return mail_schema_extra_info_tables;
}


#ifdef mail_schema_extra_info_tables_MAIN

void test_mail_schema_extra_info_tables(int include_optional) {
    mail_schema_extra_info_tables_t* mail_schema_extra_info_tables_1 = instantiate_mail_schema_extra_info_tables(include_optional);

	cJSON* jsonmail_schema_extra_info_tables_1 = mail_schema_extra_info_tables_convertToJSON(mail_schema_extra_info_tables_1);
	printf("mail_schema_extra_info_tables :\n%s\n", cJSON_Print(jsonmail_schema_extra_info_tables_1));
	mail_schema_extra_info_tables_t* mail_schema_extra_info_tables_2 = mail_schema_extra_info_tables_parseFromJSON(jsonmail_schema_extra_info_tables_1);
	cJSON* jsonmail_schema_extra_info_tables_2 = mail_schema_extra_info_tables_convertToJSON(mail_schema_extra_info_tables_2);
	printf("repeating mail_schema_extra_info_tables:\n%s\n", cJSON_Print(jsonmail_schema_extra_info_tables_2));
}

int main() {
  test_mail_schema_extra_info_tables(1);
  test_mail_schema_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_schema_extra_info_tables_MAIN
#endif // mail_schema_extra_info_tables_TEST
