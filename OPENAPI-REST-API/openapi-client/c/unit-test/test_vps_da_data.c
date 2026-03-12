#ifndef vps_da_data_TEST
#define vps_da_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_da_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_da_data.h"
vps_da_data_t* instantiate_vps_da_data(int include_optional);

#include "test_vps_da_license.c"


vps_da_data_t* instantiate_vps_da_data(int include_optional) {
  vps_da_data_t* vps_da_data = NULL;
  if (include_optional) {
    vps_da_data = vps_da_data_create(
       // false, not to have infinite recursion
      instantiate_vps_da_license(0)
    );
  } else {
    vps_da_data = vps_da_data_create(
      NULL
    );
  }

  return vps_da_data;
}


#ifdef vps_da_data_MAIN

void test_vps_da_data(int include_optional) {
    vps_da_data_t* vps_da_data_1 = instantiate_vps_da_data(include_optional);

	cJSON* jsonvps_da_data_1 = vps_da_data_convertToJSON(vps_da_data_1);
	printf("vps_da_data :\n%s\n", cJSON_Print(jsonvps_da_data_1));
	vps_da_data_t* vps_da_data_2 = vps_da_data_parseFromJSON(jsonvps_da_data_1);
	cJSON* jsonvps_da_data_2 = vps_da_data_convertToJSON(vps_da_data_2);
	printf("repeating vps_da_data:\n%s\n", cJSON_Print(jsonvps_da_data_2));
}

int main() {
  test_vps_da_data(1);
  test_vps_da_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_da_data_MAIN
#endif // vps_da_data_TEST
