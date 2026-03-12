#ifndef quickserver_addons_row_TEST
#define quickserver_addons_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_addons_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_addons_row.h"
quickserver_addons_row_t* instantiate_quickserver_addons_row(int include_optional);



quickserver_addons_row_t* instantiate_quickserver_addons_row(int include_optional) {
  quickserver_addons_row_t* quickserver_addons_row = NULL;
  if (include_optional) {
    quickserver_addons_row = quickserver_addons_row_create(
      "Additional IP Address",
      "0"
    );
  } else {
    quickserver_addons_row = quickserver_addons_row_create(
      "Additional IP Address",
      "0"
    );
  }

  return quickserver_addons_row;
}


#ifdef quickserver_addons_row_MAIN

void test_quickserver_addons_row(int include_optional) {
    quickserver_addons_row_t* quickserver_addons_row_1 = instantiate_quickserver_addons_row(include_optional);

	cJSON* jsonquickserver_addons_row_1 = quickserver_addons_row_convertToJSON(quickserver_addons_row_1);
	printf("quickserver_addons_row :\n%s\n", cJSON_Print(jsonquickserver_addons_row_1));
	quickserver_addons_row_t* quickserver_addons_row_2 = quickserver_addons_row_parseFromJSON(jsonquickserver_addons_row_1);
	cJSON* jsonquickserver_addons_row_2 = quickserver_addons_row_convertToJSON(quickserver_addons_row_2);
	printf("repeating quickserver_addons_row:\n%s\n", cJSON_Print(jsonquickserver_addons_row_2));
}

int main() {
  test_quickserver_addons_row(1);
  test_quickserver_addons_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_addons_row_MAIN
#endif // quickserver_addons_row_TEST
