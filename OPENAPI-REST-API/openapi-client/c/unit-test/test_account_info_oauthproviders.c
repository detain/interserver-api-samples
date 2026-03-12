#ifndef account_info_oauthproviders_TEST
#define account_info_oauthproviders_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_oauthproviders_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_oauthproviders.h"
account_info_oauthproviders_t* instantiate_account_info_oauthproviders(int include_optional);



account_info_oauthproviders_t* instantiate_account_info_oauthproviders(int include_optional) {
  account_info_oauthproviders_t* account_info_oauthproviders = NULL;
  if (include_optional) {
    account_info_oauthproviders = account_info_oauthproviders_create(
    );
  } else {
    account_info_oauthproviders = account_info_oauthproviders_create(
    );
  }

  return account_info_oauthproviders;
}


#ifdef account_info_oauthproviders_MAIN

void test_account_info_oauthproviders(int include_optional) {
    account_info_oauthproviders_t* account_info_oauthproviders_1 = instantiate_account_info_oauthproviders(include_optional);

	cJSON* jsonaccount_info_oauthproviders_1 = account_info_oauthproviders_convertToJSON(account_info_oauthproviders_1);
	printf("account_info_oauthproviders :\n%s\n", cJSON_Print(jsonaccount_info_oauthproviders_1));
	account_info_oauthproviders_t* account_info_oauthproviders_2 = account_info_oauthproviders_parseFromJSON(jsonaccount_info_oauthproviders_1);
	cJSON* jsonaccount_info_oauthproviders_2 = account_info_oauthproviders_convertToJSON(account_info_oauthproviders_2);
	printf("repeating account_info_oauthproviders:\n%s\n", cJSON_Print(jsonaccount_info_oauthproviders_2));
}

int main() {
  test_account_info_oauthproviders(1);
  test_account_info_oauthproviders(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_oauthproviders_MAIN
#endif // account_info_oauthproviders_TEST
