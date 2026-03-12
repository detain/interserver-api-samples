#ifndef vps_row_TEST
#define vps_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_row.h"
vps_row_t* instantiate_vps_row(int include_optional);



vps_row_t* instantiate_vps_row(int include_optional) {
  vps_row_t* vps_row = NULL;
  if (include_optional) {
    vps_row = vps_row_create(
      "100",
      "Builder",
      "10.00",
      "vps100",
      "64.20.46.220",
      "active",
      "KVM Windows VPS Slice",
      "0"
    );
  } else {
    vps_row = vps_row_create(
      "100",
      "Builder",
      "10.00",
      "vps100",
      "64.20.46.220",
      "active",
      "KVM Windows VPS Slice",
      "0"
    );
  }

  return vps_row;
}


#ifdef vps_row_MAIN

void test_vps_row(int include_optional) {
    vps_row_t* vps_row_1 = instantiate_vps_row(include_optional);

	cJSON* jsonvps_row_1 = vps_row_convertToJSON(vps_row_1);
	printf("vps_row :\n%s\n", cJSON_Print(jsonvps_row_1));
	vps_row_t* vps_row_2 = vps_row_parseFromJSON(jsonvps_row_1);
	cJSON* jsonvps_row_2 = vps_row_convertToJSON(vps_row_2);
	printf("repeating vps_row:\n%s\n", cJSON_Print(jsonvps_row_2));
}

int main() {
  test_vps_row(1);
  test_vps_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_row_MAIN
#endif // vps_row_TEST
