#ifndef send_mail_TEST
#define send_mail_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_mail_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_mail.h"
send_mail_t* instantiate_send_mail(int include_optional);



send_mail_t* instantiate_send_mail(int include_optional) {
  send_mail_t* send_mail = NULL;
  if (include_optional) {
    send_mail = send_mail_create(
      "johndoe@company.com",
      "janedoe@company.com",
      "Attention Client",
      "This is an email to inform you that something noteworthy happened."
    );
  } else {
    send_mail = send_mail_create(
      "johndoe@company.com",
      "janedoe@company.com",
      "Attention Client",
      "This is an email to inform you that something noteworthy happened."
    );
  }

  return send_mail;
}


#ifdef send_mail_MAIN

void test_send_mail(int include_optional) {
    send_mail_t* send_mail_1 = instantiate_send_mail(include_optional);

	cJSON* jsonsend_mail_1 = send_mail_convertToJSON(send_mail_1);
	printf("send_mail :\n%s\n", cJSON_Print(jsonsend_mail_1));
	send_mail_t* send_mail_2 = send_mail_parseFromJSON(jsonsend_mail_1);
	cJSON* jsonsend_mail_2 = send_mail_convertToJSON(send_mail_2);
	printf("repeating send_mail:\n%s\n", cJSON_Print(jsonsend_mail_2));
}

int main() {
  test_send_mail(1);
  test_send_mail(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_mail_MAIN
#endif // send_mail_TEST
