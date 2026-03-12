#ifndef vps_ip_info_TEST
#define vps_ip_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_ip_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_ip_info.h"
vps_ip_info_t* instantiate_vps_ip_info(int include_optional);



vps_ip_info_t* instantiate_vps_ip_info(int include_optional) {
  vps_ip_info_t* vps_ip_info = NULL;
  if (include_optional) {
    vps_ip_info = vps_ip_info_create(
      "IP Information",
      list_createList()
    );
  } else {
    vps_ip_info = vps_ip_info_create(
      "IP Information",
      list_createList()
    );
  }

  return vps_ip_info;
}


#ifdef vps_ip_info_MAIN

void test_vps_ip_info(int include_optional) {
    vps_ip_info_t* vps_ip_info_1 = instantiate_vps_ip_info(include_optional);

	cJSON* jsonvps_ip_info_1 = vps_ip_info_convertToJSON(vps_ip_info_1);
	printf("vps_ip_info :\n%s\n", cJSON_Print(jsonvps_ip_info_1));
	vps_ip_info_t* vps_ip_info_2 = vps_ip_info_parseFromJSON(jsonvps_ip_info_1);
	cJSON* jsonvps_ip_info_2 = vps_ip_info_convertToJSON(vps_ip_info_2);
	printf("repeating vps_ip_info:\n%s\n", cJSON_Print(jsonvps_ip_info_2));
}

int main() {
  test_vps_ip_info(1);
  test_vps_ip_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_ip_info_MAIN
#endif // vps_ip_info_TEST
