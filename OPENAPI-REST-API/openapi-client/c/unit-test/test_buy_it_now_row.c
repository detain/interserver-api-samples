#ifndef buy_it_now_row_TEST
#define buy_it_now_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define buy_it_now_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/buy_it_now_row.h"
buy_it_now_row_t* instantiate_buy_it_now_row(int include_optional);



buy_it_now_row_t* instantiate_buy_it_now_row(int include_optional) {
  buy_it_now_row_t* buy_it_now_row = NULL;
  if (include_optional) {
    buy_it_now_row = buy_it_now_row_create(
      "11432",
      list_createList(),
      "64GB",
      list_createList(),
      "1Gbps Unmetered",
      "1 Vlan Ip (/30)",
      "NYC Region",
      64
    );
  } else {
    buy_it_now_row = buy_it_now_row_create(
      "11432",
      list_createList(),
      "64GB",
      list_createList(),
      "1Gbps Unmetered",
      "1 Vlan Ip (/30)",
      "NYC Region",
      64
    );
  }

  return buy_it_now_row;
}


#ifdef buy_it_now_row_MAIN

void test_buy_it_now_row(int include_optional) {
    buy_it_now_row_t* buy_it_now_row_1 = instantiate_buy_it_now_row(include_optional);

	cJSON* jsonbuy_it_now_row_1 = buy_it_now_row_convertToJSON(buy_it_now_row_1);
	printf("buy_it_now_row :\n%s\n", cJSON_Print(jsonbuy_it_now_row_1));
	buy_it_now_row_t* buy_it_now_row_2 = buy_it_now_row_parseFromJSON(jsonbuy_it_now_row_1);
	cJSON* jsonbuy_it_now_row_2 = buy_it_now_row_convertToJSON(buy_it_now_row_2);
	printf("repeating buy_it_now_row:\n%s\n", cJSON_Print(jsonbuy_it_now_row_2));
}

int main() {
  test_buy_it_now_row(1);
  test_buy_it_now_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // buy_it_now_row_MAIN
#endif // buy_it_now_row_TEST
