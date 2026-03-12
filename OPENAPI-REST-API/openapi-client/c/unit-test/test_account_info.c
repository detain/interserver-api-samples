#ifndef account_info_TEST
#define account_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_info.h"
account_info_t* instantiate_account_info(int include_optional);

#include "test_account_info_data.c"
#include "test_account_info_oauthproviders.c"
#include "test_account_info_oauth_config.c"


account_info_t* instantiate_account_info(int include_optional) {
  account_info_t* account_info = NULL;
  if (include_optional) {
    account_info = account_info_create(
      "0",
      "0",
      {"group":"0","address":"112 Uber St.","city":"Townsville","country":"US","disable_cc":"0","fraudrecord_score":"0","ima":"client","name":"John Doe","payment_method":"paypal","phone":"8675309","pin":"000000","state":"PA","status":"active","zip":"11111","account_id":"98651","account_lid":"user@domain.com","address2":"","affiliate_dock_description":"Use this coupon when placing an order to get the first month of hosting for only 1 penny.","affiliate_dock_title":"Exclusive offer to viewers","affiliate_payment_method":"paypal","affiliate_paypal":"user@domain.com","cc":"************1111","cc_auto":"0","cc_exp":"05/2019","cc_type":"visa","cc_whitelist":"1","ccs":{"1":{"cc":"************1111","cc_exp":"05/2019","name":"John Doe","country":"US","verified":true},"5":{"cc":"************2222","cc_exp":"05/2019","name":"John Doe","address":"123 Uber St","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.25","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"No","binCountry":"IN","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"state bank of india","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2764","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"7IVXKOVV","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.25,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true},"6":{"cc":"************1111","cc_exp":"05/2021","name":"John Doe","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.48","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"Yes","binCountry":"US","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"Bank of No Hope","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"1234561234","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2765","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"AAAAAZZZZZ","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.48,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true}},"ccs_added":"14","company":"InterServer, Inc.","currency":"USD","disable_reinstall":"0","disable_reset":"0","email":"user@domain.com","email_abuse":"","email_settings":{"admin/cc_bad_response":"1","admin/mass_communications.tpl":"1"},"extra":{"private_whois":"0"},"facebook_id":"111111111111111","facebook_url":"https://www.facebook.com/111111111111111","firstname":"John","fraudrecord":{"score":"0","count":"0","reliability":"0.0","code":"zxcvzxcvzxcv"},"github_id":"2222222","github_url":"https://github.com/user","google_id":"355431342512341234","google_url":"https://plus.google.com/+JohnDoe","innertell_id":"2222222","lastname":"Doe","locale":"auto","maxmind":{"distance":"6146","countryMatch":"No","countryCode":"US","freeMail":"No","anonymousProxy":"No","score":"5.00","binMatch":"NotFound","binCountry":"","err":"CITY_NOT_FOUND","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.1767","ip_longitude":"-76.4297","binName":"","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"","highRiskCountry":"No","queriesRemaining":"171","cityPostalMatch":"","shipCityPostalMatch":"","maxmindID":"HMOCUJP7","ip_asnum":"AS3737 PenTeleData Inc.","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"97","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"10","ip_netSpeedCell":"Dialup","ip_metroCode":"566","ip_areaCode":"333","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","carderEmail":"No","highRiskUsername":"No","riskScore":"4.82","explanation":"You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match","female_name":"no"},"maxmind_score":"0","mb_id":"4769","modernbill_id":"1234","picture":"https://avatars3.githubusercontent.com/u/1364504","referrer_coupon":"detainaffiliatecoupon","reseller_markup":"10","username":"user@domain.com","ssh_key":"zzzz","ssh_key_wrapped":"zzzz","api_key":"aaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbccccccccccccccccccc","api_key_wrapped":"aaaaaaaaaaaaaaaaaaaaaaa<br>bbbbbbbbbbbbb<br>ccccccccccccccccccc","2fa_google_key":"ssssssssssssssssssssssssss","2fa_google_enabled":true,"2fa_google":1,"2fa_google_split":"zzzz zzzz zzzz zzzz ","2fa_google_qr":"data:image/png;base64,zzz"},
      "0",
      null,
      {"callback":"https://my.interserver.net/oauth/callback.php","providers":{"Twitter":{"enabled":false,"linked":false},"Facebook":{"enabled":true,"account":"10204015683980049","url":"https://www.facebook.com/10204015683980049","linked":true},"Google":{"enabled":true,"account":"103826860529802474211","url":"https://plus.google.com/+JoeHuss","linked":true},"GitHub":{"enabled":true,"account":"1364504","url":"https://github.com/detain","linked":true}}},
      list_createList(),
      [{"start":"8.7.6.5","end":"8.7.6.5"},{"start":"107.77.194.166","end":"107.77.194.166"},{"start":"2600:387:0:809::1b","end":"2600:387:0:809::1b"},{"start":"192.64.80.218","end":"192.64.80.218"},{"start":"66.45.235.102","end":"66.45.235.102"}],
      "0",
      {"CN":["USD"],"BR":["USD","BRL"],"RU":["USD"]},
      1,
      1,
      "0"
    );
  } else {
    account_info = account_info_create(
      "0",
      "0",
      {"group":"0","address":"112 Uber St.","city":"Townsville","country":"US","disable_cc":"0","fraudrecord_score":"0","ima":"client","name":"John Doe","payment_method":"paypal","phone":"8675309","pin":"000000","state":"PA","status":"active","zip":"11111","account_id":"98651","account_lid":"user@domain.com","address2":"","affiliate_dock_description":"Use this coupon when placing an order to get the first month of hosting for only 1 penny.","affiliate_dock_title":"Exclusive offer to viewers","affiliate_payment_method":"paypal","affiliate_paypal":"user@domain.com","cc":"************1111","cc_auto":"0","cc_exp":"05/2019","cc_type":"visa","cc_whitelist":"1","ccs":{"1":{"cc":"************1111","cc_exp":"05/2019","name":"John Doe","country":"US","verified":true},"5":{"cc":"************2222","cc_exp":"05/2019","name":"John Doe","address":"123 Uber St","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.25","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"No","binCountry":"IN","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"state bank of india","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2764","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"7IVXKOVV","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.25,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true},"6":{"cc":"************1111","cc_exp":"05/2021","name":"John Doe","city":"Townsville","state":"PA","zip":"11122","country":"US","maxmind_riskscore":"0.48","maxmind":{"distance":"0","countryMatch":"Yes","countryCode":"US","freeMail":"No","anonymousProxy":"No","binMatch":"Yes","binCountry":"US","err":"","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.175","ip_longitude":"-76.1817","binName":"Bank of No Hope","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"1234561234","custPhoneInBillingLoc":"NotFound","highRiskCountry":"No","queriesRemaining":"2765","cityPostalMatch":"Yes","shipCityPostalMatch":"","maxmindID":"AAAAAZZZZZ","ip_asnum":"AS3737 AS-PTD","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"99","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"20","ip_netSpeedCell":"Cable/DSL","ip_metroCode":"566","ip_areaCode":"","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","isTransProxy":"No","carderEmail":"No","highRiskUsername":"No","highRiskPassword":"No","riskScore":0.48,"prepaid":"No","minfraud_version":"1.3","service_level":"premium","female_name":"no"},"verified":true}},"ccs_added":"14","company":"InterServer, Inc.","currency":"USD","disable_reinstall":"0","disable_reset":"0","email":"user@domain.com","email_abuse":"","email_settings":{"admin/cc_bad_response":"1","admin/mass_communications.tpl":"1"},"extra":{"private_whois":"0"},"facebook_id":"111111111111111","facebook_url":"https://www.facebook.com/111111111111111","firstname":"John","fraudrecord":{"score":"0","count":"0","reliability":"0.0","code":"zxcvzxcvzxcv"},"github_id":"2222222","github_url":"https://github.com/user","google_id":"355431342512341234","google_url":"https://plus.google.com/+JohnDoe","innertell_id":"2222222","lastname":"Doe","locale":"auto","maxmind":{"distance":"6146","countryMatch":"No","countryCode":"US","freeMail":"No","anonymousProxy":"No","score":"5.00","binMatch":"NotFound","binCountry":"","err":"CITY_NOT_FOUND","proxyScore":"0.00","ip_region":"PA","ip_city":"Townsville","ip_latitude":"40.1767","ip_longitude":"-76.4297","binName":"","ip_isp":"PenTeleData","ip_org":"PenTeleData","binNameMatch":"NA","binPhoneMatch":"NA","binPhone":"","custPhoneInBillingLoc":"","highRiskCountry":"No","queriesRemaining":"171","cityPostalMatch":"","shipCityPostalMatch":"","maxmindID":"HMOCUJP7","ip_asnum":"AS3737 PenTeleData Inc.","ip_userType":"residential","ip_countryConf":"99","ip_regionConf":"97","ip_cityConf":"30","ip_postalCode":"11122","ip_postalConf":"30","ip_accuracyRadius":"10","ip_netSpeedCell":"Dialup","ip_metroCode":"566","ip_areaCode":"333","ip_timeZone":"America/New_York","ip_regionName":"Pennsylvania","ip_domain":"ptd.net","ip_countryName":"United States","ip_continentCode":"NA","ip_corporateProxy":"No","carderEmail":"No","highRiskUsername":"No","riskScore":"4.82","explanation":"You should review this order carefully, as it is considered high risk. We suggest you be very cautious about accepting this order. This order is higher risk because the distance between the billing address and the user's actual location is so great. The order is higher risk because the billing country and the country in which the IP address is located don't match","female_name":"no"},"maxmind_score":"0","mb_id":"4769","modernbill_id":"1234","picture":"https://avatars3.githubusercontent.com/u/1364504","referrer_coupon":"detainaffiliatecoupon","reseller_markup":"10","username":"user@domain.com","ssh_key":"zzzz","ssh_key_wrapped":"zzzz","api_key":"aaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbccccccccccccccccccc","api_key_wrapped":"aaaaaaaaaaaaaaaaaaaaaaa<br>bbbbbbbbbbbbb<br>ccccccccccccccccccc","2fa_google_key":"ssssssssssssssssssssssssss","2fa_google_enabled":true,"2fa_google":1,"2fa_google_split":"zzzz zzzz zzzz zzzz ","2fa_google_qr":"data:image/png;base64,zzz"},
      "0",
      null,
      {"callback":"https://my.interserver.net/oauth/callback.php","providers":{"Twitter":{"enabled":false,"linked":false},"Facebook":{"enabled":true,"account":"10204015683980049","url":"https://www.facebook.com/10204015683980049","linked":true},"Google":{"enabled":true,"account":"103826860529802474211","url":"https://plus.google.com/+JoeHuss","linked":true},"GitHub":{"enabled":true,"account":"1364504","url":"https://github.com/detain","linked":true}}},
      list_createList(),
      [{"start":"8.7.6.5","end":"8.7.6.5"},{"start":"107.77.194.166","end":"107.77.194.166"},{"start":"2600:387:0:809::1b","end":"2600:387:0:809::1b"},{"start":"192.64.80.218","end":"192.64.80.218"},{"start":"66.45.235.102","end":"66.45.235.102"}],
      "0",
      {"CN":["USD"],"BR":["USD","BRL"],"RU":["USD"]},
      1,
      1,
      "0"
    );
  }

  return account_info;
}


#ifdef account_info_MAIN

void test_account_info(int include_optional) {
    account_info_t* account_info_1 = instantiate_account_info(include_optional);

	cJSON* jsonaccount_info_1 = account_info_convertToJSON(account_info_1);
	printf("account_info :\n%s\n", cJSON_Print(jsonaccount_info_1));
	account_info_t* account_info_2 = account_info_parseFromJSON(jsonaccount_info_1);
	cJSON* jsonaccount_info_2 = account_info_convertToJSON(account_info_2);
	printf("repeating account_info:\n%s\n", cJSON_Print(jsonaccount_info_2));
}

int main() {
  test_account_info(1);
  test_account_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_info_MAIN
#endif // account_info_TEST
