#ifndef quickserver_ip_table_row_TEST
#define quickserver_ip_table_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_ip_table_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_ip_table_row.h"
quickserver_ip_table_row_t* instantiate_quickserver_ip_table_row(int include_optional);



quickserver_ip_table_row_t* instantiate_quickserver_ip_table_row(int include_optional) {
  quickserver_ip_table_row_t* quickserver_ip_table_row = NULL;
  if (include_optional) {
    quickserver_ip_table_row = quickserver_ip_table_row_create(
      "Netmask",
      "0"
    );
  } else {
    quickserver_ip_table_row = quickserver_ip_table_row_create(
      "Netmask",
      "0"
    );
  }

  return quickserver_ip_table_row;
}


#ifdef quickserver_ip_table_row_MAIN

void test_quickserver_ip_table_row(int include_optional) {
    quickserver_ip_table_row_t* quickserver_ip_table_row_1 = instantiate_quickserver_ip_table_row(include_optional);

	cJSON* jsonquickserver_ip_table_row_1 = quickserver_ip_table_row_convertToJSON(quickserver_ip_table_row_1);
	printf("quickserver_ip_table_row :\n%s\n", cJSON_Print(jsonquickserver_ip_table_row_1));
	quickserver_ip_table_row_t* quickserver_ip_table_row_2 = quickserver_ip_table_row_parseFromJSON(jsonquickserver_ip_table_row_1);
	cJSON* jsonquickserver_ip_table_row_2 = quickserver_ip_table_row_convertToJSON(quickserver_ip_table_row_2);
	printf("repeating quickserver_ip_table_row:\n%s\n", cJSON_Print(jsonquickserver_ip_table_row_2));
}

int main() {
  test_quickserver_ip_table_row(1);
  test_quickserver_ip_table_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_ip_table_row_MAIN
#endif // quickserver_ip_table_row_TEST
