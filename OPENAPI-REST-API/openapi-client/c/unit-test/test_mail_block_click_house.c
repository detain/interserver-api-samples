#ifndef mail_block_click_house_TEST
#define mail_block_click_house_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_block_click_house_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_block_click_house.h"
mail_block_click_house_t* instantiate_mail_block_click_house(int include_optional);



mail_block_click_house_t* instantiate_mail_block_click_house(int include_optional) {
  mail_block_click_house_t* mail_block_click_house = NULL;
  if (include_optional) {
    mail_block_click_house = mail_block_click_house_create(
      "2013-10-20",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    mail_block_click_house = mail_block_click_house_create(
      "2013-10-20",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return mail_block_click_house;
}


#ifdef mail_block_click_house_MAIN

void test_mail_block_click_house(int include_optional) {
    mail_block_click_house_t* mail_block_click_house_1 = instantiate_mail_block_click_house(include_optional);

	cJSON* jsonmail_block_click_house_1 = mail_block_click_house_convertToJSON(mail_block_click_house_1);
	printf("mail_block_click_house :\n%s\n", cJSON_Print(jsonmail_block_click_house_1));
	mail_block_click_house_t* mail_block_click_house_2 = mail_block_click_house_parseFromJSON(jsonmail_block_click_house_1);
	cJSON* jsonmail_block_click_house_2 = mail_block_click_house_convertToJSON(mail_block_click_house_2);
	printf("repeating mail_block_click_house:\n%s\n", cJSON_Print(jsonmail_block_click_house_2));
}

int main() {
  test_mail_block_click_house(1);
  test_mail_block_click_house(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_block_click_house_MAIN
#endif // mail_block_click_house_TEST
