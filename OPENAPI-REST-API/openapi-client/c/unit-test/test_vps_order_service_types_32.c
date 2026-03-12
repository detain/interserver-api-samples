#ifndef vps_order_service_types_32_TEST
#define vps_order_service_types_32_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_service_types_32_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_service_types_32.h"
vps_order_service_types_32_t* instantiate_vps_order_service_types_32(int include_optional);



vps_order_service_types_32_t* instantiate_vps_order_service_types_32(int include_optional) {
  vps_order_service_types_32_t* vps_order_service_types_32 = NULL;
  if (include_optional) {
    vps_order_service_types_32 = vps_order_service_types_32_create(
      "32",
      "KVM Windows VPS Slice",
      "10.00",
      "2",
      "1",
      "1",
      "slice",
      "0",
      "vps"
    );
  } else {
    vps_order_service_types_32 = vps_order_service_types_32_create(
      "32",
      "KVM Windows VPS Slice",
      "10.00",
      "2",
      "1",
      "1",
      "slice",
      "0",
      "vps"
    );
  }

  return vps_order_service_types_32;
}


#ifdef vps_order_service_types_32_MAIN

void test_vps_order_service_types_32(int include_optional) {
    vps_order_service_types_32_t* vps_order_service_types_32_1 = instantiate_vps_order_service_types_32(include_optional);

	cJSON* jsonvps_order_service_types_32_1 = vps_order_service_types_32_convertToJSON(vps_order_service_types_32_1);
	printf("vps_order_service_types_32 :\n%s\n", cJSON_Print(jsonvps_order_service_types_32_1));
	vps_order_service_types_32_t* vps_order_service_types_32_2 = vps_order_service_types_32_parseFromJSON(jsonvps_order_service_types_32_1);
	cJSON* jsonvps_order_service_types_32_2 = vps_order_service_types_32_convertToJSON(vps_order_service_types_32_2);
	printf("repeating vps_order_service_types_32:\n%s\n", cJSON_Print(jsonvps_order_service_types_32_2));
}

int main() {
  test_vps_order_service_types_32(1);
  test_vps_order_service_types_32(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_service_types_32_MAIN
#endif // vps_order_service_types_32_TEST
