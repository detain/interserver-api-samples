#ifndef backups_order_package_costs_TEST
#define backups_order_package_costs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backups_order_package_costs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backups_order_package_costs.h"
backups_order_package_costs_t* instantiate_backups_order_package_costs(int include_optional);



backups_order_package_costs_t* instantiate_backups_order_package_costs(int include_optional) {
  backups_order_package_costs_t* backups_order_package_costs = NULL;
  if (include_optional) {
    backups_order_package_costs = backups_order_package_costs_create(
      84
    );
  } else {
    backups_order_package_costs = backups_order_package_costs_create(
      84
    );
  }

  return backups_order_package_costs;
}


#ifdef backups_order_package_costs_MAIN

void test_backups_order_package_costs(int include_optional) {
    backups_order_package_costs_t* backups_order_package_costs_1 = instantiate_backups_order_package_costs(include_optional);

	cJSON* jsonbackups_order_package_costs_1 = backups_order_package_costs_convertToJSON(backups_order_package_costs_1);
	printf("backups_order_package_costs :\n%s\n", cJSON_Print(jsonbackups_order_package_costs_1));
	backups_order_package_costs_t* backups_order_package_costs_2 = backups_order_package_costs_parseFromJSON(jsonbackups_order_package_costs_1);
	cJSON* jsonbackups_order_package_costs_2 = backups_order_package_costs_convertToJSON(backups_order_package_costs_2);
	printf("repeating backups_order_package_costs:\n%s\n", cJSON_Print(jsonbackups_order_package_costs_2));
}

int main() {
  test_backups_order_package_costs(1);
  test_backups_order_package_costs(0);

  printf("Hello world \n");
  return 0;
}

#endif // backups_order_package_costs_MAIN
#endif // backups_order_package_costs_TEST
