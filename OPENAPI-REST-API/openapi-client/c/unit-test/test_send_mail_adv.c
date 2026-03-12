#ifndef send_mail_adv_TEST
#define send_mail_adv_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_mail_adv_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_mail_adv.h"
send_mail_adv_t* instantiate_send_mail_adv(int include_optional);

#include "test_email_address_name.c"


send_mail_adv_t* instantiate_send_mail_adv(int include_optional) {
  send_mail_adv_t* send_mail_adv = NULL;
  if (include_optional) {
    send_mail_adv = send_mail_adv_create(
      "Your Package has been Delivered!",
      "The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.",
      {"email":"user@domain.com","name":"John Smith"},
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"filename":"text.txt","data":"base64_encoded_contents"}],
      5000
    );
  } else {
    send_mail_adv = send_mail_adv_create(
      "Your Package has been Delivered!",
      "The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.",
      {"email":"user@domain.com","name":"John Smith"},
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"email":"user@domain.com","name":"John Smith"}],
      [{"filename":"text.txt","data":"base64_encoded_contents"}],
      5000
    );
  }

  return send_mail_adv;
}


#ifdef send_mail_adv_MAIN

void test_send_mail_adv(int include_optional) {
    send_mail_adv_t* send_mail_adv_1 = instantiate_send_mail_adv(include_optional);

	cJSON* jsonsend_mail_adv_1 = send_mail_adv_convertToJSON(send_mail_adv_1);
	printf("send_mail_adv :\n%s\n", cJSON_Print(jsonsend_mail_adv_1));
	send_mail_adv_t* send_mail_adv_2 = send_mail_adv_parseFromJSON(jsonsend_mail_adv_1);
	cJSON* jsonsend_mail_adv_2 = send_mail_adv_convertToJSON(send_mail_adv_2);
	printf("repeating send_mail_adv:\n%s\n", cJSON_Print(jsonsend_mail_adv_2));
}

int main() {
  test_send_mail_adv(1);
  test_send_mail_adv(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_mail_adv_MAIN
#endif // send_mail_adv_TEST
