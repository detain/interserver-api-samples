#ifndef vps_order_put_request_TEST
#define vps_order_put_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_put_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_put_request.h"
vps_order_put_request_t* instantiate_vps_order_put_request(int include_optional);



vps_order_put_request_t* instantiate_vps_order_put_request(int include_optional) {
  vps_order_put_request_t* vps_order_put_request = NULL;
  if (include_optional) {
    vps_order_put_request = vps_order_put_request_create(
      "0",
      1,
      interserver_management_api_vps_order_put_request_VPSPLATFORM_kvm,
      1,
      1,
      "0",
      "0",
      "0",
      interserver_management_api_vps_order_put_request_CONTROLPANEL_none,
      "0",
      "0"
    );
  } else {
    vps_order_put_request = vps_order_put_request_create(
      "0",
      1,
      interserver_management_api_vps_order_put_request_VPSPLATFORM_kvm,
      1,
      1,
      "0",
      "0",
      "0",
      interserver_management_api_vps_order_put_request_CONTROLPANEL_none,
      "0",
      "0"
    );
  }

  return vps_order_put_request;
}


#ifdef vps_order_put_request_MAIN

void test_vps_order_put_request(int include_optional) {
    vps_order_put_request_t* vps_order_put_request_1 = instantiate_vps_order_put_request(include_optional);

	cJSON* jsonvps_order_put_request_1 = vps_order_put_request_convertToJSON(vps_order_put_request_1);
	printf("vps_order_put_request :\n%s\n", cJSON_Print(jsonvps_order_put_request_1));
	vps_order_put_request_t* vps_order_put_request_2 = vps_order_put_request_parseFromJSON(jsonvps_order_put_request_1);
	cJSON* jsonvps_order_put_request_2 = vps_order_put_request_convertToJSON(vps_order_put_request_2);
	printf("repeating vps_order_put_request:\n%s\n", cJSON_Print(jsonvps_order_put_request_2));
}

int main() {
  test_vps_order_put_request(1);
  test_vps_order_put_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_put_request_MAIN
#endif // vps_order_put_request_TEST
