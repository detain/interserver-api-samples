#ifndef mail_extra_info_table_TEST
#define mail_extra_info_table_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_extra_info_table_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_extra_info_table.h"
mail_extra_info_table_t* instantiate_mail_extra_info_table(int include_optional);



mail_extra_info_table_t* instantiate_mail_extra_info_table(int include_optional) {
  mail_extra_info_table_t* mail_extra_info_table = NULL;
  if (include_optional) {
    mail_extra_info_table = mail_extra_info_table_create(
      "Connection Information",
      list_createList()
    );
  } else {
    mail_extra_info_table = mail_extra_info_table_create(
      "Connection Information",
      list_createList()
    );
  }

  return mail_extra_info_table;
}


#ifdef mail_extra_info_table_MAIN

void test_mail_extra_info_table(int include_optional) {
    mail_extra_info_table_t* mail_extra_info_table_1 = instantiate_mail_extra_info_table(include_optional);

	cJSON* jsonmail_extra_info_table_1 = mail_extra_info_table_convertToJSON(mail_extra_info_table_1);
	printf("mail_extra_info_table :\n%s\n", cJSON_Print(jsonmail_extra_info_table_1));
	mail_extra_info_table_t* mail_extra_info_table_2 = mail_extra_info_table_parseFromJSON(jsonmail_extra_info_table_1);
	cJSON* jsonmail_extra_info_table_2 = mail_extra_info_table_convertToJSON(mail_extra_info_table_2);
	printf("repeating mail_extra_info_table:\n%s\n", cJSON_Print(jsonmail_extra_info_table_2));
}

int main() {
  test_mail_extra_info_table(1);
  test_mail_extra_info_table(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_extra_info_table_MAIN
#endif // mail_extra_info_table_TEST
