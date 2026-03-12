#ifndef backup_service_master_TEST
#define backup_service_master_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_service_master_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_service_master.h"
backup_service_master_t* instantiate_backup_service_master(int include_optional);



backup_service_master_t* instantiate_backup_service_master(int include_optional) {
  backup_service_master_t* backup_service_master = NULL;
  if (include_optional) {
    backup_service_master = backup_service_master_create(
      38,
      "storage1400.is.cc",
      "44.22.11.88",
      703,
      156448,
      61374,
      "2023-08-17T23:20:02.000Z",
      0,
      0,
      21359
    );
  } else {
    backup_service_master = backup_service_master_create(
      38,
      "storage1400.is.cc",
      "44.22.11.88",
      703,
      156448,
      61374,
      "2023-08-17T23:20:02.000Z",
      0,
      0,
      21359
    );
  }

  return backup_service_master;
}


#ifdef backup_service_master_MAIN

void test_backup_service_master(int include_optional) {
    backup_service_master_t* backup_service_master_1 = instantiate_backup_service_master(include_optional);

	cJSON* jsonbackup_service_master_1 = backup_service_master_convertToJSON(backup_service_master_1);
	printf("backup_service_master :\n%s\n", cJSON_Print(jsonbackup_service_master_1));
	backup_service_master_t* backup_service_master_2 = backup_service_master_parseFromJSON(jsonbackup_service_master_1);
	cJSON* jsonbackup_service_master_2 = backup_service_master_convertToJSON(backup_service_master_2);
	printf("repeating backup_service_master:\n%s\n", cJSON_Print(jsonbackup_service_master_2));
}

int main() {
  test_backup_service_master(1);
  test_backup_service_master(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_service_master_MAIN
#endif // backup_service_master_TEST
