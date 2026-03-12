#ifndef mail_blocks_TEST
#define mail_blocks_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_blocks_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_blocks.h"
mail_blocks_t* instantiate_mail_blocks(int include_optional);



mail_blocks_t* instantiate_mail_blocks(int include_optional) {
  mail_blocks_t* mail_blocks = NULL;
  if (include_optional) {
    mail_blocks = mail_blocks_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    mail_blocks = mail_blocks_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return mail_blocks;
}


#ifdef mail_blocks_MAIN

void test_mail_blocks(int include_optional) {
    mail_blocks_t* mail_blocks_1 = instantiate_mail_blocks(include_optional);

	cJSON* jsonmail_blocks_1 = mail_blocks_convertToJSON(mail_blocks_1);
	printf("mail_blocks :\n%s\n", cJSON_Print(jsonmail_blocks_1));
	mail_blocks_t* mail_blocks_2 = mail_blocks_parseFromJSON(jsonmail_blocks_1);
	cJSON* jsonmail_blocks_2 = mail_blocks_convertToJSON(mail_blocks_2);
	printf("repeating mail_blocks:\n%s\n", cJSON_Print(jsonmail_blocks_2));
}

int main() {
  test_mail_blocks(1);
  test_mail_blocks(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_blocks_MAIN
#endif // mail_blocks_TEST
