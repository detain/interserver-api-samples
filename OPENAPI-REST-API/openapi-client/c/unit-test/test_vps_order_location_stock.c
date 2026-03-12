#ifndef vps_order_location_stock_TEST
#define vps_order_location_stock_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_location_stock_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_location_stock.h"
vps_order_location_stock_t* instantiate_vps_order_location_stock(int include_optional);

#include "test_vps_order_location_stock_1.c"


vps_order_location_stock_t* instantiate_vps_order_location_stock(int include_optional) {
  vps_order_location_stock_t* vps_order_location_stock = NULL;
  if (include_optional) {
    vps_order_location_stock = vps_order_location_stock_create(
       // false, not to have infinite recursion
      instantiate_vps_order_location_stock_1(0)
    );
  } else {
    vps_order_location_stock = vps_order_location_stock_create(
      NULL
    );
  }

  return vps_order_location_stock;
}


#ifdef vps_order_location_stock_MAIN

void test_vps_order_location_stock(int include_optional) {
    vps_order_location_stock_t* vps_order_location_stock_1 = instantiate_vps_order_location_stock(include_optional);

	cJSON* jsonvps_order_location_stock_1 = vps_order_location_stock_convertToJSON(vps_order_location_stock_1);
	printf("vps_order_location_stock :\n%s\n", cJSON_Print(jsonvps_order_location_stock_1));
	vps_order_location_stock_t* vps_order_location_stock_2 = vps_order_location_stock_parseFromJSON(jsonvps_order_location_stock_1);
	cJSON* jsonvps_order_location_stock_2 = vps_order_location_stock_convertToJSON(vps_order_location_stock_2);
	printf("repeating vps_order_location_stock:\n%s\n", cJSON_Print(jsonvps_order_location_stock_2));
}

int main() {
  test_vps_order_location_stock(1);
  test_vps_order_location_stock(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_location_stock_MAIN
#endif // vps_order_location_stock_TEST
