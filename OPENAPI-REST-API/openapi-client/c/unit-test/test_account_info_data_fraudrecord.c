#ifndef account_info_data_fraudrecord_TEST
#define account_info_data_fraudrecord_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_data_fraudrecord_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_data_fraudrecord.h"
account_info_data_fraudrecord_t* instantiate_account_info_data_fraudrecord(int include_optional);



account_info_data_fraudrecord_t* instantiate_account_info_data_fraudrecord(int include_optional) {
  account_info_data_fraudrecord_t* account_info_data_fraudrecord = NULL;
  if (include_optional) {
    account_info_data_fraudrecord = account_info_data_fraudrecord_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    account_info_data_fraudrecord = account_info_data_fraudrecord_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return account_info_data_fraudrecord;
}


#ifdef account_info_data_fraudrecord_MAIN

void test_account_info_data_fraudrecord(int include_optional) {
    account_info_data_fraudrecord_t* account_info_data_fraudrecord_1 = instantiate_account_info_data_fraudrecord(include_optional);

	cJSON* jsonaccount_info_data_fraudrecord_1 = account_info_data_fraudrecord_convertToJSON(account_info_data_fraudrecord_1);
	printf("account_info_data_fraudrecord :\n%s\n", cJSON_Print(jsonaccount_info_data_fraudrecord_1));
	account_info_data_fraudrecord_t* account_info_data_fraudrecord_2 = account_info_data_fraudrecord_parseFromJSON(jsonaccount_info_data_fraudrecord_1);
	cJSON* jsonaccount_info_data_fraudrecord_2 = account_info_data_fraudrecord_convertToJSON(account_info_data_fraudrecord_2);
	printf("repeating account_info_data_fraudrecord:\n%s\n", cJSON_Print(jsonaccount_info_data_fraudrecord_2));
}

int main() {
  test_account_info_data_fraudrecord(1);
  test_account_info_data_fraudrecord(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_data_fraudrecord_MAIN
#endif // account_info_data_fraudrecord_TEST
