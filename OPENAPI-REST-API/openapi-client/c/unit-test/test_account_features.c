#ifndef account_features_TEST
#define account_features_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_features_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_features.h"
account_features_t* instantiate_account_features(int include_optional);



account_features_t* instantiate_account_features(int include_optional) {
  account_features_t* account_features = NULL;
  if (include_optional) {
    account_features = account_features_create(
      56,
      56
    );
  } else {
    account_features = account_features_create(
      56,
      56
    );
  }

  return account_features;
}


#ifdef account_features_MAIN

void test_account_features(int include_optional) {
    account_features_t* account_features_1 = instantiate_account_features(include_optional);

	cJSON* jsonaccount_features_1 = account_features_convertToJSON(account_features_1);
	printf("account_features :\n%s\n", cJSON_Print(jsonaccount_features_1));
	account_features_t* account_features_2 = account_features_parseFromJSON(jsonaccount_features_1);
	cJSON* jsonaccount_features_2 = account_features_convertToJSON(account_features_2);
	printf("repeating account_features:\n%s\n", cJSON_Print(jsonaccount_features_2));
}

int main() {
  test_account_features(1);
  test_account_features(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_features_MAIN
#endif // account_features_TEST
