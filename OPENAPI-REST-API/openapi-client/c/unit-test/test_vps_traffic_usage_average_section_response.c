#ifndef vps_traffic_usage_average_section_response_TEST
#define vps_traffic_usage_average_section_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_traffic_usage_average_section_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_traffic_usage_average_section_response.h"
vps_traffic_usage_average_section_response_t* instantiate_vps_traffic_usage_average_section_response(int include_optional);



vps_traffic_usage_average_section_response_t* instantiate_vps_traffic_usage_average_section_response(int include_optional) {
  vps_traffic_usage_average_section_response_t* vps_traffic_usage_average_section_response = NULL;
  if (include_optional) {
    vps_traffic_usage_average_section_response = vps_traffic_usage_average_section_response_create(
      56,
      56,
      56
    );
  } else {
    vps_traffic_usage_average_section_response = vps_traffic_usage_average_section_response_create(
      56,
      56,
      56
    );
  }

  return vps_traffic_usage_average_section_response;
}


#ifdef vps_traffic_usage_average_section_response_MAIN

void test_vps_traffic_usage_average_section_response(int include_optional) {
    vps_traffic_usage_average_section_response_t* vps_traffic_usage_average_section_response_1 = instantiate_vps_traffic_usage_average_section_response(include_optional);

	cJSON* jsonvps_traffic_usage_average_section_response_1 = vps_traffic_usage_average_section_response_convertToJSON(vps_traffic_usage_average_section_response_1);
	printf("vps_traffic_usage_average_section_response :\n%s\n", cJSON_Print(jsonvps_traffic_usage_average_section_response_1));
	vps_traffic_usage_average_section_response_t* vps_traffic_usage_average_section_response_2 = vps_traffic_usage_average_section_response_parseFromJSON(jsonvps_traffic_usage_average_section_response_1);
	cJSON* jsonvps_traffic_usage_average_section_response_2 = vps_traffic_usage_average_section_response_convertToJSON(vps_traffic_usage_average_section_response_2);
	printf("repeating vps_traffic_usage_average_section_response:\n%s\n", cJSON_Print(jsonvps_traffic_usage_average_section_response_2));
}

int main() {
  test_vps_traffic_usage_average_section_response(1);
  test_vps_traffic_usage_average_section_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_traffic_usage_average_section_response_MAIN
#endif // vps_traffic_usage_average_section_response_TEST
