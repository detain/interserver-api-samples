#ifndef backup_ip_info_TEST
#define backup_ip_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_ip_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_ip_info.h"
backup_ip_info_t* instantiate_backup_ip_info(int include_optional);



backup_ip_info_t* instantiate_backup_ip_info(int include_optional) {
  backup_ip_info_t* backup_ip_info = NULL;
  if (include_optional) {
    backup_ip_info = backup_ip_info_create(
      "IP Information",
      list_createList()
    );
  } else {
    backup_ip_info = backup_ip_info_create(
      "IP Information",
      list_createList()
    );
  }

  return backup_ip_info;
}


#ifdef backup_ip_info_MAIN

void test_backup_ip_info(int include_optional) {
    backup_ip_info_t* backup_ip_info_1 = instantiate_backup_ip_info(include_optional);

	cJSON* jsonbackup_ip_info_1 = backup_ip_info_convertToJSON(backup_ip_info_1);
	printf("backup_ip_info :\n%s\n", cJSON_Print(jsonbackup_ip_info_1));
	backup_ip_info_t* backup_ip_info_2 = backup_ip_info_parseFromJSON(jsonbackup_ip_info_1);
	cJSON* jsonbackup_ip_info_2 = backup_ip_info_convertToJSON(backup_ip_info_2);
	printf("repeating backup_ip_info:\n%s\n", cJSON_Print(jsonbackup_ip_info_2));
}

int main() {
  test_backup_ip_info(1);
  test_backup_ip_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_ip_info_MAIN
#endif // backup_ip_info_TEST
