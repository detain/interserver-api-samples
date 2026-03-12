#ifndef vps_order_location_stock_1_TEST
#define vps_order_location_stock_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_location_stock_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_location_stock_1.h"
vps_order_location_stock_1_t* instantiate_vps_order_location_stock_1(int include_optional);



vps_order_location_stock_1_t* instantiate_vps_order_location_stock_1(int include_optional) {
  vps_order_location_stock_1_t* vps_order_location_stock_1 = NULL;
  if (include_optional) {
    vps_order_location_stock_1 = vps_order_location_stock_1_create(
      true,
      true,
      true
    );
  } else {
    vps_order_location_stock_1 = vps_order_location_stock_1_create(
      true,
      true,
      true
    );
  }

  return vps_order_location_stock_1;
}


#ifdef vps_order_location_stock_1_MAIN

void test_vps_order_location_stock_1(int include_optional) {
    vps_order_location_stock_1_t* vps_order_location_stock_1_1 = instantiate_vps_order_location_stock_1(include_optional);

	cJSON* jsonvps_order_location_stock_1_1 = vps_order_location_stock_1_convertToJSON(vps_order_location_stock_1_1);
	printf("vps_order_location_stock_1 :\n%s\n", cJSON_Print(jsonvps_order_location_stock_1_1));
	vps_order_location_stock_1_t* vps_order_location_stock_1_2 = vps_order_location_stock_1_parseFromJSON(jsonvps_order_location_stock_1_1);
	cJSON* jsonvps_order_location_stock_1_2 = vps_order_location_stock_1_convertToJSON(vps_order_location_stock_1_2);
	printf("repeating vps_order_location_stock_1:\n%s\n", cJSON_Print(jsonvps_order_location_stock_1_2));
}

int main() {
  test_vps_order_location_stock_1(1);
  test_vps_order_location_stock_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_location_stock_1_MAIN
#endif // vps_order_location_stock_1_TEST
