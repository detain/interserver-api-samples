#ifndef mail_stats_type_volume_to_TEST
#define mail_stats_type_volume_to_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_stats_type_volume_to_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_stats_type_volume_to.h"
mail_stats_type_volume_to_t* instantiate_mail_stats_type_volume_to(int include_optional);



mail_stats_type_volume_to_t* instantiate_mail_stats_type_volume_to(int include_optional) {
  mail_stats_type_volume_to_t* mail_stats_type_volume_to = NULL;
  if (include_optional) {
    mail_stats_type_volume_to = mail_stats_type_volume_to_create(
      56,
      56,
      56,
      56
    );
  } else {
    mail_stats_type_volume_to = mail_stats_type_volume_to_create(
      56,
      56,
      56,
      56
    );
  }

  return mail_stats_type_volume_to;
}


#ifdef mail_stats_type_volume_to_MAIN

void test_mail_stats_type_volume_to(int include_optional) {
    mail_stats_type_volume_to_t* mail_stats_type_volume_to_1 = instantiate_mail_stats_type_volume_to(include_optional);

	cJSON* jsonmail_stats_type_volume_to_1 = mail_stats_type_volume_to_convertToJSON(mail_stats_type_volume_to_1);
	printf("mail_stats_type_volume_to :\n%s\n", cJSON_Print(jsonmail_stats_type_volume_to_1));
	mail_stats_type_volume_to_t* mail_stats_type_volume_to_2 = mail_stats_type_volume_to_parseFromJSON(jsonmail_stats_type_volume_to_1);
	cJSON* jsonmail_stats_type_volume_to_2 = mail_stats_type_volume_to_convertToJSON(mail_stats_type_volume_to_2);
	printf("repeating mail_stats_type_volume_to:\n%s\n", cJSON_Print(jsonmail_stats_type_volume_to_2));
}

int main() {
  test_mail_stats_type_volume_to(1);
  test_mail_stats_type_volume_to(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_stats_type_volume_to_MAIN
#endif // mail_stats_type_volume_to_TEST
