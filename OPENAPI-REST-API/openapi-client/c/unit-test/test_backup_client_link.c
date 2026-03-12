#ifndef backup_client_link_TEST
#define backup_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_client_link.h"
backup_client_link_t* instantiate_backup_client_link(int include_optional);



backup_client_link_t* instantiate_backup_client_link(int include_optional) {
  backup_client_link_t* backup_client_link = NULL;
  if (include_optional) {
    backup_client_link = backup_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    backup_client_link = backup_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return backup_client_link;
}


#ifdef backup_client_link_MAIN

void test_backup_client_link(int include_optional) {
    backup_client_link_t* backup_client_link_1 = instantiate_backup_client_link(include_optional);

	cJSON* jsonbackup_client_link_1 = backup_client_link_convertToJSON(backup_client_link_1);
	printf("backup_client_link :\n%s\n", cJSON_Print(jsonbackup_client_link_1));
	backup_client_link_t* backup_client_link_2 = backup_client_link_parseFromJSON(jsonbackup_client_link_1);
	cJSON* jsonbackup_client_link_2 = backup_client_link_convertToJSON(backup_client_link_2);
	printf("repeating backup_client_link:\n%s\n", cJSON_Print(jsonbackup_client_link_2));
}

int main() {
  test_backup_client_link(1);
  test_backup_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_client_link_MAIN
#endif // backup_client_link_TEST
