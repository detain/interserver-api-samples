#ifndef quickserver_ip_info_TEST
#define quickserver_ip_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_ip_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_ip_info.h"
quickserver_ip_info_t* instantiate_quickserver_ip_info(int include_optional);



quickserver_ip_info_t* instantiate_quickserver_ip_info(int include_optional) {
  quickserver_ip_info_t* quickserver_ip_info = NULL;
  if (include_optional) {
    quickserver_ip_info = quickserver_ip_info_create(
      "IP Information",
      list_createList()
    );
  } else {
    quickserver_ip_info = quickserver_ip_info_create(
      "IP Information",
      list_createList()
    );
  }

  return quickserver_ip_info;
}


#ifdef quickserver_ip_info_MAIN

void test_quickserver_ip_info(int include_optional) {
    quickserver_ip_info_t* quickserver_ip_info_1 = instantiate_quickserver_ip_info(include_optional);

	cJSON* jsonquickserver_ip_info_1 = quickserver_ip_info_convertToJSON(quickserver_ip_info_1);
	printf("quickserver_ip_info :\n%s\n", cJSON_Print(jsonquickserver_ip_info_1));
	quickserver_ip_info_t* quickserver_ip_info_2 = quickserver_ip_info_parseFromJSON(jsonquickserver_ip_info_1);
	cJSON* jsonquickserver_ip_info_2 = quickserver_ip_info_convertToJSON(quickserver_ip_info_2);
	printf("repeating quickserver_ip_info:\n%s\n", cJSON_Print(jsonquickserver_ip_info_2));
}

int main() {
  test_quickserver_ip_info(1);
  test_quickserver_ip_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_ip_info_MAIN
#endif // quickserver_ip_info_TEST
