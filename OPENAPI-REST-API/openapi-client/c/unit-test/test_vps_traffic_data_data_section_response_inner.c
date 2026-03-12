#ifndef vps_traffic_data_data_section_response_inner_TEST
#define vps_traffic_data_data_section_response_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_traffic_data_data_section_response_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_traffic_data_data_section_response_inner.h"
vps_traffic_data_data_section_response_inner_t* instantiate_vps_traffic_data_data_section_response_inner(int include_optional);



vps_traffic_data_data_section_response_inner_t* instantiate_vps_traffic_data_data_section_response_inner(int include_optional) {
  vps_traffic_data_data_section_response_inner_t* vps_traffic_data_data_section_response_inner = NULL;
  if (include_optional) {
    vps_traffic_data_data_section_response_inner = vps_traffic_data_data_section_response_inner_create(
    );
  } else {
    vps_traffic_data_data_section_response_inner = vps_traffic_data_data_section_response_inner_create(
    );
  }

  return vps_traffic_data_data_section_response_inner;
}


#ifdef vps_traffic_data_data_section_response_inner_MAIN

void test_vps_traffic_data_data_section_response_inner(int include_optional) {
    vps_traffic_data_data_section_response_inner_t* vps_traffic_data_data_section_response_inner_1 = instantiate_vps_traffic_data_data_section_response_inner(include_optional);

	cJSON* jsonvps_traffic_data_data_section_response_inner_1 = vps_traffic_data_data_section_response_inner_convertToJSON(vps_traffic_data_data_section_response_inner_1);
	printf("vps_traffic_data_data_section_response_inner :\n%s\n", cJSON_Print(jsonvps_traffic_data_data_section_response_inner_1));
	vps_traffic_data_data_section_response_inner_t* vps_traffic_data_data_section_response_inner_2 = vps_traffic_data_data_section_response_inner_parseFromJSON(jsonvps_traffic_data_data_section_response_inner_1);
	cJSON* jsonvps_traffic_data_data_section_response_inner_2 = vps_traffic_data_data_section_response_inner_convertToJSON(vps_traffic_data_data_section_response_inner_2);
	printf("repeating vps_traffic_data_data_section_response_inner:\n%s\n", cJSON_Print(jsonvps_traffic_data_data_section_response_inner_2));
}

int main() {
  test_vps_traffic_data_data_section_response_inner(1);
  test_vps_traffic_data_data_section_response_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_traffic_data_data_section_response_inner_MAIN
#endif // vps_traffic_data_data_section_response_inner_TEST
