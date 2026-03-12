#ifndef vps_order_put_response_TEST
#define vps_order_put_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_put_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_put_response.h"
vps_order_put_response_t* instantiate_vps_order_put_response(int include_optional);



vps_order_put_response_t* instantiate_vps_order_put_response(int include_optional) {
  vps_order_put_response_t* vps_order_put_response = NULL;
  if (include_optional) {
    vps_order_put_response = vps_order_put_response_create(
      1,
      list_createList(),
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    vps_order_put_response = vps_order_put_response_create(
      1,
      list_createList(),
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return vps_order_put_response;
}


#ifdef vps_order_put_response_MAIN

void test_vps_order_put_response(int include_optional) {
    vps_order_put_response_t* vps_order_put_response_1 = instantiate_vps_order_put_response(include_optional);

	cJSON* jsonvps_order_put_response_1 = vps_order_put_response_convertToJSON(vps_order_put_response_1);
	printf("vps_order_put_response :\n%s\n", cJSON_Print(jsonvps_order_put_response_1));
	vps_order_put_response_t* vps_order_put_response_2 = vps_order_put_response_parseFromJSON(jsonvps_order_put_response_1);
	cJSON* jsonvps_order_put_response_2 = vps_order_put_response_convertToJSON(vps_order_put_response_2);
	printf("repeating vps_order_put_response:\n%s\n", cJSON_Print(jsonvps_order_put_response_2));
}

int main() {
  test_vps_order_put_response(1);
  test_vps_order_put_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_put_response_MAIN
#endif // vps_order_put_response_TEST
