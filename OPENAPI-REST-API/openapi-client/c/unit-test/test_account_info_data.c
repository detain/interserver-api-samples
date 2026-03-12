#ifndef account_info_data_TEST
#define account_info_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info_data.h"
account_info_data_t* instantiate_account_info_data(int include_optional);

#include "test_account_info_data_email_settings.c"
#include "test_account_info_data_extra.c"
#include "test_account_info_data_fraudrecord.c"
#include "test_account_info_max_mind_response.c"


account_info_data_t* instantiate_account_info_data(int include_optional) {
  account_info_data_t* account_info_data = NULL;
  if (include_optional) {
    account_info_data = account_info_data_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      {"1":{"cc":"************1111","cc_exp":"05/2019","name":"John Doe","country":"US","verified":true},"5":{"cc":"************2222","cc_exp":"05/2019","name":"John Doe","address":"123 Uber St","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.25","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"No","binCountry":"IN","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"state bank of india","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2764","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"7IVXKOVV","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.25,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true},"6":{"cc":"************1111","cc_exp":"05/2021","name":"John Doe","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.48","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"Yes","binCountry":"US","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"Bank of No Hope","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"1234561234","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2765","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"AAAAAZZZZZ","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.48,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true}},
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_account_info_data_email_settings(0),
       // false, not to have infinite recursion
      instantiate_account_info_data_extra(0),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_account_info_data_fraudrecord(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      {"distance":"6146","countryMatch":"No","countryCode":"US","freeMail":"No","anonymousProxy":"No","score":"5.00","binMatch":"NotFound","binCountry":"","err":"CITY_NOT_FOUND","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.1767","ip_longitude":"-76.4297","binName":"","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"","highRiskCountry":"No","queriesRemaining":"171","cityPostalMatch":"","shipCityPostalMatch":"","maxmindID":"HMOCUJP7","ip_asnum":"AS3737 PenTeleData Inc.","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"97","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"10","ip_netSpeedCell":"Dialup","ip_metroCode":"566","ip_areaCode":"333","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","carderEmail":"No","highRiskUsername":"No","riskScore":"4.82","explanation":"You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match","female_name":"no"},
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      56,
      "0",
      "0"
    );
  } else {
    account_info_data = account_info_data_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      {"1":{"cc":"************1111","cc_exp":"05/2019","name":"John Doe","country":"US","verified":true},"5":{"cc":"************2222","cc_exp":"05/2019","name":"John Doe","address":"123 Uber St","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.25","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"No","binCountry":"IN","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"state bank of india","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2764","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"7IVXKOVV","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.25,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true},"6":{"cc":"************1111","cc_exp":"05/2021","name":"John Doe","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.48","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"Yes","binCountry":"US","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"Bank of No Hope","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"1234561234","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2765","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"AAAAAZZZZZ","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.48,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true}},
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      {"distance":"6146","countryMatch":"No","countryCode":"US","freeMail":"No","anonymousProxy":"No","score":"5.00","binMatch":"NotFound","binCountry":"","err":"CITY_NOT_FOUND","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.1767","ip_longitude":"-76.4297","binName":"","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"","highRiskCountry":"No","queriesRemaining":"171","cityPostalMatch":"","shipCityPostalMatch":"","maxmindID":"HMOCUJP7","ip_asnum":"AS3737 PenTeleData Inc.","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"97","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"10","ip_netSpeedCell":"Dialup","ip_metroCode":"566","ip_areaCode":"333","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","carderEmail":"No","highRiskUsername":"No","riskScore":"4.82","explanation":"You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match","female_name":"no"},
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      56,
      "0",
      "0"
    );
  }

  return account_info_data;
}


#ifdef account_info_data_MAIN

void test_account_info_data(int include_optional) {
    account_info_data_t* account_info_data_1 = instantiate_account_info_data(include_optional);

	cJSON* jsonaccount_info_data_1 = account_info_data_convertToJSON(account_info_data_1);
	printf("account_info_data :\n%s\n", cJSON_Print(jsonaccount_info_data_1));
	account_info_data_t* account_info_data_2 = account_info_data_parseFromJSON(jsonaccount_info_data_1);
	cJSON* jsonaccount_info_data_2 = account_info_data_convertToJSON(account_info_data_2);
	printf("repeating account_info_data:\n%s\n", cJSON_Print(jsonaccount_info_data_2));
}

int main() {
  test_account_info_data(1);
  test_account_info_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_data_MAIN
#endif // account_info_data_TEST
