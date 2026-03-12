#ifndef quickserver_order_templates_TEST
#define quickserver_order_templates_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_templates_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_templates.h"
quickserver_order_templates_t* instantiate_quickserver_order_templates(int include_optional);



quickserver_order_templates_t* instantiate_quickserver_order_templates(int include_optional) {
  quickserver_order_templates_t* quickserver_order_templates = NULL;
  if (include_optional) {
    quickserver_order_templates = quickserver_order_templates_create(
      list_createList()
    );
  } else {
    quickserver_order_templates = quickserver_order_templates_create(
      list_createList()
    );
  }

  return quickserver_order_templates;
}


#ifdef quickserver_order_templates_MAIN

void test_quickserver_order_templates(int include_optional) {
    quickserver_order_templates_t* quickserver_order_templates_1 = instantiate_quickserver_order_templates(include_optional);

	cJSON* jsonquickserver_order_templates_1 = quickserver_order_templates_convertToJSON(quickserver_order_templates_1);
	printf("quickserver_order_templates :\n%s\n", cJSON_Print(jsonquickserver_order_templates_1));
	quickserver_order_templates_t* quickserver_order_templates_2 = quickserver_order_templates_parseFromJSON(jsonquickserver_order_templates_1);
	cJSON* jsonquickserver_order_templates_2 = quickserver_order_templates_convertToJSON(quickserver_order_templates_2);
	printf("repeating quickserver_order_templates:\n%s\n", cJSON_Print(jsonquickserver_order_templates_2));
}

int main() {
  test_quickserver_order_templates(1);
  test_quickserver_order_templates(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_templates_MAIN
#endif // quickserver_order_templates_TEST
