#ifndef quickserver_order_server_details_TEST
#define quickserver_order_server_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_server_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_server_details.h"
quickserver_order_server_details_t* instantiate_quickserver_order_server_details(int include_optional);

#include "test_quickserver_order_server_details381.c"


quickserver_order_server_details_t* instantiate_quickserver_order_server_details(int include_optional) {
  quickserver_order_server_details_t* quickserver_order_server_details = NULL;
  if (include_optional) {
    quickserver_order_server_details = quickserver_order_server_details_create(
       // false, not to have infinite recursion
      instantiate_quickserver_order_server_details381(0)
    );
  } else {
    quickserver_order_server_details = quickserver_order_server_details_create(
      NULL
    );
  }

  return quickserver_order_server_details;
}


#ifdef quickserver_order_server_details_MAIN

void test_quickserver_order_server_details(int include_optional) {
    quickserver_order_server_details_t* quickserver_order_server_details_1 = instantiate_quickserver_order_server_details(include_optional);

	cJSON* jsonquickserver_order_server_details_1 = quickserver_order_server_details_convertToJSON(quickserver_order_server_details_1);
	printf("quickserver_order_server_details :\n%s\n", cJSON_Print(jsonquickserver_order_server_details_1));
	quickserver_order_server_details_t* quickserver_order_server_details_2 = quickserver_order_server_details_parseFromJSON(jsonquickserver_order_server_details_1);
	cJSON* jsonquickserver_order_server_details_2 = quickserver_order_server_details_convertToJSON(quickserver_order_server_details_2);
	printf("repeating quickserver_order_server_details:\n%s\n", cJSON_Print(jsonquickserver_order_server_details_2));
}

int main() {
  test_quickserver_order_server_details(1);
  test_quickserver_order_server_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_server_details_MAIN
#endif // quickserver_order_server_details_TEST
