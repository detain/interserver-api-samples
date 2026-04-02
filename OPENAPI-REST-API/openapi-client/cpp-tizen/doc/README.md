# Documentation for InterServer Management API 0.9.0 Tizen Client SDK

## How do I get the doc files?
First generate source code by running `openapi-generator`
Then run `doc/generateDocumentation.sh` from the output folder. It will generate all the doc files and put them in the `doc/SDK` directory.
To successfully generate documentation it needs `Doxygen` installed in the path.
*Note* - Before generating the documentation, put the logo of the project as the file `doc/logo.png` before running `doxygen`.


## How do I use this?
This is the structure of the doc folder:

```
.
├── logo.png                  \\Logo of the project
├── Doxyfile                  \\Doxygen config files
├── generateDocumentation.sh  \\Script to run to generate documentation
├── README.md                 \\This file
├── SDK                       \\Documentation for all classes in InterServer Management API Tizen Client SDK. See ./html/index.html
│   └── html

```

## *tl;dr* run this:

```
doc/generateDocumentation.sh
```

The above SDK folder will be generated. See the index.html inside the SDK folder.


## What's Doxygen?
Doxygen is the de facto standard tool for generating/extracting documentation from annotated/unannotated C++ sources, but it also supports other popular programming languages such as C, Objective-C, C#, PHP, Java, Python, IDL (Corba, Microsoft, and UNO/OpenOffice flavors), Fortran, VHDL, Tcl, and to some extent D.

