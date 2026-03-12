#ifndef vps_backup_row_TEST
#define vps_backup_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_backup_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_backup_row.h"
vps_backup_row_t* instantiate_vps_backup_row(int include_optional);



vps_backup_row_t* instantiate_vps_backup_row(int include_optional) {
  vps_backup_row_t* vps_backup_row = NULL;
  if (include_optional) {
    vps_backup_row = vps_backup_row_create(
      "zfs",
      12343,
      "automated_backup",
      132412343124213,
      1693996140
    );
  } else {
    vps_backup_row = vps_backup_row_create(
      "zfs",
      12343,
      "automated_backup",
      132412343124213,
      1693996140
    );
  }

  return vps_backup_row;
}


#ifdef vps_backup_row_MAIN

void test_vps_backup_row(int include_optional) {
    vps_backup_row_t* vps_backup_row_1 = instantiate_vps_backup_row(include_optional);

	cJSON* jsonvps_backup_row_1 = vps_backup_row_convertToJSON(vps_backup_row_1);
	printf("vps_backup_row :\n%s\n", cJSON_Print(jsonvps_backup_row_1));
	vps_backup_row_t* vps_backup_row_2 = vps_backup_row_parseFromJSON(jsonvps_backup_row_1);
	cJSON* jsonvps_backup_row_2 = vps_backup_row_convertToJSON(vps_backup_row_2);
	printf("repeating vps_backup_row:\n%s\n", cJSON_Print(jsonvps_backup_row_2));
}

int main() {
  test_vps_backup_row(1);
  test_vps_backup_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_backup_row_MAIN
#endif // vps_backup_row_TEST
