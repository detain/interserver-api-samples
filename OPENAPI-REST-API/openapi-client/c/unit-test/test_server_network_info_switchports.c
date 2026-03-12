#ifndef server_network_info_switchports_TEST
#define server_network_info_switchports_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_network_info_switchports_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_network_info_switchports.h"
server_network_info_switchports_t* instantiate_server_network_info_switchports(int include_optional);

#include "test_server_switchport.c"


server_network_info_switchports_t* instantiate_server_network_info_switchports(int include_optional) {
  server_network_info_switchports_t* server_network_info_switchports = NULL;
  if (include_optional) {
    server_network_info_switchports = server_network_info_switchports_create(
       // false, not to have infinite recursion
      instantiate_server_switchport(0)
    );
  } else {
    server_network_info_switchports = server_network_info_switchports_create(
      NULL
    );
  }

  return server_network_info_switchports;
}


#ifdef server_network_info_switchports_MAIN

void test_server_network_info_switchports(int include_optional) {
    server_network_info_switchports_t* server_network_info_switchports_1 = instantiate_server_network_info_switchports(include_optional);

	cJSON* jsonserver_network_info_switchports_1 = server_network_info_switchports_convertToJSON(server_network_info_switchports_1);
	printf("server_network_info_switchports :\n%s\n", cJSON_Print(jsonserver_network_info_switchports_1));
	server_network_info_switchports_t* server_network_info_switchports_2 = server_network_info_switchports_parseFromJSON(jsonserver_network_info_switchports_1);
	cJSON* jsonserver_network_info_switchports_2 = server_network_info_switchports_convertToJSON(server_network_info_switchports_2);
	printf("repeating server_network_info_switchports:\n%s\n", cJSON_Print(jsonserver_network_info_switchports_2));
}

int main() {
  test_server_network_info_switchports(1);
  test_server_network_info_switchports(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_network_info_switchports_MAIN
#endif // server_network_info_switchports_TEST
