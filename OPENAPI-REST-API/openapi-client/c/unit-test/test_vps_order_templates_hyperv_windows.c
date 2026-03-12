#ifndef vps_order_templates_hyperv_windows_TEST
#define vps_order_templates_hyperv_windows_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_templates_hyperv_windows_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_templates_hyperv_windows.h"
vps_order_templates_hyperv_windows_t* instantiate_vps_order_templates_hyperv_windows(int include_optional);



vps_order_templates_hyperv_windows_t* instantiate_vps_order_templates_hyperv_windows(int include_optional) {
  vps_order_templates_hyperv_windows_t* vps_order_templates_hyperv_windows = NULL;
  if (include_optional) {
    vps_order_templates_hyperv_windows = vps_order_templates_hyperv_windows_create(
      "2019 Standard",
      "2022"
    );
  } else {
    vps_order_templates_hyperv_windows = vps_order_templates_hyperv_windows_create(
      "2019 Standard",
      "2022"
    );
  }

  return vps_order_templates_hyperv_windows;
}


#ifdef vps_order_templates_hyperv_windows_MAIN

void test_vps_order_templates_hyperv_windows(int include_optional) {
    vps_order_templates_hyperv_windows_t* vps_order_templates_hyperv_windows_1 = instantiate_vps_order_templates_hyperv_windows(include_optional);

	cJSON* jsonvps_order_templates_hyperv_windows_1 = vps_order_templates_hyperv_windows_convertToJSON(vps_order_templates_hyperv_windows_1);
	printf("vps_order_templates_hyperv_windows :\n%s\n", cJSON_Print(jsonvps_order_templates_hyperv_windows_1));
	vps_order_templates_hyperv_windows_t* vps_order_templates_hyperv_windows_2 = vps_order_templates_hyperv_windows_parseFromJSON(jsonvps_order_templates_hyperv_windows_1);
	cJSON* jsonvps_order_templates_hyperv_windows_2 = vps_order_templates_hyperv_windows_convertToJSON(vps_order_templates_hyperv_windows_2);
	printf("repeating vps_order_templates_hyperv_windows:\n%s\n", cJSON_Print(jsonvps_order_templates_hyperv_windows_2));
}

int main() {
  test_vps_order_templates_hyperv_windows(1);
  test_vps_order_templates_hyperv_windows(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_templates_hyperv_windows_MAIN
#endif // vps_order_templates_hyperv_windows_TEST
