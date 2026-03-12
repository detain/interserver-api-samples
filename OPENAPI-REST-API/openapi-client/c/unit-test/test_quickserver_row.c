#ifndef quickserver_row_TEST
#define quickserver_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_row.h"
quickserver_row_t* instantiate_quickserver_row(int include_optional);



quickserver_row_t* instantiate_quickserver_row(int include_optional) {
  quickserver_row_t* quickserver_row = NULL;
  if (include_optional) {
    quickserver_row = quickserver_row_create(
      "19504",
      "Quickserver199",
      "65.00",
      "qs19504",
      "canceled",
      "0"
    );
  } else {
    quickserver_row = quickserver_row_create(
      "19504",
      "Quickserver199",
      "65.00",
      "qs19504",
      "canceled",
      "0"
    );
  }

  return quickserver_row;
}


#ifdef quickserver_row_MAIN

void test_quickserver_row(int include_optional) {
    quickserver_row_t* quickserver_row_1 = instantiate_quickserver_row(include_optional);

	cJSON* jsonquickserver_row_1 = quickserver_row_convertToJSON(quickserver_row_1);
	printf("quickserver_row :\n%s\n", cJSON_Print(jsonquickserver_row_1));
	quickserver_row_t* quickserver_row_2 = quickserver_row_parseFromJSON(jsonquickserver_row_1);
	cJSON* jsonquickserver_row_2 = quickserver_row_convertToJSON(quickserver_row_2);
	printf("repeating quickserver_row:\n%s\n", cJSON_Print(jsonquickserver_row_2));
}

int main() {
  test_quickserver_row(1);
  test_quickserver_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_row_MAIN
#endif // quickserver_row_TEST
