#ifndef vps_templates_list_TEST
#define vps_templates_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_templates_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_templates_list.h"
vps_templates_list_t* instantiate_vps_templates_list(int include_optional);



vps_templates_list_t* instantiate_vps_templates_list(int include_optional) {
  vps_templates_list_t* vps_templates_list = NULL;
  if (include_optional) {
    vps_templates_list = vps_templates_list_create(
      list_createList()
    );
  } else {
    vps_templates_list = vps_templates_list_create(
      list_createList()
    );
  }

  return vps_templates_list;
}


#ifdef vps_templates_list_MAIN

void test_vps_templates_list(int include_optional) {
    vps_templates_list_t* vps_templates_list_1 = instantiate_vps_templates_list(include_optional);

	cJSON* jsonvps_templates_list_1 = vps_templates_list_convertToJSON(vps_templates_list_1);
	printf("vps_templates_list :\n%s\n", cJSON_Print(jsonvps_templates_list_1));
	vps_templates_list_t* vps_templates_list_2 = vps_templates_list_parseFromJSON(jsonvps_templates_list_1);
	cJSON* jsonvps_templates_list_2 = vps_templates_list_convertToJSON(vps_templates_list_2);
	printf("repeating vps_templates_list:\n%s\n", cJSON_Print(jsonvps_templates_list_2));
}

int main() {
  test_vps_templates_list(1);
  test_vps_templates_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_templates_list_MAIN
#endif // vps_templates_list_TEST
