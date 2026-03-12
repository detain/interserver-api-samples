#ifndef quickserver_order_templates_ubuntu64_TEST
#define quickserver_order_templates_ubuntu64_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_templates_ubuntu64_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_templates_ubuntu64.h"
quickserver_order_templates_ubuntu64_t* instantiate_quickserver_order_templates_ubuntu64(int include_optional);



quickserver_order_templates_ubuntu64_t* instantiate_quickserver_order_templates_ubuntu64(int include_optional) {
  quickserver_order_templates_ubuntu64_t* quickserver_order_templates_ubuntu64 = NULL;
  if (include_optional) {
    quickserver_order_templates_ubuntu64 = quickserver_order_templates_ubuntu64_create(
    );
  } else {
    quickserver_order_templates_ubuntu64 = quickserver_order_templates_ubuntu64_create(
    );
  }

  return quickserver_order_templates_ubuntu64;
}


#ifdef quickserver_order_templates_ubuntu64_MAIN

void test_quickserver_order_templates_ubuntu64(int include_optional) {
    quickserver_order_templates_ubuntu64_t* quickserver_order_templates_ubuntu64_1 = instantiate_quickserver_order_templates_ubuntu64(include_optional);

	cJSON* jsonquickserver_order_templates_ubuntu64_1 = quickserver_order_templates_ubuntu64_convertToJSON(quickserver_order_templates_ubuntu64_1);
	printf("quickserver_order_templates_ubuntu64 :\n%s\n", cJSON_Print(jsonquickserver_order_templates_ubuntu64_1));
	quickserver_order_templates_ubuntu64_t* quickserver_order_templates_ubuntu64_2 = quickserver_order_templates_ubuntu64_parseFromJSON(jsonquickserver_order_templates_ubuntu64_1);
	cJSON* jsonquickserver_order_templates_ubuntu64_2 = quickserver_order_templates_ubuntu64_convertToJSON(quickserver_order_templates_ubuntu64_2);
	printf("repeating quickserver_order_templates_ubuntu64:\n%s\n", cJSON_Print(jsonquickserver_order_templates_ubuntu64_2));
}

int main() {
  test_quickserver_order_templates_ubuntu64(1);
  test_quickserver_order_templates_ubuntu64(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_templates_ubuntu64_MAIN
#endif // quickserver_order_templates_ubuntu64_TEST
