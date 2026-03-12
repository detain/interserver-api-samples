#ifndef get_order_detail_200_response_service_types_inner_TEST
#define get_order_detail_200_response_service_types_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_order_detail_200_response_service_types_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_order_detail_200_response_service_types_inner.h"
get_order_detail_200_response_service_types_inner_t* instantiate_get_order_detail_200_response_service_types_inner(int include_optional);



get_order_detail_200_response_service_types_inner_t* instantiate_get_order_detail_200_response_service_types_inner(int include_optional) {
  get_order_detail_200_response_service_types_inner_t* get_order_detail_200_response_service_types_inner = NULL;
  if (include_optional) {
    get_order_detail_200_response_service_types_inner = get_order_detail_200_response_service_types_inner_create(
      11552,
      "Current IP + Scrub",
      5,
      "0",
      "0",
      "scrub_ips"
    );
  } else {
    get_order_detail_200_response_service_types_inner = get_order_detail_200_response_service_types_inner_create(
      11552,
      "Current IP + Scrub",
      5,
      "0",
      "0",
      "scrub_ips"
    );
  }

  return get_order_detail_200_response_service_types_inner;
}


#ifdef get_order_detail_200_response_service_types_inner_MAIN

void test_get_order_detail_200_response_service_types_inner(int include_optional) {
    get_order_detail_200_response_service_types_inner_t* get_order_detail_200_response_service_types_inner_1 = instantiate_get_order_detail_200_response_service_types_inner(include_optional);

	cJSON* jsonget_order_detail_200_response_service_types_inner_1 = get_order_detail_200_response_service_types_inner_convertToJSON(get_order_detail_200_response_service_types_inner_1);
	printf("get_order_detail_200_response_service_types_inner :\n%s\n", cJSON_Print(jsonget_order_detail_200_response_service_types_inner_1));
	get_order_detail_200_response_service_types_inner_t* get_order_detail_200_response_service_types_inner_2 = get_order_detail_200_response_service_types_inner_parseFromJSON(jsonget_order_detail_200_response_service_types_inner_1);
	cJSON* jsonget_order_detail_200_response_service_types_inner_2 = get_order_detail_200_response_service_types_inner_convertToJSON(get_order_detail_200_response_service_types_inner_2);
	printf("repeating get_order_detail_200_response_service_types_inner:\n%s\n", cJSON_Print(jsonget_order_detail_200_response_service_types_inner_2));
}

int main() {
  test_get_order_detail_200_response_service_types_inner(1);
  test_get_order_detail_200_response_service_types_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_order_detail_200_response_service_types_inner_MAIN
#endif // get_order_detail_200_response_service_types_inner_TEST
