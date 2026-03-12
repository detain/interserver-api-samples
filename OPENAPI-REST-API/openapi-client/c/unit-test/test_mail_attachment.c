#ifndef mail_attachment_TEST
#define mail_attachment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_attachment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_attachment.h"
mail_attachment_t* instantiate_mail_attachment(int include_optional);



mail_attachment_t* instantiate_mail_attachment(int include_optional) {
  mail_attachment_t* mail_attachment = NULL;
  if (include_optional) {
    mail_attachment = mail_attachment_create(
      "message.txt",
      "aGVsbG8gdGhlcmUK"
    );
  } else {
    mail_attachment = mail_attachment_create(
      "message.txt",
      "aGVsbG8gdGhlcmUK"
    );
  }

  return mail_attachment;
}


#ifdef mail_attachment_MAIN

void test_mail_attachment(int include_optional) {
    mail_attachment_t* mail_attachment_1 = instantiate_mail_attachment(include_optional);

	cJSON* jsonmail_attachment_1 = mail_attachment_convertToJSON(mail_attachment_1);
	printf("mail_attachment :\n%s\n", cJSON_Print(jsonmail_attachment_1));
	mail_attachment_t* mail_attachment_2 = mail_attachment_parseFromJSON(jsonmail_attachment_1);
	cJSON* jsonmail_attachment_2 = mail_attachment_convertToJSON(mail_attachment_2);
	printf("repeating mail_attachment:\n%s\n", cJSON_Print(jsonmail_attachment_2));
}

int main() {
  test_mail_attachment(1);
  test_mail_attachment(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_attachment_MAIN
#endif // mail_attachment_TEST
