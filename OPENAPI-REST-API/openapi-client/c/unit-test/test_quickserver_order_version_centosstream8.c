#ifndef quickserver_order_version_centosstream8_TEST
#define quickserver_order_version_centosstream8_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_version_centosstream8_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_version_centosstream8.h"
quickserver_order_version_centosstream8_t* instantiate_quickserver_order_version_centosstream8(int include_optional);



quickserver_order_version_centosstream8_t* instantiate_quickserver_order_version_centosstream8(int include_optional) {
  quickserver_order_version_centosstream8_t* quickserver_order_version_centosstream8 = NULL;
  if (include_optional) {
    quickserver_order_version_centosstream8 = quickserver_order_version_centosstream8_create(
      "8 Stream (64 bits)"
    );
  } else {
    quickserver_order_version_centosstream8 = quickserver_order_version_centosstream8_create(
      "8 Stream (64 bits)"
    );
  }

  return quickserver_order_version_centosstream8;
}


#ifdef quickserver_order_version_centosstream8_MAIN

void test_quickserver_order_version_centosstream8(int include_optional) {
    quickserver_order_version_centosstream8_t* quickserver_order_version_centosstream8_1 = instantiate_quickserver_order_version_centosstream8(include_optional);

	cJSON* jsonquickserver_order_version_centosstream8_1 = quickserver_order_version_centosstream8_convertToJSON(quickserver_order_version_centosstream8_1);
	printf("quickserver_order_version_centosstream8 :\n%s\n", cJSON_Print(jsonquickserver_order_version_centosstream8_1));
	quickserver_order_version_centosstream8_t* quickserver_order_version_centosstream8_2 = quickserver_order_version_centosstream8_parseFromJSON(jsonquickserver_order_version_centosstream8_1);
	cJSON* jsonquickserver_order_version_centosstream8_2 = quickserver_order_version_centosstream8_convertToJSON(quickserver_order_version_centosstream8_2);
	printf("repeating quickserver_order_version_centosstream8:\n%s\n", cJSON_Print(jsonquickserver_order_version_centosstream8_2));
}

int main() {
  test_quickserver_order_version_centosstream8(1);
  test_quickserver_order_version_centosstream8(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_version_centosstream8_MAIN
#endif // quickserver_order_version_centosstream8_TEST
