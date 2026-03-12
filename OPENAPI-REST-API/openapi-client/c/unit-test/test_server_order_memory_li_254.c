#ifndef server_order_memory_li_254_TEST
#define server_order_memory_li_254_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_memory_li_254_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_memory_li_254.h"
server_order_memory_li_254_t* instantiate_server_order_memory_li_254(int include_optional);

#include "test_server_order_memory.c"


server_order_memory_li_254_t* instantiate_server_order_memory_li_254(int include_optional) {
  server_order_memory_li_254_t* server_order_memory_li_254 = NULL;
  if (include_optional) {
    server_order_memory_li_254 = server_order_memory_li_254_create(
       // false, not to have infinite recursion
      instantiate_server_order_memory(0)
    );
  } else {
    server_order_memory_li_254 = server_order_memory_li_254_create(
      NULL
    );
  }

  return server_order_memory_li_254;
}


#ifdef server_order_memory_li_254_MAIN

void test_server_order_memory_li_254(int include_optional) {
    server_order_memory_li_254_t* server_order_memory_li_254_1 = instantiate_server_order_memory_li_254(include_optional);

	cJSON* jsonserver_order_memory_li_254_1 = server_order_memory_li_254_convertToJSON(server_order_memory_li_254_1);
	printf("server_order_memory_li_254 :\n%s\n", cJSON_Print(jsonserver_order_memory_li_254_1));
	server_order_memory_li_254_t* server_order_memory_li_254_2 = server_order_memory_li_254_parseFromJSON(jsonserver_order_memory_li_254_1);
	cJSON* jsonserver_order_memory_li_254_2 = server_order_memory_li_254_convertToJSON(server_order_memory_li_254_2);
	printf("repeating server_order_memory_li_254:\n%s\n", cJSON_Print(jsonserver_order_memory_li_254_2));
}

int main() {
  test_server_order_memory_li_254(1);
  test_server_order_memory_li_254(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_memory_li_254_MAIN
#endif // server_order_memory_li_254_TEST
