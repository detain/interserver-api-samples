#ifndef buy_it_now_row_cpu_inner_one_of_TEST
#define buy_it_now_row_cpu_inner_one_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define buy_it_now_row_cpu_inner_one_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/buy_it_now_row_cpu_inner_one_of.h"
buy_it_now_row_cpu_inner_one_of_t* instantiate_buy_it_now_row_cpu_inner_one_of(int include_optional);



buy_it_now_row_cpu_inner_one_of_t* instantiate_buy_it_now_row_cpu_inner_one_of(int include_optional) {
  buy_it_now_row_cpu_inner_one_of_t* buy_it_now_row_cpu_inner_one_of = NULL;
  if (include_optional) {
    buy_it_now_row_cpu_inner_one_of = buy_it_now_row_cpu_inner_one_of_create(
      "xeon-e3.png",
      "XEON",
      "0",
      "1",
      "4"
    );
  } else {
    buy_it_now_row_cpu_inner_one_of = buy_it_now_row_cpu_inner_one_of_create(
      "xeon-e3.png",
      "XEON",
      "0",
      "1",
      "4"
    );
  }

  return buy_it_now_row_cpu_inner_one_of;
}


#ifdef buy_it_now_row_cpu_inner_one_of_MAIN

void test_buy_it_now_row_cpu_inner_one_of(int include_optional) {
    buy_it_now_row_cpu_inner_one_of_t* buy_it_now_row_cpu_inner_one_of_1 = instantiate_buy_it_now_row_cpu_inner_one_of(include_optional);

	cJSON* jsonbuy_it_now_row_cpu_inner_one_of_1 = buy_it_now_row_cpu_inner_one_of_convertToJSON(buy_it_now_row_cpu_inner_one_of_1);
	printf("buy_it_now_row_cpu_inner_one_of :\n%s\n", cJSON_Print(jsonbuy_it_now_row_cpu_inner_one_of_1));
	buy_it_now_row_cpu_inner_one_of_t* buy_it_now_row_cpu_inner_one_of_2 = buy_it_now_row_cpu_inner_one_of_parseFromJSON(jsonbuy_it_now_row_cpu_inner_one_of_1);
	cJSON* jsonbuy_it_now_row_cpu_inner_one_of_2 = buy_it_now_row_cpu_inner_one_of_convertToJSON(buy_it_now_row_cpu_inner_one_of_2);
	printf("repeating buy_it_now_row_cpu_inner_one_of:\n%s\n", cJSON_Print(jsonbuy_it_now_row_cpu_inner_one_of_2));
}

int main() {
  test_buy_it_now_row_cpu_inner_one_of(1);
  test_buy_it_now_row_cpu_inner_one_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // buy_it_now_row_cpu_inner_one_of_MAIN
#endif // buy_it_now_row_cpu_inner_one_of_TEST
