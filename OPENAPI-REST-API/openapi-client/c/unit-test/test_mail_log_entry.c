#ifndef mail_log_entry_TEST
#define mail_log_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_log_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_log_entry.h"
mail_log_entry_t* instantiate_mail_log_entry(int include_optional);



mail_log_entry_t* instantiate_mail_log_entry(int include_optional) {
  mail_log_entry_t* mail_log_entry = NULL;
  if (include_optional) {
    mail_log_entry = mail_log_entry_create(
      103172,
      "17c7eda538e0005d03",
      "person@mysite.com",
      "client@isp.com",
      "sell 0.005 shares",
      "2021-10-14 08:50:10",
      1634215809,
      "mb5658",
      "ESMTPSA",
      "199.231.189.154",
      "feeder",
      "interserver",
      63,
      1,
      "client@isp.com",
      "interserver.net",
      1,
      1634215818533,
      "relay1",
      "2021-10-14T12:50:15.487Z",
      "mx.j.is.cc",
      "250 2.0.0 Ok queued as C91D83E128C",
      "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>"
    );
  } else {
    mail_log_entry = mail_log_entry_create(
      103172,
      "17c7eda538e0005d03",
      "person@mysite.com",
      "client@isp.com",
      "sell 0.005 shares",
      "2021-10-14 08:50:10",
      1634215809,
      "mb5658",
      "ESMTPSA",
      "199.231.189.154",
      "feeder",
      "interserver",
      63,
      1,
      "client@isp.com",
      "interserver.net",
      1,
      1634215818533,
      "relay1",
      "2021-10-14T12:50:15.487Z",
      "mx.j.is.cc",
      "250 2.0.0 Ok queued as C91D83E128C",
      "<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>"
    );
  }

  return mail_log_entry;
}


#ifdef mail_log_entry_MAIN

void test_mail_log_entry(int include_optional) {
    mail_log_entry_t* mail_log_entry_1 = instantiate_mail_log_entry(include_optional);

	cJSON* jsonmail_log_entry_1 = mail_log_entry_convertToJSON(mail_log_entry_1);
	printf("mail_log_entry :\n%s\n", cJSON_Print(jsonmail_log_entry_1));
	mail_log_entry_t* mail_log_entry_2 = mail_log_entry_parseFromJSON(jsonmail_log_entry_1);
	cJSON* jsonmail_log_entry_2 = mail_log_entry_convertToJSON(mail_log_entry_2);
	printf("repeating mail_log_entry:\n%s\n", cJSON_Print(jsonmail_log_entry_2));
}

int main() {
  test_mail_log_entry(1);
  test_mail_log_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_log_entry_MAIN
#endif // mail_log_entry_TEST
