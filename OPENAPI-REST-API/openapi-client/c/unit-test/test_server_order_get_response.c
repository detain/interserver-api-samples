#ifndef server_order_get_response_TEST
#define server_order_get_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_get_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_get_response.h"
server_order_get_response_t* instantiate_server_order_get_response(int include_optional);

#include "test_form_values.c"
#include "test_config_ids.c"
#include "test_config_lists.c"


server_order_get_response_t* instantiate_server_order_get_response(int include_optional) {
  server_order_get_response_t* server_order_get_response = NULL;
  if (include_optional) {
    server_order_get_response = server_order_get_response_create(
       // false, not to have infinite recursion
      instantiate_form_values(0),
       // false, not to have infinite recursion
      instantiate_config_ids(0),
      56,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_config_lists(0),
      56,
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      56,
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      1.337
    );
  } else {
    server_order_get_response = server_order_get_response_create(
      NULL,
      NULL,
      56,
      list_createList(),
      NULL,
      56,
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      56,
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      1.337
    );
  }

  return server_order_get_response;
}


#ifdef server_order_get_response_MAIN

void test_server_order_get_response(int include_optional) {
    server_order_get_response_t* server_order_get_response_1 = instantiate_server_order_get_response(include_optional);

	cJSON* jsonserver_order_get_response_1 = server_order_get_response_convertToJSON(server_order_get_response_1);
	printf("server_order_get_response :\n%s\n", cJSON_Print(jsonserver_order_get_response_1));
	server_order_get_response_t* server_order_get_response_2 = server_order_get_response_parseFromJSON(jsonserver_order_get_response_1);
	cJSON* jsonserver_order_get_response_2 = server_order_get_response_convertToJSON(server_order_get_response_2);
	printf("repeating server_order_get_response:\n%s\n", cJSON_Print(jsonserver_order_get_response_2));
}

int main() {
  test_server_order_get_response(1);
  test_server_order_get_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_get_response_MAIN
#endif // server_order_get_response_TEST
