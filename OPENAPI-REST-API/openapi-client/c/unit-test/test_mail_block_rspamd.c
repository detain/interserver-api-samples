#ifndef mail_block_rspamd_TEST
#define mail_block_rspamd_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_block_rspamd_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_block_rspamd.h"
mail_block_rspamd_t* instantiate_mail_block_rspamd(int include_optional);



mail_block_rspamd_t* instantiate_mail_block_rspamd(int include_optional) {
  mail_block_rspamd_t* mail_block_rspamd = NULL;
  if (include_optional) {
    mail_block_rspamd = mail_block_rspamd_create(
      "0",
      "0"
    );
  } else {
    mail_block_rspamd = mail_block_rspamd_create(
      "0",
      "0"
    );
  }

  return mail_block_rspamd;
}


#ifdef mail_block_rspamd_MAIN

void test_mail_block_rspamd(int include_optional) {
    mail_block_rspamd_t* mail_block_rspamd_1 = instantiate_mail_block_rspamd(include_optional);

	cJSON* jsonmail_block_rspamd_1 = mail_block_rspamd_convertToJSON(mail_block_rspamd_1);
	printf("mail_block_rspamd :\n%s\n", cJSON_Print(jsonmail_block_rspamd_1));
	mail_block_rspamd_t* mail_block_rspamd_2 = mail_block_rspamd_parseFromJSON(jsonmail_block_rspamd_1);
	cJSON* jsonmail_block_rspamd_2 = mail_block_rspamd_convertToJSON(mail_block_rspamd_2);
	printf("repeating mail_block_rspamd:\n%s\n", cJSON_Print(jsonmail_block_rspamd_2));
}

int main() {
  test_mail_block_rspamd(1);
  test_mail_block_rspamd(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_block_rspamd_MAIN
#endif // mail_block_rspamd_TEST
