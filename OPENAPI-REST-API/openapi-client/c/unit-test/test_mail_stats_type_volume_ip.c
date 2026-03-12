#ifndef mail_stats_type_volume_ip_TEST
#define mail_stats_type_volume_ip_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mail_stats_type_volume_ip_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mail_stats_type_volume_ip.h"
mail_stats_type_volume_ip_t* instantiate_mail_stats_type_volume_ip(int include_optional);



mail_stats_type_volume_ip_t* instantiate_mail_stats_type_volume_ip(int include_optional) {
  mail_stats_type_volume_ip_t* mail_stats_type_volume_ip = NULL;
  if (include_optional) {
    mail_stats_type_volume_ip = mail_stats_type_volume_ip_create(
      56,
      56,
      56,
      56
    );
  } else {
    mail_stats_type_volume_ip = mail_stats_type_volume_ip_create(
      56,
      56,
      56,
      56
    );
  }

  return mail_stats_type_volume_ip;
}


#ifdef mail_stats_type_volume_ip_MAIN

void test_mail_stats_type_volume_ip(int include_optional) {
    mail_stats_type_volume_ip_t* mail_stats_type_volume_ip_1 = instantiate_mail_stats_type_volume_ip(include_optional);

	cJSON* jsonmail_stats_type_volume_ip_1 = mail_stats_type_volume_ip_convertToJSON(mail_stats_type_volume_ip_1);
	printf("mail_stats_type_volume_ip :\n%s\n", cJSON_Print(jsonmail_stats_type_volume_ip_1));
	mail_stats_type_volume_ip_t* mail_stats_type_volume_ip_2 = mail_stats_type_volume_ip_parseFromJSON(jsonmail_stats_type_volume_ip_1);
	cJSON* jsonmail_stats_type_volume_ip_2 = mail_stats_type_volume_ip_convertToJSON(mail_stats_type_volume_ip_2);
	printf("repeating mail_stats_type_volume_ip:\n%s\n", cJSON_Print(jsonmail_stats_type_volume_ip_2));
}

int main() {
  test_mail_stats_type_volume_ip(1);
  test_mail_stats_type_volume_ip(0);

  printf("Hello world \n");
  return 0;
}

#endif // mail_stats_type_volume_ip_MAIN
#endif // mail_stats_type_volume_ip_TEST
