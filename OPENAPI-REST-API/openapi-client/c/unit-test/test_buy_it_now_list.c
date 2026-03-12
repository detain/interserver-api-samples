#ifndef buy_it_now_list_TEST
#define buy_it_now_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define buy_it_now_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/buy_it_now_list.h"
buy_it_now_list_t* instantiate_buy_it_now_list(int include_optional);



buy_it_now_list_t* instantiate_buy_it_now_list(int include_optional) {
  buy_it_now_list_t* buy_it_now_list = NULL;
  if (include_optional) {
    buy_it_now_list = buy_it_now_list_create(
    );
  } else {
    buy_it_now_list = buy_it_now_list_create(
    );
  }

  return buy_it_now_list;
}


#ifdef buy_it_now_list_MAIN

void test_buy_it_now_list(int include_optional) {
    buy_it_now_list_t* buy_it_now_list_1 = instantiate_buy_it_now_list(include_optional);

	cJSON* jsonbuy_it_now_list_1 = buy_it_now_list_convertToJSON(buy_it_now_list_1);
	printf("buy_it_now_list :\n%s\n", cJSON_Print(jsonbuy_it_now_list_1));
	buy_it_now_list_t* buy_it_now_list_2 = buy_it_now_list_parseFromJSON(jsonbuy_it_now_list_1);
	cJSON* jsonbuy_it_now_list_2 = buy_it_now_list_convertToJSON(buy_it_now_list_2);
	printf("repeating buy_it_now_list:\n%s\n", cJSON_Print(jsonbuy_it_now_list_2));
}

int main() {
  test_buy_it_now_list(1);
  test_buy_it_now_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // buy_it_now_list_MAIN
#endif // buy_it_now_list_TEST
