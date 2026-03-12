#ifndef server_network_info_TEST
#define server_network_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_network_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_network_info.h"
server_network_info_t* instantiate_server_network_info(int include_optional);

#include "test_server_network_info_assets.c"
#include "test_server_network_info_switchports.c"


server_network_info_t* instantiate_server_network_info(int include_optional) {
  server_network_info_t* server_network_info = NULL;
  if (include_optional) {
    server_network_info = server_network_info_create(
      [],
      [],
       // false, not to have infinite recursion
      instantiate_server_network_info_assets(0),
       // false, not to have infinite recursion
      instantiate_server_network_info_switchports(0)
    );
  } else {
    server_network_info = server_network_info_create(
      [],
      [],
      NULL,
      NULL
    );
  }

  return server_network_info;
}


#ifdef server_network_info_MAIN

void test_server_network_info(int include_optional) {
    server_network_info_t* server_network_info_1 = instantiate_server_network_info(include_optional);

	cJSON* jsonserver_network_info_1 = server_network_info_convertToJSON(server_network_info_1);
	printf("server_network_info :\n%s\n", cJSON_Print(jsonserver_network_info_1));
	server_network_info_t* server_network_info_2 = server_network_info_parseFromJSON(jsonserver_network_info_1);
	cJSON* jsonserver_network_info_2 = server_network_info_convertToJSON(server_network_info_2);
	printf("repeating server_network_info:\n%s\n", cJSON_Print(jsonserver_network_info_2));
}

int main() {
  test_server_network_info(1);
  test_server_network_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_network_info_MAIN
#endif // server_network_info_TEST
