#ifndef quickserver_client_link_TEST
#define quickserver_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_client_link.h"
quickserver_client_link_t* instantiate_quickserver_client_link(int include_optional);



quickserver_client_link_t* instantiate_quickserver_client_link(int include_optional) {
  quickserver_client_link_t* quickserver_client_link = NULL;
  if (include_optional) {
    quickserver_client_link = quickserver_client_link_create(
      "Invoices",
      "invoices",
      "fas fa-file-invoice-dollar fa-w-12",
      "0",
      "Invoice History",
      "0"
    );
  } else {
    quickserver_client_link = quickserver_client_link_create(
      "Invoices",
      "invoices",
      "fas fa-file-invoice-dollar fa-w-12",
      "0",
      "Invoice History",
      "0"
    );
  }

  return quickserver_client_link;
}


#ifdef quickserver_client_link_MAIN

void test_quickserver_client_link(int include_optional) {
    quickserver_client_link_t* quickserver_client_link_1 = instantiate_quickserver_client_link(include_optional);

	cJSON* jsonquickserver_client_link_1 = quickserver_client_link_convertToJSON(quickserver_client_link_1);
	printf("quickserver_client_link :\n%s\n", cJSON_Print(jsonquickserver_client_link_1));
	quickserver_client_link_t* quickserver_client_link_2 = quickserver_client_link_parseFromJSON(jsonquickserver_client_link_1);
	cJSON* jsonquickserver_client_link_2 = quickserver_client_link_convertToJSON(quickserver_client_link_2);
	printf("repeating quickserver_client_link:\n%s\n", cJSON_Print(jsonquickserver_client_link_2));
}

int main() {
  test_quickserver_client_link(1);
  test_quickserver_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_client_link_MAIN
#endif // quickserver_client_link_TEST
