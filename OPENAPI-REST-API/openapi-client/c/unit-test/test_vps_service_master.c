#ifndef vps_service_master_TEST
#define vps_service_master_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vps_service_master_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vps_service_master.h"
vps_service_master_t* instantiate_vps_service_master(int include_optional);



vps_service_master_t* instantiate_vps_service_master(int include_optional) {
  vps_service_master_t* vps_service_master = NULL;
  if (include_optional) {
    vps_service_master = vps_service_master_create(
      "2439",
      "Mystaging",
      "10.11.12.13",
      "14",
      "1856",
      "1559",
      "64",
      "0.17",
      "263998228",
      "Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz",
      "1198.86",
      "1",
      "2023-08-17T22:19:04.000Z",
      "0",
      "5.4.0-121-generic",
      "0",
      "48",
      "0.09",
      "OK: zfs:all pools are healthy",
      "udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages",
      "50",
      "80",
      "SSD",
      "36978"
    );
  } else {
    vps_service_master = vps_service_master_create(
      "2439",
      "Mystaging",
      "10.11.12.13",
      "14",
      "1856",
      "1559",
      "64",
      "0.17",
      "263998228",
      "Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz",
      "1198.86",
      "1",
      "2023-08-17T22:19:04.000Z",
      "0",
      "5.4.0-121-generic",
      "0",
      "48",
      "0.09",
      "OK: zfs:all pools are healthy",
      "udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages",
      "50",
      "80",
      "SSD",
      "36978"
    );
  }

  return vps_service_master;
}


#ifdef vps_service_master_MAIN

void test_vps_service_master(int include_optional) {
    vps_service_master_t* vps_service_master_1 = instantiate_vps_service_master(include_optional);

	cJSON* jsonvps_service_master_1 = vps_service_master_convertToJSON(vps_service_master_1);
	printf("vps_service_master :\n%s\n", cJSON_Print(jsonvps_service_master_1));
	vps_service_master_t* vps_service_master_2 = vps_service_master_parseFromJSON(jsonvps_service_master_1);
	cJSON* jsonvps_service_master_2 = vps_service_master_convertToJSON(vps_service_master_2);
	printf("repeating vps_service_master:\n%s\n", cJSON_Print(jsonvps_service_master_2));
}

int main() {
  test_vps_service_master(1);
  test_vps_service_master(0);

  printf("Hello world \n");
  return 0;
}

#endif // vps_service_master_MAIN
#endif // vps_service_master_TEST
