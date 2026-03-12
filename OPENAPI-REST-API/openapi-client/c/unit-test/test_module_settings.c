#ifndef module_settings_TEST
#define module_settings_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_settings_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_settings.h"
module_settings_t* instantiate_module_settings(int include_optional);



module_settings_t* instantiate_module_settings(int include_optional) {
  module_settings_t* module_settings = NULL;
  if (include_optional) {
    module_settings = module_settings_create(
      0,
      true,
      true,
      0,
      "root-server.png",
      2,
      45,
      14,
      7,
      "VPS",
      "VPS",
      "support@interserver.net"",
      "VPS",
      "vps",
      "vps_hostname",
      "vps",
      "vps_ip",
      "vps_vzid"
    );
  } else {
    module_settings = module_settings_create(
      0,
      true,
      true,
      0,
      "root-server.png",
      2,
      45,
      14,
      7,
      "VPS",
      "VPS",
      "support@interserver.net"",
      "VPS",
      "vps",
      "vps_hostname",
      "vps",
      "vps_ip",
      "vps_vzid"
    );
  }

  return module_settings;
}


#ifdef module_settings_MAIN

void test_module_settings(int include_optional) {
    module_settings_t* module_settings_1 = instantiate_module_settings(include_optional);

	cJSON* jsonmodule_settings_1 = module_settings_convertToJSON(module_settings_1);
	printf("module_settings :\n%s\n", cJSON_Print(jsonmodule_settings_1));
	module_settings_t* module_settings_2 = module_settings_parseFromJSON(jsonmodule_settings_1);
	cJSON* jsonmodule_settings_2 = module_settings_convertToJSON(module_settings_2);
	printf("repeating module_settings:\n%s\n", cJSON_Print(jsonmodule_settings_2));
}

int main() {
  test_module_settings(1);
  test_module_settings(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_settings_MAIN
#endif // module_settings_TEST
