#ifndef vps_ip_info_row_TEST
#define vps_ip_info_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_ip_info_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_ip_info_row.h"
vps_ip_info_row_t* instantiate_vps_ip_info_row(int include_optional);



vps_ip_info_row_t* instantiate_vps_ip_info_row(int include_optional) {
  vps_ip_info_row_t* vps_ip_info_row = NULL;
  if (include_optional) {
    vps_ip_info_row = vps_ip_info_row_create(
      "0",
      "0"
    );
  } else {
    vps_ip_info_row = vps_ip_info_row_create(
      "0",
      "0"
    );
  }

  return vps_ip_info_row;
}


#ifdef vps_ip_info_row_MAIN

void test_vps_ip_info_row(int include_optional) {
    vps_ip_info_row_t* vps_ip_info_row_1 = instantiate_vps_ip_info_row(include_optional);

	cJSON* jsonvps_ip_info_row_1 = vps_ip_info_row_convertToJSON(vps_ip_info_row_1);
	printf("vps_ip_info_row :\n%s\n", cJSON_Print(jsonvps_ip_info_row_1));
	vps_ip_info_row_t* vps_ip_info_row_2 = vps_ip_info_row_parseFromJSON(jsonvps_ip_info_row_1);
	cJSON* jsonvps_ip_info_row_2 = vps_ip_info_row_convertToJSON(vps_ip_info_row_2);
	printf("repeating vps_ip_info_row:\n%s\n", cJSON_Print(jsonvps_ip_info_row_2));
}

int main() {
  test_vps_ip_info_row(1);
  test_vps_ip_info_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_ip_info_row_MAIN
#endif // vps_ip_info_row_TEST
