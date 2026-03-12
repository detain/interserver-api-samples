#ifndef buy_it_now_server_order_200_response_os_inner_TEST
#define buy_it_now_server_order_200_response_os_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define buy_it_now_server_order_200_response_os_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/buy_it_now_server_order_200_response_os_inner.h"
buy_it_now_server_order_200_response_os_inner_t* instantiate_buy_it_now_server_order_200_response_os_inner(int include_optional);



buy_it_now_server_order_200_response_os_inner_t* instantiate_buy_it_now_server_order_200_response_os_inner(int include_optional) {
  buy_it_now_server_order_200_response_os_inner_t* buy_it_now_server_order_200_response_os_inner = NULL;
  if (include_optional) {
    buy_it_now_server_order_200_response_os_inner = buy_it_now_server_order_200_response_os_inner_create(
      "5",
      "FreeBSD",
      "Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>",
      "0"
    );
  } else {
    buy_it_now_server_order_200_response_os_inner = buy_it_now_server_order_200_response_os_inner_create(
      "5",
      "FreeBSD",
      "Latest FreeBSD 6.x OS<br><pre>CP(s): cPanel/DirectAdmin</pre>",
      "0"
    );
  }

  return buy_it_now_server_order_200_response_os_inner;
}


#ifdef buy_it_now_server_order_200_response_os_inner_MAIN

void test_buy_it_now_server_order_200_response_os_inner(int include_optional) {
    buy_it_now_server_order_200_response_os_inner_t* buy_it_now_server_order_200_response_os_inner_1 = instantiate_buy_it_now_server_order_200_response_os_inner(include_optional);

	cJSON* jsonbuy_it_now_server_order_200_response_os_inner_1 = buy_it_now_server_order_200_response_os_inner_convertToJSON(buy_it_now_server_order_200_response_os_inner_1);
	printf("buy_it_now_server_order_200_response_os_inner :\n%s\n", cJSON_Print(jsonbuy_it_now_server_order_200_response_os_inner_1));
	buy_it_now_server_order_200_response_os_inner_t* buy_it_now_server_order_200_response_os_inner_2 = buy_it_now_server_order_200_response_os_inner_parseFromJSON(jsonbuy_it_now_server_order_200_response_os_inner_1);
	cJSON* jsonbuy_it_now_server_order_200_response_os_inner_2 = buy_it_now_server_order_200_response_os_inner_convertToJSON(buy_it_now_server_order_200_response_os_inner_2);
	printf("repeating buy_it_now_server_order_200_response_os_inner:\n%s\n", cJSON_Print(jsonbuy_it_now_server_order_200_response_os_inner_2));
}

int main() {
  test_buy_it_now_server_order_200_response_os_inner(1);
  test_buy_it_now_server_order_200_response_os_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // buy_it_now_server_order_200_response_os_inner_MAIN
#endif // buy_it_now_server_order_200_response_os_inner_TEST
