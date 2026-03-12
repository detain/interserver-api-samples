#ifndef mail_stats_type_volume_TEST
#define mail_stats_type_volume_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_stats_type_volume_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_stats_type_volume.h"
mail_stats_type_volume_t* instantiate_mail_stats_type_volume(int include_optional);

#include "test_mail_stats_type_volume_to.c"
#include "test_mail_stats_type_volume_from.c"
#include "test_mail_stats_type_volume_ip.c"


mail_stats_type_volume_t* instantiate_mail_stats_type_volume(int include_optional) {
  mail_stats_type_volume_t* mail_stats_type_volume = NULL;
  if (include_optional) {
    mail_stats_type_volume = mail_stats_type_volume_create(
       // false, not to have infinite recursion
      instantiate_mail_stats_type_volume_to(0),
       // false, not to have infinite recursion
      instantiate_mail_stats_type_volume_from(0),
       // false, not to have infinite recursion
      instantiate_mail_stats_type_volume_ip(0)
    );
  } else {
    mail_stats_type_volume = mail_stats_type_volume_create(
      NULL,
      NULL,
      NULL
    );
  }

  return mail_stats_type_volume;
}


#ifdef mail_stats_type_volume_MAIN

void test_mail_stats_type_volume(int include_optional) {
    mail_stats_type_volume_t* mail_stats_type_volume_1 = instantiate_mail_stats_type_volume(include_optional);

	cJSON* jsonmail_stats_type_volume_1 = mail_stats_type_volume_convertToJSON(mail_stats_type_volume_1);
	printf("mail_stats_type_volume :\n%s\n", cJSON_Print(jsonmail_stats_type_volume_1));
	mail_stats_type_volume_t* mail_stats_type_volume_2 = mail_stats_type_volume_parseFromJSON(jsonmail_stats_type_volume_1);
	cJSON* jsonmail_stats_type_volume_2 = mail_stats_type_volume_convertToJSON(mail_stats_type_volume_2);
	printf("repeating mail_stats_type_volume:\n%s\n", cJSON_Print(jsonmail_stats_type_volume_2));
}

int main() {
  test_mail_stats_type_volume(1);
  test_mail_stats_type_volume(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_stats_type_volume_MAIN
#endif // mail_stats_type_volume_TEST
