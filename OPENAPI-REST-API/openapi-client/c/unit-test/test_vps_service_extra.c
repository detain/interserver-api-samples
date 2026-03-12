#ifndef vps_service_extra_TEST
#define vps_service_extra_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_service_extra_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_service_extra.h"
vps_service_extra_t* instantiate_vps_service_extra(int include_optional);



vps_service_extra_t* instantiate_vps_service_extra(int include_optional) {
  vps_service_extra_t* vps_service_extra = NULL;
  if (include_optional) {
    vps_service_extra = vps_service_extra_create(
      5903,
      list_createList()
    );
  } else {
    vps_service_extra = vps_service_extra_create(
      5903,
      list_createList()
    );
  }

  return vps_service_extra;
}


#ifdef vps_service_extra_MAIN

void test_vps_service_extra(int include_optional) {
    vps_service_extra_t* vps_service_extra_1 = instantiate_vps_service_extra(include_optional);

	cJSON* jsonvps_service_extra_1 = vps_service_extra_convertToJSON(vps_service_extra_1);
	printf("vps_service_extra :\n%s\n", cJSON_Print(jsonvps_service_extra_1));
	vps_service_extra_t* vps_service_extra_2 = vps_service_extra_parseFromJSON(jsonvps_service_extra_1);
	cJSON* jsonvps_service_extra_2 = vps_service_extra_convertToJSON(vps_service_extra_2);
	printf("repeating vps_service_extra:\n%s\n", cJSON_Print(jsonvps_service_extra_2));
}

int main() {
  test_vps_service_extra(1);
  test_vps_service_extra(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_service_extra_MAIN
#endif // vps_service_extra_TEST
