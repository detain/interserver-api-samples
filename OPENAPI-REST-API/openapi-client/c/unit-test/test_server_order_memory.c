#ifndef server_order_memory_TEST
#define server_order_memory_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_memory_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_memory.h"
server_order_memory_t* instantiate_server_order_memory(int include_optional);



server_order_memory_t* instantiate_server_order_memory(int include_optional) {
  server_order_memory_t* server_order_memory = NULL;
  if (include_optional) {
    server_order_memory = server_order_memory_create(
      "65",
      "0",
      "hd.jpg",
      "20TB SATA",
      "0",
      "0",
      "3000",
      "0",
      "0",
      50,
      "lff",
      "$50.00"
    );
  } else {
    server_order_memory = server_order_memory_create(
      "65",
      "0",
      "hd.jpg",
      "20TB SATA",
      "0",
      "0",
      "3000",
      "0",
      "0",
      50,
      "lff",
      "$50.00"
    );
  }

  return server_order_memory;
}


#ifdef server_order_memory_MAIN

void test_server_order_memory(int include_optional) {
    server_order_memory_t* server_order_memory_1 = instantiate_server_order_memory(include_optional);

	cJSON* jsonserver_order_memory_1 = server_order_memory_convertToJSON(server_order_memory_1);
	printf("server_order_memory :\n%s\n", cJSON_Print(jsonserver_order_memory_1));
	server_order_memory_t* server_order_memory_2 = server_order_memory_parseFromJSON(jsonserver_order_memory_1);
	cJSON* jsonserver_order_memory_2 = server_order_memory_convertToJSON(server_order_memory_2);
	printf("repeating server_order_memory:\n%s\n", cJSON_Print(jsonserver_order_memory_2));
}

int main() {
  test_server_order_memory(1);
  test_server_order_memory(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_memory_MAIN
#endif // server_order_memory_TEST