Check out [Doxygen](https://www.doxygen.org/) for additional information about the Doxygen project.

## I Don't want to run Doxygen. What are the API files for accessing the REST endpoints?
All URIs are relative to https://my.interserver.nethttps://my.interserver.net/apiv2


### AccountManager
Method | HTTP request | Description
------------- | ------------- | -------------
*changeAccountUsernameSync* | *POST* /account/username | Change Account Username.
*changeAccountUsernameASync* | *POST* /account/username | Change Account Username.
*deleteAccountOauthNameSync* | *DELETE* /account/oauth/{name} | Unlink OAuth Account.
*deleteAccountOauthNameASync* | *DELETE* /account/oauth/{name} | Unlink OAuth Account.
*deleteAccountTfaSync* | *DELETE* /account/2fa | Disable Two-Factor Authentication.
*deleteAccountTfaASync* | *DELETE* /account/2fa | Disable Two-Factor Authentication.
*deleteIpLimitSync* | *PATCH* /account/iplimits | Remove IP Access Restriction.
*deleteIpLimitASync* | *PATCH* /account/iplimits | Remove IP Access Restriction.
*getAccountInfoSync* | *GET* /account | Retrieve Account Details.
*getAccountInfoASync* | *GET* /account | Retrieve Account Details.
*getAccountTfaSetupSync* | *GET* /account/2fa | Get Two-Factor Setup Data.
*getAccountTfaSetupASync* | *GET* /account/2fa | Get Two-Factor Setup Data.
*getHomeSync* | *GET* /home | Get Home Data.
*getHomeASync* | *GET* /home | Get Home Data.
*getSearchSync* | *GET* /search | Search Autocomplete.
*getSearchASync* | *GET* /search | Search Autocomplete.
*logoutSync* | *GET* /logout | Log Out.
*logoutASync* | *GET* /logout | Log Out.
*logoutAccountOauthSync* | *GET* /account/oauth/{name}/logout | Logout of OAuth.
*logoutAccountOauthASync* | *GET* /account/oauth/{name}/logout | Logout of OAuth.
*updateAccountApiKeySync* | *POST* /account/apikey | Generate New API Key.
*updateAccountApiKeyASync* | *POST* /account/apikey | Generate New API Key.
*updateAccountFeaturesSync* | *POST* /account/features | Update Account Feature Flags.
*updateAccountFeaturesASync* | *POST* /account/features | Update Account Feature Flags.
*updateAccountInfoSync* | *POST* /account | Update Account Information.
*updateAccountInfoASync* | *POST* /account | Update Account Information.
*updateAccountIpLimitsSync* | *POST* /account/iplimits | Add IP Access Restriction.
*updateAccountIpLimitsASync* | *POST* /account/iplimits | Add IP Access Restriction.
*updateAccountPasswordSync* | *POST* /account/password | Change Account Password.
*updateAccountPasswordASync* | *POST* /account/password | Change Account Password.
*updateAccountSshKeySync* | *POST* /account/sshkey | Update SSH Keys.
*updateAccountSshKeyASync* | *POST* /account/sshkey | Update SSH Keys.
*updateAccountTfaSync* | *POST* /account/2fa | Enable Two-Factor Authentication.
*updateAccountTfaASync* | *POST* /account/2fa | Enable Two-Factor Authentication.


### BackupsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addBackupSync* | *POST* /backups/order | Place Backup Order.
*addBackupASync* | *POST* /backups/order | Place Backup Order.
*cancelBackupSync* | *DELETE* /backups/{id} | Cancel Backup Service.
*cancelBackupASync* | *DELETE* /backups/{id} | Cancel Backup Service.
*getBackupInfoSync* | *GET* /backups/{id} | Get Backup Service Details.
*getBackupInfoASync* | *GET* /backups/{id} | Get Backup Service Details.
*getBackupInvoicesSync* | *GET* /backups/{id}/invoices | Get Backup Order Invoices.
*getBackupInvoicesASync* | *GET* /backups/{id}/invoices | Get Backup Order Invoices.
*getBackupLoginSync* | *GET* /backups/{id}/login | Get Backup Storage Panel Login.
*getBackupLoginASync* | *GET* /backups/{id}/login | Get Backup Storage Panel Login.
*getBackupsListSync* | *GET* /backups | List Backup Services.
*getBackupsListASync* | *GET* /backups | List Backup Services.
*getBackupsWelcomeEmailSync* | *GET* /backups/{id}/welcome_email | Resend Backup Welcome Email.
*getBackupsWelcomeEmailASync* | *GET* /backups/{id}/welcome_email | Resend Backup Welcome Email.
*getNewBackupSync* | *GET* /backups/order | Get Backup Order Form Data.
*getNewBackupASync* | *GET* /backups/order | Get Backup Order Form Data.
*updateBackupInfoSync* | *POST* /backups/{id} | Update Backup Information.
*updateBackupInfoASync* | *POST* /backups/{id} | Update Backup Information.
*validateBackupOrderSync* | *PUT* /backups/order | Validate Backup Order.
*validateBackupOrderASync* | *PUT* /backups/order | Validate Backup Order.


### BillingManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addAccountCreditCardSync* | *POST* /account/creditcards | Add Credit Card to Account.
*addAccountCreditCardASync* | *POST* /account/creditcards | Add Credit Card to Account.
*addBillingCreditCardSync* | *POST* /billing/creditcards | Add Credit Card for Billing.
*addBillingCreditCardASync* | *POST* /billing/creditcards | Add Credit Card for Billing.
*addBillingPrepaySync* | *POST* /billing/prepays | Create Prepay Deposit.
*addBillingPrepayASync* | *POST* /billing/prepays | Create Prepay Deposit.
*deleteAccountCreditCardSync* | *DELETE* /account/creditcards/{id} | Remove Credit Card.
*deleteAccountCreditCardASync* | *DELETE* /account/creditcards/{id} | Remove Credit Card.
*deleteBillingCreditCardSync* | *DELETE* /billing/creditcards/{id} | Delete Credit Card.
*deleteBillingCreditCardASync* | *DELETE* /billing/creditcards/{id} | Delete Credit Card.
*deleteBillingInvoiceSync* | *DELETE* /billing/invoices/{id} | Delete Invoice.
*deleteBillingInvoiceASync* | *DELETE* /billing/invoices/{id} | Delete Invoice.
*deleteBillingPrepaySync* | *DELETE* /billing/prepays/{id} | Delete Prepay Balance.
*deleteBillingPrepayASync* | *DELETE* /billing/prepays/{id} | Delete Prepay Balance.
*getAffiliateBannersSync* | *GET* /affiliate/banners | List Affiliate Banner Assets.
*getAffiliateBannersASync* | *GET* /affiliate/banners | List Affiliate Banner Assets.
*getAffiliateRichReportSync* | *GET* /affiliate/rich_report | Get Affiliate Performance Report.
*getAffiliateRichReportASync* | *GET* /affiliate/rich_report | Get Affiliate Performance Report.
*getAffiliateSalesGraphSync* | *GET* /affiliate/sales_graph | Get Affiliate Sales Graph Data.
*getAffiliateSalesGraphASync* | *GET* /affiliate/sales_graph | Get Affiliate Sales Graph Data.
*getAffiliateSalesReportSync* | *GET* /affiliate/sales_report | Get Affiliate Sales Report.
*getAffiliateSalesReportASync* | *GET* /affiliate/sales_report | Get Affiliate Sales Report.
*getAffiliateTrafficGraphSync* | *GET* /affiliate/traffic_graph | Get Affiliate Traffic Graph Data.
*getAffiliateTrafficGraphASync* | *GET* /affiliate/traffic_graph | Get Affiliate Traffic Graph Data.
*getAffiliateWebTrafficSync* | *GET* /affiliate/web_traffic | List Affiliate Web Traffic Entries.
*getAffiliateWebTrafficASync* | *GET* /affiliate/web_traffic | List Affiliate Web Traffic Entries.
*getBillingCartSync* | *GET* /billing/cart | Get Shopping Cart Contents.
*getBillingCartASync* | *GET* /billing/cart | Get Shopping Cart Contents.
*getBillingCreditCardVerifySync* | *GET* /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements.
*getBillingCreditCardVerifyASync* | *GET* /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements.
*getBillingInvoiceSync* | *GET* /billing/invoices/{id} | Get Invoice Details.
*getBillingInvoiceASync* | *GET* /billing/invoices/{id} | Get Invoice Details.
*getBillingInvoicesSync* | *GET* /billing/invoices | List Account Invoices.
*getBillingInvoicesASync* | *GET* /billing/invoices | List Account Invoices.
*getBillingPrePaysSync* | *GET* /billing/prepays | List Prepay Balances.
*getBillingPrePaysASync* | *GET* /billing/prepays | List Prepay Balances.
*getInvoicesSync* | *GET* /invoices | Get Invoices.
*getInvoicesASync* | *GET* /invoices | Get Invoices.
*initiatePaymentSync* | *GET* /pay/{method}/{invoices} | Initiate Payment.
*initiatePaymentASync* | *GET* /pay/{method}/{invoices} | Initiate Payment.
*postBillingCreditCardVerifySync* | *POST* /billing/creditcards/{id}/verify | Submit Credit Card Verification.
*postBillingCreditCardVerifyASync* | *POST* /billing/creditcards/{id}/verify | Submit Credit Card Verification.
*updateAccountCreditCardSync* | *POST* /account/creditcards/{id} | Update Credit Card.
*updateAccountCreditCardASync* | *POST* /account/creditcards/{id} | Update Credit Card.
*updateAffiliateDockSetupSync* | *POST* /affiliate/dock_setup | Configure Affiliate Dock Settings.
*updateAffiliateDockSetupASync* | *POST* /affiliate/dock_setup | Configure Affiliate Dock Settings.
*updateAffiliateLandingPageSync* | *POST* /affiliate/landing_pg | Configure Affiliate Landing Page.
*updateAffiliateLandingPageASync* | *POST* /affiliate/landing_pg | Configure Affiliate Landing Page.
*updateAffiliatePaymentSetupSync* | *POST* /affiliate/payment_setup | Configure Affiliate Payout Preferences.
*updateAffiliatePaymentSetupASync* | *POST* /affiliate/payment_setup | Configure Affiliate Payout Preferences.
*updateBillingCreditCardSync* | *POST* /billing/creditcards/{id} | Update Credit Card Details.
*updateBillingCreditCardASync* | *POST* /billing/creditcards/{id} | Update Credit Card Details.
*updateBillingPaymentMethodSync* | *POST* /billing/payment_method | Update Default Payment Method.
*updateBillingPaymentMethodASync* | *POST* /billing/payment_method | Update Default Payment Method.


### DNSManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addDnsDomainSync* | *POST* /dns | Create DNS Domain.
*addDnsDomainASync* | *POST* /dns | Create DNS Domain.
*addDnsRecordSync* | *POST* /dns/{id} | Add DNS Record to Domain.
*addDnsRecordASync* | *POST* /dns/{id} | Add DNS Record to Domain.
*deleteDnsDomainSync* | *DELETE* /dns/{id} | Delete DNS Domain.
*deleteDnsDomainASync* | *DELETE* /dns/{id} | Delete DNS Domain.
*deleteDnsRecordSync* | *DELETE* /dns/{domainId}/{recordId} | Delete DNS Record.
*deleteDnsRecordASync* | *DELETE* /dns/{domainId}/{recordId} | Delete DNS Record.
*getDnsDomainSync* | *GET* /dns/{id} | List Domain DNS Records.
*getDnsDomainASync* | *GET* /dns/{id} | List Domain DNS Records.
*getDnsListSync* | *GET* /dns | List DNS Domains.
*getDnsListASync* | *GET* /dns | List DNS Domains.
*updateDnsRecordSync* | *POST* /dns/{domainId}/{recordId} | Update DNS Record.
*updateDnsRecordASync* | *POST* /dns/{domainId}/{recordId} | Update DNS Record.


### DomainsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addDomainSync* | *POST* /domains/order | Place Domain Order.
*addDomainASync* | *POST* /domains/order | Place Domain Order.
*addDomainDnssecSync* | *POST* /domains/{id}/dnssec | Add Domain DNSSEC Records.
*addDomainDnssecASync* | *POST* /domains/{id}/dnssec | Add Domain DNSSEC Records.
*addDomainNameserverSync* | *POST* /domains/{id}/nameservers | Add Registered Nameserver.
*addDomainNameserverASync* | *POST* /domains/{id}/nameservers | Add Registered Nameserver.
*cancelDomainSync* | *DELETE* /domains/{id} | Cancel Domain Order.
*cancelDomainASync* | *DELETE* /domains/{id} | Cancel Domain Order.
*deleteDomainDnssecSync* | *DELETE* /domains/{id}/dnssec | Remove Domain DNSSEC Records.
*deleteDomainDnssecASync* | *DELETE* /domains/{id}/dnssec | Remove Domain DNSSEC Records.
*deleteDomainNameserverSync* | *DELETE* /domains/{id}/nameservers | Delete Registered Nameserver.
*deleteDomainNameserverASync* | *DELETE* /domains/{id}/nameservers | Delete Registered Nameserver.
*getDomainContactSync* | *GET* /domains/{id}/contact | Get Domain Contact Details.
*getDomainContactASync* | *GET* /domains/{id}/contact | Get Domain Contact Details.
*getDomainDnssecSync* | *GET* /domains/{id}/dnssec | Get Domain DNSSEC Records.
*getDomainDnssecASync* | *GET* /domains/{id}/dnssec | Get Domain DNSSEC Records.
*getDomainInfoSync* | *GET* /domains/{id} | Get Domain Order.
*getDomainInfoASync* | *GET* /domains/{id} | Get Domain Order.
*getDomainInvoicesSync* | *GET* /domains/{id}/invoices | Get Domain Invoices.
*getDomainInvoicesASync* | *GET* /domains/{id}/invoices | Get Domain Invoices.
*getDomainLookupSync* | *GET* /domains/lookup/{name} | Lookup Domain Availability and Pricing.
*getDomainLookupASync* | *GET* /domains/lookup/{name} | Lookup Domain Availability and Pricing.
*getDomainNameserversSync* | *GET* /domains/{id}/nameservers | List Registered Nameservers.
*getDomainNameserversASync* | *GET* /domains/{id}/nameservers | List Registered Nameservers.
*getDomainOrderFieldsSync* | *GET* /domains/order/{domain}/{regType} | Get Domain Order Fields.
*getDomainOrderFieldsASync* | *GET* /domains/order/{domain}/{regType} | Get Domain Order Fields.
*getDomainOrderSearchResultsSync* | *GET* /domains/order/{domain} | Get Domain Order Search Results.
*getDomainOrderSearchResultsASync* | *GET* /domains/order/{domain} | Get Domain Order Search Results.
*getDomainRenewalSync* | *GET* /domains/{id}/renew | Start Domain Renewal Flow.
*getDomainRenewalASync* | *GET* /domains/{id}/renew | Start Domain Renewal Flow.
*getDomainSearchSync* | *GET* /domains/search/{name} | Search Domain Suggestions.
*getDomainSearchASync* | *GET* /domains/search/{name} | Search Domain Suggestions.
*getDomainTransferSync* | *GET* /domains/{id}/transfer | Start Domain Transfer Flow.
*getDomainTransferASync* | *GET* /domains/{id}/transfer | Start Domain Transfer Flow.
*getDomainWhoisPrivacySync* | *GET* /domains/{id}/whois | Get Whois Privacy Status.
*getDomainWhoisPrivacyASync* | *GET* /domains/{id}/whois | Get Whois Privacy Status.
*getDomainsListSync* | *GET* /domains | List Domain Orders.
*getDomainsListASync* | *GET* /domains | List Domain Orders.
*getDomainsWelcomeEmailSync* | *GET* /domains/{id}/welcome_email | Resend Domain Welcome Email.
*getDomainsWelcomeEmailASync* | *GET* /domains/{id}/welcome_email | Resend Domain Welcome Email.
*getNewDomainSync* | *GET* /domains/order | Get Domain Ordering Information.
*getNewDomainASync* | *GET* /domains/order | Get Domain Ordering Information.
*patchDomainsSync* | *PATCH* /domains/order | Validate Domain Order.
*patchDomainsASync* | *PATCH* /domains/order | Validate Domain Order.
*postDomainRenewalSync* | *POST* /domains/{id}/renew | Request Domain Renewal.
*postDomainRenewalASync* | *POST* /domains/{id}/renew | Request Domain Renewal.
*postDomainTransferSync* | *POST* /domains/{id}/transfer | Request Domain Transfer.
*postDomainTransferASync* | *POST* /domains/{id}/transfer | Request Domain Transfer.
*putDomainsSync* | *PUT* /domains/order | Domain Order Search.
*putDomainsASync* | *PUT* /domains/order | Domain Order Search.
*updateDomainContactSync* | *POST* /domains/{id}/contact | Update Domain Contact Details.
*updateDomainContactASync* | *POST* /domains/{id}/contact | Update Domain Contact Details.
*updateDomainInfoSync* | *POST* /domains/{id} | Update Domain Order.
*updateDomainInfoASync* | *POST* /domains/{id} | Update Domain Order.
*updateDomainNameserversSync* | *PUT* /domains/{id}/nameservers | Replace Nameserver Set.
*updateDomainNameserversASync* | *PUT* /domains/{id}/nameservers | Replace Nameserver Set.
*updateDomainWhoisPrivacySync* | *POST* /domains/{id}/whois | Update Whois Privacy.
*updateDomainWhoisPrivacyASync* | *POST* /domains/{id}/whois | Update Whois Privacy.


### FloatingIPsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addFloatingIpSync* | *POST* /floating_ips/order | Place Floating IP Order.
*addFloatingIpASync* | *POST* /floating_ips/order | Place Floating IP Order.
*floatingIpsCancelSync* | *DELETE* /floating_ips/{id} | Cancel Floating IP.
*floatingIpsCancelASync* | *DELETE* /floating_ips/{id} | Cancel Floating IP.
*getFloatingIpInfoSync* | *GET* /floating_ips/{id} | View Floating IP.
*getFloatingIpInfoASync* | *GET* /floating_ips/{id} | View Floating IP.
*getFloatingIpInvoicesSync* | *GET* /floating_ips/{id}/invoices | Get Floating IP Invoices.
*getFloatingIpInvoicesASync* | *GET* /floating_ips/{id}/invoices | Get Floating IP Invoices.
*getFloatingIpsListSync* | *GET* /floating_ips | List Floating IPs.
*getFloatingIpsListASync* | *GET* /floating_ips | List Floating IPs.
*getFloatingIpsWelcomeEmailSync* | *GET* /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email.
*getFloatingIpsWelcomeEmailASync* | *GET* /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email.
*getNewFloatingIpSync* | *GET* /floating_ips/order | Get Floating IP Ordering Information.
*getNewFloatingIpASync* | *GET* /floating_ips/order | Get Floating IP Ordering Information.
*postFloatingIpsChangeIpSync* | *POST* /floating_ips/{id}/change_ip | Change Floating IP Target.
*postFloatingIpsChangeIpASync* | *POST* /floating_ips/{id}/change_ip | Change Floating IP Target.
*putFloatingIpsSync* | *PUT* /floating_ips/order | Validate Floating IP Order.
*putFloatingIpsASync* | *PUT* /floating_ips/order | Validate Floating IP Order.
*updateFloatingIpInfoSync* | *POST* /floating_ips/{id} | Update Floating IP.
*updateFloatingIpInfoASync* | *POST* /floating_ips/{id} | Update Floating IP.


### LicensesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addLicenseSync* | *POST* /licenses/order | Place License Order.
*addLicenseASync* | *POST* /licenses/order | Place License Order.
*getLicenseInfoSync* | *GET* /licenses/{id} | Get License.
*getLicenseInfoASync* | *GET* /licenses/{id} | Get License.
*getLicenseInvoicesSync* | *GET* /licenses/{id}/invoices | Get License Invoices.
*getLicenseInvoicesASync* | *GET* /licenses/{id}/invoices | Get License Invoices.
*getLicenseListSync* | *GET* /licenses | List Licenses.
*getLicenseListASync* | *GET* /licenses | List Licenses.
*getLicenseOrderCatTagInfoSync* | *GET* /licenses/order/{catTag} | Get License Order Information for Category.
*getLicenseOrderCatTagInfoASync* | *GET* /licenses/order/{catTag} | Get License Order Information for Category.
*getLicensesWelcomeEmailSync* | *GET* /licenses/{id}/welcome_email | Resend License Welcome Email.
*getLicensesWelcomeEmailASync* | *GET* /licenses/{id}/welcome_email | Resend License Welcome Email.
*getNewLicenseSync* | *GET* /licenses/order | Get License Order Information.
*getNewLicenseASync* | *GET* /licenses/order | Get License Order Information.
*licensesCancelSync* | *DELETE* /licenses/{id} | Cancel License.
*licensesCancelASync* | *DELETE* /licenses/{id} | Cancel License.
*postLicenseChangeIpSync* | *POST* /licenses/{id}/change_ip | Change License IP.
*postLicenseChangeIpASync* | *POST* /licenses/{id}/change_ip | Change License IP.
*putLicensesSync* | *PUT* /licenses/order | Validate License Order.
*putLicensesASync* | *PUT* /licenses/order | Validate License Order.
*updateLicenseInfoSync* | *POST* /licenses/{id} | Update License.
*updateLicenseInfoASync* | *POST* /licenses/{id} | Update License.


### MailManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addMailSync* | *POST* /mail/order | Place Mail Order.
*addMailASync* | *POST* /mail/order | Place Mail Order.
*addRuleSync* | *POST* /mail/{id}/rules | Create Deny Rule.
*addRuleASync* | *POST* /mail/{id}/rules | Create Deny Rule.
*createMailAlertSync* | *POST* /mail/{id}/alerts | Create Mail Alert.
*createMailAlertASync* | *POST* /mail/{id}/alerts | Create Mail Alert.
*deleteMailAlertSync* | *DELETE* /mail/{id}/alerts | Delete Mail Alert.
*deleteMailAlertASync* | *DELETE* /mail/{id}/alerts | Delete Mail Alert.
*deleteRuleSync* | *DELETE* /mail/{id}/rules/{rule} | Delete Deny Rule.
*deleteRuleASync* | *DELETE* /mail/{id}/rules/{rule} | Delete Deny Rule.
*delistBlockSync* | *POST* /mail/{id}/blocks/delete | Remove Email Address from Block List.
*delistBlockASync* | *POST* /mail/{id}/blocks/delete | Remove Email Address from Block List.
*getMailAlertsSync* | *GET* /mail/{id}/alerts | List Mail Alerts.
*getMailAlertsASync* | *GET* /mail/{id}/alerts | List Mail Alerts.
*getMailBlocksSync* | *GET* /mail/{id}/blocks | List Blocked Email Addresses.
*getMailBlocksASync* | *GET* /mail/{id}/blocks | List Blocked Email Addresses.
*getMailDelistSync* | *GET* /mail/{id}/delist | Get Delist Status.
*getMailDelistASync* | *GET* /mail/{id}/delist | Get Delist Status.
*getMailDeliverabilitySync* | *GET* /mail/{id}/deliverability | Get Deliverability Metrics.
*getMailDeliverabilityASync* | *GET* /mail/{id}/deliverability | Get Deliverability Metrics.
*getMailInfoSync* | *GET* /mail/{id} | Get Mail Order.
*getMailInfoASync* | *GET* /mail/{id} | Get Mail Order.
*getMailInvoicesSync* | *GET* /mail/{id}/invoices | Get Mail Invoices.
*getMailInvoicesASync* | *GET* /mail/{id}/invoices | Get Mail Invoices.
*getMailListSync* | *GET* /mail | List Mail Orders.
*getMailListASync* | *GET* /mail | List Mail Orders.
*getMailWelcomeEmailSync* | *GET* /mail/{id}/welcome_email | Resend Mail Welcome Email.
*getMailWelcomeEmailASync* | *GET* /mail/{id}/welcome_email | Resend Mail Welcome Email.
*getNewMailSync* | *GET* /mail/order | Get Mail Ordering Information.
*getNewMailASync* | *GET* /mail/order | Get Mail Ordering Information.
*getRulesSync* | *GET* /mail/{id}/rules | List Deny Rules.
*getRulesASync* | *GET* /mail/{id}/rules | List Deny Rules.
*getStatsSync* | *GET* /mail/{id}/stats | Get Mail Usage Statistics.
*getStatsASync* | *GET* /mail/{id}/stats | Get Mail Usage Statistics.
*mailCancelSync* | *DELETE* /mail/{id} | Cancel Mail.
*mailCancelASync* | *DELETE* /mail/{id} | Cancel Mail.
*postMailDelistSync* | *POST* /mail/{id}/delist | Delist a Blocked Sender.
*postMailDelistASync* | *POST* /mail/{id}/delist | Delist a Blocked Sender.
*putMailSync* | *PUT* /mail/order | Validate Mail Order.
*putMailASync* | *PUT* /mail/order | Validate Mail Order.
*resetMailPasswordSync* | *GET* /mail/{id}/reset_password | Reset Mail Password.
*resetMailPasswordASync* | *GET* /mail/{id}/reset_password | Reset Mail Password.
*sendAdvMailSync* | *POST* /mail/{id}/advsend | Send Email with Advanced Options.
*sendAdvMailASync* | *POST* /mail/{id}/advsend | Send Email with Advanced Options.
*sendMailSync* | *POST* /mail/{id}/send | Send Email.
*sendMailASync* | *POST* /mail/{id}/send | Send Email.
*updateMailAlertSync* | *PUT* /mail/{id}/alerts | Update Mail Alert.
*updateMailAlertASync* | *PUT* /mail/{id}/alerts | Update Mail Alert.
*updateMailInfoSync* | *POST* /mail/{id} | Update Mail Order.
*updateMailInfoASync* | *POST* /mail/{id} | Update Mail Order.
*viewMailLogSync* | *GET* /mail/{id}/log | View Mail Log.
*viewMailLogASync* | *GET* /mail/{id}/log | View Mail Log.


### PublicManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getCaptchaSync* | *GET* /captcha | Get Captcha Challenge.
*getCaptchaASync* | *GET* /captcha | Get Captcha Challenge.
*getCountriesSync* | *GET* /account/countries | Get Countries.
*getCountriesASync* | *GET* /account/countries | Get Countries.
*getInfoSync* | *GET* /info | Get Server Info.
*getInfoASync* | *GET* /info | Get Server Info.
*getLoginInfoSync* | *GET* /login | Get Login Info.
*getLoginInfoASync* | *GET* /login | Get Login Info.
*getMPServersSync* | *GET* /buy_now_servers_list | List Marketplace Servers.
*getMPServersASync* | *GET* /buy_now_servers_list | List Marketplace Servers.
*getOauthRedirectSync* | *GET* /oauth | Get OAuth Redirect URL.
*getOauthRedirectASync* | *GET* /oauth | Get OAuth Redirect URL.
*getTimezonesSync* | *GET* /account/timezones | Get Available Timezones.
*getTimezonesASync* | *GET* /account/timezones | Get Available Timezones.
*patchOauthTwoFactorSync* | *PATCH* /oauth | Complete OAuth Two-Factor Verification.
*patchOauthTwoFactorASync* | *PATCH* /oauth | Complete OAuth Two-Factor Verification.
*pingServerSync* | *GET* /ping | Ping Server.
*pingServerASync* | *GET* /ping | Ping Server.
*postOauthCallbackSync* | *POST* /oauth | OAuth Callback.
*postOauthCallbackASync* | *POST* /oauth | OAuth Callback.
*submitLoginSync* | *POST* /login | Submit Login Information.
*submitLoginASync* | *POST* /login | Submit Login Information.
*submitSignupSync* | *POST* /signup | Submit Signup Information.
*submitSignupASync* | *POST* /signup | Submit Signup Information.


### QuickServersManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addQsSync* | *POST* /qs/order | Place QuickServer Order.
*addQsASync* | *POST* /qs/order | Place QuickServer Order.
*deleteQsBackupSync* | *DELETE* /qs/{id}/backups | Delete QuickServer Backup.
*deleteQsBackupASync* | *DELETE* /qs/{id}/backups | Delete QuickServer Backup.
*doQsBlockSmtpSync* | *GET* /qs/{id}/block_smtp | Block QuickServer SMTP.
*doQsBlockSmtpASync* | *GET* /qs/{id}/block_smtp | Block QuickServer SMTP.
*doQsDisableCdSync* | *GET* /qs/{id}/disable_cd | Disable CD Drive.
*doQsDisableCdASync* | *GET* /qs/{id}/disable_cd | Disable CD Drive.
*doQsDisableQuotaSync* | *GET* /qs/{id}/disable_quota | Disable Quotas.
*doQsDisableQuotaASync* | *GET* /qs/{id}/disable_quota | Disable Quotas.
*doQsEjectCdSync* | *GET* /qs/{id}/eject_cd | Eject CD Drive.
*doQsEjectCdASync* | *GET* /qs/{id}/eject_cd | Eject CD Drive.
*doQsEnableQuotaSync* | *GET* /qs/{id}/enable_quota | Enable Quotas.
*doQsEnableQuotaASync* | *GET* /qs/{id}/enable_quota | Enable Quotas.
*doQsRestartSync* | *GET* /qs/{id}/restart | Restart QuickServer.
*doQsRestartASync* | *GET* /qs/{id}/restart | Restart QuickServer.
*doQsStartSync* | *GET* /qs/{id}/start | Start QuickServer.
*doQsStartASync* | *GET* /qs/{id}/start | Start QuickServer.
*doQsStopSync* | *GET* /qs/{id}/stop | Stop QuickServer.
*doQsStopASync* | *GET* /qs/{id}/stop | Stop QuickServer.
*downloadQsBackupSync* | *PATCH* /qs/{id}/backups | Download QuickServer Backup.
*downloadQsBackupASync* | *PATCH* /qs/{id}/backups | Download QuickServer Backup.
*getNewQsSync* | *GET* /qs/order | Get QuickServer Ordering Information.
*getNewQsASync* | *GET* /qs/order | Get QuickServer Ordering Information.
*getQsBackupsSync* | *GET* /qs/{id}/backups | List QuickServer Backups.
*getQsBackupsASync* | *GET* /qs/{id}/backups | List QuickServer Backups.
*getQsChangeHostnameSync* | *GET* /qs/{id}/change_hostname | Get QuickServer Hostname.
*getQsChangeHostnameASync* | *GET* /qs/{id}/change_hostname | Get QuickServer Hostname.
*getQsChangeRootPasswordSync* | *GET* /qs/{id}/change_root_password | Get Change Root Password Info.
*getQsChangeRootPasswordASync* | *GET* /qs/{id}/change_root_password | Get Change Root Password Info.
*getQsChangeTimezoneSync* | *GET* /qs/{id}/change_timezone | Get Timezone Info.
*getQsChangeTimezoneASync* | *GET* /qs/{id}/change_timezone | Get Timezone Info.
*getQsChangeWebuzoPasswordSync* | *GET* /qs/{id}/change_webuzo_password | Webuzo Change Pass Info.
*getQsChangeWebuzoPasswordASync* | *GET* /qs/{id}/change_webuzo_password | Webuzo Change Pass Info.
*getQsInfoSync* | *GET* /qs/{id} | Get QuickServer Order.
*getQsInfoASync* | *GET* /qs/{id} | Get QuickServer Order.
*getQsInsertCdSync* | *GET* /qs/{id}/insert_cd | Insert CD Information.
*getQsInsertCdASync* | *GET* /qs/{id}/insert_cd | Insert CD Information.
*getQsInvoicesSync* | *GET* /qs/{id}/invoices | Get QuickServer Invoices.
*getQsInvoicesASync* | *GET* /qs/{id}/invoices | Get QuickServer Invoices.
*getQsListSync* | *GET* /qs | List QuickServers.
*getQsListASync* | *GET* /qs | List QuickServers.
*getQsReinstallOsSync* | *GET* /qs/{id}/reinstall_os | QuickServer Reinstall OS Options.
*getQsReinstallOsASync* | *GET* /qs/{id}/reinstall_os | QuickServer Reinstall OS Options.
*getQsResetPasswordSync* | *GET* /qs/{id}/reset_password | Reset QuickServer Password Info.
*getQsResetPasswordASync* | *GET* /qs/{id}/reset_password | Reset QuickServer Password Info.
*getQsReverseDnsSync* | *GET* /qs/{id}/reverse_dns | Reverse DNS Info.
*getQsReverseDnsASync* | *GET* /qs/{id}/reverse_dns | Reverse DNS Info.
*getQsSetupVncSync* | *GET* /qs/{id}/setup_vnc | VNC Setup Info.
*getQsSetupVncASync* | *GET* /qs/{id}/setup_vnc | VNC Setup Info.
*getQsTrafficUsageSync* | *GET* /qs/{id}/traffic_usage | Get Traffic Usage.
*getQsTrafficUsageASync* | *GET* /qs/{id}/traffic_usage | Get Traffic Usage.
*getQsViewDesktopSync* | *GET* /qs/{id}/view_desktop | Get View Desktop Info.
*getQsViewDesktopASync* | *GET* /qs/{id}/view_desktop | Get View Desktop Info.
*getQsWelcomeEmailSync* | *GET* /qs/{id}/welcome_email | Resend QuickServer Welcome Email.
*getQsWelcomeEmailASync* | *GET* /qs/{id}/welcome_email | Resend QuickServer Welcome Email.
*postQsBackupSync* | *POST* /qs/{id}/backup | Create QuickServer Backup.
*postQsBackupASync* | *POST* /qs/{id}/backup | Create QuickServer Backup.
*postQsChangeHostnameSync* | *POST* /qs/{id}/change_hostname | Update QuickServer Hostname.
*postQsChangeHostnameASync* | *POST* /qs/{id}/change_hostname | Update QuickServer Hostname.
*postQsChangeRootPasswordSync* | *POST* /qs/{id}/change_root_password | Change Root Password.
*postQsChangeRootPasswordASync* | *POST* /qs/{id}/change_root_password | Change Root Password.
*postQsChangeTimezoneSync* | *POST* /qs/{id}/change_timezone | Change QuickServer Timezone.
*postQsChangeTimezoneASync* | *POST* /qs/{id}/change_timezone | Change QuickServer Timezone.
*postQsChangeWebuzoPasswordSync* | *POST* /qs/{id}/change_webuzo_password | Change Webuzo Password.
*postQsChangeWebuzoPasswordASync* | *POST* /qs/{id}/change_webuzo_password | Change Webuzo Password.
*postQsInsertCdSync* | *POST* /qs/{id}/insert_cd | Insert CD in QuickServer.
*postQsInsertCdASync* | *POST* /qs/{id}/insert_cd | Insert CD in QuickServer.
*postQsReinstallOsSync* | *POST* /qs/{id}/reinstall_os | Reinstall QuickServer OS.
*postQsReinstallOsASync* | *POST* /qs/{id}/reinstall_os | Reinstall QuickServer OS.
*postQsResetPasswordSync* | *POST* /qs/{id}/reset_password | Reset QuickServer Password.
*postQsResetPasswordASync* | *POST* /qs/{id}/reset_password | Reset QuickServer Password.
*postQsReverseDnsSync* | *POST* /qs/{id}/reverse_dns | Update Reverse DNS.
*postQsReverseDnsASync* | *POST* /qs/{id}/reverse_dns | Update Reverse DNS.
*postQsSetupVncSync* | *POST* /qs/{id}/setup_vnc | Setup VNC.
*postQsSetupVncASync* | *POST* /qs/{id}/setup_vnc | Setup VNC.
*postQsTrafficUsageSync* | *POST* /qs/{id}/traffic_usage | Search Traffic Usage.
*postQsTrafficUsageASync* | *POST* /qs/{id}/traffic_usage | Search Traffic Usage.
*postQsViewDesktopSync* | *POST* /qs/{id}/view_desktop | Update View Desktop.
*postQsViewDesktopASync* | *POST* /qs/{id}/view_desktop | Update View Desktop.
*postQuickServerRestoreSync* | *POST* /qs/{id}/restore | Restore QuickServer from Backup.
*postQuickServerRestoreASync* | *POST* /qs/{id}/restore | Restore QuickServer from Backup.
*putQsSync* | *PUT* /qs/order | Validate QuickServer Order.
*putQsASync* | *PUT* /qs/order | Validate QuickServer Order.
*quickserversCancelSync* | *DELETE* /qs/{id} | Cancel QuickServer Order.
*quickserversCancelASync* | *DELETE* /qs/{id} | Cancel QuickServer Order.
*updateQsInfoSync* | *POST* /qs/{id} | Update QuickServer Order.
*updateQsInfoASync* | *POST* /qs/{id} | Update QuickServer Order.


### SSLCertificatesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addSslSync* | *POST* /ssl/order | Place SSL Cert Order.
*addSslASync* | *POST* /ssl/order | Place SSL Cert Order.
*getNewSslSync* | *GET* /ssl/order | SSL Cert Ordering Information.
*getNewSslASync* | *GET* /ssl/order | SSL Cert Ordering Information.
*getSslInfoSync* | *GET* /ssl/{id} | Get SSL Cert Info.
*getSslInfoASync* | *GET* /ssl/{id} | Get SSL Cert Info.
*getSslInvoicesSync* | *GET* /ssl/{id}/invoices | Get SSL Cert Invoices.
*getSslInvoicesASync* | *GET* /ssl/{id}/invoices | Get SSL Cert Invoices.
*getSslListSync* | *GET* /ssl | List SSL Certs.
*getSslListASync* | *GET* /ssl | List SSL Certs.
*getSslWelcomeEmailSync* | *GET* /ssl/{id}/welcome_email | Resend SSL Welcome Email.
*getSslWelcomeEmailASync* | *GET* /ssl/{id}/welcome_email | Resend SSL Welcome Email.
*putSslSync* | *PUT* /ssl/order | Validate SSL Cert Order.
*putSslASync* | *PUT* /ssl/order | Validate SSL Cert Order.
*sslCancelSync* | *DELETE* /ssl/{id} | Cancel SSL Certificate Service.
*sslCancelASync* | *DELETE* /ssl/{id} | Cancel SSL Certificate Service.
*updateSslInfoSync* | *POST* /ssl/{id} | Update SSL Cert Order.
*updateSslInfoASync* | *POST* /ssl/{id} | Update SSL Cert Order.


### ScrubIpsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*cancelScrubIpSync* | *DELETE* /scrub_ips/{id} | Cancel Scrub IP Service.
*cancelScrubIpASync* | *DELETE* /scrub_ips/{id} | Cancel Scrub IP Service.
*createFilterSync* | *POST* /scrub_ips/{id}/create_filter | Create Traffic Filter.
*createFilterASync* | *POST* /scrub_ips/{id}/create_filter | Create Traffic Filter.
*createGeoRuleSync* | *POST* /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule.
*createGeoRuleASync* | *POST* /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule.
*createRuleSync* | *POST* /scrub_ips/{id}/create_rule | Create Firewall Rule.
*createRuleASync* | *POST* /scrub_ips/{id}/create_rule | Create Firewall Rule.
*deleteFilterSync* | *POST* /scrub_ips/{id}/delete_filter | Delete Traffic Filter.
*deleteFilterASync* | *POST* /scrub_ips/{id}/delete_filter | Delete Traffic Filter.
*disableScrubSync* | *GET* /scrub_ips/{id}/disable | Disable Scrub Protection.
*disableScrubASync* | *GET* /scrub_ips/{id}/disable | Disable Scrub Protection.
*enableScrubSync* | *GET* /scrub_ips/{id}/enable | Enable Scrub Protection.
*enableScrubASync* | *GET* /scrub_ips/{id}/enable | Enable Scrub Protection.
*getOrderDetailSync* | *GET* /scrub_ips/order | Get Scrub IP Ordering Information.
*getOrderDetailASync* | *GET* /scrub_ips/order | Get Scrub IP Ordering Information.
*getScrubIpDetailsSync* | *GET* /scrub_ips/{id} | Get Scrub IP Details.
*getScrubIpDetailsASync* | *GET* /scrub_ips/{id} | Get Scrub IP Details.
*getScrubIpFilterTypesSync* | *GET* /scrub_ips/filter_types | List Scrub Filter Types.
*getScrubIpFilterTypesASync* | *GET* /scrub_ips/filter_types | List Scrub Filter Types.
*getScrubIpInvoicesSync* | *GET* /scrub_ips/{id}/invoices | Get ScrubIp Invoices.
*getScrubIpInvoicesASync* | *GET* /scrub_ips/{id}/invoices | Get ScrubIp Invoices.
*getScrubIpLogsSync* | *GET* /scrub_ips/{id}/logs | Get Scrub IP Logs.
*getScrubIpLogsASync* | *GET* /scrub_ips/{id}/logs | Get Scrub IP Logs.
*getScrubIpsListSync* | *GET* /scrub_ips | List Scrub IP Services.
*getScrubIpsListASync* | *GET* /scrub_ips | List Scrub IP Services.
*placeScrubOrderSync* | *POST* /scrub_ips/order | Place Scrub IP Order.
*placeScrubOrderASync* | *POST* /scrub_ips/order | Place Scrub IP Order.
*scrubIpsDeleteGeoRuleSync* | *POST* /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule.
*scrubIpsDeleteGeoRuleASync* | *POST* /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule.
*scrubIpsDeleteRuleSync* | *POST* /scrub_ips/{id}/delete_rule | Delete Firewall Rule.
*scrubIpsDeleteRuleASync* | *POST* /scrub_ips/{id}/delete_rule | Delete Firewall Rule.


### ServersManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addServerSync* | *POST* /servers/order | Place Server Order.
*addServerASync* | *POST* /servers/order | Place Server Order.
*buyItNowServerOrderSync* | *GET* /servers/order/buy_now_server | Get Buy Now Server Options.
*buyItNowServerOrderASync* | *GET* /servers/order/buy_now_server | Get Buy Now Server Options.
*getMPServersSync* | *GET* /buy_now_servers_list | List Marketplace Servers.
*getMPServersASync* | *GET* /buy_now_servers_list | List Marketplace Servers.
*getNewServerSync* | *GET* /servers/order | Server Ordering Information.
*getNewServerASync* | *GET* /servers/order | Server Ordering Information.
*getServerInfoSync* | *GET* /servers/{id} | Get Server Order.
*getServerInfoASync* | *GET* /servers/{id} | Get Server Order.
*getServerInvoicesSync* | *GET* /servers/{id}/invoices | Get Server Invoices.
*getServerInvoicesASync* | *GET* /servers/{id}/invoices | Get Server Invoices.
*getServerListSync* | *GET* /servers | List Servers.
*getServerListASync* | *GET* /servers | List Servers.
*getServerReverseDnsSync* | *GET* /servers/{id}/reverse_dns | Reverse DNS Info.
*getServerReverseDnsASync* | *GET* /servers/{id}/reverse_dns | Reverse DNS Info.
*getServersWelcomeEmailSync* | *GET* /servers/{id}/welcome_email | Resend Server Welcome Email.
*getServersWelcomeEmailASync* | *GET* /servers/{id}/welcome_email | Resend Server Welcome Email.
*placeBuyNowServerSync* | *POST* /servers/order/buy_now_server | Place Buy Now Server Order.
*placeBuyNowServerASync* | *POST* /servers/order/buy_now_server | Place Buy Now Server Order.
*postServerReverseDnsSync* | *POST* /servers/{id}/reverse_dns | Update Reverse DNS.
*postServerReverseDnsASync* | *POST* /servers/{id}/reverse_dns | Update Reverse DNS.
*putServersSync* | *PUT* /servers/order | Validate Server Order.
*putServersASync* | *PUT* /servers/order | Validate Server Order.
*serverIpmiLiveGetSync* | *GET* /servers/{id}/ipmi_live | Server IPMI Live Information.
*serverIpmiLiveGetASync* | *GET* /servers/{id}/ipmi_live | Server IPMI Live Information.
*serverIpmiLivePostSync* | *POST* /servers/{id}/ipmi_live | Server IPMI Live Setup.
*serverIpmiLivePostASync* | *POST* /servers/{id}/ipmi_live | Server IPMI Live Setup.
*serverIpmiPowerGetSync* | *GET* /servers/{id}/ipmi_power | Get IPMI Power Status.
*serverIpmiPowerGetASync* | *GET* /servers/{id}/ipmi_power | Get IPMI Power Status.
*serverIpmiPowerPostSync* | *POST* /servers/{id}/ipmi_power | Server IPMI Power.
*serverIpmiPowerPostASync* | *POST* /servers/{id}/ipmi_power | Server IPMI Power.
*serversCancelSync* | *DELETE* /servers/{id} | Cancel Server Service.
*serversCancelASync* | *DELETE* /servers/{id} | Cancel Server Service.
*updateServerInfoSync* | *POST* /servers/{id} | Update Server Order.
*updateServerInfoASync* | *POST* /servers/{id} | Update Server Order.


### TicketsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addNewTicketSync* | *POST* /tickets/new | Create New Ticket.
*addNewTicketASync* | *POST* /tickets/new | Create New Ticket.
*closeTicketSync* | *GET* /tickets/{id}/close | Close Ticket.
*closeTicketASync* | *GET* /tickets/{id}/close | Close Ticket.
*deleteTicketInfoSync* | *DELETE* /tickets/{id} | Close Ticket.
*deleteTicketInfoASync* | *DELETE* /tickets/{id} | Close Ticket.
*getNewTicketSync* | *GET* /tickets/new | Gets Information for creating a new ticket..
*getNewTicketASync* | *GET* /tickets/new | Gets Information for creating a new ticket..
*getTicketInfoSync* | *GET* /tickets/{id} | Get Ticket Information.
*getTicketInfoASync* | *GET* /tickets/{id} | Get Ticket Information.
*getTicketsListSync* | *GET* /tickets | List Support Tickets.
*getTicketsListASync* | *GET* /tickets | List Support Tickets.
*postTicketInfoSync* | *POST* /tickets/{id} | Reply To Ticket.
*postTicketInfoASync* | *POST* /tickets/{id} | Reply To Ticket.
*postTicketsListSync* | *POST* /tickets | Search Support Tickets.
*postTicketsListASync* | *POST* /tickets | Search Support Tickets.
*putTicketInfoSync* | *PUT* /tickets/{id} | Update Ticket.
*putTicketInfoASync* | *PUT* /tickets/{id} | Update Ticket.
*replyTicketSync* | *POST* /tickets/{id}/reply | Reply Ticket.
*replyTicketASync* | *POST* /tickets/{id}/reply | Reply Ticket.
*updateTicketInfoSync* | *POST* /tickets/{id}/update | Update Ticket.
*updateTicketInfoASync* | *POST* /tickets/{id}/update | Update Ticket.


### VPSManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addVpsSync* | *POST* /vps/order | Place VPS Order.
*addVpsASync* | *POST* /vps/order | Place VPS Order.
*deleteVpsBackupSync* | *DELETE* /vps/{id}/backups | Delete VPS Backup.
*deleteVpsBackupASync* | *DELETE* /vps/{id}/backups | Delete VPS Backup.
*doVpsBlockSmtpSync* | *GET* /vps/{id}/block_smtp | Blocks SMTP.
*doVpsBlockSmtpASync* | *GET* /vps/{id}/block_smtp | Blocks SMTP.
*doVpsDisableCdSync* | *GET* /vps/{id}/disable_cd | Disable CD Drive.
*doVpsDisableCdASync* | *GET* /vps/{id}/disable_cd | Disable CD Drive.
*doVpsDisableQuotaSync* | *GET* /vps/{id}/disable_quota | Disable Quotas.
*doVpsDisableQuotaASync* | *GET* /vps/{id}/disable_quota | Disable Quotas.
*doVpsEjectCdSync* | *GET* /vps/{id}/eject_cd | Eject CD Drive.
*doVpsEjectCdASync* | *GET* /vps/{id}/eject_cd | Eject CD Drive.
*doVpsEnableQuotaSync* | *GET* /vps/{id}/enable_quota | Enable Quotas.
*doVpsEnableQuotaASync* | *GET* /vps/{id}/enable_quota | Enable Quotas.
*doVpsRestartSync* | *GET* /vps/{id}/restart | Restart VPS.
*doVpsRestartASync* | *GET* /vps/{id}/restart | Restart VPS.
*doVpsStartSync* | *GET* /vps/{id}/start | Start VPS.
*doVpsStartASync* | *GET* /vps/{id}/start | Start VPS.
*doVpsStopSync* | *GET* /vps/{id}/stop | Stop VPS.
*doVpsStopASync* | *GET* /vps/{id}/stop | Stop VPS.
*downloadVpsBackupSync* | *PATCH* /vps/{id}/backups | Download VPS Backup.
*downloadVpsBackupASync* | *PATCH* /vps/{id}/backups | Download VPS Backup.
*getNewVpsSync* | *GET* /vps/order | VPS Ordering Information.
*getNewVpsASync* | *GET* /vps/order | VPS Ordering Information.
*getVpsBackupsSync* | *GET* /vps/{id}/backups | Get VPS Backups List.
*getVpsBackupsASync* | *GET* /vps/{id}/backups | Get VPS Backups List.
*getVpsBuyHdSpaceSync* | *GET* /vps/{id}/buy_hd_space | HD Space Addon Info.
*getVpsBuyHdSpaceASync* | *GET* /vps/{id}/buy_hd_space | HD Space Addon Info.
*getVpsBuyIpSync* | *GET* /vps/{id}/buy_ip | Additional IP Addon Info.
*getVpsBuyIpASync* | *GET* /vps/{id}/buy_ip | Additional IP Addon Info.
*getVpsChangeTimezoneSync* | *GET* /vps/{id}/change_timezone | Get Timezone Info.
*getVpsChangeTimezoneASync* | *GET* /vps/{id}/change_timezone | Get Timezone Info.
*getVpsInfoSync* | *GET* /vps/{id} | Get VPS Order.
*getVpsInfoASync* | *GET* /vps/{id} | Get VPS Order.
*getVpsInvoicesSync* | *GET* /vps/{id}/invoices | Get VPS Invoices.
*getVpsInvoicesASync* | *GET* /vps/{id}/invoices | Get VPS Invoices.
*getVpsListSync* | *GET* /vps | List VPS Orders.
*getVpsListASync* | *GET* /vps | List VPS Orders.
*getVpsReinstallOsSync* | *GET* /vps/{id}/reinstall_os | VPS Reinstall OS Options.
*getVpsReinstallOsASync* | *GET* /vps/{id}/reinstall_os | VPS Reinstall OS Options.
*getVpsReverseDnsSync* | *GET* /vps/{id}/reverse_dns | Reverse DNS Info.
*getVpsReverseDnsASync* | *GET* /vps/{id}/reverse_dns | Reverse DNS Info.
*getVpsSetupVncSync* | *GET* /vps/{id}/setup_vnc | VNC Setup Info.
*getVpsSetupVncASync* | *GET* /vps/{id}/setup_vnc | VNC Setup Info.
*getVpsSlicesSync* | *GET* /vps/{id}/slices | Slice Upgrade Info.
*getVpsSlicesASync* | *GET* /vps/{id}/slices | Slice Upgrade Info.
*getVpsTrafficUsageSync* | *GET* /vps/{id}/traffic_usage | Get Traffic Usage.
*getVpsTrafficUsageASync* | *GET* /vps/{id}/traffic_usage | Get Traffic Usage.
*getVpsViewDesktopSync* | *GET* /vps/{id}/view_desktop | Get View Desktop Info.
*getVpsViewDesktopASync* | *GET* /vps/{id}/view_desktop | Get View Desktop Info.
*getVpsWelcomeEmailSync* | *GET* /vps/{id}/welcome_email | Resend VPS Welcome Email.
*getVpsWelcomeEmailASync* | *GET* /vps/{id}/welcome_email | Resend VPS Welcome Email.
*postVpsBackupSync* | *GET* /vps/{id}/backup | Start a VPS Backup.
*postVpsBackupASync* | *GET* /vps/{id}/backup | Start a VPS Backup.
*postVpsBuyHdSpaceSync* | *POST* /vps/{id}/buy_hd_space | Purchase HD Space Addon.
*postVpsBuyHdSpaceASync* | *POST* /vps/{id}/buy_hd_space | Purchase HD Space Addon.
*postVpsBuyIpSync* | *POST* /vps/{id}/buy_ip | Purchase Additional IP.
*postVpsBuyIpASync* | *POST* /vps/{id}/buy_ip | Purchase Additional IP.
*postVpsChangeHostnameSync* | *POST* /vps/{id}/change_hostname | Update VPS Hostname.
*postVpsChangeHostnameASync* | *POST* /vps/{id}/change_hostname | Update VPS Hostname.
*postVpsChangeRootPasswordSync* | *POST* /vps/{id}/change_root_password | Change VPS Root Password.
*postVpsChangeRootPasswordASync* | *POST* /vps/{id}/change_root_password | Change VPS Root Password.
*postVpsChangeTimezoneSync* | *POST* /vps/{id}/change_timezone | Change VPS Timezone.
*postVpsChangeTimezoneASync* | *POST* /vps/{id}/change_timezone | Change VPS Timezone.
*postVpsChangeWebuzoPasswordSync* | *POST* /vps/{id}/change_webuzo_password | Change Webuzo Password.
*postVpsChangeWebuzoPasswordASync* | *POST* /vps/{id}/change_webuzo_password | Change Webuzo Password.
*postVpsInsertCdSync* | *POST* /vps/{id}/insert_cd | Insert CD in VPS.
*postVpsInsertCdASync* | *POST* /vps/{id}/insert_cd | Insert CD in VPS.
*postVpsReinstallOsSync* | *POST* /vps/{id}/reinstall_os | Reinstall VPS OS.
*postVpsReinstallOsASync* | *POST* /vps/{id}/reinstall_os | Reinstall VPS OS.
*postVpsResetPasswordSync* | *POST* /vps/{id}/reset_password | Reset VPS Password.
*postVpsResetPasswordASync* | *POST* /vps/{id}/reset_password | Reset VPS Password.
*postVpsRestoreSync* | *POST* /vps/{id}/restore | Restore VPS from Backup.
*postVpsRestoreASync* | *POST* /vps/{id}/restore | Restore VPS from Backup.
*postVpsReverseDnsSync* | *POST* /vps/{id}/reverse_dns | Update Reverse DNS.
*postVpsReverseDnsASync* | *POST* /vps/{id}/reverse_dns | Update Reverse DNS.
*postVpsSetupVncSync* | *POST* /vps/{id}/setup_vnc | Setup VNC.
*postVpsSetupVncASync* | *POST* /vps/{id}/setup_vnc | Setup VNC.
*postVpsSlicesSync* | *POST* /vps/{id}/slices | Purchase Slice Upgrade.
*postVpsSlicesASync* | *POST* /vps/{id}/slices | Purchase Slice Upgrade.
*postVpsViewDesktopSync* | *POST* /vps/{id}/view_desktop | Update View Desktop.
*postVpsViewDesktopASync* | *POST* /vps/{id}/view_desktop | Update View Desktop.
*putVpsSync* | *PUT* /vps/order | Validate VPS Order.
*putVpsASync* | *PUT* /vps/order | Validate VPS Order.
*updateVpsInfoSync* | *POST* /vps/{id} | Update VPS Order.
*updateVpsInfoASync* | *POST* /vps/{id} | Update VPS Order.
*vPSCancelSync* | *DELETE* /vps/{id} | Cancel VPS Service.
*vPSCancelASync* | *DELETE* /vps/{id} | Cancel VPS Service.


### WebhostingManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addWebsiteSync* | *POST* /websites/order | Place Website Order.
*addWebsiteASync* | *POST* /websites/order | Place Website Order.
*getNewWebsiteSync* | *GET* /websites/order | Website Ordering Information.
*getNewWebsiteASync* | *GET* /websites/order | Website Ordering Information.
*getWebsiteBuyIpSync* | *GET* /websites/{id}/buy_ip | Get Website IP Information.
*getWebsiteBuyIpASync* | *GET* /websites/{id}/buy_ip | Get Website IP Information.
*getWebsiteInfoSync* | *GET* /websites/{id} | Get Website Order.
*getWebsiteInfoASync* | *GET* /websites/{id} | Get Website Order.
*getWebsiteInvoicesSync* | *GET* /websites/{id}/invoices | Get Website Invoices.
*getWebsiteInvoicesASync* | *GET* /websites/{id}/invoices | Get Website Invoices.
*getWebsiteListSync* | *GET* /websites | Get Website Listing.
*getWebsiteListASync* | *GET* /websites | Get Website Listing.
*getWebsitesBackupsSync* | *GET* /websites/{id}/backups | Get Website Backups.
*getWebsitesBackupsASync* | *GET* /websites/{id}/backups | Get Website Backups.
*getWebsitesLoginSync* | *GET* /websites/{id}/login | Hosting Panel Auto Login.
*getWebsitesLoginASync* | *GET* /websites/{id}/login | Hosting Panel Auto Login.
*getWebsitesWelcomeEmailSync* | *GET* /websites/{id}/welcome_email | Resend Website Welcome Email.
*getWebsitesWelcomeEmailASync* | *GET* /websites/{id}/welcome_email | Resend Website Welcome Email.
*gettWebsiteReverseDnsSync* | *GET* /websites/{id}/reverse_dns | Get Website Reverse DNS.
*gettWebsiteReverseDnsASync* | *GET* /websites/{id}/reverse_dns | Get Website Reverse DNS.
*postWebsiteBuyIpSync* | *POST* /websites/{id}/buy_ip | Update Website IP DNS.
*postWebsiteBuyIpASync* | *POST* /websites/{id}/buy_ip | Update Website IP DNS.
*postWebsiteMigrationSync* | *POST* /websites/{id}/migration | Request Website Migration.
*postWebsiteMigrationASync* | *POST* /websites/{id}/migration | Request Website Migration.
*postWebsitesReverseDnsSync* | *POST* /websites/{id}/reverse_dns | Update Website Reverse DNS.
*postWebsitesReverseDnsASync* | *POST* /websites/{id}/reverse_dns | Update Website Reverse DNS.
*putWebsitesSync* | *PUT* /websites/order | Validate Webhosting Order.
*putWebsitesASync* | *PUT* /websites/order | Validate Webhosting Order.
*updateWebsiteInfoSync* | *POST* /websites/{id} | Update Website Order.
*updateWebsiteInfoASync* | *POST* /websites/{id} | Update Website Order.
*webhostingCancelSync* | *DELETE* /websites/{id} | Cancel Website.
*webhostingCancelASync* | *DELETE* /websites/{id} | Cancel Website.


## What are the Model files for the data structures/objects?
Class | Description
------------- | -------------
 *AccountFeatures* | Account Features data.
 *AccountInfo* | Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 *AccountInfoCountryCurrencies* | Maps country codes to their available currency options.
 *AccountInfoData* | Detailed account profile data including contact info, billing, API keys, and security settings.
 *AccountInfoDataCc* | Credit card information stored on the account.
 *AccountInfoDataCcs* | Collection of credit cards on the account, keyed by card ID.
 *AccountInfoData_email_settings* | 
 *AccountInfoData_extra* | 
 *AccountInfoData_fraudrecord* | 
 *AccountInfoLimits* | IP address ranges used to restrict account access to specific IPs.
 *AccountInfoLimits_inner* | 
 *AccountInfoMaxMindResponse* | MaxMind fraud detection scoring data for a credit card transaction.
 *AccountInfoMaxMindResponse_riskScore* | 
 *AccountInfoOauthConfig* | OAuth integration configuration including callback URL and available providers.
 *AccountInfoOauthConfigProviders* | Map of OAuth providers and their linked status on the account.
 *AccountInfoOauthConfigProviders_value* | 
 *AccountInfoPost* | Request to update account information.
 *AccountInfo_oauthproviders* | 
 *AccountSshKey* | SSH Keys
 *AddServer_200_response* | 
 *AffiliateBannerRow* | An affiliate banner image details.
 *AffiliateDockSetup* | Affiliate Landing Page information.
 *AffiliatePaymentSetup* | Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
 *AffiliateTrafficRow* | Affiliate Web Traffic Entry
 *AssetServer* | A pre-configured asset server available for immediate provisioning.
 *AssetServer_CPU_inner* | 
 *Backup* | Full detail view of a backup service including billing, service info, and configuration.
 *BackupBillingDetails* | 
 *BackupClientLink* | A navigation link for backup service actions in the client portal.
 *BackupExtraInfoTables* | Supplementary information tables for a backup service (IP info, etc.).
 *BackupIPInfo* | IP address information table for a backup service.
 *BackupIPInfoRow* | A single row in the backup IP information table.
 *BackupLoginResponse* | Login session response for backup storage.
 *BackupOrderPostResponse* | Backup Order Placement Response
 *BackupOrderPostResponse_cj_params* | 
 *BackupOrderPutRequest* | Parameters to submit to validate your backup order
 *BackupOrderPutResponse* | Backup Order validation response
 *BackupRow* | A result row from the `Backups` `GET` request.
 *BackupServiceInfo* | Core service record for a backup storage service including ID, status, quota, and billing details.
 *BackupServiceMaster* | 
 *BackupsOrder* | Available backup storage packages and pricing for ordering a new backup service.
 *BackupsOrderPackageCosts* | 
 *BackupsOrderServiceTypes* | 
 *BackupsOrder_serviceTypes* | 
 *Bandwidth* | A bandwidth option available for a dedicated server configuration.
 *BillingAddCcRequest* | Request to add a new creditcard into the system.
 *BillingInvoiceDetail* | Detailed invoice data payload returned for a single invoice.
 *BillingInvoiceList* | Summary list of invoices for the account.
 *BillingPaymentMethodRequest* | Payload for updating the default account payment method.
 *BillingPrepayRequest* | Request payload for creating a new prepay balance.
 *BillingVerifyCcRequest* | Payload for verifying a credit card through the verification flow.
 *BuyItNowList* | Marketplace buy it now servers list
 *BuyItNowRow* | A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 *BuyItNowRow_cpu_inner* | 
 *BuyItNowRow_cpu_inner_oneOf* | 
 *BuyItNowServerOrder_200_response* | 
 *BuyItNowServerOrder_200_response_bandwidth_inner* | 
 *BuyItNowServerOrder_200_response_cp_inner* | 
 *BuyItNowServerOrder_200_response_ips_inner* | 
 *BuyItNowServerOrder_200_response_os_inner* | 
 *BuyItNowServerOrder_200_response_raid_inner* | 
 *CancelBackup_200_response* | 
 *CancelDomain_200_response* | 
 *CancelScrubIp_200_response* | 
 *CaptchaResponse* | A base-64 encoded captcha image.
 *ChargeInvoiceRows* | Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 *ChargeInvoiceRows_invoices_value* | 
 *ChargeInvoiceRows_invoices_value_paid_invoices_value* | 
 *ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value* | 
 *CloseTicketResponseSchema* | 
 *ConfigIds* | Internal configuration IDs mapped from the selected form values for a server order.
 *ConfigLists* | All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 *ControlPanel* | A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 *Cpu* | A CPU option available for dedicated server ordering.
 *CpuWithDefaults* | 
 *CreateFilter* | Create firewall rule for your ip
 *CreateFilter_201_response* | 
 *CreateFilter_400_response* | 
 *CreateFilter_500_response* | 
 *CreateFirewallRule* | Create firewall rule for your ip
 *CreateGeoFirewallRule* | Create firewall rule for your ip
 *CreateGeoRule_400_response* | 
 *CreateRule_201_response* | 
 *CreateRule_400_response* | 
 *CreateRule_500_response* | 
 *DeleteFilter_200_response* | 
 *DeleteFilter_400_response* | 
 *DeleteFilter_500_response* | 
 *Delete_Firewall_Rule* | Delete firewall rule for your ip
 *Delete_Geo_Firewall_Rule* | Delete geo firewall rule for your scrub ip
 *DenyRuleNew* | The data for a email deny rule record.
 *DenyRuleRecord* | The data for a email deny rule record.
 *DisableScrub_200_response* | 
 *DisableScrub_400_response* | 
 *DisableScrub_500_response* | 
 *DnsListItem* | A DNS zone entry with its ID, domain name, and record content.
 *DnsNewDomain* | The request for a new domain to be managed by the dns servers.
 *DnsNewRecord* | Request data for a new DNS record.
 *DnsRecord* | A single DNS Record row for a Domain
 *DnsRecordType* | Type of DNS Record
 *DnsUpdateRecord* | The request data to update a dns record.
 *Domain* | Full detail view of a domain service including billing, contacts, DNS, and configuration.
 *DomainAdminContact* | Administrative contact information for a domain registration.
 *DomainAllInfo* | Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 *DomainAllInfo_attributes* | 
 *DomainAllInfo_attributes_contact_set* | 
 *DomainBillingDetails* | Billing information for a domain service including payment status, dates, and cost.
 *DomainBillingExtra* | Extended billing context for a domain including registrar order details and contact info.
 *DomainClientLink* | Links and labels for domain-related UI actions.
 *DomainContactDetails* | Contact details used for domain registrant/admin/technical/billing records.
 *DomainDnssecRecords* | DNSSEC DS records currently configured for a domain.
 *DomainDnssecRecords_inner* | 
 *DomainDnssecRequest* | Request payload for adding DNSSEC DS records to a domain.
 *DomainLookupResponse* | Availability, pricing, and order-field metadata for a domain lookup.
 *DomainNameServer* | A single registered nameserver entry with glue IPs.
 *DomainNameserverGetResponse* | List of registered nameserver hosts with glue record metadata.
 *DomainNameserverGetResponse_inner* | 
 *DomainNameserverPostRequest* | Payload for adding a registered nameserver (glue record).
 *DomainNameserverPutRequest* | Payload for replacing the assigned nameserver list for a domain.
 *DomainOrder* | Ordering metadata for domain registration and transfers.
 *DomainOrderResponse* | Registrar response metadata returned after a domain order.
 *DomainOrderResponse_attributes* | 
 *DomainOrderServices10001* | Example schema for a domain service catalog entry.
 *DomainOrderTldServices* | Example map of TLDs to service IDs for domain ordering.
 *DomainOrder_services* | Available domain service catalog entries keyed by service ID.
 *DomainOwnerContact* | Contact details for the registered domain owner.
 *DomainProvProcessPending* | Provisioning status data for a pending domain order.
 *DomainProvProcessPending_attributes* | 
 *DomainRow* | A result row from the `Domains` `GET` request.
 *DomainSearchResponse* | Lookup and suggestion results returned for a domain search.
 *DomainServiceInfo* | Detailed domain service record for a domain order.
 *DomainServiceType* | Service type definition for a domain registration, including name, pricing, and category.
 *DomainTechContact* | Technical contact information for a domain registration.
 *DomainWhoisPrivacyRequest* | Request payload for enabling or disabling Whois privacy.
 *DownloadQsBackup_200_response* | 
 *DownloadQsBackup_request* | 
 *EmailAddress* | an email address
 *EmailAddressName* | An email contact.
 *EnableScrub_200_response* | 
 *EnableScrub_500_response* | 
 *FieldLabel* | A display label for a server order form field.
 *Floating_ipsCancel_200_response* | 
 *FormValues* | Currently selected configuration option IDs for a server order form.
 *GenericResponse* | Generic Response
 *GetAccountInfo_401_response* | 
 *GetAccountTfaSetup_200_response* | 
 *GetOauthRedirect_200_response* | 
 *GetOrderDetail_200_response* | 
 *GetOrderDetail_200_response_ips_inner* | 
 *GetOrderDetail_200_response_packageCosts* | 
 *GetOrderDetail_200_response_serviceTypes_inner* | 
 *GetScrubIpDetails_200_response* | 
 *GetScrubIpDetails_200_response_billingDetails* | 
 *GetScrubIpDetails_200_response_client_links_inner* | 
 *GetScrubIpDetails_200_response_extraInfoTables* | 
 *GetScrubIpDetails_200_response_extraInfoTables_scrub_ips* | 
 *GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner* | 
 *GetScrubIpDetails_200_response_filter_firewall* | 
 *GetScrubIpDetails_200_response_filter_firewall_filters_inner* | 
 *GetScrubIpDetails_200_response_filter_firewall_rules_inner* | 
 *GetScrubIpDetails_200_response_serviceInfo* | 
 *GetWebsiteBuyIp_200_response* | 
 *HardDrive* | A hard drive option available for a dedicated server configuration.
 *Home* | 
 *HomeDetailsModulesBackups* | Dashboard module configuration for backup storage services.
 *HomeDetailsModulesDomains* | Dashboard module configuration for domain registration services.
 *HomeDetailsModulesLicenses* | Dashboard module configuration for software license services.
 *HomeDetailsModulesQuickservers* | Dashboard module configuration for QuickServer services.
 *HomeDetailsModulesServers* | Dashboard module configuration for dedicated server services.
 *HomeDetailsModulesVps* | Dashboard module configuration for VPS services.
 *HomeDetailsModulesWebhosting* | Dashboard module configuration for webhosting services.
 *HomeServicesDomainsLinks* | Map of domain service IDs to their hostnames for the account dashboard.
 *HomeServicesLicensesLinks* | Map of license service IDs to their IP addresses for the account dashboard.
 *HomeServicesServersLinks* | Map of dedicated server service IDs to their hostnames for the account dashboard.
 *HomeServicesVpsLinks* | Map of VPS service IDs to their hostnames for the account dashboard.
 *HomeServicesWebhostingLinks* | Map of webhosting service IDs to their hostnames for the account dashboard.
 *Home_details* | Users details.
 *Home_details_modules* | 
 *Home_services* | Users services.
 *Home_services_backups* | 
 *Home_services_domains* | 
 *Home_services_licenses* | 
 *Home_services_servers* | 
 *Home_services_vps* | 
 *Home_services_webhosting* | 
 *Home_ticketStatus* | Ticket statuses.
 *Home_ticketStatusView* | Ticket statuses with view numbers.
 *HostnameObject* | Request specifying the hostname.
 *InitiatePayment_200_response* | 
 *Inline_object* | 
 *Invoice* | An invoice record
 *InvoiceRow* | 
 *IpBlock* | An IP address block option available for a dedicated server configuration.
 *IpLimitRange* | The lower and upper bounds of an ip range.
 *IpObject* | IP Address
 *License* | 
 *LicenseBillingDetails* | Billing information for a software license including payment status, billing cycle, and cost.
 *LicenseClientLink* | 
 *LicenseIpInfo* | IP address information table for a software license service.
 *LicenseIpInfoRow* | A single row in the license IP information table.
 *LicenseRow* | A result row from the `Licenses` `GET` request.
 *LicenseServiceInfo* | 
 *LicenseServiceType* | Service type definition for a software license, including name, pricing, and category.
 *License_extraInfoTables* | 
 *LicensesCancel_200_response* | 
 *LicensesOrder* | Available license packages and pricing for ordering a new software license.
 *LicensesOrderServiceCategories509* | 
 *LicensesOrderServiceTypes11482* | 
 *LicensesOrder_packageCosts* | Costs of license packages
 *LicensesOrder_serviceCategories* | License service categories
 *LicensesOrder_serviceTypes* | Types of license services
 *LoginErrorResponse* | Error resposne during login indicating further action.
 *LoginInfo* | Basic information useful for rendering a login page.
 *LoginServiceCounts* | Order counts per module.
 *LoginSubmissionExample* | The data to submit in the login request.
 *LoginSubmissionExample_g_recaptcha_response* | 
 *LoginSubmissionExample_g_recaptcha_response_dep* | 
 *LoginSuccessResponse* | The response from a successful login.
 *MailAlertRequest* | Payload for creating a mail alert.
 *MailAlertUpdateRequest* | Payload for updating an existing mail alert.
 *MailAlertsResponse* | Alert configuration entries for a mail service.
 *MailAlertsResponse_inner* | 
 *MailAttachment* | (optional) File attachments to include in the email.  The file contents must be base64
 *MailBillingDetails* | Billing information for a mail service including payment status, billing cycle, and cost.
 *MailBlockClickHouse* | A block entry from the clickhouse mailblocks server.
 *MailBlockRspamd* | This is a block entry from the rspamd block list.
 *MailBlocks* | The listing of blocked emails.
 *MailCancel_200_response* | 
 *MailClientLink* | A navigation link for mail service actions in the client portal.
 *MailDelistRequest* | Payload for removing a sender from mail blocklists.
 *MailDelistResponse* | Blocklist status information for a mail service.
 *MailDeliverabilityResponse* | Deliverability statistics for a mail service.
 *MailExtraInfoTable* | A supplementary information table for a mail service (e.g., connection details).
 *MailExtraInfoTableRow* | A single row in the mail service supplementary information table.
 *MailLog* | Paginated mail log response.  Contains the full matched count (`total`) plus a page of `MailLogEntry` records.  The `total` reflects the grouping mode: with `groupby=recipient` it counts delivery attempts, with `groupby=message` it counts unique messages.
 *MailLogEntry* | A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.
 *MailOrder* | A mail order record
 *MailRow* | A result row from the `Mail` `GET` request.
 *MailSchema* | 
 *MailSchema_extraInfoTables* | Additional information tables for the mail service.
 *MailServiceInfo* | 
 *MailServiceType* | Service type definition for a mail service, including name, pricing, and category.
 *MailStatsType* | Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 *MailStatsType_volume* | 
 *MailStatsType_volume_from* | 
 *MailStatsType_volume_ip* | 
 *MailStatsType_volume_to* | 
 *MailTutorialsTable* | A table of tutorial links displayed for a mail service.
 *MailTutorialsTableRow* | A single tutorial entry with a label and URL.
 *MemoryOption* | A memory (RAM) upgrade option available for a dedicated server configuration.
 *ModuleSettings* | The settings for a module.
 *Modules* | The modules and settings.
 *MonthlyCounts* | A map of month labels (e.g., \"2024-01\") to counts for a specific mail status.
 *OperatingSystem* | An operating system option available for server provisioning.
 *PasswordRequest* | Request containing a password
 *PatchOauthTwoFactor_200_response* | 
 *PatchOauthTwoFactor_request* | 
 *PaymentInvoiceRows* | 
 *PlaceBuyNowServer_request* | 
 *PlaceScrubOrder_201_response* | 
 *PlaceScrubOrder_201_response_order_details* | 
 *PlaceScrubOrder_201_response_order_details_cj_params* | 
 *PostOauthCallback_200_response* | 
 *PostOauthCallback_request* | 
 *PostWebsiteBuyIp_200_response* | 
 *PostWebsiteBuyIp_request* | 
 *PostWebsiteMigration_200_response* | 
 *PostWebsiteMigration_request* | 
 *QueueResponse* | Response after sending an action queue to a service.
 *Quickserver* | 
 *QuickserverAddons* | 
 *QuickserverAddonsRow* | A single add-on item associated with a QuickServer service.
 *QuickserverBillingDetails* | Billing information for a QuickServer service including payment status, billing cycle, and cost.
 *QuickserverClientLink* | A navigation link for QuickServer-related actions in the client portal.
 *QuickserverIpInfo* | IP address information table for a QuickServer service.
 *QuickserverIpTableRow* | A single row in the QuickServer IP information table.
 *QuickserverOrder* | Available QuickServer options and OS templates for ordering a new QuickServer.
 *QuickserverOrderDistroSelUbuntu* | 
 *QuickserverOrderServerDetails381* | 
 *QuickserverOrderTemplatesUbuntu64* | Ubuntu template details.
 *QuickserverOrderVersionCentosstream8* | 
 *QuickserverOrder_distro_sel* | Distribution selection.
 *QuickserverOrder_server_details* | Server details.
 *QuickserverOrder_templates* | Templates details.
 *QuickserverOrder_version* | Version details.
 *QuickserverRow* | A result row from the `Quickservers` `GET` request.
 *QuickserverServiceExtra* | 
 *QuickserverServiceInfo* | Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 *QuickserverServiceMaster* | Information about the host node running this QuickServer, including hardware specs and resource utilization.
 *Quickserver_extraInfoTables* | 
 *Quickserver_serviceExtra* | 
 *QuickserversCancel_200_response* | 
 *RaidOption* | A RAID configuration option available for a dedicated server.
 *Region* | A datacenter region where a server can be provisioned.
 *ReplyTicketRequest* | Post reply to your ticket
 *ReplyTicketResponseSchema* | 
 *RestoreRequest* | Request data to trigger a restore from backup.
 *ReverseDnsEntries* | The Reverse DNS entries.
 *ScrubIpFilterTypes* | Available scrub filter types for building firewall rules.
 *ScrubIpFilterTypes_filters_value* | 
 *ScrubIpPlaceOrder* | Place ScrubIP Order
 *ScrubIpsDeleteRule_200_response* | 
 *ScrubIpsDeleteRule_400_response* | 
 *ScrubIpsDeleteRule_500_response* | 
 *ScrubIpsLogRowSchema* | 
 *ScrubIpsRowSchema* | 
 *SearchAutocompleteResponse* | Autocomplete search results for the authenticated account.
 *SendMail* | Details for an Email
 *SendMailAdv* | Details for an Email
 *Server* | 
 *ServerAsset* | 
 *ServerAssets* | 
 *ServerBillingDetails* | Billing information for a dedicated server service including payment status, billing cycle, and cost.
 *ServerClientLink* | 
 *ServerExtraInfoTables* | 
 *ServerIpmiLiveInfo* | Information about the IPMI connection.
 *ServerIpmiLiveRequest* | Request body to setup an IPMI Live connection.
 *ServerIpmiPowerRequest* | IPMI Power command for servers
 *ServerLease* | 
 *ServerLocation1* | 
 *ServerNetworkInfo* | 
 *ServerNetworkInfo_assets* | Object containing asset information.
 *ServerNetworkInfo_switchports* | Object containing switchport information.
 *ServerOrder* | Object representing a server order.
 *ServerOrderBandwidth* | A bandwidth option available when ordering a dedicated server.
 *ServerOrderCPU* | A CPU option available when ordering a dedicated server.
 *ServerOrderConfigIds* | Configuration IDs for the server order.
 *ServerOrderControlPanel* | A control panel option available when ordering a dedicated server.
 *ServerOrderFieldLabel* | A display label for a field in the server order form.
 *ServerOrderFieldLabels* | Field labels for the server order.
 *ServerOrderFormValues* | Form values for the server order.
 *ServerOrderGetResponse* | Configuration options and pricing data returned when starting a dedicated server order.
 *ServerOrderIP* | An IP block option available when ordering a dedicated server.
 *ServerOrderMemory* | A memory (RAM) option available when ordering a dedicated server.
 *ServerOrderOS* | An operating system option available when ordering a dedicated server.
 *ServerOrderRAID* | A RAID configuration option available when ordering a dedicated server.
 *ServerOrder_bandwidth_li* | Bandwidth options for the server order.
 *ServerOrder_cp_li* | Control Panel options for the server order.
 *ServerOrder_cpu_li* | CPU options for the server order.
 *ServerOrder_ips_li* | IP options for the server order.
 *ServerOrder_memory_li* | Memory options for the server order.
 *ServerOrder_memory_li_254* | 
 *ServerOrder_os_li* | Operating System options for the server order.
 *ServerRow* | A result row from the `Servers` `GET` request.
 *ServerServiceInfo* | 
 *ServerSwitchport* | 
 *Server_locations* | 
 *ServersBuyNowError* | Error response when a buy-it-now server order fails validation.
 *ServersBuyNowResponse* | Success response after placing a buy-it-now dedicated server order.
 *ServersBuyNowResponse_order_details* | Details of the placed order.
 *ServersCancel_200_response* | 
 *Service* | An individual package tied to one of our services.
 *ServiceCategories* | The listing of the categories for the services.
 *ServiceCategory* | A Category of Services.  This is the broadest grouping within a module.
 *ServiceOrderPostResponse* | Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 *ServiceType* | A general grouping of services within a category.
 *ServiceTypes* | The listing of service types
 *Services* | The list of service packages.
 *ServicesInfo* | Contains the complete catalog of available modules, services, service types, and service categories.
 *SslCancel_200_response* | 
 *StatusMonthlyBreakdown* | Monthly mail delivery status breakdown, showing counts per status category.
 *SuccessTextResponse* | Response with success flag and text description.
 *TemplateRequest* | VPS OS Template Request
 *TextResponse* | Text Response Object
 *TicketCustomFieldDetails* | Optional fields providing additional info in ticket
 *TicketDetails* | Detailed ticket information
 *TicketNew* | New helpdesk ticket request.  
 *TicketNewResponse* | Response returned after creating a new support ticket.
 *TicketPostDetails* | Fetches every posts of ticket
 *TicketPostDetails_inner* | 
 *Tickets* | A listing of support tickets.
 *TicketsRow* | Information about a single ticket.
 *Tickets_countArray* | 
 *TimezoneUpdate* | The request to update the time zone of a vps.
 *UpdateAccountTfa_request* | 
 *UpdateTicket* | Update custom fields of the ticket
 *UpdateTicketResponseSchema* | 
 *UrlRequest* | URL
 *VPSCancel_200_response* | 
 *VPSTrafficDataDataSectionResponse* | VPS Traffic Data section Data subsection Row Response
 *VPSTrafficDataDataSectionResponse_inner* | 
 *ViewMailLog_startDate_parameter* | 
 *ViewTicketResponse* | Ticket details
 *Vps* | 
 *VpsBackupRow* | A single backed-up item and information about it.
 *VpsBackupRows* | The listing of the backups for your service.
 *VpsBillingDetails* | Billing information for a VPS service including payment status, billing cycle, and cost.
 *VpsCPData* | Control panel license options available for a VPS.
 *VpsClientLink* | A navigation link for VPS-related actions in the client portal.
 *VpsDAData* | DirectAdmin license options available for a VPS.
 *VpsDALicense* | A DirectAdmin license tier option.
 *VpsExtraInfoTables* | Additional informational tables displayed for a VPS service.
 *VpsIPInfo* | IP address information table for a VPS service.
 *VpsIPInfoRow* | 
 *VpsOrder* | Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 *VpsOrderPostRequest* | request to validate a vps order
 *VpsOrderPutRequest* | request to validate a vps order
 *VpsOrderPutResponse* | Response from VPS order validation request
 *VpsOrder_locationNames* | Location Names
 *VpsOrder_locationStock* | Location Stock
 *VpsOrder_locationStock_1* | 
 *VpsOrder_osNames* | OS Names
 *VpsOrder_packageCosts* | Package Costs
 *VpsOrder_platformNames* | Platform Names
 *VpsOrder_platformPackages* | Platform Packages
 *VpsOrder_serviceTypes* | Service Types
 *VpsOrder_serviceTypes_32* | 
 *VpsOrder_templates* | Templates
 *VpsOrder_templates_hyperv* | 
 *VpsOrder_templates_hyperv_windows* | 
 *VpsPlesk12Data* | 
 *VpsPleskLicense* | 
 *VpsRow* | A result row from the `Vps` `GET` request.
 *VpsServiceAddons* | Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 *VpsServiceExtra* | 
 *VpsServiceInfo* | 
 *VpsServiceMaster* | Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 *VpsSnapshot* | A VPS snapshot (point-in-time backup) stored on the host node.
 *VpsTemplateRow* | A VPS OS Template.
 *VpsTemplatesList* | A listing of the OS Templates available for use.
 *VpsTrafficDataDataResponse* | VPS Traffic Data section Data subsection response
 *VpsTrafficDataSectionResponse* | VPS Traffic Data Section Response
 *VpsTrafficHistoryResponse* | VPS Traffic Data History Section
 *VpsTrafficHistorySectionDataResponse* | VPS Traffic Hisotrty Data Row of Hour/Day Section
 *VpsTrafficHistorySectionResponse* | VPS Traffic History Hour and Day Sections
 *VpsTrafficResponse* | VPS Traffic Information
 *VpsTrafficTotalsResposne* | VPS Traffic Totals Section
 *VpsTrafficTotalsSectionResponse* | VPS Traffic Totals Secttions Data
 *VpsTrafficUsageAverageResponse* | VPS Traffic Usage Average Section
 *VpsTrafficUsageAverageSectionResponse* | VPS Traffic Usage Average Section Response
 *VpsTrafficUsageResponse* | VPS Traffic Usage Section
 *WebhostingCancel_200_response* | 
 *Website* | Full detail view of a webhosting service including billing, service configuration, and panel access links.
 *WebsiteBackups* | List of available backups for a webhosting service with their names and sizes.
 *WebsiteBackups_inner* | 
 *WebsiteBillingDetails* | Billing information for a webhosting service including payment status, billing cycle, and cost.
 *WebsiteClientLink* | A navigation link for webhosting-related actions in the client portal.
 *WebsiteExtraInfoTables* | Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 *WebsiteLoginResponse* | Response from a website login request.
 *WebsiteRow* | A result row from the `Webhosting` `GET` request.
 *WebsiteServiceInfo* | 
 *WebsiteServiceMaster* | 
 *WebsiteTable* | 
 *WebsiteTableRow* | 
 *WebsitesOrder* | Schema for the WebsitesOrder object
 *WebsitesOrderJsonServiceOffers* | Schema for the jsonServiceOffers field in WebsitesOrder
 *WebsitesOrderJsonServiceOffersItem* | 
 *WebsitesOrderJsonServices* | Schema for the jsonServices field in WebsitesOrder
 *WebsitesOrderPackages* | Schema for the packages field in WebsitesOrder
 *WebsitesOrderPackagesInfo* | 
 *WebsitesOrderServiceOffer* | 
 *WebsitesOrderServiceTypes* | 
 *WebsitesOrder_packges* | The packages data.
 *WebsitesOrder_serviceOffers* | The service offers data.
 *WebsitesOrder_serviceTypes* | The service types data.

