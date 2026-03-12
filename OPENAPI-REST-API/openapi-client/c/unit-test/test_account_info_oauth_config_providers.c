#ifndef account_info_oauth_config_providers_TEST
#define account_info_oauth_config_providers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_oauth_config_providers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_oauth_config_providers.h"
account_info_oauth_config_providers_t* instantiate_account_info_oauth_config_providers(int include_optional);



account_info_oauth_config_providers_t* instantiate_account_info_oauth_config_providers(int include_optional) {
  account_info_oauth_config_providers_t* account_info_oauth_config_providers = NULL;
  if (include_optional) {
    account_info_oauth_config_providers = account_info_oauth_config_providers_create(
    );
  } else {
    account_info_oauth_config_providers = account_info_oauth_config_providers_create(
    );
  }

  return account_info_oauth_config_providers;
}


#ifdef account_info_oauth_config_providers_MAIN

void test_account_info_oauth_config_providers(int include_optional) {
    account_info_oauth_config_providers_t* account_info_oauth_config_providers_1 = instantiate_account_info_oauth_config_providers(include_optional);

	cJSON* jsonaccount_info_oauth_config_providers_1 = account_info_oauth_config_providers_convertToJSON(account_info_oauth_config_providers_1);
	printf("account_info_oauth_config_providers :\n%s\n", cJSON_Print(jsonaccount_info_oauth_config_providers_1));
	account_info_oauth_config_providers_t* account_info_oauth_config_providers_2 = account_info_oauth_config_providers_parseFromJSON(jsonaccount_info_oauth_config_providers_1);
	cJSON* jsonaccount_info_oauth_config_providers_2 = account_info_oauth_config_providers_convertToJSON(account_info_oauth_config_providers_2);
	printf("repeating account_info_oauth_config_providers:\n%s\n", cJSON_Print(jsonaccount_info_oauth_config_providers_2));
}

int main() {
  test_account_info_oauth_config_providers(1);
  test_account_info_oauth_config_providers(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_oauth_config_providers_MAIN
#endif // account_info_oauth_config_providers_TEST
