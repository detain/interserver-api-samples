#ifndef account_info_oauth_config_providers_value_TEST
#define account_info_oauth_config_providers_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_oauth_config_providers_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_oauth_config_providers_value.h"
account_info_oauth_config_providers_value_t* instantiate_account_info_oauth_config_providers_value(int include_optional);



account_info_oauth_config_providers_value_t* instantiate_account_info_oauth_config_providers_value(int include_optional) {
  account_info_oauth_config_providers_value_t* account_info_oauth_config_providers_value = NULL;
  if (include_optional) {
    account_info_oauth_config_providers_value = account_info_oauth_config_providers_value_create(
      1,
      1,
      "0",
      "0"
    );
  } else {
    account_info_oauth_config_providers_value = account_info_oauth_config_providers_value_create(
      1,
      1,
      "0",
      "0"
    );
  }

  return account_info_oauth_config_providers_value;
}


#ifdef account_info_oauth_config_providers_value_MAIN

void test_account_info_oauth_config_providers_value(int include_optional) {
    account_info_oauth_config_providers_value_t* account_info_oauth_config_providers_value_1 = instantiate_account_info_oauth_config_providers_value(include_optional);

	cJSON* jsonaccount_info_oauth_config_providers_value_1 = account_info_oauth_config_providers_value_convertToJSON(account_info_oauth_config_providers_value_1);
	printf("account_info_oauth_config_providers_value :\n%s\n", cJSON_Print(jsonaccount_info_oauth_config_providers_value_1));
	account_info_oauth_config_providers_value_t* account_info_oauth_config_providers_value_2 = account_info_oauth_config_providers_value_parseFromJSON(jsonaccount_info_oauth_config_providers_value_1);
	cJSON* jsonaccount_info_oauth_config_providers_value_2 = account_info_oauth_config_providers_value_convertToJSON(account_info_oauth_config_providers_value_2);
	printf("repeating account_info_oauth_config_providers_value:\n%s\n", cJSON_Print(jsonaccount_info_oauth_config_providers_value_2));
}

int main() {
  test_account_info_oauth_config_providers_value(1);
  test_account_info_oauth_config_providers_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_oauth_config_providers_value_MAIN
#endif // account_info_oauth_config_providers_value_TEST
