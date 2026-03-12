#ifndef vps_plesk12_data_TEST
#define vps_plesk12_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_plesk12_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_plesk12_data.h"
vps_plesk12_data_t* instantiate_vps_plesk12_data(int include_optional);

#include "test_vps_plesk_license.c"
#include "test_vps_plesk_license.c"
#include "test_vps_plesk_license.c"


vps_plesk12_data_t* instantiate_vps_plesk12_data(int include_optional) {
  vps_plesk12_data_t* vps_plesk12_data = NULL;
  if (include_optional) {
    vps_plesk12_data = vps_plesk12_data_create(
       // false, not to have infinite recursion
      instantiate_vps_plesk_license(0),
       // false, not to have infinite recursion
      instantiate_vps_plesk_license(0),
       // false, not to have infinite recursion
      instantiate_vps_plesk_license(0)
    );
  } else {
    vps_plesk12_data = vps_plesk12_data_create(
      NULL,
      NULL,
      NULL
    );
  }

  return vps_plesk12_data;
}


#ifdef vps_plesk12_data_MAIN

void test_vps_plesk12_data(int include_optional) {
    vps_plesk12_data_t* vps_plesk12_data_1 = instantiate_vps_plesk12_data(include_optional);

	cJSON* jsonvps_plesk12_data_1 = vps_plesk12_data_convertToJSON(vps_plesk12_data_1);
	printf("vps_plesk12_data :\n%s\n", cJSON_Print(jsonvps_plesk12_data_1));
	vps_plesk12_data_t* vps_plesk12_data_2 = vps_plesk12_data_parseFromJSON(jsonvps_plesk12_data_1);
	cJSON* jsonvps_plesk12_data_2 = vps_plesk12_data_convertToJSON(vps_plesk12_data_2);
	printf("repeating vps_plesk12_data:\n%s\n", cJSON_Print(jsonvps_plesk12_data_2));
}

int main() {
  test_vps_plesk12_data(1);
  test_vps_plesk12_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_plesk12_data_MAIN
#endif // vps_plesk12_data_TEST
