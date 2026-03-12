#ifndef account_info_post_TEST
#define account_info_post_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_post_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_post.h"
account_info_post_t* instantiate_account_info_post(int include_optional);



account_info_post_t* instantiate_account_info_post(int include_optional) {
  account_info_post_t* account_info_post = NULL;
  if (include_optional) {
    account_info_post = account_info_post_create(
      "John Doe",
      "124 My St",
      "My Town",
      "PA",
      "17522",
      "US",
      "8675309",
      "My Company",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      "0"
    );
  } else {
    account_info_post = account_info_post_create(
      "John Doe",
      "124 My St",
      "My Town",
      "PA",
      "17522",
      "US",
      "8675309",
      "My Company",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      "0"
    );
  }

  return account_info_post;
}


#ifdef account_info_post_MAIN

void test_account_info_post(int include_optional) {
    account_info_post_t* account_info_post_1 = instantiate_account_info_post(include_optional);

	cJSON* jsonaccount_info_post_1 = account_info_post_convertToJSON(account_info_post_1);
	printf("account_info_post :\n%s\n", cJSON_Print(jsonaccount_info_post_1));
	account_info_post_t* account_info_post_2 = account_info_post_parseFromJSON(jsonaccount_info_post_1);
	cJSON* jsonaccount_info_post_2 = account_info_post_convertToJSON(account_info_post_2);
	printf("repeating account_info_post:\n%s\n", cJSON_Print(jsonaccount_info_post_2));
}

int main() {
  test_account_info_post(1);
  test_account_info_post(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_post_MAIN
#endif // account_info_post_TEST
