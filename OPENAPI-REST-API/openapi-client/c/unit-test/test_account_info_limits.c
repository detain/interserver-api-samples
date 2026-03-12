#ifndef account_info_limits_TEST
#define account_info_limits_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_limits_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_limits.h"
account_info_limits_t* instantiate_account_info_limits(int include_optional);



account_info_limits_t* instantiate_account_info_limits(int include_optional) {
  account_info_limits_t* account_info_limits = NULL;
  if (include_optional) {
    account_info_limits = account_info_limits_create(
    );
  } else {
    account_info_limits = account_info_limits_create(
    );
  }

  return account_info_limits;
}


#ifdef account_info_limits_MAIN

void test_account_info_limits(int include_optional) {
    account_info_limits_t* account_info_limits_1 = instantiate_account_info_limits(include_optional);

	cJSON* jsonaccount_info_limits_1 = account_info_limits_convertToJSON(account_info_limits_1);
	printf("account_info_limits :\n%s\n", cJSON_Print(jsonaccount_info_limits_1));
	account_info_limits_t* account_info_limits_2 = account_info_limits_parseFromJSON(jsonaccount_info_limits_1);
	cJSON* jsonaccount_info_limits_2 = account_info_limits_convertToJSON(account_info_limits_2);
	printf("repeating account_info_limits:\n%s\n", cJSON_Print(jsonaccount_info_limits_2));
}

int main() {
  test_account_info_limits(1);
  test_account_info_limits(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_limits_MAIN
#endif // account_info_limits_TEST
