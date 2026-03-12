#ifndef vps_TEST
#define vps_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps.h"
vps_t* instantiate_vps(int include_optional);

#include "test_vps_service_info.c"
#include "test_vps_billing_details.c"
#include "test_vps_service_master.c"
#include "test_vps_service_extra.c"
#include "test_vps_extra_info_tables.c"
#include "test_vps_cp_data.c"
#include "test_vps_da_data.c"
#include "test_vps_plesk12_data.c"
#include "test_vps_service_addons.c"


vps_t* instantiate_vps(int include_optional) {
  vps_t* vps = NULL;
  if (include_optional) {
    vps = vps_create(
       // false, not to have infinite recursion
      instantiate_vps_service_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_vps_billing_details(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_vps_service_master(0),
      "0",
       // false, not to have infinite recursion
      instantiate_vps_service_extra(0),
       // false, not to have infinite recursion
      instantiate_vps_extra_info_tables(0),
      "0",
      "0",
      56,
      56,
       // false, not to have infinite recursion
      instantiate_vps_cp_data(0),
       // false, not to have infinite recursion
      instantiate_vps_da_data(0),
       // false, not to have infinite recursion
      instantiate_vps_plesk12_data(0),
       // false, not to have infinite recursion
      instantiate_vps_service_addons(0),
      "0",
      null
    );
  } else {
    vps = vps_create(
      NULL,
      list_createList(),
      NULL,
      "0",
      "0",
      NULL,
      "0",
      NULL,
      NULL,
      "0",
      "0",
      56,
      56,
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      null
    );
  }

  return vps;
}


#ifdef vps_MAIN

void test_vps(int include_optional) {
    vps_t* vps_1 = instantiate_vps(include_optional);

	cJSON* jsonvps_1 = vps_convertToJSON(vps_1);
	printf("vps :\n%s\n", cJSON_Print(jsonvps_1));
	vps_t* vps_2 = vps_parseFromJSON(jsonvps_1);
	cJSON* jsonvps_2 = vps_convertToJSON(vps_2);
	printf("repeating vps:\n%s\n", cJSON_Print(jsonvps_2));
}

int main() {
  test_vps(1);
  test_vps(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_MAIN
#endif // vps_TEST
