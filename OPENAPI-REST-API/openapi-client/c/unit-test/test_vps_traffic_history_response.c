#ifndef vps_traffic_history_response_TEST
#define vps_traffic_history_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_traffic_history_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_traffic_history_response.h"
vps_traffic_history_response_t* instantiate_vps_traffic_history_response(int include_optional);

#include "test_vps_traffic_history_section_response.c"
#include "test_vps_traffic_history_section_response.c"


vps_traffic_history_response_t* instantiate_vps_traffic_history_response(int include_optional) {
  vps_traffic_history_response_t* vps_traffic_history_response = NULL;
  if (include_optional) {
    vps_traffic_history_response = vps_traffic_history_response_create(
      {"data":[["2023-09-11T12:00:00Z",834424],["2023-09-11T23:00:00Z",8247944],["2023-09-14T05:00:00Z",19763064],["2023-09-14T06:00:00Z",18892320],["2023-09-17T07:00:00Z",16546448]],"times":["2023-09-12T02:00:00Z","2023-09-17T05:00:00Z","2023-09-17T06:00:00Z","2023-09-17T07:00:00Z"]},
      {"data":[["2023-09-11T12:00:00Z",834424],["2023-09-11T23:00:00Z",8247944],["2023-09-14T05:00:00Z",19763064],["2023-09-14T06:00:00Z",18892320],["2023-09-17T07:00:00Z",16546448]],"times":["2023-09-12T02:00:00Z","2023-09-17T05:00:00Z","2023-09-17T06:00:00Z","2023-09-17T07:00:00Z"]}
    );
  } else {
    vps_traffic_history_response = vps_traffic_history_response_create(
      {"data":[["2023-09-11T12:00:00Z",834424],["2023-09-11T23:00:00Z",8247944],["2023-09-14T05:00:00Z",19763064],["2023-09-14T06:00:00Z",18892320],["2023-09-17T07:00:00Z",16546448]],"times":["2023-09-12T02:00:00Z","2023-09-17T05:00:00Z","2023-09-17T06:00:00Z","2023-09-17T07:00:00Z"]},
      {"data":[["2023-09-11T12:00:00Z",834424],["2023-09-11T23:00:00Z",8247944],["2023-09-14T05:00:00Z",19763064],["2023-09-14T06:00:00Z",18892320],["2023-09-17T07:00:00Z",16546448]],"times":["2023-09-12T02:00:00Z","2023-09-17T05:00:00Z","2023-09-17T06:00:00Z","2023-09-17T07:00:00Z"]}
    );
  }

  return vps_traffic_history_response;
}


#ifdef vps_traffic_history_response_MAIN

void test_vps_traffic_history_response(int include_optional) {
    vps_traffic_history_response_t* vps_traffic_history_response_1 = instantiate_vps_traffic_history_response(include_optional);

	cJSON* jsonvps_traffic_history_response_1 = vps_traffic_history_response_convertToJSON(vps_traffic_history_response_1);
	printf("vps_traffic_history_response :\n%s\n", cJSON_Print(jsonvps_traffic_history_response_1));
	vps_traffic_history_response_t* vps_traffic_history_response_2 = vps_traffic_history_response_parseFromJSON(jsonvps_traffic_history_response_1);
	cJSON* jsonvps_traffic_history_response_2 = vps_traffic_history_response_convertToJSON(vps_traffic_history_response_2);
	printf("repeating vps_traffic_history_response:\n%s\n", cJSON_Print(jsonvps_traffic_history_response_2));
}

int main() {
  test_vps_traffic_history_response(1);
  test_vps_traffic_history_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_traffic_history_response_MAIN
#endif // vps_traffic_history_response_TEST
