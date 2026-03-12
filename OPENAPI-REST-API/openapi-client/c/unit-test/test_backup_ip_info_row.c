#ifndef backup_ip_info_row_TEST
#define backup_ip_info_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_ip_info_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_ip_info_row.h"
backup_ip_info_row_t* instantiate_backup_ip_info_row(int include_optional);



backup_ip_info_row_t* instantiate_backup_ip_info_row(int include_optional) {
  backup_ip_info_row_t* backup_ip_info_row = NULL;
  if (include_optional) {
    backup_ip_info_row = backup_ip_info_row_create(
      "Netmask",
      "255.255.255.248"
    );
  } else {
    backup_ip_info_row = backup_ip_info_row_create(
      "Netmask",
      "255.255.255.248"
    );
  }

  return backup_ip_info_row;
}


#ifdef backup_ip_info_row_MAIN

void test_backup_ip_info_row(int include_optional) {
    backup_ip_info_row_t* backup_ip_info_row_1 = instantiate_backup_ip_info_row(include_optional);

	cJSON* jsonbackup_ip_info_row_1 = backup_ip_info_row_convertToJSON(backup_ip_info_row_1);
	printf("backup_ip_info_row :\n%s\n", cJSON_Print(jsonbackup_ip_info_row_1));
	backup_ip_info_row_t* backup_ip_info_row_2 = backup_ip_info_row_parseFromJSON(jsonbackup_ip_info_row_1);
	cJSON* jsonbackup_ip_info_row_2 = backup_ip_info_row_convertToJSON(backup_ip_info_row_2);
	printf("repeating backup_ip_info_row:\n%s\n", cJSON_Print(jsonbackup_ip_info_row_2));
}

int main() {
  test_backup_ip_info_row(1);
  test_backup_ip_info_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_ip_info_row_MAIN
#endif // backup_ip_info_row_TEST
