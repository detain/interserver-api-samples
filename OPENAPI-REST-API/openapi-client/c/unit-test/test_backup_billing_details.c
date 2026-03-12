#ifndef backup_billing_details_TEST
#define backup_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_billing_details.h"
backup_billing_details_t* instantiate_backup_billing_details(int include_optional);



backup_billing_details_t* instantiate_backup_billing_details(int include_optional) {
  backup_billing_details_t* backup_billing_details = NULL;
  if (include_optional) {
    backup_billing_details = backup_billing_details_create(
      "December 29, 2021",
      "Paid",
      "Monthly",
      "2022-01-29T14:09:57.000Z",
      "January 29, 2022",
      "USD",
      "$",
      "3",
      "[]",
      "[]"
    );
  } else {
    backup_billing_details = backup_billing_details_create(
      "December 29, 2021",
      "Paid",
      "Monthly",
      "2022-01-29T14:09:57.000Z",
      "January 29, 2022",
      "USD",
      "$",
      "3",
      "[]",
      "[]"
    );
  }

  return backup_billing_details;
}


#ifdef backup_billing_details_MAIN

void test_backup_billing_details(int include_optional) {
    backup_billing_details_t* backup_billing_details_1 = instantiate_backup_billing_details(include_optional);

	cJSON* jsonbackup_billing_details_1 = backup_billing_details_convertToJSON(backup_billing_details_1);
	printf("backup_billing_details :\n%s\n", cJSON_Print(jsonbackup_billing_details_1));
	backup_billing_details_t* backup_billing_details_2 = backup_billing_details_parseFromJSON(jsonbackup_billing_details_1);
	cJSON* jsonbackup_billing_details_2 = backup_billing_details_convertToJSON(backup_billing_details_2);
	printf("repeating backup_billing_details:\n%s\n", cJSON_Print(jsonbackup_billing_details_2));
}

int main() {
  test_backup_billing_details(1);
  test_backup_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_billing_details_MAIN
#endif // backup_billing_details_TEST
