#ifndef backup_order_put_response_TEST
#define backup_order_put_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_order_put_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_order_put_response.h"
backup_order_put_response_t* instantiate_backup_order_put_response(int include_optional);



backup_order_put_response_t* instantiate_backup_order_put_response(int include_optional) {
  backup_order_put_response_t* backup_order_put_response = NULL;
  if (include_optional) {
    backup_order_put_response = backup_order_put_response_create(
      1,
      list_createList(),
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56
    );
  } else {
    backup_order_put_response = backup_order_put_response_create(
      1,
      list_createList(),
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56
    );
  }

  return backup_order_put_response;
}


#ifdef backup_order_put_response_MAIN

void test_backup_order_put_response(int include_optional) {
    backup_order_put_response_t* backup_order_put_response_1 = instantiate_backup_order_put_response(include_optional);

	cJSON* jsonbackup_order_put_response_1 = backup_order_put_response_convertToJSON(backup_order_put_response_1);
	printf("backup_order_put_response :\n%s\n", cJSON_Print(jsonbackup_order_put_response_1));
	backup_order_put_response_t* backup_order_put_response_2 = backup_order_put_response_parseFromJSON(jsonbackup_order_put_response_1);
	cJSON* jsonbackup_order_put_response_2 = backup_order_put_response_convertToJSON(backup_order_put_response_2);
	printf("repeating backup_order_put_response:\n%s\n", cJSON_Print(jsonbackup_order_put_response_2));
}

int main() {
  test_backup_order_put_response(1);
  test_backup_order_put_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_order_put_response_MAIN
#endif // backup_order_put_response_TEST
