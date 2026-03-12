#ifndef account_info_data_email_settings_TEST
#define account_info_data_email_settings_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_data_email_settings_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_data_email_settings.h"
account_info_data_email_settings_t* instantiate_account_info_data_email_settings(int include_optional);



account_info_data_email_settings_t* instantiate_account_info_data_email_settings(int include_optional) {
  account_info_data_email_settings_t* account_info_data_email_settings = NULL;
  if (include_optional) {
    account_info_data_email_settings = account_info_data_email_settings_create(
      "0",
      "0"
    );
  } else {
    account_info_data_email_settings = account_info_data_email_settings_create(
      "0",
      "0"
    );
  }

  return account_info_data_email_settings;
}


#ifdef account_info_data_email_settings_MAIN

void test_account_info_data_email_settings(int include_optional) {
    account_info_data_email_settings_t* account_info_data_email_settings_1 = instantiate_account_info_data_email_settings(include_optional);

	cJSON* jsonaccount_info_data_email_settings_1 = account_info_data_email_settings_convertToJSON(account_info_data_email_settings_1);
	printf("account_info_data_email_settings :\n%s\n", cJSON_Print(jsonaccount_info_data_email_settings_1));
	account_info_data_email_settings_t* account_info_data_email_settings_2 = account_info_data_email_settings_parseFromJSON(jsonaccount_info_data_email_settings_1);
	cJSON* jsonaccount_info_data_email_settings_2 = account_info_data_email_settings_convertToJSON(account_info_data_email_settings_2);
	printf("repeating account_info_data_email_settings:\n%s\n", cJSON_Print(jsonaccount_info_data_email_settings_2));
}

int main() {
  test_account_info_data_email_settings(1);
  test_account_info_data_email_settings(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_data_email_settings_MAIN
#endif // account_info_data_email_settings_TEST
