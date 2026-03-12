#ifndef quickserver_order_version_TEST
#define quickserver_order_version_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_version_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_version.h"
quickserver_order_version_t* instantiate_quickserver_order_version(int include_optional);

#include "test_quickserver_order_version_centosstream8.c"


quickserver_order_version_t* instantiate_quickserver_order_version(int include_optional) {
  quickserver_order_version_t* quickserver_order_version = NULL;
  if (include_optional) {
    quickserver_order_version = quickserver_order_version_create(
       // false, not to have infinite recursion
      instantiate_quickserver_order_version_centosstream8(0)
    );
  } else {
    quickserver_order_version = quickserver_order_version_create(
      NULL
    );
  }

  return quickserver_order_version;
}


#ifdef quickserver_order_version_MAIN

void test_quickserver_order_version(int include_optional) {
    quickserver_order_version_t* quickserver_order_version_1 = instantiate_quickserver_order_version(include_optional);

	cJSON* jsonquickserver_order_version_1 = quickserver_order_version_convertToJSON(quickserver_order_version_1);
	printf("quickserver_order_version :\n%s\n", cJSON_Print(jsonquickserver_order_version_1));
	quickserver_order_version_t* quickserver_order_version_2 = quickserver_order_version_parseFromJSON(jsonquickserver_order_version_1);
	cJSON* jsonquickserver_order_version_2 = quickserver_order_version_convertToJSON(quickserver_order_version_2);
	printf("repeating quickserver_order_version:\n%s\n", cJSON_Print(jsonquickserver_order_version_2));
}

int main() {
  test_quickserver_order_version(1);
  test_quickserver_order_version(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_version_MAIN
#endif // quickserver_order_version_TEST
