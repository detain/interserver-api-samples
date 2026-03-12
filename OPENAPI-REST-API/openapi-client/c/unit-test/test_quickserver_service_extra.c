#ifndef quickserver_service_extra_TEST
#define quickserver_service_extra_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_service_extra_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_service_extra.h"
quickserver_service_extra_t* instantiate_quickserver_service_extra(int include_optional);



quickserver_service_extra_t* instantiate_quickserver_service_extra(int include_optional) {
  quickserver_service_extra_t* quickserver_service_extra = NULL;
  if (include_optional) {
    quickserver_service_extra = quickserver_service_extra_create(
      "kvm"
    );
  } else {
    quickserver_service_extra = quickserver_service_extra_create(
      "kvm"
    );
  }

  return quickserver_service_extra;
}


#ifdef quickserver_service_extra_MAIN

void test_quickserver_service_extra(int include_optional) {
    quickserver_service_extra_t* quickserver_service_extra_1 = instantiate_quickserver_service_extra(include_optional);

	cJSON* jsonquickserver_service_extra_1 = quickserver_service_extra_convertToJSON(quickserver_service_extra_1);
	printf("quickserver_service_extra :\n%s\n", cJSON_Print(jsonquickserver_service_extra_1));
	quickserver_service_extra_t* quickserver_service_extra_2 = quickserver_service_extra_parseFromJSON(jsonquickserver_service_extra_1);
	cJSON* jsonquickserver_service_extra_2 = quickserver_service_extra_convertToJSON(quickserver_service_extra_2);
	printf("repeating quickserver_service_extra:\n%s\n", cJSON_Print(jsonquickserver_service_extra_2));
}

int main() {
  test_quickserver_service_extra(1);
  test_quickserver_service_extra(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_service_extra_MAIN
#endif // quickserver_service_extra_TEST
