#ifndef backup_row_TEST
#define backup_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_row.h"
backup_row_t* instantiate_backup_row(int include_optional);



backup_row_t* instantiate_backup_row(int include_optional) {
  backup_row_t* backup_row = NULL;
  if (include_optional) {
    backup_row = backup_row_create(
      "2414",
      "storage-nj.interserver.net",
      "5.99",
      "detainin2414",
      "pending-setup",
      "Swift Storage"
    );
  } else {
    backup_row = backup_row_create(
      "2414",
      "storage-nj.interserver.net",
      "5.99",
      "detainin2414",
      "pending-setup",
      "Swift Storage"
    );
  }

  return backup_row;
}


#ifdef backup_row_MAIN

void test_backup_row(int include_optional) {
    backup_row_t* backup_row_1 = instantiate_backup_row(include_optional);

	cJSON* jsonbackup_row_1 = backup_row_convertToJSON(backup_row_1);
	printf("backup_row :\n%s\n", cJSON_Print(jsonbackup_row_1));
	backup_row_t* backup_row_2 = backup_row_parseFromJSON(jsonbackup_row_1);
	cJSON* jsonbackup_row_2 = backup_row_convertToJSON(backup_row_2);
	printf("repeating backup_row:\n%s\n", cJSON_Print(jsonbackup_row_2));
}

int main() {
  test_backup_row(1);
  test_backup_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_row_MAIN
#endif // backup_row_TEST
