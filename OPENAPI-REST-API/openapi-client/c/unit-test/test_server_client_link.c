#ifndef server_client_link_TEST
#define server_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_client_link.h"
server_client_link_t* instantiate_server_client_link(int include_optional);



server_client_link_t* instantiate_server_client_link(int include_optional) {
  server_client_link_t* server_client_link = NULL;
  if (include_optional) {
    server_client_link = server_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    server_client_link = server_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return server_client_link;
}


#ifdef server_client_link_MAIN

void test_server_client_link(int include_optional) {
    server_client_link_t* server_client_link_1 = instantiate_server_client_link(include_optional);

	cJSON* jsonserver_client_link_1 = server_client_link_convertToJSON(server_client_link_1);
	printf("server_client_link :\n%s\n", cJSON_Print(jsonserver_client_link_1));
	server_client_link_t* server_client_link_2 = server_client_link_parseFromJSON(jsonserver_client_link_1);
	cJSON* jsonserver_client_link_2 = server_client_link_convertToJSON(server_client_link_2);
	printf("repeating server_client_link:\n%s\n", cJSON_Print(jsonserver_client_link_2));
}

int main() {
  test_server_client_link(1);
  test_server_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_client_link_MAIN
#endif // server_client_link_TEST
