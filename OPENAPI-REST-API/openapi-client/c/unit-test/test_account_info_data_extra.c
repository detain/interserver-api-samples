#ifndef account_info_data_extra_TEST
#define account_info_data_extra_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_data_extra_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_data_extra.h"
account_info_data_extra_t* instantiate_account_info_data_extra(int include_optional);



account_info_data_extra_t* instantiate_account_info_data_extra(int include_optional) {
  account_info_data_extra_t* account_info_data_extra = NULL;
  if (include_optional) {
    account_info_data_extra = account_info_data_extra_create(
      "0"
    );
  } else {
    account_info_data_extra = account_info_data_extra_create(
      "0"
    );
  }

  return account_info_data_extra;
}


#ifdef account_info_data_extra_MAIN

void test_account_info_data_extra(int include_optional) {
    account_info_data_extra_t* account_info_data_extra_1 = instantiate_account_info_data_extra(include_optional);

	cJSON* jsonaccount_info_data_extra_1 = account_info_data_extra_convertToJSON(account_info_data_extra_1);
	printf("account_info_data_extra :\n%s\n", cJSON_Print(jsonaccount_info_data_extra_1));
	account_info_data_extra_t* account_info_data_extra_2 = account_info_data_extra_parseFromJSON(jsonaccount_info_data_extra_1);
	cJSON* jsonaccount_info_data_extra_2 = account_info_data_extra_convertToJSON(account_info_data_extra_2);
	printf("repeating account_info_data_extra:\n%s\n", cJSON_Print(jsonaccount_info_data_extra_2));
}

int main() {
  test_account_info_data_extra(1);
  test_account_info_data_extra(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_data_extra_MAIN
#endif // account_info_data_extra_TEST
