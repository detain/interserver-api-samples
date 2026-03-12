#ifndef quickserver_order_distro_sel_TEST
#define quickserver_order_distro_sel_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_distro_sel_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_distro_sel.h"
quickserver_order_distro_sel_t* instantiate_quickserver_order_distro_sel(int include_optional);

#include "test_quickserver_order_distro_sel_ubuntu.c"


quickserver_order_distro_sel_t* instantiate_quickserver_order_distro_sel(int include_optional) {
  quickserver_order_distro_sel_t* quickserver_order_distro_sel = NULL;
  if (include_optional) {
    quickserver_order_distro_sel = quickserver_order_distro_sel_create(
       // false, not to have infinite recursion
      instantiate_quickserver_order_distro_sel_ubuntu(0)
    );
  } else {
    quickserver_order_distro_sel = quickserver_order_distro_sel_create(
      NULL
    );
  }

  return quickserver_order_distro_sel;
}


#ifdef quickserver_order_distro_sel_MAIN

void test_quickserver_order_distro_sel(int include_optional) {
    quickserver_order_distro_sel_t* quickserver_order_distro_sel_1 = instantiate_quickserver_order_distro_sel(include_optional);

	cJSON* jsonquickserver_order_distro_sel_1 = quickserver_order_distro_sel_convertToJSON(quickserver_order_distro_sel_1);
	printf("quickserver_order_distro_sel :\n%s\n", cJSON_Print(jsonquickserver_order_distro_sel_1));
	quickserver_order_distro_sel_t* quickserver_order_distro_sel_2 = quickserver_order_distro_sel_parseFromJSON(jsonquickserver_order_distro_sel_1);
	cJSON* jsonquickserver_order_distro_sel_2 = quickserver_order_distro_sel_convertToJSON(quickserver_order_distro_sel_2);
	printf("repeating quickserver_order_distro_sel:\n%s\n", cJSON_Print(jsonquickserver_order_distro_sel_2));
}

int main() {
  test_quickserver_order_distro_sel(1);
  test_quickserver_order_distro_sel(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_distro_sel_MAIN
#endif // quickserver_order_distro_sel_TEST
