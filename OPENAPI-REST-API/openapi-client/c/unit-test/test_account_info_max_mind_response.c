#ifndef account_info_max_mind_response_TEST
#define account_info_max_mind_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_max_mind_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_max_mind_response.h"
account_info_max_mind_response_t* instantiate_account_info_max_mind_response(int include_optional);

#include "test_account_info_max_mind_response_risk_score.c"


account_info_max_mind_response_t* instantiate_account_info_max_mind_response(int include_optional) {
  account_info_max_mind_response_t* account_info_max_mind_response = NULL;
  if (include_optional) {
    account_info_max_mind_response = account_info_max_mind_response_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    account_info_max_mind_response = account_info_max_mind_response_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return account_info_max_mind_response;
}


#ifdef account_info_max_mind_response_MAIN

void test_account_info_max_mind_response(int include_optional) {
    account_info_max_mind_response_t* account_info_max_mind_response_1 = instantiate_account_info_max_mind_response(include_optional);

	cJSON* jsonaccount_info_max_mind_response_1 = account_info_max_mind_response_convertToJSON(account_info_max_mind_response_1);
	printf("account_info_max_mind_response :\n%s\n", cJSON_Print(jsonaccount_info_max_mind_response_1));
	account_info_max_mind_response_t* account_info_max_mind_response_2 = account_info_max_mind_response_parseFromJSON(jsonaccount_info_max_mind_response_1);
	cJSON* jsonaccount_info_max_mind_response_2 = account_info_max_mind_response_convertToJSON(account_info_max_mind_response_2);
	printf("repeating account_info_max_mind_response:\n%s\n", cJSON_Print(jsonaccount_info_max_mind_response_2));
}

int main() {
  test_account_info_max_mind_response(1);
  test_account_info_max_mind_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_max_mind_response_MAIN
#endif // account_info_max_mind_response_TEST
