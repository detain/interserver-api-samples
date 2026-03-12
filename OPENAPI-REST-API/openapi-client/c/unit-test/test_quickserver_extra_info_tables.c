#ifndef quickserver_extra_info_tables_TEST
#define quickserver_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_extra_info_tables.h"
quickserver_extra_info_tables_t* instantiate_quickserver_extra_info_tables(int include_optional);

#include "test_quickserver_ip_info.c"
#include "test_quickserver_addons.c"


quickserver_extra_info_tables_t* instantiate_quickserver_extra_info_tables(int include_optional) {
  quickserver_extra_info_tables_t* quickserver_extra_info_tables = NULL;
  if (include_optional) {
    quickserver_extra_info_tables = quickserver_extra_info_tables_create(
       // false, not to have infinite recursion
      instantiate_quickserver_ip_info(0),
       // false, not to have infinite recursion
      instantiate_quickserver_addons(0)
    );
  } else {
    quickserver_extra_info_tables = quickserver_extra_info_tables_create(
      NULL,
      NULL
    );
  }

  return quickserver_extra_info_tables;
}


#ifdef quickserver_extra_info_tables_MAIN

void test_quickserver_extra_info_tables(int include_optional) {
    quickserver_extra_info_tables_t* quickserver_extra_info_tables_1 = instantiate_quickserver_extra_info_tables(include_optional);

	cJSON* jsonquickserver_extra_info_tables_1 = quickserver_extra_info_tables_convertToJSON(quickserver_extra_info_tables_1);
	printf("quickserver_extra_info_tables :\n%s\n", cJSON_Print(jsonquickserver_extra_info_tables_1));
	quickserver_extra_info_tables_t* quickserver_extra_info_tables_2 = quickserver_extra_info_tables_parseFromJSON(jsonquickserver_extra_info_tables_1);
	cJSON* jsonquickserver_extra_info_tables_2 = quickserver_extra_info_tables_convertToJSON(quickserver_extra_info_tables_2);
	printf("repeating quickserver_extra_info_tables:\n%s\n", cJSON_Print(jsonquickserver_extra_info_tables_2));
}

int main() {
  test_quickserver_extra_info_tables(1);
  test_quickserver_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_extra_info_tables_MAIN
#endif // quickserver_extra_info_tables_TEST
