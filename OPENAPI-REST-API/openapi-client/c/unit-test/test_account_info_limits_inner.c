#ifndef account_info_limits_inner_TEST
#define account_info_limits_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_limits_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_limits_inner.h"
account_info_limits_inner_t* instantiate_account_info_limits_inner(int include_optional);



account_info_limits_inner_t* instantiate_account_info_limits_inner(int include_optional) {
  account_info_limits_inner_t* account_info_limits_inner = NULL;
  if (include_optional) {
    account_info_limits_inner = account_info_limits_inner_create(
      "0",
      "0"
    );
  } else {
    account_info_limits_inner = account_info_limits_inner_create(
      "0",
      "0"
    );
  }

  return account_info_limits_inner;
}


#ifdef account_info_limits_inner_MAIN

void test_account_info_limits_inner(int include_optional) {
    account_info_limits_inner_t* account_info_limits_inner_1 = instantiate_account_info_limits_inner(include_optional);

	cJSON* jsonaccount_info_limits_inner_1 = account_info_limits_inner_convertToJSON(account_info_limits_inner_1);
	printf("account_info_limits_inner :\n%s\n", cJSON_Print(jsonaccount_info_limits_inner_1));
	account_info_limits_inner_t* account_info_limits_inner_2 = account_info_limits_inner_parseFromJSON(jsonaccount_info_limits_inner_1);
	cJSON* jsonaccount_info_limits_inner_2 = account_info_limits_inner_convertToJSON(account_info_limits_inner_2);
	printf("repeating account_info_limits_inner:\n%s\n", cJSON_Print(jsonaccount_info_limits_inner_2));
}

int main() {
  test_account_info_limits_inner(1);
  test_account_info_limits_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_limits_inner_MAIN
#endif // account_info_limits_inner_TEST
