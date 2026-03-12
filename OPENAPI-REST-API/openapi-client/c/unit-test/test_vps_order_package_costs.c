#ifndef vps_order_package_costs_TEST
#define vps_order_package_costs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_package_costs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_package_costs.h"
vps_order_package_costs_t* instantiate_vps_order_package_costs(int include_optional);



vps_order_package_costs_t* instantiate_vps_order_package_costs(int include_optional) {
  vps_order_package_costs_t* vps_order_package_costs = NULL;
  if (include_optional) {
    vps_order_package_costs = vps_order_package_costs_create(
      6
    );
  } else {
    vps_order_package_costs = vps_order_package_costs_create(
      6
    );
  }

  return vps_order_package_costs;
}


#ifdef vps_order_package_costs_MAIN

void test_vps_order_package_costs(int include_optional) {
    vps_order_package_costs_t* vps_order_package_costs_1 = instantiate_vps_order_package_costs(include_optional);

	cJSON* jsonvps_order_package_costs_1 = vps_order_package_costs_convertToJSON(vps_order_package_costs_1);
	printf("vps_order_package_costs :\n%s\n", cJSON_Print(jsonvps_order_package_costs_1));
	vps_order_package_costs_t* vps_order_package_costs_2 = vps_order_package_costs_parseFromJSON(jsonvps_order_package_costs_1);
	cJSON* jsonvps_order_package_costs_2 = vps_order_package_costs_convertToJSON(vps_order_package_costs_2);
	printf("repeating vps_order_package_costs:\n%s\n", cJSON_Print(jsonvps_order_package_costs_2));
}

int main() {
  test_vps_order_package_costs(1);
  test_vps_order_package_costs(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_package_costs_MAIN
#endif // vps_order_package_costs_TEST
