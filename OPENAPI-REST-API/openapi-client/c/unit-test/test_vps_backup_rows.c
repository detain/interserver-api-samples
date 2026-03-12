#ifndef vps_backup_rows_TEST
#define vps_backup_rows_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_backup_rows_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_backup_rows.h"
vps_backup_rows_t* instantiate_vps_backup_rows(int include_optional);



vps_backup_rows_t* instantiate_vps_backup_rows(int include_optional) {
  vps_backup_rows_t* vps_backup_rows = NULL;
  if (include_optional) {
    vps_backup_rows = vps_backup_rows_create(
    );
  } else {
    vps_backup_rows = vps_backup_rows_create(
    );
  }

  return vps_backup_rows;
}


#ifdef vps_backup_rows_MAIN

void test_vps_backup_rows(int include_optional) {
    vps_backup_rows_t* vps_backup_rows_1 = instantiate_vps_backup_rows(include_optional);

	cJSON* jsonvps_backup_rows_1 = vps_backup_rows_convertToJSON(vps_backup_rows_1);
	printf("vps_backup_rows :\n%s\n", cJSON_Print(jsonvps_backup_rows_1));
	vps_backup_rows_t* vps_backup_rows_2 = vps_backup_rows_parseFromJSON(jsonvps_backup_rows_1);
	cJSON* jsonvps_backup_rows_2 = vps_backup_rows_convertToJSON(vps_backup_rows_2);
	printf("repeating vps_backup_rows:\n%s\n", cJSON_Print(jsonvps_backup_rows_2));
}

int main() {
  test_vps_backup_rows(1);
  test_vps_backup_rows(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_backup_rows_MAIN
#endif // vps_backup_rows_TEST
