#ifndef quickserver_service_info_TEST
#define quickserver_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_service_info.h"
quickserver_service_info_t* instantiate_quickserver_service_info(int include_optional);



quickserver_service_info_t* instantiate_quickserver_service_info(int include_optional) {
  quickserver_service_info_t* quickserver_service_info = NULL;
  if (include_optional) {
    quickserver_service_info = quickserver_service_info_create(
      "24355",
      "771282",
      "365",
      "0",
      "0",
      "qs24355",
      "USD",
      "700",
      "2023-04-11T20:00:06.000Z",
      "canceled",
      "20297531",
      "0",
      "{"platform":"kvm"}",
      "qs24355",
      "deleted",
      "0",
      "0",
      "99.88.77.66",
      56,
      "0",
      "0",
      "ubuntu24",
      "Ubuntu",
      "1",
      "0"
    );
  } else {
    quickserver_service_info = quickserver_service_info_create(
      "24355",
      "771282",
      "365",
      "0",
      "0",
      "qs24355",
      "USD",
      "700",
      "2023-04-11T20:00:06.000Z",
      "canceled",
      "20297531",
      "0",
      "{"platform":"kvm"}",
      "qs24355",
      "deleted",
      "0",
      "0",
      "99.88.77.66",
      56,
      "0",
      "0",
      "ubuntu24",
      "Ubuntu",
      "1",
      "0"
    );
  }

  return quickserver_service_info;
}


#ifdef quickserver_service_info_MAIN

void test_quickserver_service_info(int include_optional) {
    quickserver_service_info_t* quickserver_service_info_1 = instantiate_quickserver_service_info(include_optional);

	cJSON* jsonquickserver_service_info_1 = quickserver_service_info_convertToJSON(quickserver_service_info_1);
	printf("quickserver_service_info :\n%s\n", cJSON_Print(jsonquickserver_service_info_1));
	quickserver_service_info_t* quickserver_service_info_2 = quickserver_service_info_parseFromJSON(jsonquickserver_service_info_1);
	cJSON* jsonquickserver_service_info_2 = quickserver_service_info_convertToJSON(quickserver_service_info_2);
	printf("repeating quickserver_service_info:\n%s\n", cJSON_Print(jsonquickserver_service_info_2));
}

int main() {
  test_quickserver_service_info(1);
  test_quickserver_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_service_info_MAIN
#endif // quickserver_service_info_TEST
