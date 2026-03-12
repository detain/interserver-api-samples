#ifndef vps_order_templates_hyperv_TEST
#define vps_order_templates_hyperv_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_templates_hyperv_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_templates_hyperv.h"
vps_order_templates_hyperv_t* instantiate_vps_order_templates_hyperv(int include_optional);

#include "test_vps_order_templates_hyperv_windows.c"


vps_order_templates_hyperv_t* instantiate_vps_order_templates_hyperv(int include_optional) {
  vps_order_templates_hyperv_t* vps_order_templates_hyperv = NULL;
  if (include_optional) {
    vps_order_templates_hyperv = vps_order_templates_hyperv_create(
       // false, not to have infinite recursion
      instantiate_vps_order_templates_hyperv_windows(0)
    );
  } else {
    vps_order_templates_hyperv = vps_order_templates_hyperv_create(
      NULL
    );
  }

  return vps_order_templates_hyperv;
}


#ifdef vps_order_templates_hyperv_MAIN

void test_vps_order_templates_hyperv(int include_optional) {
    vps_order_templates_hyperv_t* vps_order_templates_hyperv_1 = instantiate_vps_order_templates_hyperv(include_optional);

	cJSON* jsonvps_order_templates_hyperv_1 = vps_order_templates_hyperv_convertToJSON(vps_order_templates_hyperv_1);
	printf("vps_order_templates_hyperv :\n%s\n", cJSON_Print(jsonvps_order_templates_hyperv_1));
	vps_order_templates_hyperv_t* vps_order_templates_hyperv_2 = vps_order_templates_hyperv_parseFromJSON(jsonvps_order_templates_hyperv_1);
	cJSON* jsonvps_order_templates_hyperv_2 = vps_order_templates_hyperv_convertToJSON(vps_order_templates_hyperv_2);
	printf("repeating vps_order_templates_hyperv:\n%s\n", cJSON_Print(jsonvps_order_templates_hyperv_2));
}

int main() {
  test_vps_order_templates_hyperv(1);
  test_vps_order_templates_hyperv(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_templates_hyperv_MAIN
#endif // vps_order_templates_hyperv_TEST
