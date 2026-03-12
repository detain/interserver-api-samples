#ifndef asset_server_cpu_inner_TEST
#define asset_server_cpu_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define asset_server_cpu_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/asset_server_cpu_inner.h"
asset_server_cpu_inner_t* instantiate_asset_server_cpu_inner(int include_optional);



asset_server_cpu_inner_t* instantiate_asset_server_cpu_inner(int include_optional) {
  asset_server_cpu_inner_t* asset_server_cpu_inner = NULL;
  if (include_optional) {
    asset_server_cpu_inner = asset_server_cpu_inner_create(
    );
  } else {
    asset_server_cpu_inner = asset_server_cpu_inner_create(
    );
  }

  return asset_server_cpu_inner;
}


#ifdef asset_server_cpu_inner_MAIN

void test_asset_server_cpu_inner(int include_optional) {
    asset_server_cpu_inner_t* asset_server_cpu_inner_1 = instantiate_asset_server_cpu_inner(include_optional);

	cJSON* jsonasset_server_cpu_inner_1 = asset_server_cpu_inner_convertToJSON(asset_server_cpu_inner_1);
	printf("asset_server_cpu_inner :\n%s\n", cJSON_Print(jsonasset_server_cpu_inner_1));
	asset_server_cpu_inner_t* asset_server_cpu_inner_2 = asset_server_cpu_inner_parseFromJSON(jsonasset_server_cpu_inner_1);
	cJSON* jsonasset_server_cpu_inner_2 = asset_server_cpu_inner_convertToJSON(asset_server_cpu_inner_2);
	printf("repeating asset_server_cpu_inner:\n%s\n", cJSON_Print(jsonasset_server_cpu_inner_2));
}

int main() {
  test_asset_server_cpu_inner(1);
  test_asset_server_cpu_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // asset_server_cpu_inner_MAIN
#endif // asset_server_cpu_inner_TEST
