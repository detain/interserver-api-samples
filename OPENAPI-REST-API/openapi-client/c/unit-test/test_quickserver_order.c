#ifndef quickserver_order_TEST
#define quickserver_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order.h"
quickserver_order_t* instantiate_quickserver_order(int include_optional);

#include "test_quickserver_order_server_details.c"
#include "test_quickserver_order_templates.c"
#include "test_quickserver_order_version.c"
#include "test_quickserver_order_distro_sel.c"


quickserver_order_t* instantiate_quickserver_order(int include_optional) {
  quickserver_order_t* quickserver_order = NULL;
  if (include_optional) {
    quickserver_order = quickserver_order_create(
      "221",
       // false, not to have infinite recursion
      instantiate_quickserver_order_server_details(0),
       // false, not to have infinite recursion
      instantiate_quickserver_order_templates(0),
       // false, not to have infinite recursion
      instantiate_quickserver_order_version(0),
       // false, not to have infinite recursion
      instantiate_quickserver_order_distro_sel(0)
    );
  } else {
    quickserver_order = quickserver_order_create(
      "221",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return quickserver_order;
}


#ifdef quickserver_order_MAIN

void test_quickserver_order(int include_optional) {
    quickserver_order_t* quickserver_order_1 = instantiate_quickserver_order(include_optional);

	cJSON* jsonquickserver_order_1 = quickserver_order_convertToJSON(quickserver_order_1);
	printf("quickserver_order :\n%s\n", cJSON_Print(jsonquickserver_order_1));
	quickserver_order_t* quickserver_order_2 = quickserver_order_parseFromJSON(jsonquickserver_order_1);
	cJSON* jsonquickserver_order_2 = quickserver_order_convertToJSON(quickserver_order_2);
	printf("repeating quickserver_order:\n%s\n", cJSON_Print(jsonquickserver_order_2));
}

int main() {
  test_quickserver_order(1);
  test_quickserver_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_MAIN
#endif // quickserver_order_TEST
