#ifndef server_extra_info_tables_TEST
#define server_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_extra_info_tables.h"
server_extra_info_tables_t* instantiate_server_extra_info_tables(int include_optional);

#include "test_server_assets.c"


server_extra_info_tables_t* instantiate_server_extra_info_tables(int include_optional) {
  server_extra_info_tables_t* server_extra_info_tables = NULL;
  if (include_optional) {
    server_extra_info_tables = server_extra_info_tables_create(
      {"title":"Assets","size":2,"type":"table","header":["Id","Hostname","Description","Location Name","Rack Name","Status","Primary Ipv4","Comments"],"rows":[["3497","myserver.host.com","CPU:..............2x Intel Xeon E5-2620v4 @2.10GHz\r\nMemory:...........128GB DDR3 1600MHz\r\nHard Drive 1:.....Crucial 500 GB SSD\r\nHard Drive 2:.....Crucial 500 GB SSD\r\nRAID:.............none\r\nOS:...............Ubuntu 20\r\nControl Panel:....none\r\nNetwork...........10G Card\r\nIP(s):............Vlan 3497\r\nBandwidth:........10Tb @ 10gb port","TEB2","112.16","active","1.2.3.250",""]]}
    );
  } else {
    server_extra_info_tables = server_extra_info_tables_create(
      {"title":"Assets","size":2,"type":"table","header":["Id","Hostname","Description","Location Name","Rack Name","Status","Primary Ipv4","Comments"],"rows":[["3497","myserver.host.com","CPU:..............2x Intel Xeon E5-2620v4 @2.10GHz\r\nMemory:...........128GB DDR3 1600MHz\r\nHard Drive 1:.....Crucial 500 GB SSD\r\nHard Drive 2:.....Crucial 500 GB SSD\r\nRAID:.............none\r\nOS:...............Ubuntu 20\r\nControl Panel:....none\r\nNetwork...........10G Card\r\nIP(s):............Vlan 3497\r\nBandwidth:........10Tb @ 10gb port","TEB2","112.16","active","1.2.3.250",""]]}
    );
  }

  return server_extra_info_tables;
}


#ifdef server_extra_info_tables_MAIN

void test_server_extra_info_tables(int include_optional) {
    server_extra_info_tables_t* server_extra_info_tables_1 = instantiate_server_extra_info_tables(include_optional);

	cJSON* jsonserver_extra_info_tables_1 = server_extra_info_tables_convertToJSON(server_extra_info_tables_1);
	printf("server_extra_info_tables :\n%s\n", cJSON_Print(jsonserver_extra_info_tables_1));
	server_extra_info_tables_t* server_extra_info_tables_2 = server_extra_info_tables_parseFromJSON(jsonserver_extra_info_tables_1);
	cJSON* jsonserver_extra_info_tables_2 = server_extra_info_tables_convertToJSON(server_extra_info_tables_2);
	printf("repeating server_extra_info_tables:\n%s\n", cJSON_Print(jsonserver_extra_info_tables_2));
}

int main() {
  test_server_extra_info_tables(1);
  test_server_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_extra_info_tables_MAIN
#endif // server_extra_info_tables_TEST
