#ifndef vps_traffic_response_TEST
#define vps_traffic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_traffic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_traffic_response.h"
vps_traffic_response_t* instantiate_vps_traffic_response(int include_optional);

#include "test_vps_traffic_history_response.c"
#include "test_vps_traffic_totals_resposne.c"
#include "test_vps_traffic_usage_response.c"


vps_traffic_response_t* instantiate_vps_traffic_response(int include_optional) {
  vps_traffic_response_t* vps_traffic_response = NULL;
  if (include_optional) {
    vps_traffic_response = vps_traffic_response_create(
      "0",
      "0",
      56,
      {"hour":{"data":[["2023-09-11T12:00:00Z",834424],["2023-09-11T23:00:00Z",8247944],["2023-09-14T05:00:00Z",19763064],["2023-09-14T06:00:00Z",18892320],["2023-09-17T07:00:00Z",16546448]],"times":["2023-09-12T02:00:00Z","2023-09-17T05:00:00Z","2023-09-17T06:00:00Z","2023-09-17T07:00:00Z"]},"day":{"data":[["2023-09-12T00:00:00Z",1455497448],["2023-09-13T00:00:00Z",182943992],["2023-09-14T00:00:00Z",290416056],["2023-09-15T00:00:00Z",440595840],["2023-09-16T00:00:00Z",411255120],["2023-09-17T00:00:00Z",346449520]],"times":["2023-09-12T00:00:00Z","2023-09-13T00:00:00Z","2023-09-14T00:00:00Z","2023-09-15T00:00:00Z","2023-09-16T00:00:00Z","2023-09-17T00:00:00Z"]}},
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      {"day":{"in":49719744,"out":11316104},"month":{"in":2880512936,"out":380333384},"year":{"in":2880512936,"out":380333384},"all":{"in":2880512936,"out":380333384}},
      {"current":{"in":5504,"out":1248},"peak":{"in":9176,"out":3600},"average":{"in":{"total":949688,"count":261,"value":3639},"out":{"total":200752,"count":261,"value":770}}},
      list_createList()
    );
  } else {
    vps_traffic_response = vps_traffic_response_create(
      "0",
      "0",
      56,
      {"hour":{"data":[["2023-09-11T12:00:00Z",834424],["2023-09-11T23:00:00Z",8247944],["2023-09-14T05:00:00Z",19763064],["2023-09-14T06:00:00Z",18892320],["2023-09-17T07:00:00Z",16546448]],"times":["2023-09-12T02:00:00Z","2023-09-17T05:00:00Z","2023-09-17T06:00:00Z","2023-09-17T07:00:00Z"]},"day":{"data":[["2023-09-12T00:00:00Z",1455497448],["2023-09-13T00:00:00Z",182943992],["2023-09-14T00:00:00Z",290416056],["2023-09-15T00:00:00Z",440595840],["2023-09-16T00:00:00Z",411255120],["2023-09-17T00:00:00Z",346449520]],"times":["2023-09-12T00:00:00Z","2023-09-13T00:00:00Z","2023-09-14T00:00:00Z","2023-09-15T00:00:00Z","2023-09-16T00:00:00Z","2023-09-17T00:00:00Z"]}},
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      {"day":{"in":49719744,"out":11316104},"month":{"in":2880512936,"out":380333384},"year":{"in":2880512936,"out":380333384},"all":{"in":2880512936,"out":380333384}},
      {"current":{"in":5504,"out":1248},"peak":{"in":9176,"out":3600},"average":{"in":{"total":949688,"count":261,"value":3639},"out":{"total":200752,"count":261,"value":770}}},
      list_createList()
    );
  }

  return vps_traffic_response;
}


#ifdef vps_traffic_response_MAIN

void test_vps_traffic_response(int include_optional) {
    vps_traffic_response_t* vps_traffic_response_1 = instantiate_vps_traffic_response(include_optional);

	cJSON* jsonvps_traffic_response_1 = vps_traffic_response_convertToJSON(vps_traffic_response_1);
	printf("vps_traffic_response :\n%s\n", cJSON_Print(jsonvps_traffic_response_1));
	vps_traffic_response_t* vps_traffic_response_2 = vps_traffic_response_parseFromJSON(jsonvps_traffic_response_1);
	cJSON* jsonvps_traffic_response_2 = vps_traffic_response_convertToJSON(vps_traffic_response_2);
	printf("repeating vps_traffic_response:\n%s\n", cJSON_Print(jsonvps_traffic_response_2));
}

int main() {
  test_vps_traffic_response(1);
  test_vps_traffic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_traffic_response_MAIN
#endif // vps_traffic_response_TEST
