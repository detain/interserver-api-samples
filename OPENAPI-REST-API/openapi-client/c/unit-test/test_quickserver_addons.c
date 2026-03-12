#ifndef quickserver_addons_TEST
#define quickserver_addons_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_addons_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_addons.h"
quickserver_addons_t* instantiate_quickserver_addons(int include_optional);



quickserver_addons_t* instantiate_quickserver_addons(int include_optional) {
  quickserver_addons_t* quickserver_addons = NULL;
  if (include_optional) {
    quickserver_addons = quickserver_addons_create(
      "Addons",
      list_createList()
    );
  } else {
    quickserver_addons = quickserver_addons_create(
      "Addons",
      list_createList()
    );
  }

  return quickserver_addons;
}


#ifdef quickserver_addons_MAIN

void test_quickserver_addons(int include_optional) {
    quickserver_addons_t* quickserver_addons_1 = instantiate_quickserver_addons(include_optional);

	cJSON* jsonquickserver_addons_1 = quickserver_addons_convertToJSON(quickserver_addons_1);
	printf("quickserver_addons :\n%s\n", cJSON_Print(jsonquickserver_addons_1));
	quickserver_addons_t* quickserver_addons_2 = quickserver_addons_parseFromJSON(jsonquickserver_addons_1);
	cJSON* jsonquickserver_addons_2 = quickserver_addons_convertToJSON(quickserver_addons_2);
	printf("repeating quickserver_addons:\n%s\n", cJSON_Print(jsonquickserver_addons_2));
}

int main() {
  test_quickserver_addons(1);
  test_quickserver_addons(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_addons_MAIN
#endif // quickserver_addons_TEST
