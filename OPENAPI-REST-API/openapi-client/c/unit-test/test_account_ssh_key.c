#ifndef account_ssh_key_TEST
#define account_ssh_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_ssh_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_ssh_key.h"
account_ssh_key_t* instantiate_account_ssh_key(int include_optional);



account_ssh_key_t* instantiate_account_ssh_key(int include_optional) {
  account_ssh_key_t* account_ssh_key = NULL;
  if (include_optional) {
    account_ssh_key = account_ssh_key_create(
      "0"
    );
  } else {
    account_ssh_key = account_ssh_key_create(
      "0"
    );
  }

  return account_ssh_key;
}


#ifdef account_ssh_key_MAIN

void test_account_ssh_key(int include_optional) {
    account_ssh_key_t* account_ssh_key_1 = instantiate_account_ssh_key(include_optional);

	cJSON* jsonaccount_ssh_key_1 = account_ssh_key_convertToJSON(account_ssh_key_1);
	printf("account_ssh_key :\n%s\n", cJSON_Print(jsonaccount_ssh_key_1));
	account_ssh_key_t* account_ssh_key_2 = account_ssh_key_parseFromJSON(jsonaccount_ssh_key_1);
	cJSON* jsonaccount_ssh_key_2 = account_ssh_key_convertToJSON(account_ssh_key_2);
	printf("repeating account_ssh_key:\n%s\n", cJSON_Print(jsonaccount_ssh_key_2));
}

int main() {
  test_account_ssh_key(1);
  test_account_ssh_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_ssh_key_MAIN
#endif // account_ssh_key_TEST
