#ifndef vps_order_platform_packages_TEST
#define vps_order_platform_packages_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_order_platform_packages_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_order_platform_packages.h"
vps_order_platform_packages_t* instantiate_vps_order_platform_packages(int include_optional);



vps_order_platform_packages_t* instantiate_vps_order_platform_packages(int include_optional) {
  vps_order_platform_packages_t* vps_order_platform_packages = NULL;
  if (include_optional) {
    vps_order_platform_packages = vps_order_platform_packages_create(
      32,
      57,
      54
    );
  } else {
    vps_order_platform_packages = vps_order_platform_packages_create(
      32,
      57,
      54
    );
  }

  return vps_order_platform_packages;
}


#ifdef vps_order_platform_packages_MAIN

void test_vps_order_platform_packages(int include_optional) {
    vps_order_platform_packages_t* vps_order_platform_packages_1 = instantiate_vps_order_platform_packages(include_optional);

	cJSON* jsonvps_order_platform_packages_1 = vps_order_platform_packages_convertToJSON(vps_order_platform_packages_1);
	printf("vps_order_platform_packages :\n%s\n", cJSON_Print(jsonvps_order_platform_packages_1));
	vps_order_platform_packages_t* vps_order_platform_packages_2 = vps_order_platform_packages_parseFromJSON(jsonvps_order_platform_packages_1);
	cJSON* jsonvps_order_platform_packages_2 = vps_order_platform_packages_convertToJSON(vps_order_platform_packages_2);
	printf("repeating vps_order_platform_packages:\n%s\n", cJSON_Print(jsonvps_order_platform_packages_2));
}

int main() {
  test_vps_order_platform_packages(1);
  test_vps_order_platform_packages(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_order_platform_packages_MAIN
#endif // vps_order_platform_packages_TEST
