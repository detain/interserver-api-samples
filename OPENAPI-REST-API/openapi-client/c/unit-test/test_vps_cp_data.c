#ifndef vps_cp_data_TEST
#define vps_cp_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_cp_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_cp_data.h"
vps_cp_data_t* instantiate_vps_cp_data(int include_optional);



vps_cp_data_t* instantiate_vps_cp_data(int include_optional) {
  vps_cp_data_t* vps_cp_data = NULL;
  if (include_optional) {
    vps_cp_data = vps_cp_data_create(
      "0",
      56
    );
  } else {
    vps_cp_data = vps_cp_data_create(
      "0",
      56
    );
  }

  return vps_cp_data;
}


#ifdef vps_cp_data_MAIN

void test_vps_cp_data(int include_optional) {
    vps_cp_data_t* vps_cp_data_1 = instantiate_vps_cp_data(include_optional);

	cJSON* jsonvps_cp_data_1 = vps_cp_data_convertToJSON(vps_cp_data_1);
	printf("vps_cp_data :\n%s\n", cJSON_Print(jsonvps_cp_data_1));
	vps_cp_data_t* vps_cp_data_2 = vps_cp_data_parseFromJSON(jsonvps_cp_data_1);
	cJSON* jsonvps_cp_data_2 = vps_cp_data_convertToJSON(vps_cp_data_2);
	printf("repeating vps_cp_data:\n%s\n", cJSON_Print(jsonvps_cp_data_2));
}

int main() {
  test_vps_cp_data(1);
  test_vps_cp_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_cp_data_MAIN
#endif // vps_cp_data_TEST
