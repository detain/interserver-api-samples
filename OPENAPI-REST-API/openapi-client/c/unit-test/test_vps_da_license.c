#ifndef vps_da_license_TEST
#define vps_da_license_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_da_license_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_da_license.h"
vps_da_license_t* instantiate_vps_da_license(int include_optional);



vps_da_license_t* instantiate_vps_da_license(int include_optional) {
  vps_da_license_t* vps_da_license = NULL;
  if (include_optional) {
    vps_da_license = vps_da_license_create(
      "0",
      "0",
      56,
      "0",
      "0"
    );
  } else {
    vps_da_license = vps_da_license_create(
      "0",
      "0",
      56,
      "0",
      "0"
    );
  }

  return vps_da_license;
}


#ifdef vps_da_license_MAIN

void test_vps_da_license(int include_optional) {
    vps_da_license_t* vps_da_license_1 = instantiate_vps_da_license(include_optional);

	cJSON* jsonvps_da_license_1 = vps_da_license_convertToJSON(vps_da_license_1);
	printf("vps_da_license :\n%s\n", cJSON_Print(jsonvps_da_license_1));
	vps_da_license_t* vps_da_license_2 = vps_da_license_parseFromJSON(jsonvps_da_license_1);
	cJSON* jsonvps_da_license_2 = vps_da_license_convertToJSON(vps_da_license_2);
	printf("repeating vps_da_license:\n%s\n", cJSON_Print(jsonvps_da_license_2));
}

int main() {
  test_vps_da_license(1);
  test_vps_da_license(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_da_license_MAIN
#endif // vps_da_license_TEST
