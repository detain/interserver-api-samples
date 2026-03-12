#ifndef backup_order_post_response_cj_params_TEST
#define backup_order_post_response_cj_params_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_order_post_response_cj_params_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_order_post_response_cj_params.h"
backup_order_post_response_cj_params_t* instantiate_backup_order_post_response_cj_params(int include_optional);



backup_order_post_response_cj_params_t* instantiate_backup_order_post_response_cj_params(int include_optional) {
  backup_order_post_response_cj_params_t* backup_order_post_response_cj_params = NULL;
  if (include_optional) {
    backup_order_post_response_cj_params = backup_order_post_response_cj_params_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0"
    );
  } else {
    backup_order_post_response_cj_params = backup_order_post_response_cj_params_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0"
    );
  }

  return backup_order_post_response_cj_params;
}


#ifdef backup_order_post_response_cj_params_MAIN

void test_backup_order_post_response_cj_params(int include_optional) {
    backup_order_post_response_cj_params_t* backup_order_post_response_cj_params_1 = instantiate_backup_order_post_response_cj_params(include_optional);

	cJSON* jsonbackup_order_post_response_cj_params_1 = backup_order_post_response_cj_params_convertToJSON(backup_order_post_response_cj_params_1);
	printf("backup_order_post_response_cj_params :\n%s\n", cJSON_Print(jsonbackup_order_post_response_cj_params_1));
	backup_order_post_response_cj_params_t* backup_order_post_response_cj_params_2 = backup_order_post_response_cj_params_parseFromJSON(jsonbackup_order_post_response_cj_params_1);
	cJSON* jsonbackup_order_post_response_cj_params_2 = backup_order_post_response_cj_params_convertToJSON(backup_order_post_response_cj_params_2);
	printf("repeating backup_order_post_response_cj_params:\n%s\n", cJSON_Print(jsonbackup_order_post_response_cj_params_2));
}

int main() {
  test_backup_order_post_response_cj_params(1);
  test_backup_order_post_response_cj_params(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_order_post_response_cj_params_MAIN
#endif // backup_order_post_response_cj_params_TEST
