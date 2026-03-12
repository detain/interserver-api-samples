#ifndef get_order_detail_200_response_package_costs_TEST
#define get_order_detail_200_response_package_costs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_order_detail_200_response_package_costs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_order_detail_200_response_package_costs.h"
get_order_detail_200_response_package_costs_t* instantiate_get_order_detail_200_response_package_costs(int include_optional);



get_order_detail_200_response_package_costs_t* instantiate_get_order_detail_200_response_package_costs(int include_optional) {
  get_order_detail_200_response_package_costs_t* get_order_detail_200_response_package_costs = NULL;
  if (include_optional) {
    get_order_detail_200_response_package_costs = get_order_detail_200_response_package_costs_create(
      11552,
      5,
      "USD",
      "$"
    );
  } else {
    get_order_detail_200_response_package_costs = get_order_detail_200_response_package_costs_create(
      11552,
      5,
      "USD",
      "$"
    );
  }

  return get_order_detail_200_response_package_costs;
}


#ifdef get_order_detail_200_response_package_costs_MAIN

void test_get_order_detail_200_response_package_costs(int include_optional) {
    get_order_detail_200_response_package_costs_t* get_order_detail_200_response_package_costs_1 = instantiate_get_order_detail_200_response_package_costs(include_optional);

	cJSON* jsonget_order_detail_200_response_package_costs_1 = get_order_detail_200_response_package_costs_convertToJSON(get_order_detail_200_response_package_costs_1);
	printf("get_order_detail_200_response_package_costs :\n%s\n", cJSON_Print(jsonget_order_detail_200_response_package_costs_1));
	get_order_detail_200_response_package_costs_t* get_order_detail_200_response_package_costs_2 = get_order_detail_200_response_package_costs_parseFromJSON(jsonget_order_detail_200_response_package_costs_1);
	cJSON* jsonget_order_detail_200_response_package_costs_2 = get_order_detail_200_response_package_costs_convertToJSON(get_order_detail_200_response_package_costs_2);
	printf("repeating get_order_detail_200_response_package_costs:\n%s\n", cJSON_Print(jsonget_order_detail_200_response_package_costs_2));
}

int main() {
  test_get_order_detail_200_response_package_costs(1);
  test_get_order_detail_200_response_package_costs(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_order_detail_200_response_package_costs_MAIN
#endif // get_order_detail_200_response_package_costs_TEST
