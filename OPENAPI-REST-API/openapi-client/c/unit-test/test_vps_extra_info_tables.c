#ifndef vps_extra_info_tables_TEST
#define vps_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_extra_info_tables.h"
vps_extra_info_tables_t* instantiate_vps_extra_info_tables(int include_optional);

#include "test_vps_ip_info.c"


vps_extra_info_tables_t* instantiate_vps_extra_info_tables(int include_optional) {
  vps_extra_info_tables_t* vps_extra_info_tables = NULL;
  if (include_optional) {
    vps_extra_info_tables = vps_extra_info_tables_create(
       // false, not to have infinite recursion
      instantiate_vps_ip_info(0)
    );
  } else {
    vps_extra_info_tables = vps_extra_info_tables_create(
      NULL
    );
  }

  return vps_extra_info_tables;
}


#ifdef vps_extra_info_tables_MAIN

void test_vps_extra_info_tables(int include_optional) {
    vps_extra_info_tables_t* vps_extra_info_tables_1 = instantiate_vps_extra_info_tables(include_optional);

	cJSON* jsonvps_extra_info_tables_1 = vps_extra_info_tables_convertToJSON(vps_extra_info_tables_1);
	printf("vps_extra_info_tables :\n%s\n", cJSON_Print(jsonvps_extra_info_tables_1));
	vps_extra_info_tables_t* vps_extra_info_tables_2 = vps_extra_info_tables_parseFromJSON(jsonvps_extra_info_tables_1);
	cJSON* jsonvps_extra_info_tables_2 = vps_extra_info_tables_convertToJSON(vps_extra_info_tables_2);
	printf("repeating vps_extra_info_tables:\n%s\n", cJSON_Print(jsonvps_extra_info_tables_2));
}

int main() {
  test_vps_extra_info_tables(1);
  test_vps_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_extra_info_tables_MAIN
#endif // vps_extra_info_tables_TEST
