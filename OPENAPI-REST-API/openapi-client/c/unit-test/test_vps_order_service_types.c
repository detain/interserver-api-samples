#ifndef vps_order_service_types_TEST
#define vps_order_service_types_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_service_types_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_service_types.h"
vps_order_service_types_t* instantiate_vps_order_service_types(int include_optional);

#include "test_vps_order_service_types_32.c"


vps_order_service_types_t* instantiate_vps_order_service_types(int include_optional) {
  vps_order_service_types_t* vps_order_service_types = NULL;
  if (include_optional) {
    vps_order_service_types = vps_order_service_types_create(
       // false, not to have infinite recursion
      instantiate_vps_order_service_types_32(0)
    );
  } else {
    vps_order_service_types = vps_order_service_types_create(
      NULL
    );
  }

  return vps_order_service_types;
}


#ifdef vps_order_service_types_MAIN

void test_vps_order_service_types(int include_optional) {
    vps_order_service_types_t* vps_order_service_types_1 = instantiate_vps_order_service_types(include_optional);

	cJSON* jsonvps_order_service_types_1 = vps_order_service_types_convertToJSON(vps_order_service_types_1);
	printf("vps_order_service_types :\n%s\n", cJSON_Print(jsonvps_order_service_types_1));
	vps_order_service_types_t* vps_order_service_types_2 = vps_order_service_types_parseFromJSON(jsonvps_order_service_types_1);
	cJSON* jsonvps_order_service_types_2 = vps_order_service_types_convertToJSON(vps_order_service_types_2);
	printf("repeating vps_order_service_types:\n%s\n", cJSON_Print(jsonvps_order_service_types_2));
}

int main() {
  test_vps_order_service_types(1);
  test_vps_order_service_types(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_service_types_MAIN
#endif // vps_order_service_types_TEST
