#ifndef vps_order_templates_TEST
#define vps_order_templates_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_templates_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_templates.h"
vps_order_templates_t* instantiate_vps_order_templates(int include_optional);

#include "test_vps_order_templates_hyperv.c"


vps_order_templates_t* instantiate_vps_order_templates(int include_optional) {
  vps_order_templates_t* vps_order_templates = NULL;
  if (include_optional) {
    vps_order_templates = vps_order_templates_create(
       // false, not to have infinite recursion
      instantiate_vps_order_templates_hyperv(0)
    );
  } else {
    vps_order_templates = vps_order_templates_create(
      NULL
    );
  }

  return vps_order_templates;
}


#ifdef vps_order_templates_MAIN

void test_vps_order_templates(int include_optional) {
    vps_order_templates_t* vps_order_templates_1 = instantiate_vps_order_templates(include_optional);

	cJSON* jsonvps_order_templates_1 = vps_order_templates_convertToJSON(vps_order_templates_1);
	printf("vps_order_templates :\n%s\n", cJSON_Print(jsonvps_order_templates_1));
	vps_order_templates_t* vps_order_templates_2 = vps_order_templates_parseFromJSON(jsonvps_order_templates_1);
	cJSON* jsonvps_order_templates_2 = vps_order_templates_convertToJSON(vps_order_templates_2);
	printf("repeating vps_order_templates:\n%s\n", cJSON_Print(jsonvps_order_templates_2));
}

int main() {
  test_vps_order_templates(1);
  test_vps_order_templates(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_templates_MAIN
#endif // vps_order_templates_TEST
