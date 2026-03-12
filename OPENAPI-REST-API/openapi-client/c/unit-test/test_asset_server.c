#ifndef asset_server_TEST
#define asset_server_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asset_server_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asset_server.h"
asset_server_t* instantiate_asset_server(int include_optional);



asset_server_t* instantiate_asset_server(int include_optional) {
  asset_server_t* asset_server = NULL;
  if (include_optional) {
    asset_server = asset_server_create(
      56,
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    asset_server = asset_server_create(
      56,
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return asset_server;
}


#ifdef asset_server_MAIN

void test_asset_server(int include_optional) {
    asset_server_t* asset_server_1 = instantiate_asset_server(include_optional);

	cJSON* jsonasset_server_1 = asset_server_convertToJSON(asset_server_1);
	printf("asset_server :\n%s\n", cJSON_Print(jsonasset_server_1));
	asset_server_t* asset_server_2 = asset_server_parseFromJSON(jsonasset_server_1);
	cJSON* jsonasset_server_2 = asset_server_convertToJSON(asset_server_2);
	printf("repeating asset_server:\n%s\n", cJSON_Print(jsonasset_server_2));
}

int main() {
  test_asset_server(1);
  test_asset_server(0);

  printf("Hello world \n");
  return 0;
}

#endif // asset_server_MAIN
#endif // asset_server_TEST
