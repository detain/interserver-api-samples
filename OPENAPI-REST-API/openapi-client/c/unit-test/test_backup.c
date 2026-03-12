#ifndef backup_TEST
#define backup_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup.h"
backup_t* instantiate_backup(int include_optional);

#include "test_backup_service_info.c"
#include "test_backup_billing_details.c"
#include "test_backup_service_master.c"
#include "test_backup_extra_info_tables.c"


backup_t* instantiate_backup(int include_optional) {
  backup_t* backup = NULL;
  if (include_optional) {
    backup = backup_create(
       // false, not to have infinite recursion
      instantiate_backup_service_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_backup_billing_details(0),
      "USD",
      "$",
       // false, not to have infinite recursion
      instantiate_backup_service_master(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_backup_extra_info_tables(0)
    );
  } else {
    backup = backup_create(
      NULL,
      list_createList(),
      NULL,
      "USD",
      "$",
      NULL,
      "0",
      "0",
      NULL
    );
  }

  return backup;
}


#ifdef backup_MAIN

void test_backup(int include_optional) {
    backup_t* backup_1 = instantiate_backup(include_optional);

	cJSON* jsonbackup_1 = backup_convertToJSON(backup_1);
	printf("backup :\n%s\n", cJSON_Print(jsonbackup_1));
	backup_t* backup_2 = backup_parseFromJSON(jsonbackup_1);
	cJSON* jsonbackup_2 = backup_convertToJSON(backup_2);
	printf("repeating backup:\n%s\n", cJSON_Print(jsonbackup_2));
}

int main() {
  test_backup(1);
  test_backup(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_MAIN
#endif // backup_TEST
