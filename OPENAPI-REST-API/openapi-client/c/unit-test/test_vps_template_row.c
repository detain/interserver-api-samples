#ifndef vps_template_row_TEST
#define vps_template_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_template_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_template_row.h"
vps_template_row_t* instantiate_vps_template_row(int include_optional);



vps_template_row_t* instantiate_vps_template_row(int include_optional) {
  vps_template_row_t* vps_template_row = NULL;
  if (include_optional) {
    vps_template_row = vps_template_row_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    vps_template_row = vps_template_row_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return vps_template_row;
}


#ifdef vps_template_row_MAIN

void test_vps_template_row(int include_optional) {
    vps_template_row_t* vps_template_row_1 = instantiate_vps_template_row(include_optional);

	cJSON* jsonvps_template_row_1 = vps_template_row_convertToJSON(vps_template_row_1);
	printf("vps_template_row :\n%s\n", cJSON_Print(jsonvps_template_row_1));
	vps_template_row_t* vps_template_row_2 = vps_template_row_parseFromJSON(jsonvps_template_row_1);
	cJSON* jsonvps_template_row_2 = vps_template_row_convertToJSON(vps_template_row_2);
	printf("repeating vps_template_row:\n%s\n", cJSON_Print(jsonvps_template_row_2));
}

int main() {
  test_vps_template_row(1);
  test_vps_template_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_template_row_MAIN
#endif // vps_template_row_TEST
