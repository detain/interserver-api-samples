#ifndef vps_traffic_data_data_response_TEST
#define vps_traffic_data_data_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_traffic_data_data_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_traffic_data_data_response.h"
vps_traffic_data_data_response_t* instantiate_vps_traffic_data_data_response(int include_optional);



vps_traffic_data_data_response_t* instantiate_vps_traffic_data_data_response(int include_optional) {
  vps_traffic_data_data_response_t* vps_traffic_data_data_response = NULL;
  if (include_optional) {
    vps_traffic_data_data_response = vps_traffic_data_data_response_create(
    );
  } else {
    vps_traffic_data_data_response = vps_traffic_data_data_response_create(
    );
  }

  return vps_traffic_data_data_response;
}


#ifdef vps_traffic_data_data_response_MAIN

void test_vps_traffic_data_data_response(int include_optional) {
    vps_traffic_data_data_response_t* vps_traffic_data_data_response_1 = instantiate_vps_traffic_data_data_response(include_optional);

	cJSON* jsonvps_traffic_data_data_response_1 = vps_traffic_data_data_response_convertToJSON(vps_traffic_data_data_response_1);
	printf("vps_traffic_data_data_response :\n%s\n", cJSON_Print(jsonvps_traffic_data_data_response_1));
	vps_traffic_data_data_response_t* vps_traffic_data_data_response_2 = vps_traffic_data_data_response_parseFromJSON(jsonvps_traffic_data_data_response_1);
	cJSON* jsonvps_traffic_data_data_response_2 = vps_traffic_data_data_response_convertToJSON(vps_traffic_data_data_response_2);
	printf("repeating vps_traffic_data_data_response:\n%s\n", cJSON_Print(jsonvps_traffic_data_data_response_2));
}

int main() {
  test_vps_traffic_data_data_response(1);
  test_vps_traffic_data_data_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_traffic_data_data_response_MAIN
#endif // vps_traffic_data_data_response_TEST
