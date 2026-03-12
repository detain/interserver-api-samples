#ifndef server_order_bandwidth_li_TEST
#define server_order_bandwidth_li_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_bandwidth_li_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_bandwidth_li.h"
server_order_bandwidth_li_t* instantiate_server_order_bandwidth_li(int include_optional);

#include "test_server_order_bandwidth.c"


server_order_bandwidth_li_t* instantiate_server_order_bandwidth_li(int include_optional) {
  server_order_bandwidth_li_t* server_order_bandwidth_li = NULL;
  if (include_optional) {
    server_order_bandwidth_li = server_order_bandwidth_li_create(
       // false, not to have infinite recursion
      instantiate_server_order_bandwidth(0)
    );
  } else {
    server_order_bandwidth_li = server_order_bandwidth_li_create(
      NULL
    );
  }

  return server_order_bandwidth_li;
}


#ifdef server_order_bandwidth_li_MAIN

void test_server_order_bandwidth_li(int include_optional) {
    server_order_bandwidth_li_t* server_order_bandwidth_li_1 = instantiate_server_order_bandwidth_li(include_optional);

	cJSON* jsonserver_order_bandwidth_li_1 = server_order_bandwidth_li_convertToJSON(server_order_bandwidth_li_1);
	printf("server_order_bandwidth_li :\n%s\n", cJSON_Print(jsonserver_order_bandwidth_li_1));
	server_order_bandwidth_li_t* server_order_bandwidth_li_2 = server_order_bandwidth_li_parseFromJSON(jsonserver_order_bandwidth_li_1);
	cJSON* jsonserver_order_bandwidth_li_2 = server_order_bandwidth_li_convertToJSON(server_order_bandwidth_li_2);
	printf("repeating server_order_bandwidth_li:\n%s\n", cJSON_Print(jsonserver_order_bandwidth_li_2));
}

int main() {
  test_server_order_bandwidth_li(1);
  test_server_order_bandwidth_li(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_bandwidth_li_MAIN
#endif // server_order_bandwidth_li_TEST
