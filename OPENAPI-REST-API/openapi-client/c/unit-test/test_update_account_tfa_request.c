#ifndef update_account_tfa_request_TEST
#define update_account_tfa_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_account_tfa_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_account_tfa_request.h"
update_account_tfa_request_t* instantiate_update_account_tfa_request(int include_optional);



update_account_tfa_request_t* instantiate_update_account_tfa_request(int include_optional) {
  update_account_tfa_request_t* update_account_tfa_request = NULL;
  if (include_optional) {
    update_account_tfa_request = update_account_tfa_request_create(
      "0"
    );
  } else {
    update_account_tfa_request = update_account_tfa_request_create(
      "0"
    );
  }

  return update_account_tfa_request;
}


#ifdef update_account_tfa_request_MAIN

void test_update_account_tfa_request(int include_optional) {
    update_account_tfa_request_t* update_account_tfa_request_1 = instantiate_update_account_tfa_request(include_optional);

	cJSON* jsonupdate_account_tfa_request_1 = update_account_tfa_request_convertToJSON(update_account_tfa_request_1);
	printf("update_account_tfa_request :\n%s\n", cJSON_Print(jsonupdate_account_tfa_request_1));
	update_account_tfa_request_t* update_account_tfa_request_2 = update_account_tfa_request_parseFromJSON(jsonupdate_account_tfa_request_1);
	cJSON* jsonupdate_account_tfa_request_2 = update_account_tfa_request_convertToJSON(update_account_tfa_request_2);
	printf("repeating update_account_tfa_request:\n%s\n", cJSON_Print(jsonupdate_account_tfa_request_2));
}

int main() {
  test_update_account_tfa_request(1);
  test_update_account_tfa_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_account_tfa_request_MAIN
#endif // update_account_tfa_request_TEST
