#ifndef backups_order_TEST
#define backups_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backups_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backups_order.h"
backups_order_t* instantiate_backups_order(int include_optional);

#include "test_backups_order_package_costs.c"
#include "test_backups_order_service_types.c"


backups_order_t* instantiate_backups_order(int include_optional) {
  backups_order_t* backups_order = NULL;
  if (include_optional) {
    backups_order = backups_order_create(
       // false, not to have infinite recursion
      instantiate_backups_order_package_costs(0),
       // false, not to have infinite recursion
      instantiate_backups_order_service_types(0)
    );
  } else {
    backups_order = backups_order_create(
      NULL,
      NULL
    );
  }

  return backups_order;
}


#ifdef backups_order_MAIN

void test_backups_order(int include_optional) {
    backups_order_t* backups_order_1 = instantiate_backups_order(include_optional);

	cJSON* jsonbackups_order_1 = backups_order_convertToJSON(backups_order_1);
	printf("backups_order :\n%s\n", cJSON_Print(jsonbackups_order_1));
	backups_order_t* backups_order_2 = backups_order_parseFromJSON(jsonbackups_order_1);
	cJSON* jsonbackups_order_2 = backups_order_convertToJSON(backups_order_2);
	printf("repeating backups_order:\n%s\n", cJSON_Print(jsonbackups_order_2));
}

int main() {
  test_backups_order(1);
  test_backups_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // backups_order_MAIN
#endif // backups_order_TEST
