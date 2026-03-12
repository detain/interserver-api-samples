#ifndef quickserver_TEST
#define quickserver_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver.h"
quickserver_t* instantiate_quickserver(int include_optional);

#include "test_quickserver_service_info.c"
#include "test_quickserver_billing_details.c"
#include "test_quickserver_service_master.c"
#include "test_quickserver_service_extra.c"
#include "test_quickserver_extra_info_tables.c"


quickserver_t* instantiate_quickserver(int include_optional) {
  quickserver_t* quickserver = NULL;
  if (include_optional) {
    quickserver = quickserver_create(
       // false, not to have infinite recursion
      instantiate_quickserver_service_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_quickserver_billing_details(0),
      "USD",
      "$",
       // false, not to have infinite recursion
      instantiate_quickserver_service_master(0),
      "Rapid Deploy Server",
      "Ubuntu 22.04",
       // false, not to have infinite recursion
      instantiate_quickserver_service_extra(0),
       // false, not to have infinite recursion
      instantiate_quickserver_extra_info_tables(0),
      "{"labels":[],"value":[]}",
      "[]",
      "[]",
      "quickservers",
      "%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI",
      "0.00 GB",
      "0.00 GB",
      32.27,
      "0GB",
      "0GB",
      list_createList()
    );
  } else {
    quickserver = quickserver_create(
      NULL,
      list_createList(),
      NULL,
      "USD",
      "$",
      NULL,
      "Rapid Deploy Server",
      "Ubuntu 22.04",
      NULL,
      NULL,
      "{"labels":[],"value":[]}",
      "[]",
      "[]",
      "quickservers",
      "%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI",
      "0.00 GB",
      "0.00 GB",
      32.27,
      "0GB",
      "0GB",
      list_createList()
    );
  }

  return quickserver;
}


#ifdef quickserver_MAIN

void test_quickserver(int include_optional) {
    quickserver_t* quickserver_1 = instantiate_quickserver(include_optional);

	cJSON* jsonquickserver_1 = quickserver_convertToJSON(quickserver_1);
	printf("quickserver :\n%s\n", cJSON_Print(jsonquickserver_1));
	quickserver_t* quickserver_2 = quickserver_parseFromJSON(jsonquickserver_1);
	cJSON* jsonquickserver_2 = quickserver_convertToJSON(quickserver_2);
	printf("repeating quickserver:\n%s\n", cJSON_Print(jsonquickserver_2));
}

int main() {
  test_quickserver(1);
  test_quickserver(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_MAIN
#endif // quickserver_TEST
