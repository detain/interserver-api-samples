#ifndef quickserver_order_distro_sel_ubuntu_TEST
#define quickserver_order_distro_sel_ubuntu_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_order_distro_sel_ubuntu_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_order_distro_sel_ubuntu.h"
quickserver_order_distro_sel_ubuntu_t* instantiate_quickserver_order_distro_sel_ubuntu(int include_optional);



quickserver_order_distro_sel_ubuntu_t* instantiate_quickserver_order_distro_sel_ubuntu(int include_optional) {
  quickserver_order_distro_sel_ubuntu_t* quickserver_order_distro_sel_ubuntu = NULL;
  if (include_optional) {
    quickserver_order_distro_sel_ubuntu = quickserver_order_distro_sel_ubuntu_create(
      "Ubuntu"
    );
  } else {
    quickserver_order_distro_sel_ubuntu = quickserver_order_distro_sel_ubuntu_create(
      "Ubuntu"
    );
  }

  return quickserver_order_distro_sel_ubuntu;
}


#ifdef quickserver_order_distro_sel_ubuntu_MAIN

void test_quickserver_order_distro_sel_ubuntu(int include_optional) {
    quickserver_order_distro_sel_ubuntu_t* quickserver_order_distro_sel_ubuntu_1 = instantiate_quickserver_order_distro_sel_ubuntu(include_optional);

	cJSON* jsonquickserver_order_distro_sel_ubuntu_1 = quickserver_order_distro_sel_ubuntu_convertToJSON(quickserver_order_distro_sel_ubuntu_1);
	printf("quickserver_order_distro_sel_ubuntu :\n%s\n", cJSON_Print(jsonquickserver_order_distro_sel_ubuntu_1));
	quickserver_order_distro_sel_ubuntu_t* quickserver_order_distro_sel_ubuntu_2 = quickserver_order_distro_sel_ubuntu_parseFromJSON(jsonquickserver_order_distro_sel_ubuntu_1);
	cJSON* jsonquickserver_order_distro_sel_ubuntu_2 = quickserver_order_distro_sel_ubuntu_convertToJSON(quickserver_order_distro_sel_ubuntu_2);
	printf("repeating quickserver_order_distro_sel_ubuntu:\n%s\n", cJSON_Print(jsonquickserver_order_distro_sel_ubuntu_2));
}

int main() {
  test_quickserver_order_distro_sel_ubuntu(1);
  test_quickserver_order_distro_sel_ubuntu(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_order_distro_sel_ubuntu_MAIN
#endif // quickserver_order_distro_sel_ubuntu_TEST
