#ifndef backup_service_info_TEST
#define backup_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_service_info.h"
backup_service_info_t* instantiate_backup_service_info(int include_optional);



backup_service_info_t* instantiate_backup_service_info(int include_optional) {
  backup_service_info_t* backup_service_info = NULL;
  if (include_optional) {
    backup_service_info = backup_service_info_create(
      "21163",
      "38",
      "st21163",
      "10831",
      "USD",
      "2021-12-29T14:09:57.000Z",
      "2773",
      "0",
      "64.20.55.234",
      "canceled",
      "19591007",
      "0",
      "[]",
      "deleted",
      "0"
    );
  } else {
    backup_service_info = backup_service_info_create(
      "21163",
      "38",
      "st21163",
      "10831",
      "USD",
      "2021-12-29T14:09:57.000Z",
      "2773",
      "0",
      "64.20.55.234",
      "canceled",
      "19591007",
      "0",
      "[]",
      "deleted",
      "0"
    );
  }

  return backup_service_info;
}


#ifdef backup_service_info_MAIN

void test_backup_service_info(int include_optional) {
    backup_service_info_t* backup_service_info_1 = instantiate_backup_service_info(include_optional);

	cJSON* jsonbackup_service_info_1 = backup_service_info_convertToJSON(backup_service_info_1);
	printf("backup_service_info :\n%s\n", cJSON_Print(jsonbackup_service_info_1));
	backup_service_info_t* backup_service_info_2 = backup_service_info_parseFromJSON(jsonbackup_service_info_1);
	cJSON* jsonbackup_service_info_2 = backup_service_info_convertToJSON(backup_service_info_2);
	printf("repeating backup_service_info:\n%s\n", cJSON_Print(jsonbackup_service_info_2));
}

int main() {
  test_backup_service_info(1);
  test_backup_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_service_info_MAIN
#endif // backup_service_info_TEST
