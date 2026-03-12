#ifndef server_asset_TEST
#define server_asset_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_asset_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_asset.h"
server_asset_t* instantiate_server_asset(int include_optional);

#include "test_server_lease.c"


server_asset_t* instantiate_server_asset(int include_optional) {
  server_asset_t* server_asset = NULL;
  if (include_optional) {
    server_asset = server_asset_create(
      3497,
      "16058",
      "myserver.host.com",
      "active",
      "1.2.3.250",
      "0",
      "2",
      "1",
      "0",
      "68",
      "017",
      "06",
      "37",
      "37",
      "0",
      "0c:c4:7a:af:35:00",
      "10.8.69.7",
      "0",
      "int",
      "0",
      "Supermicro",
      "SYS-6018R-TDW",
      "0",
      "int5377",
      "0",
      "active",
      "0",
      "1",
      "server",
      "68",
      "112.16",
      "2",
      "44",
      "25",
      "5",
      [10414],
      [],
      [],
       // false, not to have infinite recursion
      instantiate_server_lease(0),
      null,
      null,
      null,
      null,
      null,
      null,
      null,
      null,
      null
    );
  } else {
    server_asset = server_asset_create(
      3497,
      "16058",
      "myserver.host.com",
      "active",
      "1.2.3.250",
      "0",
      "2",
      "1",
      "0",
      "68",
      "017",
      "06",
      "37",
      "37",
      "0",
      "0c:c4:7a:af:35:00",
      "10.8.69.7",
      "0",
      "int",
      "0",
      "Supermicro",
      "SYS-6018R-TDW",
      "0",
      "int5377",
      "0",
      "active",
      "0",
      "1",
      "server",
      "68",
      "112.16",
      "2",
      "44",
      "25",
      "5",
      [10414],
      [],
      [],
      NULL,
      null,
      null,
      null,
      null,
      null,
      null,
      null,
      null,
      null
    );
  }

  return server_asset;
}


#ifdef server_asset_MAIN

void test_server_asset(int include_optional) {
    server_asset_t* server_asset_1 = instantiate_server_asset(include_optional);

	cJSON* jsonserver_asset_1 = server_asset_convertToJSON(server_asset_1);
	printf("server_asset :\n%s\n", cJSON_Print(jsonserver_asset_1));
	server_asset_t* server_asset_2 = server_asset_parseFromJSON(jsonserver_asset_1);
	cJSON* jsonserver_asset_2 = server_asset_convertToJSON(server_asset_2);
	printf("repeating server_asset:\n%s\n", cJSON_Print(jsonserver_asset_2));
}

int main() {
  test_server_asset(1);
  test_server_asset(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_asset_MAIN
#endif // server_asset_TEST
