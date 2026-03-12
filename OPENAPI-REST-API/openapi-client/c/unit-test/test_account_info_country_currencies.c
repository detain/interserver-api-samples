#ifndef account_info_country_currencies_TEST
#define account_info_country_currencies_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_country_currencies_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_country_currencies.h"
account_info_country_currencies_t* instantiate_account_info_country_currencies(int include_optional);



account_info_country_currencies_t* instantiate_account_info_country_currencies(int include_optional) {
  account_info_country_currencies_t* account_info_country_currencies = NULL;
  if (include_optional) {
    account_info_country_currencies = account_info_country_currencies_create(
    );
  } else {
    account_info_country_currencies = account_info_country_currencies_create(
    );
  }

  return account_info_country_currencies;
}


#ifdef account_info_country_currencies_MAIN

void test_account_info_country_currencies(int include_optional) {
    account_info_country_currencies_t* account_info_country_currencies_1 = instantiate_account_info_country_currencies(include_optional);

	cJSON* jsonaccount_info_country_currencies_1 = account_info_country_currencies_convertToJSON(account_info_country_currencies_1);
	printf("account_info_country_currencies :\n%s\n", cJSON_Print(jsonaccount_info_country_currencies_1));
	account_info_country_currencies_t* account_info_country_currencies_2 = account_info_country_currencies_parseFromJSON(jsonaccount_info_country_currencies_1);
	cJSON* jsonaccount_info_country_currencies_2 = account_info_country_currencies_convertToJSON(account_info_country_currencies_2);
	printf("repeating account_info_country_currencies:\n%s\n", cJSON_Print(jsonaccount_info_country_currencies_2));
}

int main() {
  test_account_info_country_currencies(1);
  test_account_info_country_currencies(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_country_currencies_MAIN
#endif // account_info_country_currencies_TEST
