#ifndef quickserver_order_server_details381_TEST
#define quickserver_order_server_details381_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_server_details381_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_server_details381.h"
quickserver_order_server_details381_t* instantiate_quickserver_order_server_details381(int include_optional);



quickserver_order_server_details381_t* instantiate_quickserver_order_server_details381(int include_optional) {
  quickserver_order_server_details381_t* quickserver_order_server_details381 = NULL;
  if (include_optional) {
    quickserver_order_server_details381 = quickserver_order_server_details381_create(
      "AMD Ryzen 9 5900X 12-Core Processor",
      "119GB",
      "1760GB",
      24,
      "$140.00"
    );
  } else {
    quickserver_order_server_details381 = quickserver_order_server_details381_create(
      "AMD Ryzen 9 5900X 12-Core Processor",
      "119GB",
      "1760GB",
      24,
      "$140.00"
    );
  }

  return quickserver_order_server_details381;
}


#ifdef quickserver_order_server_details381_MAIN

void test_quickserver_order_server_details381(int include_optional) {
    quickserver_order_server_details381_t* quickserver_order_server_details381_1 = instantiate_quickserver_order_server_details381(include_optional);

	cJSON* jsonquickserver_order_server_details381_1 = quickserver_order_server_details381_convertToJSON(quickserver_order_server_details381_1);
	printf("quickserver_order_server_details381 :\n%s\n", cJSON_Print(jsonquickserver_order_server_details381_1));
	quickserver_order_server_details381_t* quickserver_order_server_details381_2 = quickserver_order_server_details381_parseFromJSON(jsonquickserver_order_server_details381_1);
	cJSON* jsonquickserver_order_server_details381_2 = quickserver_order_server_details381_convertToJSON(quickserver_order_server_details381_2);
	printf("repeating quickserver_order_server_details381:\n%s\n", cJSON_Print(jsonquickserver_order_server_details381_2));
}

int main() {
  test_quickserver_order_server_details381(1);
  test_quickserver_order_server_details381(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_server_details381_MAIN
#endif // quickserver_order_server_details381_TEST
