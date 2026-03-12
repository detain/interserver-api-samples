#ifndef mail_stats_type_volume_from_TEST
#define mail_stats_type_volume_from_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_stats_type_volume_from_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_stats_type_volume_from.h"
mail_stats_type_volume_from_t* instantiate_mail_stats_type_volume_from(int include_optional);



mail_stats_type_volume_from_t* instantiate_mail_stats_type_volume_from(int include_optional) {
  mail_stats_type_volume_from_t* mail_stats_type_volume_from = NULL;
  if (include_optional) {
    mail_stats_type_volume_from = mail_stats_type_volume_from_create(
      56,
      56
    );
  } else {
    mail_stats_type_volume_from = mail_stats_type_volume_from_create(
      56,
      56
    );
  }

  return mail_stats_type_volume_from;
}


#ifdef mail_stats_type_volume_from_MAIN

void test_mail_stats_type_volume_from(int include_optional) {
    mail_stats_type_volume_from_t* mail_stats_type_volume_from_1 = instantiate_mail_stats_type_volume_from(include_optional);

	cJSON* jsonmail_stats_type_volume_from_1 = mail_stats_type_volume_from_convertToJSON(mail_stats_type_volume_from_1);
	printf("mail_stats_type_volume_from :\n%s\n", cJSON_Print(jsonmail_stats_type_volume_from_1));
	mail_stats_type_volume_from_t* mail_stats_type_volume_from_2 = mail_stats_type_volume_from_parseFromJSON(jsonmail_stats_type_volume_from_1);
	cJSON* jsonmail_stats_type_volume_from_2 = mail_stats_type_volume_from_convertToJSON(mail_stats_type_volume_from_2);
	printf("repeating mail_stats_type_volume_from:\n%s\n", cJSON_Print(jsonmail_stats_type_volume_from_2));
}

int main() {
  test_mail_stats_type_volume_from(1);
  test_mail_stats_type_volume_from(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_stats_type_volume_from_MAIN
#endif // mail_stats_type_volume_from_TEST
