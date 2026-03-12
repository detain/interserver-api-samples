#ifndef vps_traffic_totals_resposne_TEST
#define vps_traffic_totals_resposne_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_traffic_totals_resposne_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_traffic_totals_resposne.h"
vps_traffic_totals_resposne_t* instantiate_vps_traffic_totals_resposne(int include_optional);

#include "test_vps_traffic_totals_section_response.c"
#include "test_vps_traffic_totals_section_response.c"
#include "test_vps_traffic_totals_section_response.c"
#include "test_vps_traffic_totals_section_response.c"


vps_traffic_totals_resposne_t* instantiate_vps_traffic_totals_resposne(int include_optional) {
  vps_traffic_totals_resposne_t* vps_traffic_totals_resposne = NULL;
  if (include_optional) {
    vps_traffic_totals_resposne = vps_traffic_totals_resposne_create(
      {"in":49719744,"out":11316104},
      {"in":49719744,"out":11316104},
      {"in":49719744,"out":11316104},
      {"in":49719744,"out":11316104}
    );
  } else {
    vps_traffic_totals_resposne = vps_traffic_totals_resposne_create(
      {"in":49719744,"out":11316104},
      {"in":49719744,"out":11316104},
      {"in":49719744,"out":11316104},
      {"in":49719744,"out":11316104}
    );
  }

  return vps_traffic_totals_resposne;
}


#ifdef vps_traffic_totals_resposne_MAIN

void test_vps_traffic_totals_resposne(int include_optional) {
    vps_traffic_totals_resposne_t* vps_traffic_totals_resposne_1 = instantiate_vps_traffic_totals_resposne(include_optional);

	cJSON* jsonvps_traffic_totals_resposne_1 = vps_traffic_totals_resposne_convertToJSON(vps_traffic_totals_resposne_1);
	printf("vps_traffic_totals_resposne :\n%s\n", cJSON_Print(jsonvps_traffic_totals_resposne_1));
	vps_traffic_totals_resposne_t* vps_traffic_totals_resposne_2 = vps_traffic_totals_resposne_parseFromJSON(jsonvps_traffic_totals_resposne_1);
	cJSON* jsonvps_traffic_totals_resposne_2 = vps_traffic_totals_resposne_convertToJSON(vps_traffic_totals_resposne_2);
	printf("repeating vps_traffic_totals_resposne:\n%s\n", cJSON_Print(jsonvps_traffic_totals_resposne_2));
}

int main() {
  test_vps_traffic_totals_resposne(1);
  test_vps_traffic_totals_resposne(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_traffic_totals_resposne_MAIN
#endif // vps_traffic_totals_resposne_TEST
