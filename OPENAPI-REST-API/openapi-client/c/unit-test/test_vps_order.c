#ifndef vps_order_TEST
#define vps_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order.h"
vps_order_t* instantiate_vps_order(int include_optional);

#include "test_vps_order_platform_packages.c"
#include "test_vps_order_platform_names.c"
#include "test_vps_order_package_costs.c"
#include "test_vps_order_location_stock.c"
#include "test_vps_order_location_names.c"
#include "test_vps_order_os_names.c"
#include "test_vps_order_templates.c"
#include "test_vps_order_service_types.c"


vps_order_t* instantiate_vps_order(int include_optional) {
  vps_order_t* vps_order = NULL;
  if (include_optional) {
    vps_order = vps_order_create(
      9,
      6,
      9,
      6,
      10,
      10,
      6,
      6,
      6,
      6,
      3,
      10,
      22,
      8,
      "2048",
      "30",
      "1000",
      "2000",
      "2",
      2,
      "16",
       // false, not to have infinite recursion
      instantiate_vps_order_platform_packages(0),
       // false, not to have infinite recursion
      instantiate_vps_order_platform_names(0),
       // false, not to have infinite recursion
      instantiate_vps_order_package_costs(0),
       // false, not to have infinite recursion
      instantiate_vps_order_location_stock(0),
       // false, not to have infinite recursion
      instantiate_vps_order_location_names(0),
       // false, not to have infinite recursion
      instantiate_vps_order_os_names(0),
       // false, not to have infinite recursion
      instantiate_vps_order_templates(0),
       // false, not to have infinite recursion
      instantiate_vps_order_service_types(0),
      "USD",
      "$"
    );
  } else {
    vps_order = vps_order_create(
      9,
      6,
      9,
      6,
      10,
      10,
      6,
      6,
      6,
      6,
      3,
      10,
      22,
      8,
      "2048",
      "30",
      "1000",
      "2000",
      "2",
      2,
      "16",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      "USD",
      "$"
    );
  }

  return vps_order;
}


#ifdef vps_order_MAIN

void test_vps_order(int include_optional) {
    vps_order_t* vps_order_1 = instantiate_vps_order(include_optional);

	cJSON* jsonvps_order_1 = vps_order_convertToJSON(vps_order_1);
	printf("vps_order :\n%s\n", cJSON_Print(jsonvps_order_1));
	vps_order_t* vps_order_2 = vps_order_parseFromJSON(jsonvps_order_1);
	cJSON* jsonvps_order_2 = vps_order_convertToJSON(vps_order_2);
	printf("repeating vps_order:\n%s\n", cJSON_Print(jsonvps_order_2));
}

int main() {
  test_vps_order(1);
  test_vps_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_MAIN
#endif // vps_order_TEST
