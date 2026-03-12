#ifndef account_info_oauth_config_TEST
#define account_info_oauth_config_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_oauth_config_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_oauth_config.h"
account_info_oauth_config_t* instantiate_account_info_oauth_config(int include_optional);



account_info_oauth_config_t* instantiate_account_info_oauth_config(int include_optional) {
  account_info_oauth_config_t* account_info_oauth_config = NULL;
  if (include_optional) {
    account_info_oauth_config = account_info_oauth_config_create(
      "0",
      {"Twitter":{"enabled":false,"linked":false},"Facebook":{"enabled":true,"account":"10204015683980049","url":"https://www.facebook.com/10204015683980049","linked":true},"Google":{"enabled":true,"account":"103826860529802474211","url":"https://plus.google.com/+JoeHuss","linked":true},"GitHub":{"enabled":true,"account":"1364504","url":"https://github.com/detain","linked":true}}
    );
  } else {
    account_info_oauth_config = account_info_oauth_config_create(
      "0",
      {"Twitter":{"enabled":false,"linked":false},"Facebook":{"enabled":true,"account":"10204015683980049","url":"https://www.facebook.com/10204015683980049","linked":true},"Google":{"enabled":true,"account":"103826860529802474211","url":"https://plus.google.com/+JoeHuss","linked":true},"GitHub":{"enabled":true,"account":"1364504","url":"https://github.com/detain","linked":true}}
    );
  }

  return account_info_oauth_config;
}


#ifdef account_info_oauth_config_MAIN

void test_account_info_oauth_config(int include_optional) {
    account_info_oauth_config_t* account_info_oauth_config_1 = instantiate_account_info_oauth_config(include_optional);

	cJSON* jsonaccount_info_oauth_config_1 = account_info_oauth_config_convertToJSON(account_info_oauth_config_1);
	printf("account_info_oauth_config :\n%s\n", cJSON_Print(jsonaccount_info_oauth_config_1));
	account_info_oauth_config_t* account_info_oauth_config_2 = account_info_oauth_config_parseFromJSON(jsonaccount_info_oauth_config_1);
	cJSON* jsonaccount_info_oauth_config_2 = account_info_oauth_config_convertToJSON(account_info_oauth_config_2);
	printf("repeating account_info_oauth_config:\n%s\n", cJSON_Print(jsonaccount_info_oauth_config_2));
}

int main() {
  test_account_info_oauth_config(1);
  test_account_info_oauth_config(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_oauth_config_MAIN
#endif // account_info_oauth_config_TEST
