#ifndef server_assets_TEST
#define server_assets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_assets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_assets.h"
server_assets_t* instantiate_server_assets(int include_optional);



server_assets_t* instantiate_server_assets(int include_optional) {
  server_assets_t* server_assets = NULL;
  if (include_optional) {
    server_assets = server_assets_create(
      "Assets",
      2,
      "table",
      list_createList(),
      list_createList()
    );
  } else {
    server_assets = server_assets_create(
      "Assets",
      2,
      "table",
      list_createList(),
      list_createList()
    );
  }

  return server_assets;
}


#ifdef server_assets_MAIN

void test_server_assets(int include_optional) {
    server_assets_t* server_assets_1 = instantiate_server_assets(include_optional);

	cJSON* jsonserver_assets_1 = server_assets_convertToJSON(server_assets_1);
	printf("server_assets :\n%s\n", cJSON_Print(jsonserver_assets_1));
	server_assets_t* server_assets_2 = server_assets_parseFromJSON(jsonserver_assets_1);
	cJSON* jsonserver_assets_2 = server_assets_convertToJSON(server_assets_2);
	printf("repeating server_assets:\n%s\n", cJSON_Print(jsonserver_assets_2));
}

int main() {
  test_server_assets(1);
  test_server_assets(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_assets_MAIN
#endif // server_assets_TEST
