#ifndef mail_tutorials_table_row_TEST
#define mail_tutorials_table_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_tutorials_table_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_tutorials_table_row.h"
mail_tutorials_table_row_t* instantiate_mail_tutorials_table_row(int include_optional);



mail_tutorials_table_row_t* instantiate_mail_tutorials_table_row(int include_optional) {
  mail_tutorials_table_row_t* mail_tutorials_table_row = NULL;
  if (include_optional) {
    mail_tutorials_table_row = mail_tutorials_table_row_create(
      "cPanel Tutorial",
      "<a class="link" href="https://mail.baby/cpanel/" target="_blank">Click Here</a>"
    );
  } else {
    mail_tutorials_table_row = mail_tutorials_table_row_create(
      "cPanel Tutorial",
      "<a class="link" href="https://mail.baby/cpanel/" target="_blank">Click Here</a>"
    );
  }

  return mail_tutorials_table_row;
}


#ifdef mail_tutorials_table_row_MAIN

void test_mail_tutorials_table_row(int include_optional) {
    mail_tutorials_table_row_t* mail_tutorials_table_row_1 = instantiate_mail_tutorials_table_row(include_optional);

	cJSON* jsonmail_tutorials_table_row_1 = mail_tutorials_table_row_convertToJSON(mail_tutorials_table_row_1);
	printf("mail_tutorials_table_row :\n%s\n", cJSON_Print(jsonmail_tutorials_table_row_1));
	mail_tutorials_table_row_t* mail_tutorials_table_row_2 = mail_tutorials_table_row_parseFromJSON(jsonmail_tutorials_table_row_1);
	cJSON* jsonmail_tutorials_table_row_2 = mail_tutorials_table_row_convertToJSON(mail_tutorials_table_row_2);
	printf("repeating mail_tutorials_table_row:\n%s\n", cJSON_Print(jsonmail_tutorials_table_row_2));
}

int main() {
  test_mail_tutorials_table_row(1);
  test_mail_tutorials_table_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_tutorials_table_row_MAIN
#endif // mail_tutorials_table_row_TEST
