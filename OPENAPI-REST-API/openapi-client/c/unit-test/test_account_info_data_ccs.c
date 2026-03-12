#ifndef account_info_data_ccs_TEST
#define account_info_data_ccs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_data_ccs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_data_ccs.h"
account_info_data_ccs_t* instantiate_account_info_data_ccs(int include_optional);



account_info_data_ccs_t* instantiate_account_info_data_ccs(int include_optional) {
  account_info_data_ccs_t* account_info_data_ccs = NULL;
  if (include_optional) {
    account_info_data_ccs = account_info_data_ccs_create(
    );
  } else {
    account_info_data_ccs = account_info_data_ccs_create(
    );
  }

  return account_info_data_ccs;
}


#ifdef account_info_data_ccs_MAIN

void test_account_info_data_ccs(int include_optional) {
    account_info_data_ccs_t* account_info_data_ccs_1 = instantiate_account_info_data_ccs(include_optional);

	cJSON* jsonaccount_info_data_ccs_1 = account_info_data_ccs_convertToJSON(account_info_data_ccs_1);
	printf("account_info_data_ccs :\n%s\n", cJSON_Print(jsonaccount_info_data_ccs_1));
	account_info_data_ccs_t* account_info_data_ccs_2 = account_info_data_ccs_parseFromJSON(jsonaccount_info_data_ccs_1);
	cJSON* jsonaccount_info_data_ccs_2 = account_info_data_ccs_convertToJSON(account_info_data_ccs_2);
	printf("repeating account_info_data_ccs:\n%s\n", cJSON_Print(jsonaccount_info_data_ccs_2));
}

int main() {
  test_account_info_data_ccs(1);
  test_account_info_data_ccs(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_data_ccs_MAIN
#endif // account_info_data_ccs_TEST
