#ifndef backup_order_put_request_TEST
#define backup_order_put_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_order_put_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_order_put_request.h"
backup_order_put_request_t* instantiate_backup_order_put_request(int include_optional);



backup_order_put_request_t* instantiate_backup_order_put_request(int include_optional) {
  backup_order_put_request_t* backup_order_put_request = NULL;
  if (include_optional) {
    backup_order_put_request = backup_order_put_request_create(
      1,
      56,
      "0"
    );
  } else {
    backup_order_put_request = backup_order_put_request_create(
      1,
      56,
      "0"
    );
  }

  return backup_order_put_request;
}


#ifdef backup_order_put_request_MAIN

void test_backup_order_put_request(int include_optional) {
    backup_order_put_request_t* backup_order_put_request_1 = instantiate_backup_order_put_request(include_optional);

	cJSON* jsonbackup_order_put_request_1 = backup_order_put_request_convertToJSON(backup_order_put_request_1);
	printf("backup_order_put_request :\n%s\n", cJSON_Print(jsonbackup_order_put_request_1));
	backup_order_put_request_t* backup_order_put_request_2 = backup_order_put_request_parseFromJSON(jsonbackup_order_put_request_1);
	cJSON* jsonbackup_order_put_request_2 = backup_order_put_request_convertToJSON(backup_order_put_request_2);
	printf("repeating backup_order_put_request:\n%s\n", cJSON_Print(jsonbackup_order_put_request_2));
}

int main() {
  test_backup_order_put_request(1);
  test_backup_order_put_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_order_put_request_MAIN
#endif // backup_order_put_request_TEST
