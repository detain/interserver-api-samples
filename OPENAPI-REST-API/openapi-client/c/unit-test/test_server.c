#ifndef server_TEST
#define server_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server.h"
server_t* instantiate_server(int include_optional);

#include "test_server_billing_details.c"
#include "test_server_locations.c"
#include "test_server_network_info.c"
#include "test_server_extra_info_tables.c"
#include "test_server_service_info.c"


server_t* instantiate_server(int include_optional) {
  server_t* server = NULL;
  if (include_optional) {
    server = server_create(
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_server_billing_details(0),
      "0",
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_server_locations(0),
       // false, not to have infinite recursion
      instantiate_server_network_info(0),
       // false, not to have infinite recursion
      instantiate_server_extra_info_tables(0),
       // false, not to have infinite recursion
      instantiate_server_service_info(0)
    );
  } else {
    server = server_create(
      1,
      list_createList(),
      NULL,
      "0",
      "0",
      "0",
      list_createList(),
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return server;
}


#ifdef server_MAIN

void test_server(int include_optional) {
    server_t* server_1 = instantiate_server(include_optional);

	cJSON* jsonserver_1 = server_convertToJSON(server_1);
	printf("server :\n%s\n", cJSON_Print(jsonserver_1));
	server_t* server_2 = server_parseFromJSON(jsonserver_1);
	cJSON* jsonserver_2 = server_convertToJSON(server_2);
	printf("repeating server:\n%s\n", cJSON_Print(jsonserver_2));
}

int main() {
  test_server(1);
  test_server(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_MAIN
#endif // server_TEST
