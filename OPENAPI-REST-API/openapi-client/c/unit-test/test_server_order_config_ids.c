#ifndef server_order_config_ids_TEST
#define server_order_config_ids_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_config_ids_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_config_ids.h"
server_order_config_ids_t* instantiate_server_order_config_ids(int include_optional);



server_order_config_ids_t* instantiate_server_order_config_ids(int include_optional) {
  server_order_config_ids_t* server_order_config_ids = NULL;
  if (include_optional) {
    server_order_config_ids = server_order_config_ids_create(
      22,
      "3",
      "9",
      "5",
      5,
      "0",
      "16"
    );
  } else {
    server_order_config_ids = server_order_config_ids_create(
      22,
      "3",
      "9",
      "5",
      5,
      "0",
      "16"
    );
  }

  return server_order_config_ids;
}


#ifdef server_order_config_ids_MAIN

void test_server_order_config_ids(int include_optional) {
    server_order_config_ids_t* server_order_config_ids_1 = instantiate_server_order_config_ids(include_optional);

	cJSON* jsonserver_order_config_ids_1 = server_order_config_ids_convertToJSON(server_order_config_ids_1);
	printf("server_order_config_ids :\n%s\n", cJSON_Print(jsonserver_order_config_ids_1));
	server_order_config_ids_t* server_order_config_ids_2 = server_order_config_ids_parseFromJSON(jsonserver_order_config_ids_1);
	cJSON* jsonserver_order_config_ids_2 = server_order_config_ids_convertToJSON(server_order_config_ids_2);
	printf("repeating server_order_config_ids:\n%s\n", cJSON_Print(jsonserver_order_config_ids_2));
}

int main() {
  test_server_order_config_ids(1);
  test_server_order_config_ids(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_config_ids_MAIN
#endif // server_order_config_ids_TEST
