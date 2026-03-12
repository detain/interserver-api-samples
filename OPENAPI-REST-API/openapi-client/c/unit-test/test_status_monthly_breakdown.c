#ifndef status_monthly_breakdown_TEST
#define status_monthly_breakdown_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_monthly_breakdown_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_monthly_breakdown.h"
status_monthly_breakdown_t* instantiate_status_monthly_breakdown(int include_optional);



status_monthly_breakdown_t* instantiate_status_monthly_breakdown(int include_optional) {
  status_monthly_breakdown_t* status_monthly_breakdown = NULL;
  if (include_optional) {
    status_monthly_breakdown = status_monthly_breakdown_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    status_monthly_breakdown = status_monthly_breakdown_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return status_monthly_breakdown;
}


#ifdef status_monthly_breakdown_MAIN

void test_status_monthly_breakdown(int include_optional) {
    status_monthly_breakdown_t* status_monthly_breakdown_1 = instantiate_status_monthly_breakdown(include_optional);

	cJSON* jsonstatus_monthly_breakdown_1 = status_monthly_breakdown_convertToJSON(status_monthly_breakdown_1);
	printf("status_monthly_breakdown :\n%s\n", cJSON_Print(jsonstatus_monthly_breakdown_1));
	status_monthly_breakdown_t* status_monthly_breakdown_2 = status_monthly_breakdown_parseFromJSON(jsonstatus_monthly_breakdown_1);
	cJSON* jsonstatus_monthly_breakdown_2 = status_monthly_breakdown_convertToJSON(status_monthly_breakdown_2);
	printf("repeating status_monthly_breakdown:\n%s\n", cJSON_Print(jsonstatus_monthly_breakdown_2));
}

int main() {
  test_status_monthly_breakdown(1);
  test_status_monthly_breakdown(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_monthly_breakdown_MAIN
#endif // status_monthly_breakdown_TEST
