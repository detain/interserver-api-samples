#ifndef vps_plesk_license_TEST
#define vps_plesk_license_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_plesk_license_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_plesk_license.h"
vps_plesk_license_t* instantiate_vps_plesk_license(int include_optional);



vps_plesk_license_t* instantiate_vps_plesk_license(int include_optional) {
  vps_plesk_license_t* vps_plesk_license = NULL;
  if (include_optional) {
    vps_plesk_license = vps_plesk_license_create(
      56,
      "0",
      "0",
      56
    );
  } else {
    vps_plesk_license = vps_plesk_license_create(
      56,
      "0",
      "0",
      56
    );
  }

  return vps_plesk_license;
}


#ifdef vps_plesk_license_MAIN

void test_vps_plesk_license(int include_optional) {
    vps_plesk_license_t* vps_plesk_license_1 = instantiate_vps_plesk_license(include_optional);

	cJSON* jsonvps_plesk_license_1 = vps_plesk_license_convertToJSON(vps_plesk_license_1);
	printf("vps_plesk_license :\n%s\n", cJSON_Print(jsonvps_plesk_license_1));
	vps_plesk_license_t* vps_plesk_license_2 = vps_plesk_license_parseFromJSON(jsonvps_plesk_license_1);
	cJSON* jsonvps_plesk_license_2 = vps_plesk_license_convertToJSON(vps_plesk_license_2);
	printf("repeating vps_plesk_license:\n%s\n", cJSON_Print(jsonvps_plesk_license_2));
}

int main() {
  test_vps_plesk_license(1);
  test_vps_plesk_license(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_plesk_license_MAIN
#endif // vps_plesk_license_TEST
