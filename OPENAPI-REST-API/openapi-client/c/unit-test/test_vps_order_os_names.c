#ifndef vps_order_os_names_TEST
#define vps_order_os_names_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_os_names_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_os_names.h"
vps_order_os_names_t* instantiate_vps_order_os_names(int include_optional);



vps_order_os_names_t* instantiate_vps_order_os_names(int include_optional) {
  vps_order_os_names_t* vps_order_os_names = NULL;
  if (include_optional) {
    vps_order_os_names = vps_order_os_names_create(
      "OpenSUSE",
      "Ubuntu"
    );
  } else {
    vps_order_os_names = vps_order_os_names_create(
      "OpenSUSE",
      "Ubuntu"
    );
  }

  return vps_order_os_names;
}


#ifdef vps_order_os_names_MAIN

void test_vps_order_os_names(int include_optional) {
    vps_order_os_names_t* vps_order_os_names_1 = instantiate_vps_order_os_names(include_optional);

	cJSON* jsonvps_order_os_names_1 = vps_order_os_names_convertToJSON(vps_order_os_names_1);
	printf("vps_order_os_names :\n%s\n", cJSON_Print(jsonvps_order_os_names_1));
	vps_order_os_names_t* vps_order_os_names_2 = vps_order_os_names_parseFromJSON(jsonvps_order_os_names_1);
	cJSON* jsonvps_order_os_names_2 = vps_order_os_names_convertToJSON(vps_order_os_names_2);
	printf("repeating vps_order_os_names:\n%s\n", cJSON_Print(jsonvps_order_os_names_2));
}

int main() {
  test_vps_order_os_names(1);
  test_vps_order_os_names(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_os_names_MAIN
#endif // vps_order_os_names_TEST
