#ifndef buy_it_now_server_order_200_response_TEST
#define buy_it_now_server_order_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define buy_it_now_server_order_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/buy_it_now_server_order_200_response.h"
buy_it_now_server_order_200_response_t* instantiate_buy_it_now_server_order_200_response(int include_optional);



buy_it_now_server_order_200_response_t* instantiate_buy_it_now_server_order_200_response(int include_optional) {
  buy_it_now_server_order_200_response_t* buy_it_now_server_order_200_response = NULL;
  if (include_optional) {
    buy_it_now_server_order_200_response = buy_it_now_server_order_200_response_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    buy_it_now_server_order_200_response = buy_it_now_server_order_200_response_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return buy_it_now_server_order_200_response;
}


#ifdef buy_it_now_server_order_200_response_MAIN

void test_buy_it_now_server_order_200_response(int include_optional) {
    buy_it_now_server_order_200_response_t* buy_it_now_server_order_200_response_1 = instantiate_buy_it_now_server_order_200_response(include_optional);

	cJSON* jsonbuy_it_now_server_order_200_response_1 = buy_it_now_server_order_200_response_convertToJSON(buy_it_now_server_order_200_response_1);
	printf("buy_it_now_server_order_200_response :\n%s\n", cJSON_Print(jsonbuy_it_now_server_order_200_response_1));
	buy_it_now_server_order_200_response_t* buy_it_now_server_order_200_response_2 = buy_it_now_server_order_200_response_parseFromJSON(jsonbuy_it_now_server_order_200_response_1);
	cJSON* jsonbuy_it_now_server_order_200_response_2 = buy_it_now_server_order_200_response_convertToJSON(buy_it_now_server_order_200_response_2);
	printf("repeating buy_it_now_server_order_200_response:\n%s\n", cJSON_Print(jsonbuy_it_now_server_order_200_response_2));
}

int main() {
  test_buy_it_now_server_order_200_response(1);
  test_buy_it_now_server_order_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // buy_it_now_server_order_200_response_MAIN
#endif // buy_it_now_server_order_200_response_TEST
