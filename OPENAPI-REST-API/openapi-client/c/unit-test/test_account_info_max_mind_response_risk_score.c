#ifndef account_info_max_mind_response_risk_score_TEST
#define account_info_max_mind_response_risk_score_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_max_mind_response_risk_score_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_max_mind_response_risk_score.h"
account_info_max_mind_response_risk_score_t* instantiate_account_info_max_mind_response_risk_score(int include_optional);



account_info_max_mind_response_risk_score_t* instantiate_account_info_max_mind_response_risk_score(int include_optional) {
  account_info_max_mind_response_risk_score_t* account_info_max_mind_response_risk_score = NULL;
  if (include_optional) {
    account_info_max_mind_response_risk_score = account_info_max_mind_response_risk_score_create(
    );
  } else {
    account_info_max_mind_response_risk_score = account_info_max_mind_response_risk_score_create(
    );
  }

  return account_info_max_mind_response_risk_score;
}


#ifdef account_info_max_mind_response_risk_score_MAIN

void test_account_info_max_mind_response_risk_score(int include_optional) {
    account_info_max_mind_response_risk_score_t* account_info_max_mind_response_risk_score_1 = instantiate_account_info_max_mind_response_risk_score(include_optional);

	cJSON* jsonaccount_info_max_mind_response_risk_score_1 = account_info_max_mind_response_risk_score_convertToJSON(account_info_max_mind_response_risk_score_1);
	printf("account_info_max_mind_response_risk_score :\n%s\n", cJSON_Print(jsonaccount_info_max_mind_response_risk_score_1));
	account_info_max_mind_response_risk_score_t* account_info_max_mind_response_risk_score_2 = account_info_max_mind_response_risk_score_parseFromJSON(jsonaccount_info_max_mind_response_risk_score_1);
	cJSON* jsonaccount_info_max_mind_response_risk_score_2 = account_info_max_mind_response_risk_score_convertToJSON(account_info_max_mind_response_risk_score_2);
	printf("repeating account_info_max_mind_response_risk_score:\n%s\n", cJSON_Print(jsonaccount_info_max_mind_response_risk_score_2));
}

int main() {
  test_account_info_max_mind_response_risk_score(1);
  test_account_info_max_mind_response_risk_score(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_max_mind_response_risk_score_MAIN
#endif // account_info_max_mind_response_risk_score_TEST
