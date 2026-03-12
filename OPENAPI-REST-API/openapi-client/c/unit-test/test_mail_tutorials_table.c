#ifndef mail_tutorials_table_TEST
#define mail_tutorials_table_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_tutorials_table_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_tutorials_table.h"
mail_tutorials_table_t* instantiate_mail_tutorials_table(int include_optional);



mail_tutorials_table_t* instantiate_mail_tutorials_table(int include_optional) {
  mail_tutorials_table_t* mail_tutorials_table = NULL;
  if (include_optional) {
    mail_tutorials_table = mail_tutorials_table_create(
      "Tutorials",
      list_createList()
    );
  } else {
    mail_tutorials_table = mail_tutorials_table_create(
      "Tutorials",
      list_createList()
    );
  }

  return mail_tutorials_table;
}


#ifdef mail_tutorials_table_MAIN

void test_mail_tutorials_table(int include_optional) {
    mail_tutorials_table_t* mail_tutorials_table_1 = instantiate_mail_tutorials_table(include_optional);

	cJSON* jsonmail_tutorials_table_1 = mail_tutorials_table_convertToJSON(mail_tutorials_table_1);
	printf("mail_tutorials_table :\n%s\n", cJSON_Print(jsonmail_tutorials_table_1));
	mail_tutorials_table_t* mail_tutorials_table_2 = mail_tutorials_table_parseFromJSON(jsonmail_tutorials_table_1);
	cJSON* jsonmail_tutorials_table_2 = mail_tutorials_table_convertToJSON(mail_tutorials_table_2);
	printf("repeating mail_tutorials_table:\n%s\n", cJSON_Print(jsonmail_tutorials_table_2));
}

int main() {
  test_mail_tutorials_table(1);
  test_mail_tutorials_table(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_tutorials_table_MAIN
#endif // mail_tutorials_table_TEST
