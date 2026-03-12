#ifndef mail_stats_type_TEST
#define mail_stats_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_stats_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_stats_type.h"
mail_stats_type_t* instantiate_mail_stats_type(int include_optional);

#include "test_mail_stats_type_volume.c"


mail_stats_type_t* instantiate_mail_stats_type(int include_optional) {
  mail_stats_type_t* mail_stats_type = NULL;
  if (include_optional) {
    mail_stats_type = mail_stats_type_create(
      interserver_management_api_mail_stats_type_TIME_"1h",
      56,
      "0",
      "0",
      1.337,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_mail_stats_type_volume(0)
    );
  } else {
    mail_stats_type = mail_stats_type_create(
      interserver_management_api_mail_stats_type_TIME_"1h",
      56,
      "0",
      "0",
      1.337,
      56,
      56,
      NULL
    );
  }

  return mail_stats_type;
}


#ifdef mail_stats_type_MAIN

void test_mail_stats_type(int include_optional) {
    mail_stats_type_t* mail_stats_type_1 = instantiate_mail_stats_type(include_optional);

	cJSON* jsonmail_stats_type_1 = mail_stats_type_convertToJSON(mail_stats_type_1);
	printf("mail_stats_type :\n%s\n", cJSON_Print(jsonmail_stats_type_1));
	mail_stats_type_t* mail_stats_type_2 = mail_stats_type_parseFromJSON(jsonmail_stats_type_1);
	cJSON* jsonmail_stats_type_2 = mail_stats_type_convertToJSON(mail_stats_type_2);
	printf("repeating mail_stats_type:\n%s\n", cJSON_Print(jsonmail_stats_type_2));
}

int main() {
  test_mail_stats_type(1);
  test_mail_stats_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_stats_type_MAIN
#endif // mail_stats_type_TEST
