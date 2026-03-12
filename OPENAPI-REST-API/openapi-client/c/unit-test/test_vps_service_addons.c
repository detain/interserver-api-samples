#ifndef vps_service_addons_TEST
#define vps_service_addons_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_service_addons_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_service_addons.h"
vps_service_addons_t* instantiate_vps_service_addons(int include_optional);



vps_service_addons_t* instantiate_vps_service_addons(int include_optional) {
  vps_service_addons_t* vps_service_addons = NULL;
  if (include_optional) {
    vps_service_addons = vps_service_addons_create(
      1,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      56,
      56,
      list_createList(),
      list_createList()
    );
  } else {
    vps_service_addons = vps_service_addons_create(
      1,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      56,
      56,
      list_createList(),
      list_createList()
    );
  }

  return vps_service_addons;
}


#ifdef vps_service_addons_MAIN

void test_vps_service_addons(int include_optional) {
    vps_service_addons_t* vps_service_addons_1 = instantiate_vps_service_addons(include_optional);

	cJSON* jsonvps_service_addons_1 = vps_service_addons_convertToJSON(vps_service_addons_1);
	printf("vps_service_addons :\n%s\n", cJSON_Print(jsonvps_service_addons_1));
	vps_service_addons_t* vps_service_addons_2 = vps_service_addons_parseFromJSON(jsonvps_service_addons_1);
	cJSON* jsonvps_service_addons_2 = vps_service_addons_convertToJSON(vps_service_addons_2);
	printf("repeating vps_service_addons:\n%s\n", cJSON_Print(jsonvps_service_addons_2));
}

int main() {
  test_vps_service_addons(1);
  test_vps_service_addons(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_service_addons_MAIN
#endif // vps_service_addons_TEST
