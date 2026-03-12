#ifndef backup_extra_info_tables_TEST
#define backup_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_extra_info_tables.h"
backup_extra_info_tables_t* instantiate_backup_extra_info_tables(int include_optional);

#include "test_backup_ip_info.c"


backup_extra_info_tables_t* instantiate_backup_extra_info_tables(int include_optional) {
  backup_extra_info_tables_t* backup_extra_info_tables = NULL;
  if (include_optional) {
    backup_extra_info_tables = backup_extra_info_tables_create(
       // false, not to have infinite recursion
      instantiate_backup_ip_info(0)
    );
  } else {
    backup_extra_info_tables = backup_extra_info_tables_create(
      NULL
    );
  }

  return backup_extra_info_tables;
}


#ifdef backup_extra_info_tables_MAIN

void test_backup_extra_info_tables(int include_optional) {
    backup_extra_info_tables_t* backup_extra_info_tables_1 = instantiate_backup_extra_info_tables(include_optional);

	cJSON* jsonbackup_extra_info_tables_1 = backup_extra_info_tables_convertToJSON(backup_extra_info_tables_1);
	printf("backup_extra_info_tables :\n%s\n", cJSON_Print(jsonbackup_extra_info_tables_1));
	backup_extra_info_tables_t* backup_extra_info_tables_2 = backup_extra_info_tables_parseFromJSON(jsonbackup_extra_info_tables_1);
	cJSON* jsonbackup_extra_info_tables_2 = backup_extra_info_tables_convertToJSON(backup_extra_info_tables_2);
	printf("repeating backup_extra_info_tables:\n%s\n", cJSON_Print(jsonbackup_extra_info_tables_2));
}

int main() {
  test_backup_extra_info_tables(1);
  test_backup_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_extra_info_tables_MAIN
#endif // backup_extra_info_tables_TEST
