#ifndef quickserver_service_master_TEST
#define quickserver_service_master_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_service_master_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_service_master.h"
quickserver_service_master_t* instantiate_quickserver_service_master(int include_optional);



quickserver_service_master_t* instantiate_quickserver_service_master(int include_optional) {
  quickserver_service_master_t* quickserver_service_master = NULL;
  if (include_optional) {
    quickserver_service_master = quickserver_service_master_create(
      "365",
      "Qs365",
      "0",
      "14",
      "1760",
      "1192",
      "64",
      "3.45",
      "29550679",
      "Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz",
      "2900",
      "1",
      "0",
      "49",
      "2023-08-17T23:52:02.000Z",
      "8",
      "6.89",
      "OK: zfs:all pools are healthy",
      "SSD",
      "92263",
      "0",
      "5.15.0-69-generic",
      "330707348",
      "1000",
      "Ubuntu",
      "22.04",
      "0",
      "0",
      "0",
      "0",
      null,
      null,
      "0"
    );
  } else {
    quickserver_service_master = quickserver_service_master_create(
      "365",
      "Qs365",
      "0",
      "14",
      "1760",
      "1192",
      "64",
      "3.45",
      "29550679",
      "Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz",
      "2900",
      "1",
      "0",
      "49",
      "2023-08-17T23:52:02.000Z",
      "8",
      "6.89",
      "OK: zfs:all pools are healthy",
      "SSD",
      "92263",
      "0",
      "5.15.0-69-generic",
      "330707348",
      "1000",
      "Ubuntu",
      "22.04",
      "0",
      "0",
      "0",
      "0",
      null,
      null,
      "0"
    );
  }

  return quickserver_service_master;
}


#ifdef quickserver_service_master_MAIN

void test_quickserver_service_master(int include_optional) {
    quickserver_service_master_t* quickserver_service_master_1 = instantiate_quickserver_service_master(include_optional);

	cJSON* jsonquickserver_service_master_1 = quickserver_service_master_convertToJSON(quickserver_service_master_1);
	printf("quickserver_service_master :\n%s\n", cJSON_Print(jsonquickserver_service_master_1));
	quickserver_service_master_t* quickserver_service_master_2 = quickserver_service_master_parseFromJSON(jsonquickserver_service_master_1);
	cJSON* jsonquickserver_service_master_2 = quickserver_service_master_convertToJSON(quickserver_service_master_2);
	printf("repeating quickserver_service_master:\n%s\n", cJSON_Print(jsonquickserver_service_master_2));
}

int main() {
  test_quickserver_service_master(1);
  test_quickserver_service_master(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_service_master_MAIN
#endif // quickserver_service_master_TEST
