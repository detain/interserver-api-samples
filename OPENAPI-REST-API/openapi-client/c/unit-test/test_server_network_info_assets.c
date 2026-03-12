#ifndef server_network_info_assets_TEST
#define server_network_info_assets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_network_info_assets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_network_info_assets.h"
server_network_info_assets_t* instantiate_server_network_info_assets(int include_optional);

#include "test_server_asset.c"


server_network_info_assets_t* instantiate_server_network_info_assets(int include_optional) {
  server_network_info_assets_t* server_network_info_assets = NULL;
  if (include_optional) {
    server_network_info_assets = server_network_info_assets_create(
       // false, not to have infinite recursion
      instantiate_server_asset(0)
    );
  } else {
    server_network_info_assets = server_network_info_assets_create(
      NULL
    );
  }

  return server_network_info_assets;
}


#ifdef server_network_info_assets_MAIN

void test_server_network_info_assets(int include_optional) {
    server_network_info_assets_t* server_network_info_assets_1 = instantiate_server_network_info_assets(include_optional);

	cJSON* jsonserver_network_info_assets_1 = server_network_info_assets_convertToJSON(server_network_info_assets_1);
	printf("server_network_info_assets :\n%s\n", cJSON_Print(jsonserver_network_info_assets_1));
	server_network_info_assets_t* server_network_info_assets_2 = server_network_info_assets_parseFromJSON(jsonserver_network_info_assets_1);
	cJSON* jsonserver_network_info_assets_2 = server_network_info_assets_convertToJSON(server_network_info_assets_2);
	printf("repeating server_network_info_assets:\n%s\n", cJSON_Print(jsonserver_network_info_assets_2));
}

int main() {
  test_server_network_info_assets(1);
  test_server_network_info_assets(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_network_info_assets_MAIN
#endif // server_network_info_assets_TEST
