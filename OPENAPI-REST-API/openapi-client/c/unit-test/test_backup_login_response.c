#ifndef backup_login_response_TEST
#define backup_login_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_login_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_login_response.h"
backup_login_response_t* instantiate_backup_login_response(int include_optional);



backup_login_response_t* instantiate_backup_login_response(int include_optional) {
  backup_login_response_t* backup_login_response = NULL;
  if (include_optional) {
    backup_login_response = backup_login_response_create(
      1,
      "0"
    );
  } else {
    backup_login_response = backup_login_response_create(
      1,
      "0"
    );
  }

  return backup_login_response;
}


#ifdef backup_login_response_MAIN

void test_backup_login_response(int include_optional) {
    backup_login_response_t* backup_login_response_1 = instantiate_backup_login_response(include_optional);

	cJSON* jsonbackup_login_response_1 = backup_login_response_convertToJSON(backup_login_response_1);
	printf("backup_login_response :\n%s\n", cJSON_Print(jsonbackup_login_response_1));
	backup_login_response_t* backup_login_response_2 = backup_login_response_parseFromJSON(jsonbackup_login_response_1);
	cJSON* jsonbackup_login_response_2 = backup_login_response_convertToJSON(backup_login_response_2);
	printf("repeating backup_login_response:\n%s\n", cJSON_Print(jsonbackup_login_response_2));
}

int main() {
  test_backup_login_response(1);
  test_backup_login_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_login_response_MAIN
#endif // backup_login_response_TEST
