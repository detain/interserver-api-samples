# myadmin-client-kotlin-client - Kotlin client library for InterServer Management API

## Requires

* Kotlin 1.4.30
* Gradle 5.3

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

This runs all tests and packages the library.

## Features/Implementation Notes

* Supports JSON inputs/outputs, File inputs, and Form inputs.
* Supports collection formats for query parameters: csv, tsv, ssv, pipes.
* Some Kotlin and Java types are fully qualified to avoid conflicts with types defined in Swagger definitions.
* Implementation of ApiClient is intended to reduce method counts, specifically to benefit Android targets.

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://my.interserver.net/apiv2*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AccountApi* | [**changeAccountUsername**](docs/AccountApi.md#changeaccountusername) | **POST** /account/username | Change Account Username
*AccountApi* | [**deleteAccountOauthName**](docs/AccountApi.md#deleteaccountoauthname) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
*AccountApi* | [**deleteAccountTfa**](docs/AccountApi.md#deleteaccounttfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
*AccountApi* | [**deleteIpLimit**](docs/AccountApi.md#deleteiplimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
*AccountApi* | [**getAccountInfo**](docs/AccountApi.md#getaccountinfo) | **GET** /account | Retrieve Account Details
*AccountApi* | [**getAccountTfaSetup**](docs/AccountApi.md#getaccounttfasetup) | **GET** /account/2fa | Get Two-Factor Setup Data
*AccountApi* | [**getHome**](docs/AccountApi.md#gethome) | **GET** /home | Get Home Data
*AccountApi* | [**getSearch**](docs/AccountApi.md#getsearch) | **GET** /search | Search Autocomplete
*AccountApi* | [**logout**](docs/AccountApi.md#logout) | **GET** /logout | Log Out
*AccountApi* | [**logoutAccountOauth**](docs/AccountApi.md#logoutaccountoauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
*AccountApi* | [**updateAccountApiKey**](docs/AccountApi.md#updateaccountapikey) | **POST** /account/apikey | Generate New API Key
*AccountApi* | [**updateAccountFeatures**](docs/AccountApi.md#updateaccountfeatures) | **POST** /account/features | Update Account Feature Flags
*AccountApi* | [**updateAccountInfo**](docs/AccountApi.md#updateaccountinfo) | **POST** /account | Update Account Information
*AccountApi* | [**updateAccountIpLimits**](docs/AccountApi.md#updateaccountiplimits) | **POST** /account/iplimits | Add IP Access Restriction
*AccountApi* | [**updateAccountPassword**](docs/AccountApi.md#updateaccountpassword) | **POST** /account/password | Change Account Password
*AccountApi* | [**updateAccountSshKey**](docs/AccountApi.md#updateaccountsshkey) | **POST** /account/sshkey | Update SSH Keys
*AccountApi* | [**updateAccountTfa**](docs/AccountApi.md#updateaccounttfa) | **POST** /account/2fa | Enable Two-Factor Authentication
*BackupsApi* | [**addBackup**](docs/BackupsApi.md#addbackup) | **POST** /backups/order | Place Backup Order
*BackupsApi* | [**cancelBackup**](docs/BackupsApi.md#cancelbackup) | **DELETE** /backups/{id} | Cancel Backup Service
*BackupsApi* | [**getBackupInfo**](docs/BackupsApi.md#getbackupinfo) | **GET** /backups/{id} | Get Backup Service Details
*BackupsApi* | [**getBackupInvoices**](docs/BackupsApi.md#getbackupinvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
*BackupsApi* | [**getBackupLogin**](docs/BackupsApi.md#getbackuplogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
*BackupsApi* | [**getBackupsList**](docs/BackupsApi.md#getbackupslist) | **GET** /backups | List Backup Services
*BackupsApi* | [**getBackupsWelcomeEmail**](docs/BackupsApi.md#getbackupswelcomeemail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
*BackupsApi* | [**getNewBackup**](docs/BackupsApi.md#getnewbackup) | **GET** /backups/order | Get Backup Order Form Data
*BackupsApi* | [**updateBackupInfo**](docs/BackupsApi.md#updatebackupinfo) | **POST** /backups/{id} | Update Backup Information
*BackupsApi* | [**validateBackupOrder**](docs/BackupsApi.md#validatebackuporder) | **PUT** /backups/order | Validate Backup Order
*BillingApi* | [**addAccountCreditCard**](docs/BillingApi.md#addaccountcreditcard) | **POST** /account/creditcards | Add Credit Card to Account
*BillingApi* | [**addBillingCreditCard**](docs/BillingApi.md#addbillingcreditcard) | **POST** /billing/creditcards | Add Credit Card for Billing
*BillingApi* | [**addBillingPrepay**](docs/BillingApi.md#addbillingprepay) | **POST** /billing/prepays | Create Prepay Deposit
*BillingApi* | [**deleteAccountCreditCard**](docs/BillingApi.md#deleteaccountcreditcard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
*BillingApi* | [**deleteBillingCreditCard**](docs/BillingApi.md#deletebillingcreditcard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
*BillingApi* | [**deleteBillingInvoice**](docs/BillingApi.md#deletebillinginvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
*BillingApi* | [**deleteBillingPrepay**](docs/BillingApi.md#deletebillingprepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
*BillingApi* | [**getAffiliateBanners**](docs/BillingApi.md#getaffiliatebanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
*BillingApi* | [**getAffiliateRichReport**](docs/BillingApi.md#getaffiliaterichreport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
*BillingApi* | [**getAffiliateSalesGraph**](docs/BillingApi.md#getaffiliatesalesgraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
*BillingApi* | [**getAffiliateSalesReport**](docs/BillingApi.md#getaffiliatesalesreport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
*BillingApi* | [**getAffiliateTrafficGraph**](docs/BillingApi.md#getaffiliatetrafficgraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
*BillingApi* | [**getAffiliateWebTraffic**](docs/BillingApi.md#getaffiliatewebtraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
*BillingApi* | [**getBillingCart**](docs/BillingApi.md#getbillingcart) | **GET** /billing/cart | Get Shopping Cart Contents
*BillingApi* | [**getBillingCreditCardVerify**](docs/BillingApi.md#getbillingcreditcardverify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
*BillingApi* | [**getBillingInvoice**](docs/BillingApi.md#getbillinginvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
*BillingApi* | [**getBillingInvoices**](docs/BillingApi.md#getbillinginvoices) | **GET** /billing/invoices | List Account Invoices
*BillingApi* | [**getBillingPrePays**](docs/BillingApi.md#getbillingprepays) | **GET** /billing/prepays | List Prepay Balances
*BillingApi* | [**getInvoices**](docs/BillingApi.md#getinvoices) | **GET** /invoices | Get Invoices
*BillingApi* | [**initiatePayment**](docs/BillingApi.md#initiatepayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
*BillingApi* | [**postBillingCreditCardVerify**](docs/BillingApi.md#postbillingcreditcardverify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
*BillingApi* | [**updateAccountCreditCard**](docs/BillingApi.md#updateaccountcreditcard) | **POST** /account/creditcards/{id} | Update Credit Card
*BillingApi* | [**updateAffiliateDockSetup**](docs/BillingApi.md#updateaffiliatedocksetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
*BillingApi* | [**updateAffiliateLandingPage**](docs/BillingApi.md#updateaffiliatelandingpage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
*BillingApi* | [**updateAffiliatePaymentSetup**](docs/BillingApi.md#updateaffiliatepaymentsetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
*BillingApi* | [**updateBillingCreditCard**](docs/BillingApi.md#updatebillingcreditcard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
*BillingApi* | [**updateBillingPaymentMethod**](docs/BillingApi.md#updatebillingpaymentmethod) | **POST** /billing/payment_method | Update Default Payment Method
*DNSApi* | [**addDnsDomain**](docs/DNSApi.md#adddnsdomain) | **POST** /dns | Create DNS Domain
*DNSApi* | [**addDnsRecord**](docs/DNSApi.md#adddnsrecord) | **POST** /dns/{id} | Add DNS Record to Domain
*DNSApi* | [**deleteDnsDomain**](docs/DNSApi.md#deletednsdomain) | **DELETE** /dns/{id} | Delete DNS Domain
*DNSApi* | [**deleteDnsRecord**](docs/DNSApi.md#deletednsrecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
*DNSApi* | [**getDnsDomain**](docs/DNSApi.md#getdnsdomain) | **GET** /dns/{id} | List Domain DNS Records
*DNSApi* | [**getDnsList**](docs/DNSApi.md#getdnslist) | **GET** /dns | List DNS Domains
*DNSApi* | [**updateDnsRecord**](docs/DNSApi.md#updatednsrecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record
*DomainsApi* | [**addDomain**](docs/DomainsApi.md#adddomain) | **POST** /domains/order | Place Domain Order
*DomainsApi* | [**addDomainDnssec**](docs/DomainsApi.md#adddomaindnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
*DomainsApi* | [**addDomainNameserver**](docs/DomainsApi.md#adddomainnameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
*DomainsApi* | [**cancelDomain**](docs/DomainsApi.md#canceldomain) | **DELETE** /domains/{id} | Cancel Domain Order
*DomainsApi* | [**deleteDomainDnssec**](docs/DomainsApi.md#deletedomaindnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
*DomainsApi* | [**deleteDomainNameserver**](docs/DomainsApi.md#deletedomainnameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
*DomainsApi* | [**getDomainContact**](docs/DomainsApi.md#getdomaincontact) | **GET** /domains/{id}/contact | Get Domain Contact Details
*DomainsApi* | [**getDomainDnssec**](docs/DomainsApi.md#getdomaindnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
*DomainsApi* | [**getDomainInfo**](docs/DomainsApi.md#getdomaininfo) | **GET** /domains/{id} | Get Domain Order
*DomainsApi* | [**getDomainInvoices**](docs/DomainsApi.md#getdomaininvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
*DomainsApi* | [**getDomainLookup**](docs/DomainsApi.md#getdomainlookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
*DomainsApi* | [**getDomainNameservers**](docs/DomainsApi.md#getdomainnameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
*DomainsApi* | [**getDomainOrderFields**](docs/DomainsApi.md#getdomainorderfields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
*DomainsApi* | [**getDomainOrderSearchResults**](docs/DomainsApi.md#getdomainordersearchresults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
*DomainsApi* | [**getDomainRenewal**](docs/DomainsApi.md#getdomainrenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
*DomainsApi* | [**getDomainSearch**](docs/DomainsApi.md#getdomainsearch) | **GET** /domains/search/{name} | Search Domain Suggestions
*DomainsApi* | [**getDomainTransfer**](docs/DomainsApi.md#getdomaintransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
*DomainsApi* | [**getDomainWhoisPrivacy**](docs/DomainsApi.md#getdomainwhoisprivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
*DomainsApi* | [**getDomainsList**](docs/DomainsApi.md#getdomainslist) | **GET** /domains | List Domain Orders
*DomainsApi* | [**getDomainsWelcomeEmail**](docs/DomainsApi.md#getdomainswelcomeemail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
*DomainsApi* | [**getNewDomain**](docs/DomainsApi.md#getnewdomain) | **GET** /domains/order | Get Domain Ordering Information
*DomainsApi* | [**patchDomains**](docs/DomainsApi.md#patchdomains) | **PATCH** /domains/order | Validate Domain Order
*DomainsApi* | [**postDomainRenewal**](docs/DomainsApi.md#postdomainrenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
*DomainsApi* | [**postDomainTransfer**](docs/DomainsApi.md#postdomaintransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
*DomainsApi* | [**putDomains**](docs/DomainsApi.md#putdomains) | **PUT** /domains/order | Domain Order Search
*DomainsApi* | [**updateDomainContact**](docs/DomainsApi.md#updatedomaincontact) | **POST** /domains/{id}/contact | Update Domain Contact Details
*DomainsApi* | [**updateDomainInfo**](docs/DomainsApi.md#updatedomaininfo) | **POST** /domains/{id} | Update Domain Order
*DomainsApi* | [**updateDomainNameservers**](docs/DomainsApi.md#updatedomainnameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
*DomainsApi* | [**updateDomainWhoisPrivacy**](docs/DomainsApi.md#updatedomainwhoisprivacy) | **POST** /domains/{id}/whois | Update Whois Privacy
*FloatingIPsApi* | [**addFloatingIp**](docs/FloatingIPsApi.md#addfloatingip) | **POST** /floating_ips/order | Place Floating IP Order
*FloatingIPsApi* | [**floatingIpsCancel**](docs/FloatingIPsApi.md#floatingipscancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
*FloatingIPsApi* | [**getFloatingIpInfo**](docs/FloatingIPsApi.md#getfloatingipinfo) | **GET** /floating_ips/{id} | View Floating IP
*FloatingIPsApi* | [**getFloatingIpInvoices**](docs/FloatingIPsApi.md#getfloatingipinvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
*FloatingIPsApi* | [**getFloatingIpsList**](docs/FloatingIPsApi.md#getfloatingipslist) | **GET** /floating_ips | List Floating IPs
*FloatingIPsApi* | [**getFloatingIpsWelcomeEmail**](docs/FloatingIPsApi.md#getfloatingipswelcomeemail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
*FloatingIPsApi* | [**getNewFloatingIp**](docs/FloatingIPsApi.md#getnewfloatingip) | **GET** /floating_ips/order | Get Floating IP Ordering Information
*FloatingIPsApi* | [**postFloatingIpsChangeIp**](docs/FloatingIPsApi.md#postfloatingipschangeip) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
*FloatingIPsApi* | [**putFloatingIps**](docs/FloatingIPsApi.md#putfloatingips) | **PUT** /floating_ips/order | Validate Floating IP Order
*FloatingIPsApi* | [**updateFloatingIpInfo**](docs/FloatingIPsApi.md#updatefloatingipinfo) | **POST** /floating_ips/{id} | Update Floating IP
*LicensesApi* | [**addLicense**](docs/LicensesApi.md#addlicense) | **POST** /licenses/order | Place License Order
*LicensesApi* | [**getLicenseInfo**](docs/LicensesApi.md#getlicenseinfo) | **GET** /licenses/{id} | Get License
*LicensesApi* | [**getLicenseInvoices**](docs/LicensesApi.md#getlicenseinvoices) | **GET** /licenses/{id}/invoices | Get License Invoices
*LicensesApi* | [**getLicenseList**](docs/LicensesApi.md#getlicenselist) | **GET** /licenses | List Licenses
*LicensesApi* | [**getLicenseOrderCatTagInfo**](docs/LicensesApi.md#getlicenseordercattaginfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category
*LicensesApi* | [**getLicensesWelcomeEmail**](docs/LicensesApi.md#getlicenseswelcomeemail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email
*LicensesApi* | [**getNewLicense**](docs/LicensesApi.md#getnewlicense) | **GET** /licenses/order | Get License Order Information
*LicensesApi* | [**licensesCancel**](docs/LicensesApi.md#licensescancel) | **DELETE** /licenses/{id} | Cancel License
*LicensesApi* | [**postLicenseChangeIp**](docs/LicensesApi.md#postlicensechangeip) | **POST** /licenses/{id}/change_ip | Change License IP
*LicensesApi* | [**putLicenses**](docs/LicensesApi.md#putlicenses) | **PUT** /licenses/order | Validate License Order
*LicensesApi* | [**updateLicenseInfo**](docs/LicensesApi.md#updatelicenseinfo) | **POST** /licenses/{id} | Update License
*MailApi* | [**addMail**](docs/MailApi.md#addmail) | **POST** /mail/order | Place Mail Order
*MailApi* | [**addRule**](docs/MailApi.md#addrule) | **POST** /mail/{id}/rules | Create Deny Rule
*MailApi* | [**createMailAlert**](docs/MailApi.md#createmailalert) | **POST** /mail/{id}/alerts | Create Mail Alert
*MailApi* | [**deleteMailAlert**](docs/MailApi.md#deletemailalert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
*MailApi* | [**deleteRule**](docs/MailApi.md#deleterule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
*MailApi* | [**delistBlock**](docs/MailApi.md#delistblock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
*MailApi* | [**getMailAlerts**](docs/MailApi.md#getmailalerts) | **GET** /mail/{id}/alerts | List Mail Alerts
*MailApi* | [**getMailBlocks**](docs/MailApi.md#getmailblocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
*MailApi* | [**getMailDelist**](docs/MailApi.md#getmaildelist) | **GET** /mail/{id}/delist | Get Delist Status
*MailApi* | [**getMailDeliverability**](docs/MailApi.md#getmaildeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
*MailApi* | [**getMailInfo**](docs/MailApi.md#getmailinfo) | **GET** /mail/{id} | Get Mail Order
*MailApi* | [**getMailInvoices**](docs/MailApi.md#getmailinvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
*MailApi* | [**getMailList**](docs/MailApi.md#getmaillist) | **GET** /mail | List Mail Orders
*MailApi* | [**getMailWelcomeEmail**](docs/MailApi.md#getmailwelcomeemail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
*MailApi* | [**getNewMail**](docs/MailApi.md#getnewmail) | **GET** /mail/order | Get Mail Ordering Information
*MailApi* | [**getRules**](docs/MailApi.md#getrules) | **GET** /mail/{id}/rules | List Deny Rules
*MailApi* | [**getStats**](docs/MailApi.md#getstats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
*MailApi* | [**mailCancel**](docs/MailApi.md#mailcancel) | **DELETE** /mail/{id} | Cancel Mail
*MailApi* | [**postMailDelist**](docs/MailApi.md#postmaildelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
*MailApi* | [**putMail**](docs/MailApi.md#putmail) | **PUT** /mail/order | Validate Mail Order
*MailApi* | [**resetMailPassword**](docs/MailApi.md#resetmailpassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
*MailApi* | [**sendAdvMail**](docs/MailApi.md#sendadvmail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
*MailApi* | [**sendMail**](docs/MailApi.md#sendmail) | **POST** /mail/{id}/send | Send Email
*MailApi* | [**updateMailAlert**](docs/MailApi.md#updatemailalert) | **PUT** /mail/{id}/alerts | Update Mail Alert
*MailApi* | [**updateMailInfo**](docs/MailApi.md#updatemailinfo) | **POST** /mail/{id} | Update Mail Order
*MailApi* | [**viewMailLog**](docs/MailApi.md#viewmaillog) | **GET** /mail/{id}/log | View Mail Log
*PublicApi* | [**getCaptcha**](docs/PublicApi.md#getcaptcha) | **GET** /captcha | Get Captcha Challenge
*PublicApi* | [**getCountries**](docs/PublicApi.md#getcountries) | **GET** /account/countries | Get Countries
*PublicApi* | [**getInfo**](docs/PublicApi.md#getinfo) | **GET** /info | Get Server Info
*PublicApi* | [**getLoginInfo**](docs/PublicApi.md#getlogininfo) | **GET** /login | Get Login Info
*PublicApi* | [**getMPServers**](docs/PublicApi.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
*PublicApi* | [**getOauthRedirect**](docs/PublicApi.md#getoauthredirect) | **GET** /oauth | Get OAuth Redirect URL
*PublicApi* | [**getTimezones**](docs/PublicApi.md#gettimezones) | **GET** /account/timezones | Get Available Timezones
*PublicApi* | [**patchOauthTwoFactor**](docs/PublicApi.md#patchoauthtwofactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
*PublicApi* | [**pingServer**](docs/PublicApi.md#pingserver) | **GET** /ping | Ping Server
*PublicApi* | [**postOauthCallback**](docs/PublicApi.md#postoauthcallback) | **POST** /oauth | OAuth Callback
*PublicApi* | [**submitLogin**](docs/PublicApi.md#submitlogin) | **POST** /login | Submit Login Information
*PublicApi* | [**submitSignup**](docs/PublicApi.md#submitsignup) | **POST** /signup | Submit Signup Information
*QuickServersApi* | [**addQs**](docs/QuickServersApi.md#addqs) | **POST** /qs/order | Place QuickServer Order
*QuickServersApi* | [**deleteQsBackup**](docs/QuickServersApi.md#deleteqsbackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
*QuickServersApi* | [**doQsBlockSmtp**](docs/QuickServersApi.md#doqsblocksmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
*QuickServersApi* | [**doQsDisableCd**](docs/QuickServersApi.md#doqsdisablecd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
*QuickServersApi* | [**doQsDisableQuota**](docs/QuickServersApi.md#doqsdisablequota) | **GET** /qs/{id}/disable_quota | Disable Quotas
*QuickServersApi* | [**doQsEjectCd**](docs/QuickServersApi.md#doqsejectcd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
*QuickServersApi* | [**doQsEnableQuota**](docs/QuickServersApi.md#doqsenablequota) | **GET** /qs/{id}/enable_quota | Enable Quotas
*QuickServersApi* | [**doQsRestart**](docs/QuickServersApi.md#doqsrestart) | **GET** /qs/{id}/restart | Restart QuickServer
*QuickServersApi* | [**doQsStart**](docs/QuickServersApi.md#doqsstart) | **GET** /qs/{id}/start | Start QuickServer
*QuickServersApi* | [**doQsStop**](docs/QuickServersApi.md#doqsstop) | **GET** /qs/{id}/stop | Stop QuickServer
*QuickServersApi* | [**downloadQsBackup**](docs/QuickServersApi.md#downloadqsbackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
*QuickServersApi* | [**getNewQs**](docs/QuickServersApi.md#getnewqs) | **GET** /qs/order | Get QuickServer Ordering Information
*QuickServersApi* | [**getQsBackups**](docs/QuickServersApi.md#getqsbackups) | **GET** /qs/{id}/backups | List QuickServer Backups
*QuickServersApi* | [**getQsChangeHostname**](docs/QuickServersApi.md#getqschangehostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
*QuickServersApi* | [**getQsChangeRootPassword**](docs/QuickServersApi.md#getqschangerootpassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
*QuickServersApi* | [**getQsChangeTimezone**](docs/QuickServersApi.md#getqschangetimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
*QuickServersApi* | [**getQsChangeWebuzoPassword**](docs/QuickServersApi.md#getqschangewebuzopassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
*QuickServersApi* | [**getQsInfo**](docs/QuickServersApi.md#getqsinfo) | **GET** /qs/{id} | Get QuickServer Order
*QuickServersApi* | [**getQsInsertCd**](docs/QuickServersApi.md#getqsinsertcd) | **GET** /qs/{id}/insert_cd | Insert CD Information
*QuickServersApi* | [**getQsInvoices**](docs/QuickServersApi.md#getqsinvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
*QuickServersApi* | [**getQsList**](docs/QuickServersApi.md#getqslist) | **GET** /qs | List QuickServers
*QuickServersApi* | [**getQsReinstallOs**](docs/QuickServersApi.md#getqsreinstallos) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
*QuickServersApi* | [**getQsResetPassword**](docs/QuickServersApi.md#getqsresetpassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
*QuickServersApi* | [**getQsReverseDns**](docs/QuickServersApi.md#getqsreversedns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
*QuickServersApi* | [**getQsSetupVnc**](docs/QuickServersApi.md#getqssetupvnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
*QuickServersApi* | [**getQsTrafficUsage**](docs/QuickServersApi.md#getqstrafficusage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
*QuickServersApi* | [**getQsViewDesktop**](docs/QuickServersApi.md#getqsviewdesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
*QuickServersApi* | [**getQsWelcomeEmail**](docs/QuickServersApi.md#getqswelcomeemail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
*QuickServersApi* | [**postQsBackup**](docs/QuickServersApi.md#postqsbackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
*QuickServersApi* | [**postQsChangeHostname**](docs/QuickServersApi.md#postqschangehostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
*QuickServersApi* | [**postQsChangeRootPassword**](docs/QuickServersApi.md#postqschangerootpassword) | **POST** /qs/{id}/change_root_password | Change Root Password
*QuickServersApi* | [**postQsChangeTimezone**](docs/QuickServersApi.md#postqschangetimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
*QuickServersApi* | [**postQsChangeWebuzoPassword**](docs/QuickServersApi.md#postqschangewebuzopassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
*QuickServersApi* | [**postQsInsertCd**](docs/QuickServersApi.md#postqsinsertcd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
*QuickServersApi* | [**postQsReinstallOs**](docs/QuickServersApi.md#postqsreinstallos) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
*QuickServersApi* | [**postQsResetPassword**](docs/QuickServersApi.md#postqsresetpassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
*QuickServersApi* | [**postQsReverseDns**](docs/QuickServersApi.md#postqsreversedns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
*QuickServersApi* | [**postQsSetupVnc**](docs/QuickServersApi.md#postqssetupvnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
*QuickServersApi* | [**postQsTrafficUsage**](docs/QuickServersApi.md#postqstrafficusage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
*QuickServersApi* | [**postQsViewDesktop**](docs/QuickServersApi.md#postqsviewdesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
*QuickServersApi* | [**postQuickServerRestore**](docs/QuickServersApi.md#postquickserverrestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
*QuickServersApi* | [**putQs**](docs/QuickServersApi.md#putqs) | **PUT** /qs/order | Validate QuickServer Order
*QuickServersApi* | [**quickserversCancel**](docs/QuickServersApi.md#quickserverscancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
*QuickServersApi* | [**updateQsInfo**](docs/QuickServersApi.md#updateqsinfo) | **POST** /qs/{id} | Update QuickServer Order
*SSLCertificatesApi* | [**addSsl**](docs/SSLCertificatesApi.md#addssl) | **POST** /ssl/order | Place SSL Cert Order
*SSLCertificatesApi* | [**getNewSsl**](docs/SSLCertificatesApi.md#getnewssl) | **GET** /ssl/order | SSL Cert Ordering Information
*SSLCertificatesApi* | [**getSslInfo**](docs/SSLCertificatesApi.md#getsslinfo) | **GET** /ssl/{id} | Get SSL Cert Info
*SSLCertificatesApi* | [**getSslInvoices**](docs/SSLCertificatesApi.md#getsslinvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
*SSLCertificatesApi* | [**getSslList**](docs/SSLCertificatesApi.md#getssllist) | **GET** /ssl | List SSL Certs
*SSLCertificatesApi* | [**getSslWelcomeEmail**](docs/SSLCertificatesApi.md#getsslwelcomeemail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
*SSLCertificatesApi* | [**putSsl**](docs/SSLCertificatesApi.md#putssl) | **PUT** /ssl/order | Validate SSL Cert Order
*SSLCertificatesApi* | [**sslCancel**](docs/SSLCertificatesApi.md#sslcancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
*SSLCertificatesApi* | [**updateSslInfo**](docs/SSLCertificatesApi.md#updatesslinfo) | **POST** /ssl/{id} | Update SSL Cert Order
*ScrubIpsApi* | [**cancelScrubIp**](docs/ScrubIpsApi.md#cancelscrubip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
*ScrubIpsApi* | [**createFilter**](docs/ScrubIpsApi.md#createfilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
*ScrubIpsApi* | [**createGeoRule**](docs/ScrubIpsApi.md#creategeorule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
*ScrubIpsApi* | [**createRule**](docs/ScrubIpsApi.md#createrule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
*ScrubIpsApi* | [**deleteFilter**](docs/ScrubIpsApi.md#deletefilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
*ScrubIpsApi* | [**disableScrub**](docs/ScrubIpsApi.md#disablescrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
*ScrubIpsApi* | [**enableScrub**](docs/ScrubIpsApi.md#enablescrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
*ScrubIpsApi* | [**getOrderDetail**](docs/ScrubIpsApi.md#getorderdetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
*ScrubIpsApi* | [**getScrubIpDetails**](docs/ScrubIpsApi.md#getscrubipdetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
*ScrubIpsApi* | [**getScrubIpFilterTypes**](docs/ScrubIpsApi.md#getscrubipfiltertypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
*ScrubIpsApi* | [**getScrubIpInvoices**](docs/ScrubIpsApi.md#getscrubipinvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
*ScrubIpsApi* | [**getScrubIpLogs**](docs/ScrubIpsApi.md#getscrubiplogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
*ScrubIpsApi* | [**getScrubIpsList**](docs/ScrubIpsApi.md#getscrubipslist) | **GET** /scrub_ips | List Scrub IP Services
*ScrubIpsApi* | [**placeScrubOrder**](docs/ScrubIpsApi.md#placescruborder) | **POST** /scrub_ips/order | Place Scrub IP Order
*ScrubIpsApi* | [**scrubIpsDeleteGeoRule**](docs/ScrubIpsApi.md#scrubipsdeletegeorule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
*ScrubIpsApi* | [**scrubIpsDeleteRule**](docs/ScrubIpsApi.md#scrubipsdeleterule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule
*ServersApi* | [**addServer**](docs/ServersApi.md#addserver) | **POST** /servers/order | Place Server Order
*ServersApi* | [**buyItNowServerOrder**](docs/ServersApi.md#buyitnowserverorder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
*ServersApi* | [**getMPServers**](docs/ServersApi.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
*ServersApi* | [**getNewServer**](docs/ServersApi.md#getnewserver) | **GET** /servers/order | Server Ordering Information
*ServersApi* | [**getServerInfo**](docs/ServersApi.md#getserverinfo) | **GET** /servers/{id} | Get Server Order
*ServersApi* | [**getServerInvoices**](docs/ServersApi.md#getserverinvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
*ServersApi* | [**getServerList**](docs/ServersApi.md#getserverlist) | **GET** /servers | List Servers
*ServersApi* | [**getServerReverseDns**](docs/ServersApi.md#getserverreversedns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
*ServersApi* | [**getServersWelcomeEmail**](docs/ServersApi.md#getserverswelcomeemail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
*ServersApi* | [**placeBuyNowServer**](docs/ServersApi.md#placebuynowserver) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
*ServersApi* | [**postServerReverseDns**](docs/ServersApi.md#postserverreversedns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
*ServersApi* | [**putServers**](docs/ServersApi.md#putservers) | **PUT** /servers/order | Validate Server Order
*ServersApi* | [**serverIpmiLiveGet**](docs/ServersApi.md#serveripmiliveget) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
*ServersApi* | [**serverIpmiLivePost**](docs/ServersApi.md#serveripmilivepost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
*ServersApi* | [**serverIpmiPowerGet**](docs/ServersApi.md#serveripmipowerget) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
*ServersApi* | [**serverIpmiPowerPost**](docs/ServersApi.md#serveripmipowerpost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
*ServersApi* | [**serversCancel**](docs/ServersApi.md#serverscancel) | **DELETE** /servers/{id} | Cancel Server Service
*ServersApi* | [**updateServerInfo**](docs/ServersApi.md#updateserverinfo) | **POST** /servers/{id} | Update Server Order
*TicketsApi* | [**addNewTicket**](docs/TicketsApi.md#addnewticket) | **POST** /tickets/new | Create New Ticket
*TicketsApi* | [**closeTicket**](docs/TicketsApi.md#closeticket) | **GET** /tickets/{id}/close | Close Ticket
*TicketsApi* | [**deleteTicketInfo**](docs/TicketsApi.md#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket
*TicketsApi* | [**getNewTicket**](docs/TicketsApi.md#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket.
*TicketsApi* | [**getTicketInfo**](docs/TicketsApi.md#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information
*TicketsApi* | [**getTicketsList**](docs/TicketsApi.md#getticketslist) | **GET** /tickets | List Support Tickets
*TicketsApi* | [**postTicketInfo**](docs/TicketsApi.md#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket
*TicketsApi* | [**postTicketsList**](docs/TicketsApi.md#postticketslist) | **POST** /tickets | Search Support Tickets
*TicketsApi* | [**putTicketInfo**](docs/TicketsApi.md#putticketinfo) | **PUT** /tickets/{id} | Update Ticket
*TicketsApi* | [**replyTicket**](docs/TicketsApi.md#replyticket) | **POST** /tickets/{id}/reply | Reply Ticket
*TicketsApi* | [**updateTicketInfo**](docs/TicketsApi.md#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket
*VPSApi* | [**addVps**](docs/VPSApi.md#addvps) | **POST** /vps/order | Place VPS Order
*VPSApi* | [**deleteVpsBackup**](docs/VPSApi.md#deletevpsbackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
*VPSApi* | [**doVpsBlockSmtp**](docs/VPSApi.md#dovpsblocksmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
*VPSApi* | [**doVpsDisableCd**](docs/VPSApi.md#dovpsdisablecd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
*VPSApi* | [**doVpsDisableQuota**](docs/VPSApi.md#dovpsdisablequota) | **GET** /vps/{id}/disable_quota | Disable Quotas
*VPSApi* | [**doVpsEjectCd**](docs/VPSApi.md#dovpsejectcd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
*VPSApi* | [**doVpsEnableQuota**](docs/VPSApi.md#dovpsenablequota) | **GET** /vps/{id}/enable_quota | Enable Quotas
*VPSApi* | [**doVpsRestart**](docs/VPSApi.md#dovpsrestart) | **GET** /vps/{id}/restart | Restart VPS
*VPSApi* | [**doVpsStart**](docs/VPSApi.md#dovpsstart) | **GET** /vps/{id}/start | Start VPS
*VPSApi* | [**doVpsStop**](docs/VPSApi.md#dovpsstop) | **GET** /vps/{id}/stop | Stop VPS
*VPSApi* | [**downloadVpsBackup**](docs/VPSApi.md#downloadvpsbackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
*VPSApi* | [**getNewVps**](docs/VPSApi.md#getnewvps) | **GET** /vps/order | VPS Ordering Information
*VPSApi* | [**getVpsBackups**](docs/VPSApi.md#getvpsbackups) | **GET** /vps/{id}/backups | Get VPS Backups List
*VPSApi* | [**getVpsBuyHdSpace**](docs/VPSApi.md#getvpsbuyhdspace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
*VPSApi* | [**getVpsBuyIp**](docs/VPSApi.md#getvpsbuyip) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
*VPSApi* | [**getVpsChangeTimezone**](docs/VPSApi.md#getvpschangetimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
*VPSApi* | [**getVpsInfo**](docs/VPSApi.md#getvpsinfo) | **GET** /vps/{id} | Get VPS Order
*VPSApi* | [**getVpsInvoices**](docs/VPSApi.md#getvpsinvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
*VPSApi* | [**getVpsList**](docs/VPSApi.md#getvpslist) | **GET** /vps | List VPS Orders
*VPSApi* | [**getVpsReinstallOs**](docs/VPSApi.md#getvpsreinstallos) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
*VPSApi* | [**getVpsReverseDns**](docs/VPSApi.md#getvpsreversedns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
*VPSApi* | [**getVpsSetupVnc**](docs/VPSApi.md#getvpssetupvnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
*VPSApi* | [**getVpsSlices**](docs/VPSApi.md#getvpsslices) | **GET** /vps/{id}/slices | Slice Upgrade Info
*VPSApi* | [**getVpsTrafficUsage**](docs/VPSApi.md#getvpstrafficusage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
*VPSApi* | [**getVpsViewDesktop**](docs/VPSApi.md#getvpsviewdesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
*VPSApi* | [**getVpsWelcomeEmail**](docs/VPSApi.md#getvpswelcomeemail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
*VPSApi* | [**postVpsBackup**](docs/VPSApi.md#postvpsbackup) | **GET** /vps/{id}/backup | Start a VPS Backup
*VPSApi* | [**postVpsBuyHdSpace**](docs/VPSApi.md#postvpsbuyhdspace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
*VPSApi* | [**postVpsBuyIp**](docs/VPSApi.md#postvpsbuyip) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
*VPSApi* | [**postVpsChangeHostname**](docs/VPSApi.md#postvpschangehostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
*VPSApi* | [**postVpsChangeRootPassword**](docs/VPSApi.md#postvpschangerootpassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
*VPSApi* | [**postVpsChangeTimezone**](docs/VPSApi.md#postvpschangetimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
*VPSApi* | [**postVpsChangeWebuzoPassword**](docs/VPSApi.md#postvpschangewebuzopassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
*VPSApi* | [**postVpsInsertCd**](docs/VPSApi.md#postvpsinsertcd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
*VPSApi* | [**postVpsReinstallOs**](docs/VPSApi.md#postvpsreinstallos) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
*VPSApi* | [**postVpsResetPassword**](docs/VPSApi.md#postvpsresetpassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
*VPSApi* | [**postVpsRestore**](docs/VPSApi.md#postvpsrestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
*VPSApi* | [**postVpsReverseDns**](docs/VPSApi.md#postvpsreversedns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
*VPSApi* | [**postVpsSetupVnc**](docs/VPSApi.md#postvpssetupvnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
*VPSApi* | [**postVpsSlices**](docs/VPSApi.md#postvpsslices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
*VPSApi* | [**postVpsViewDesktop**](docs/VPSApi.md#postvpsviewdesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
*VPSApi* | [**putVps**](docs/VPSApi.md#putvps) | **PUT** /vps/order | Validate VPS Order
*VPSApi* | [**updateVpsInfo**](docs/VPSApi.md#updatevpsinfo) | **POST** /vps/{id} | Update VPS Order
*VPSApi* | [**vPSCancel**](docs/VPSApi.md#vpscancel) | **DELETE** /vps/{id} | Cancel VPS Service
*WebhostingApi* | [**addWebsite**](docs/WebhostingApi.md#addwebsite) | **POST** /websites/order | Place Website Order
*WebhostingApi* | [**getNewWebsite**](docs/WebhostingApi.md#getnewwebsite) | **GET** /websites/order | Website Ordering Information
*WebhostingApi* | [**getWebsiteBuyIp**](docs/WebhostingApi.md#getwebsitebuyip) | **GET** /websites/{id}/buy_ip | Get Website IP Information
*WebhostingApi* | [**getWebsiteInfo**](docs/WebhostingApi.md#getwebsiteinfo) | **GET** /websites/{id} | Get Website Order
*WebhostingApi* | [**getWebsiteInvoices**](docs/WebhostingApi.md#getwebsiteinvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
*WebhostingApi* | [**getWebsiteList**](docs/WebhostingApi.md#getwebsitelist) | **GET** /websites | Get Website Listing
*WebhostingApi* | [**getWebsitesBackups**](docs/WebhostingApi.md#getwebsitesbackups) | **GET** /websites/{id}/backups | Get Website Backups
*WebhostingApi* | [**getWebsitesLogin**](docs/WebhostingApi.md#getwebsiteslogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
*WebhostingApi* | [**getWebsitesWelcomeEmail**](docs/WebhostingApi.md#getwebsiteswelcomeemail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
*WebhostingApi* | [**gettWebsiteReverseDns**](docs/WebhostingApi.md#gettwebsitereversedns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
*WebhostingApi* | [**postWebsiteBuyIp**](docs/WebhostingApi.md#postwebsitebuyip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
*WebhostingApi* | [**postWebsiteMigration**](docs/WebhostingApi.md#postwebsitemigration) | **POST** /websites/{id}/migration | Request Website Migration
*WebhostingApi* | [**postWebsitesReverseDns**](docs/WebhostingApi.md#postwebsitesreversedns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
*WebhostingApi* | [**putWebsites**](docs/WebhostingApi.md#putwebsites) | **PUT** /websites/order | Validate Webhosting Order
*WebhostingApi* | [**updateWebsiteInfo**](docs/WebhostingApi.md#updatewebsiteinfo) | **POST** /websites/{id} | Update Website Order
*WebhostingApi* | [**webhostingCancel**](docs/WebhostingApi.md#webhostingcancel) | **DELETE** /websites/{id} | Cancel Website

<a name="documentation-for-models"></a>
## Documentation for Models

 - [io.swagger.client.models.Account2faBody](docs/Account2faBody.md)
 - [io.swagger.client.models.Account2faBody1](docs/Account2faBody1.md)
 - [io.swagger.client.models.AccountFeatures](docs/AccountFeatures.md)
 - [io.swagger.client.models.AccountInfo](docs/AccountInfo.md)
 - [io.swagger.client.models.AccountInfoCountryCurrencies](docs/AccountInfoCountryCurrencies.md)
 - [io.swagger.client.models.AccountInfoData](docs/AccountInfoData.md)
 - [io.swagger.client.models.AccountInfoDataCc](docs/AccountInfoDataCc.md)
 - [io.swagger.client.models.AccountInfoDataCcs](docs/AccountInfoDataCcs.md)
 - [io.swagger.client.models.AccountInfoDataEmailSettings](docs/AccountInfoDataEmailSettings.md)
 - [io.swagger.client.models.AccountInfoDataExtra](docs/AccountInfoDataExtra.md)
 - [io.swagger.client.models.AccountInfoDataFraudrecord](docs/AccountInfoDataFraudrecord.md)
 - [io.swagger.client.models.AccountInfoLimits](docs/AccountInfoLimits.md)
 - [io.swagger.client.models.AccountInfoLimitsInner](docs/AccountInfoLimitsInner.md)
 - [io.swagger.client.models.AccountInfoMaxMindResponse](docs/AccountInfoMaxMindResponse.md)
 - [io.swagger.client.models.AccountInfoOauthConfig](docs/AccountInfoOauthConfig.md)
 - [io.swagger.client.models.AccountInfoOauthConfigProviders](docs/AccountInfoOauthConfigProviders.md)
 - [io.swagger.client.models.AccountInfoPost](docs/AccountInfoPost.md)
 - [io.swagger.client.models.AccountSshKey](docs/AccountSshKey.md)
 - [io.swagger.client.models.AffiliateBannerRow](docs/AffiliateBannerRow.md)
 - [io.swagger.client.models.AffiliateDockSetup](docs/AffiliateDockSetup.md)
 - [io.swagger.client.models.AffiliatePaymentSetup](docs/AffiliatePaymentSetup.md)
 - [io.swagger.client.models.AffiliateTrafficRow](docs/AffiliateTrafficRow.md)
 - [io.swagger.client.models.AllOfServerOrderFieldLabelsBandwidth](docs/AllOfServerOrderFieldLabelsBandwidth.md)
 - [io.swagger.client.models.AllOfServerOrderFieldLabelsCp](docs/AllOfServerOrderFieldLabelsCp.md)
 - [io.swagger.client.models.AllOfServerOrderFieldLabelsHd](docs/AllOfServerOrderFieldLabelsHd.md)
 - [io.swagger.client.models.AllOfServerOrderFieldLabelsIps](docs/AllOfServerOrderFieldLabelsIps.md)
 - [io.swagger.client.models.AllOfServerOrderFieldLabelsMemory](docs/AllOfServerOrderFieldLabelsMemory.md)
 - [io.swagger.client.models.AllOfServerOrderFieldLabelsOs](docs/AllOfServerOrderFieldLabelsOs.md)
 - [io.swagger.client.models.AllOfServerOrderFieldLabelsRaid](docs/AllOfServerOrderFieldLabelsRaid.md)
 - [io.swagger.client.models.AssetServer](docs/AssetServer.md)
 - [io.swagger.client.models.Backup](docs/Backup.md)
 - [io.swagger.client.models.BackupBillingDetails](docs/BackupBillingDetails.md)
 - [io.swagger.client.models.BackupClientLink](docs/BackupClientLink.md)
 - [io.swagger.client.models.BackupExtraInfoTables](docs/BackupExtraInfoTables.md)
 - [io.swagger.client.models.BackupIPInfo](docs/BackupIPInfo.md)
 - [io.swagger.client.models.BackupIPInfoRow](docs/BackupIPInfoRow.md)
 - [io.swagger.client.models.BackupLoginResponse](docs/BackupLoginResponse.md)
 - [io.swagger.client.models.BackupOrderPostResponse](docs/BackupOrderPostResponse.md)
 - [io.swagger.client.models.BackupOrderPostResponseCjParams](docs/BackupOrderPostResponseCjParams.md)
 - [io.swagger.client.models.BackupOrderPutRequest](docs/BackupOrderPutRequest.md)
 - [io.swagger.client.models.BackupOrderPutResponse](docs/BackupOrderPutResponse.md)
 - [io.swagger.client.models.BackupRow](docs/BackupRow.md)
 - [io.swagger.client.models.BackupServiceExtra](docs/BackupServiceExtra.md)
 - [io.swagger.client.models.BackupServiceInfo](docs/BackupServiceInfo.md)
 - [io.swagger.client.models.BackupServiceMaster](docs/BackupServiceMaster.md)
 - [io.swagger.client.models.BackupsOrder](docs/BackupsOrder.md)
 - [io.swagger.client.models.BackupsOrderPackageCosts](docs/BackupsOrderPackageCosts.md)
 - [io.swagger.client.models.BackupsOrderServiceTypes](docs/BackupsOrderServiceTypes.md)
 - [io.swagger.client.models.Bandwidth](docs/Bandwidth.md)
 - [io.swagger.client.models.BillingAddCcRequest](docs/BillingAddCcRequest.md)
 - [io.swagger.client.models.BillingInvoiceDetail](docs/BillingInvoiceDetail.md)
 - [io.swagger.client.models.BillingInvoiceList](docs/BillingInvoiceList.md)
 - [io.swagger.client.models.BillingPaymentMethodRequest](docs/BillingPaymentMethodRequest.md)
 - [io.swagger.client.models.BillingPrepayRequest](docs/BillingPrepayRequest.md)
 - [io.swagger.client.models.BillingVerifyCcRequest](docs/BillingVerifyCcRequest.md)
 - [io.swagger.client.models.BuyItNowList](docs/BuyItNowList.md)
 - [io.swagger.client.models.BuyItNowRow](docs/BuyItNowRow.md)
 - [io.swagger.client.models.CaptchaResponse](docs/CaptchaResponse.md)
 - [io.swagger.client.models.ChargeInvoiceRows](docs/ChargeInvoiceRows.md)
 - [io.swagger.client.models.ChargeInvoiceRowsInvoices](docs/ChargeInvoiceRowsInvoices.md)
 - [io.swagger.client.models.ChargeInvoiceRowsPaidInvoices](docs/ChargeInvoiceRowsPaidInvoices.md)
 - [io.swagger.client.models.ChargeInvoiceRowsRefundInvoices](docs/ChargeInvoiceRowsRefundInvoices.md)
 - [io.swagger.client.models.CloseTicketResponseSchema](docs/CloseTicketResponseSchema.md)
 - [io.swagger.client.models.ConfigIds](docs/ConfigIds.md)
 - [io.swagger.client.models.ConfigLists](docs/ConfigLists.md)
 - [io.swagger.client.models.ControlPanel](docs/ControlPanel.md)
 - [io.swagger.client.models.Cpu](docs/Cpu.md)
 - [io.swagger.client.models.CpuWithDefaults](docs/CpuWithDefaults.md)
 - [io.swagger.client.models.CreateFilter](docs/CreateFilter.md)
 - [io.swagger.client.models.CreateFirewallRule](docs/CreateFirewallRule.md)
 - [io.swagger.client.models.CreateGeoFirewallRule](docs/CreateGeoFirewallRule.md)
 - [io.swagger.client.models.Delete_Firewall_Rule](docs/Delete_Firewall_Rule.md)
 - [io.swagger.client.models.Delete_Geo_Firewall_Rule](docs/Delete_Geo_Firewall_Rule.md)
 - [io.swagger.client.models.DenyRuleNew](docs/DenyRuleNew.md)
 - [io.swagger.client.models.DenyRuleRecord](docs/DenyRuleRecord.md)
 - [io.swagger.client.models.DnsListItem](docs/DnsListItem.md)
 - [io.swagger.client.models.DnsNewDomain](docs/DnsNewDomain.md)
 - [io.swagger.client.models.DnsNewRecord](docs/DnsNewRecord.md)
 - [io.swagger.client.models.DnsRecord](docs/DnsRecord.md)
 - [io.swagger.client.models.DnsRecordType](docs/DnsRecordType.md)
 - [io.swagger.client.models.DnsUpdateRecord](docs/DnsUpdateRecord.md)
 - [io.swagger.client.models.Domain](docs/Domain.md)
 - [io.swagger.client.models.DomainAdminContact](docs/DomainAdminContact.md)
 - [io.swagger.client.models.DomainAllInfo](docs/DomainAllInfo.md)
 - [io.swagger.client.models.DomainAllInfoAttributes](docs/DomainAllInfoAttributes.md)
 - [io.swagger.client.models.DomainAllInfoAttributesContactSet](docs/DomainAllInfoAttributesContactSet.md)
 - [io.swagger.client.models.DomainBillingDetails](docs/DomainBillingDetails.md)
 - [io.swagger.client.models.DomainBillingExtra](docs/DomainBillingExtra.md)
 - [io.swagger.client.models.DomainClientLink](docs/DomainClientLink.md)
 - [io.swagger.client.models.DomainContactDetails](docs/DomainContactDetails.md)
 - [io.swagger.client.models.DomainDnssecRecords](docs/DomainDnssecRecords.md)
 - [io.swagger.client.models.DomainDnssecRecordsInner](docs/DomainDnssecRecordsInner.md)
 - [io.swagger.client.models.DomainDnssecRequest](docs/DomainDnssecRequest.md)
 - [io.swagger.client.models.DomainLookupResponse](docs/DomainLookupResponse.md)
 - [io.swagger.client.models.DomainNameServer](docs/DomainNameServer.md)
 - [io.swagger.client.models.DomainNameserverGetResponse](docs/DomainNameserverGetResponse.md)
 - [io.swagger.client.models.DomainNameserverGetResponseInner](docs/DomainNameserverGetResponseInner.md)
 - [io.swagger.client.models.DomainNameserverPostRequest](docs/DomainNameserverPostRequest.md)
 - [io.swagger.client.models.DomainNameserverPutRequest](docs/DomainNameserverPutRequest.md)
 - [io.swagger.client.models.DomainOrder](docs/DomainOrder.md)
 - [io.swagger.client.models.DomainOrderResponse](docs/DomainOrderResponse.md)
 - [io.swagger.client.models.DomainOrderResponseAttributes](docs/DomainOrderResponseAttributes.md)
 - [io.swagger.client.models.DomainOrderServices](docs/DomainOrderServices.md)
 - [io.swagger.client.models.DomainOrderServices10001](docs/DomainOrderServices10001.md)
 - [io.swagger.client.models.DomainOrderTldServices](docs/DomainOrderTldServices.md)
 - [io.swagger.client.models.DomainOwnerContact](docs/DomainOwnerContact.md)
 - [io.swagger.client.models.DomainProvProcessPending](docs/DomainProvProcessPending.md)
 - [io.swagger.client.models.DomainProvProcessPendingAttributes](docs/DomainProvProcessPendingAttributes.md)
 - [io.swagger.client.models.DomainRow](docs/DomainRow.md)
 - [io.swagger.client.models.DomainSearchResponse](docs/DomainSearchResponse.md)
 - [io.swagger.client.models.DomainServiceInfo](docs/DomainServiceInfo.md)
 - [io.swagger.client.models.DomainServiceType](docs/DomainServiceType.md)
 - [io.swagger.client.models.DomainTechContact](docs/DomainTechContact.md)
 - [io.swagger.client.models.DomainWhoisPrivacyRequest](docs/DomainWhoisPrivacyRequest.md)
 - [io.swagger.client.models.EmailAddress](docs/EmailAddress.md)
 - [io.swagger.client.models.EmailAddressName](docs/EmailAddressName.md)
 - [io.swagger.client.models.FieldLabel](docs/FieldLabel.md)
 - [io.swagger.client.models.FormValues](docs/FormValues.md)
 - [io.swagger.client.models.GenericResponse](docs/GenericResponse.md)
 - [io.swagger.client.models.HardDrive](docs/HardDrive.md)
 - [io.swagger.client.models.Home](docs/Home.md)
 - [io.swagger.client.models.HomeDetails](docs/HomeDetails.md)
 - [io.swagger.client.models.HomeDetailsModules](docs/HomeDetailsModules.md)
 - [io.swagger.client.models.HomeDetailsModulesBackups](docs/HomeDetailsModulesBackups.md)
 - [io.swagger.client.models.HomeDetailsModulesDomains](docs/HomeDetailsModulesDomains.md)
 - [io.swagger.client.models.HomeDetailsModulesLicenses](docs/HomeDetailsModulesLicenses.md)
 - [io.swagger.client.models.HomeDetailsModulesQuickservers](docs/HomeDetailsModulesQuickservers.md)
 - [io.swagger.client.models.HomeDetailsModulesServers](docs/HomeDetailsModulesServers.md)
 - [io.swagger.client.models.HomeDetailsModulesVps](docs/HomeDetailsModulesVps.md)
 - [io.swagger.client.models.HomeDetailsModulesWebhosting](docs/HomeDetailsModulesWebhosting.md)
 - [io.swagger.client.models.HomeServices](docs/HomeServices.md)
 - [io.swagger.client.models.HomeServicesBackups](docs/HomeServicesBackups.md)
 - [io.swagger.client.models.HomeServicesDomains](docs/HomeServicesDomains.md)
 - [io.swagger.client.models.HomeServicesDomainsLinks](docs/HomeServicesDomainsLinks.md)
 - [io.swagger.client.models.HomeServicesLicenses](docs/HomeServicesLicenses.md)
 - [io.swagger.client.models.HomeServicesLicensesLinks](docs/HomeServicesLicensesLinks.md)
 - [io.swagger.client.models.HomeServicesServers](docs/HomeServicesServers.md)
 - [io.swagger.client.models.HomeServicesServersLinks](docs/HomeServicesServersLinks.md)
 - [io.swagger.client.models.HomeServicesVps](docs/HomeServicesVps.md)
 - [io.swagger.client.models.HomeServicesVpsLinks](docs/HomeServicesVpsLinks.md)
 - [io.swagger.client.models.HomeServicesWebhosting](docs/HomeServicesWebhosting.md)
 - [io.swagger.client.models.HomeServicesWebhostingLinks](docs/HomeServicesWebhostingLinks.md)
 - [io.swagger.client.models.HomeTicketStatus](docs/HomeTicketStatus.md)
 - [io.swagger.client.models.HomeTicketStatusView](docs/HomeTicketStatusView.md)
 - [io.swagger.client.models.HostnameObject](docs/HostnameObject.md)
 - [io.swagger.client.models.IdBackupsBody](docs/IdBackupsBody.md)
 - [io.swagger.client.models.IdBackupsBody1](docs/IdBackupsBody1.md)
 - [io.swagger.client.models.IdBackupsBody2](docs/IdBackupsBody2.md)
 - [io.swagger.client.models.IdBackupsBody3](docs/IdBackupsBody3.md)
 - [io.swagger.client.models.IdBuyIpBody](docs/IdBuyIpBody.md)
 - [io.swagger.client.models.IdBuyIpBody1](docs/IdBuyIpBody1.md)
 - [io.swagger.client.models.IdMigrationBody](docs/IdMigrationBody.md)
 - [io.swagger.client.models.IdMigrationBody1](docs/IdMigrationBody1.md)
 - [io.swagger.client.models.InlineResponse200](docs/InlineResponse200.md)
 - [io.swagger.client.models.InlineResponse2001](docs/InlineResponse2001.md)
 - [io.swagger.client.models.InlineResponse20010](docs/InlineResponse20010.md)
 - [io.swagger.client.models.InlineResponse20011](docs/InlineResponse20011.md)
 - [io.swagger.client.models.InlineResponse20012](docs/InlineResponse20012.md)
 - [io.swagger.client.models.InlineResponse20012BillingDetails](docs/InlineResponse20012BillingDetails.md)
 - [io.swagger.client.models.InlineResponse20012ClientLinks](docs/InlineResponse20012ClientLinks.md)
 - [io.swagger.client.models.InlineResponse20012ExtraInfoTables](docs/InlineResponse20012ExtraInfoTables.md)
 - [io.swagger.client.models.InlineResponse20012ExtraInfoTablesScrubIps](docs/InlineResponse20012ExtraInfoTablesScrubIps.md)
 - [io.swagger.client.models.InlineResponse20012ExtraInfoTablesScrubIpsRows](docs/InlineResponse20012ExtraInfoTablesScrubIpsRows.md)
 - [io.swagger.client.models.InlineResponse20012FilterFirewall](docs/InlineResponse20012FilterFirewall.md)
 - [io.swagger.client.models.InlineResponse20012FilterFirewallFilters](docs/InlineResponse20012FilterFirewallFilters.md)
 - [io.swagger.client.models.InlineResponse20012FilterFirewallRules](docs/InlineResponse20012FilterFirewallRules.md)
 - [io.swagger.client.models.InlineResponse20012ServiceInfo](docs/InlineResponse20012ServiceInfo.md)
 - [io.swagger.client.models.InlineResponse20013](docs/InlineResponse20013.md)
 - [io.swagger.client.models.InlineResponse20014](docs/InlineResponse20014.md)
 - [io.swagger.client.models.InlineResponse20015](docs/InlineResponse20015.md)
 - [io.swagger.client.models.InlineResponse20016](docs/InlineResponse20016.md)
 - [io.swagger.client.models.InlineResponse20017](docs/InlineResponse20017.md)
 - [io.swagger.client.models.InlineResponse20018](docs/InlineResponse20018.md)
 - [io.swagger.client.models.InlineResponse20018Ips](docs/InlineResponse20018Ips.md)
 - [io.swagger.client.models.InlineResponse20018PackageCosts](docs/InlineResponse20018PackageCosts.md)
 - [io.swagger.client.models.InlineResponse20018ServiceTypes](docs/InlineResponse20018ServiceTypes.md)
 - [io.swagger.client.models.InlineResponse20019](docs/InlineResponse20019.md)
 - [io.swagger.client.models.InlineResponse2002](docs/InlineResponse2002.md)
 - [io.swagger.client.models.InlineResponse20020](docs/InlineResponse20020.md)
 - [io.swagger.client.models.InlineResponse20021](docs/InlineResponse20021.md)
 - [io.swagger.client.models.InlineResponse20022](docs/InlineResponse20022.md)
 - [io.swagger.client.models.InlineResponse20023](docs/InlineResponse20023.md)
 - [io.swagger.client.models.InlineResponse20024](docs/InlineResponse20024.md)
 - [io.swagger.client.models.InlineResponse20025](docs/InlineResponse20025.md)
 - [io.swagger.client.models.InlineResponse20026](docs/InlineResponse20026.md)
 - [io.swagger.client.models.InlineResponse20026Bandwidth](docs/InlineResponse20026Bandwidth.md)
 - [io.swagger.client.models.InlineResponse20026Cp](docs/InlineResponse20026Cp.md)
 - [io.swagger.client.models.InlineResponse20026Ips](docs/InlineResponse20026Ips.md)
 - [io.swagger.client.models.InlineResponse20026Os](docs/InlineResponse20026Os.md)
 - [io.swagger.client.models.InlineResponse20026Raid](docs/InlineResponse20026Raid.md)
 - [io.swagger.client.models.InlineResponse2003](docs/InlineResponse2003.md)
 - [io.swagger.client.models.InlineResponse2004](docs/InlineResponse2004.md)
 - [io.swagger.client.models.InlineResponse2005](docs/InlineResponse2005.md)
 - [io.swagger.client.models.InlineResponse2006](docs/InlineResponse2006.md)
 - [io.swagger.client.models.InlineResponse2007](docs/InlineResponse2007.md)
 - [io.swagger.client.models.InlineResponse2008](docs/InlineResponse2008.md)
 - [io.swagger.client.models.InlineResponse2009](docs/InlineResponse2009.md)
 - [io.swagger.client.models.InlineResponse201](docs/InlineResponse201.md)
 - [io.swagger.client.models.InlineResponse2011](docs/InlineResponse2011.md)
 - [io.swagger.client.models.InlineResponse2012](docs/InlineResponse2012.md)
 - [io.swagger.client.models.InlineResponse2012OrderDetails](docs/InlineResponse2012OrderDetails.md)
 - [io.swagger.client.models.InlineResponse2012OrderDetailsCjParams](docs/InlineResponse2012OrderDetailsCjParams.md)
 - [io.swagger.client.models.InlineResponse400](docs/InlineResponse400.md)
 - [io.swagger.client.models.InlineResponse4001](docs/InlineResponse4001.md)
 - [io.swagger.client.models.InlineResponse4002](docs/InlineResponse4002.md)
 - [io.swagger.client.models.InlineResponse4003](docs/InlineResponse4003.md)
 - [io.swagger.client.models.InlineResponse4004](docs/InlineResponse4004.md)
 - [io.swagger.client.models.InlineResponse4005](docs/InlineResponse4005.md)
 - [io.swagger.client.models.InlineResponse401](docs/InlineResponse401.md)
 - [io.swagger.client.models.InlineResponse500](docs/InlineResponse500.md)
 - [io.swagger.client.models.InlineResponse5001](docs/InlineResponse5001.md)
 - [io.swagger.client.models.InlineResponse5002](docs/InlineResponse5002.md)
 - [io.swagger.client.models.InlineResponse5003](docs/InlineResponse5003.md)
 - [io.swagger.client.models.InlineResponse5004](docs/InlineResponse5004.md)
 - [io.swagger.client.models.InlineResponse5005](docs/InlineResponse5005.md)
 - [io.swagger.client.models.Invoice](docs/Invoice.md)
 - [io.swagger.client.models.InvoiceRow](docs/InvoiceRow.md)
 - [io.swagger.client.models.IpBlock](docs/IpBlock.md)
 - [io.swagger.client.models.IpLimitRange](docs/IpLimitRange.md)
 - [io.swagger.client.models.IpObject](docs/IpObject.md)
 - [io.swagger.client.models.License](docs/License.md)
 - [io.swagger.client.models.LicenseBillingDetails](docs/LicenseBillingDetails.md)
 - [io.swagger.client.models.LicenseClientLink](docs/LicenseClientLink.md)
 - [io.swagger.client.models.LicenseExtraInfoTables](docs/LicenseExtraInfoTables.md)
 - [io.swagger.client.models.LicenseIpInfo](docs/LicenseIpInfo.md)
 - [io.swagger.client.models.LicenseIpInfoRow](docs/LicenseIpInfoRow.md)
 - [io.swagger.client.models.LicenseRow](docs/LicenseRow.md)
 - [io.swagger.client.models.LicenseServiceInfo](docs/LicenseServiceInfo.md)
 - [io.swagger.client.models.LicenseServiceType](docs/LicenseServiceType.md)
 - [io.swagger.client.models.LicensesOrder](docs/LicensesOrder.md)
 - [io.swagger.client.models.LicensesOrderPackageCosts](docs/LicensesOrderPackageCosts.md)
 - [io.swagger.client.models.LicensesOrderServiceCategories](docs/LicensesOrderServiceCategories.md)
 - [io.swagger.client.models.LicensesOrderServiceCategories509](docs/LicensesOrderServiceCategories509.md)
 - [io.swagger.client.models.LicensesOrderServiceTypes](docs/LicensesOrderServiceTypes.md)
 - [io.swagger.client.models.LicensesOrderServiceTypes11482](docs/LicensesOrderServiceTypes11482.md)
 - [io.swagger.client.models.LoginErrorResponse](docs/LoginErrorResponse.md)
 - [io.swagger.client.models.LoginInfo](docs/LoginInfo.md)
 - [io.swagger.client.models.LoginServiceCounts](docs/LoginServiceCounts.md)
 - [io.swagger.client.models.LoginSubmissionExample](docs/LoginSubmissionExample.md)
 - [io.swagger.client.models.LoginSubmissionExampleGrecaptcharesponse](docs/LoginSubmissionExampleGrecaptcharesponse.md)
 - [io.swagger.client.models.LoginSubmissionExampleGrecaptcharesponseDep](docs/LoginSubmissionExampleGrecaptcharesponseDep.md)
 - [io.swagger.client.models.LoginSuccessResponse](docs/LoginSuccessResponse.md)
 - [io.swagger.client.models.MailAlertRequest](docs/MailAlertRequest.md)
 - [io.swagger.client.models.MailAlertUpdateRequest](docs/MailAlertUpdateRequest.md)
 - [io.swagger.client.models.MailAlertsResponse](docs/MailAlertsResponse.md)
 - [io.swagger.client.models.MailAlertsResponseInner](docs/MailAlertsResponseInner.md)
 - [io.swagger.client.models.MailAttachment](docs/MailAttachment.md)
 - [io.swagger.client.models.MailBillingDetails](docs/MailBillingDetails.md)
 - [io.swagger.client.models.MailBlockClickHouse](docs/MailBlockClickHouse.md)
 - [io.swagger.client.models.MailBlockRspamd](docs/MailBlockRspamd.md)
 - [io.swagger.client.models.MailBlocks](docs/MailBlocks.md)
 - [io.swagger.client.models.MailClientLink](docs/MailClientLink.md)
 - [io.swagger.client.models.MailDelistRequest](docs/MailDelistRequest.md)
 - [io.swagger.client.models.MailDelistResponse](docs/MailDelistResponse.md)
 - [io.swagger.client.models.MailDeliverabilityResponse](docs/MailDeliverabilityResponse.md)
 - [io.swagger.client.models.MailExtraInfoTable](docs/MailExtraInfoTable.md)
 - [io.swagger.client.models.MailExtraInfoTableRow](docs/MailExtraInfoTableRow.md)
 - [io.swagger.client.models.MailLog](docs/MailLog.md)
 - [io.swagger.client.models.MailLogEntry](docs/MailLogEntry.md)
 - [io.swagger.client.models.MailOrder](docs/MailOrder.md)
 - [io.swagger.client.models.MailRow](docs/MailRow.md)
 - [io.swagger.client.models.MailSchema](docs/MailSchema.md)
 - [io.swagger.client.models.MailSchemaExtraInfoTables](docs/MailSchemaExtraInfoTables.md)
 - [io.swagger.client.models.MailServiceInfo](docs/MailServiceInfo.md)
 - [io.swagger.client.models.MailServiceType](docs/MailServiceType.md)
 - [io.swagger.client.models.MailStatsType](docs/MailStatsType.md)
 - [io.swagger.client.models.MailStatsTypeVolume](docs/MailStatsTypeVolume.md)
 - [io.swagger.client.models.MailStatsTypeVolumeFrom](docs/MailStatsTypeVolumeFrom.md)
 - [io.swagger.client.models.MailStatsTypeVolumeIp](docs/MailStatsTypeVolumeIp.md)
 - [io.swagger.client.models.MailStatsTypeVolumeTo](docs/MailStatsTypeVolumeTo.md)
 - [io.swagger.client.models.MailTutorialsTable](docs/MailTutorialsTable.md)
 - [io.swagger.client.models.MailTutorialsTableRow](docs/MailTutorialsTableRow.md)
 - [io.swagger.client.models.MemoryOption](docs/MemoryOption.md)
 - [io.swagger.client.models.ModuleSettings](docs/ModuleSettings.md)
 - [io.swagger.client.models.Modules](docs/Modules.md)
 - [io.swagger.client.models.MonthlyCounts](docs/MonthlyCounts.md)
 - [io.swagger.client.models.OauthBody](docs/OauthBody.md)
 - [io.swagger.client.models.OauthBody1](docs/OauthBody1.md)
 - [io.swagger.client.models.OauthBody2](docs/OauthBody2.md)
 - [io.swagger.client.models.OauthBody3](docs/OauthBody3.md)
 - [io.swagger.client.models.OneOfAccountInfoMaxMindResponseRiskScore](docs/OneOfAccountInfoMaxMindResponseRiskScore.md)
 - [io.swagger.client.models.OneOfAccountInfoOauthproviders](docs/OneOfAccountInfoOauthproviders.md)
 - [io.swagger.client.models.OneOfAssetServerBandwidthItems](docs/OneOfAssetServerBandwidthItems.md)
 - [io.swagger.client.models.OneOfAssetServerCPUItems](docs/OneOfAssetServerCPUItems.md)
 - [io.swagger.client.models.OneOfAssetServerIPsItems](docs/OneOfAssetServerIPsItems.md)
 - [io.swagger.client.models.OneOfAssetServerMemoryItems](docs/OneOfAssetServerMemoryItems.md)
 - [io.swagger.client.models.OneOfBuyItNowRowCpuItems](docs/OneOfBuyItNowRowCpuItems.md)
 - [io.swagger.client.models.OneOfVPSTrafficDataDataSectionResponseItems](docs/OneOfVPSTrafficDataDataSectionResponseItems.md)
 - [io.swagger.client.models.OneOfVpsTrafficHistorySectionDataResponseItems](docs/OneOfVpsTrafficHistorySectionDataResponseItems.md)
 - [io.swagger.client.models.OperatingSystem](docs/OperatingSystem.md)
 - [io.swagger.client.models.OrderBuyNowServerBody](docs/OrderBuyNowServerBody.md)
 - [io.swagger.client.models.PasswordRequest](docs/PasswordRequest.md)
 - [io.swagger.client.models.PaymentInvoiceRows](docs/PaymentInvoiceRows.md)
 - [io.swagger.client.models.QueueResponse](docs/QueueResponse.md)
 - [io.swagger.client.models.Quickserver](docs/Quickserver.md)
 - [io.swagger.client.models.QuickserverAddons](docs/QuickserverAddons.md)
 - [io.swagger.client.models.QuickserverAddonsRow](docs/QuickserverAddonsRow.md)
 - [io.swagger.client.models.QuickserverBillingDetails](docs/QuickserverBillingDetails.md)
 - [io.swagger.client.models.QuickserverClientLink](docs/QuickserverClientLink.md)
 - [io.swagger.client.models.QuickserverExtraInfoTables](docs/QuickserverExtraInfoTables.md)
 - [io.swagger.client.models.QuickserverIpInfo](docs/QuickserverIpInfo.md)
 - [io.swagger.client.models.QuickserverIpTableRow](docs/QuickserverIpTableRow.md)
 - [io.swagger.client.models.QuickserverOrder](docs/QuickserverOrder.md)
 - [io.swagger.client.models.QuickserverOrderDistroSel](docs/QuickserverOrderDistroSel.md)
 - [io.swagger.client.models.QuickserverOrderDistroSelUbuntu](docs/QuickserverOrderDistroSelUbuntu.md)
 - [io.swagger.client.models.QuickserverOrderServerDetails](docs/QuickserverOrderServerDetails.md)
 - [io.swagger.client.models.QuickserverOrderServerDetails381](docs/QuickserverOrderServerDetails381.md)
 - [io.swagger.client.models.QuickserverOrderTemplates](docs/QuickserverOrderTemplates.md)
 - [io.swagger.client.models.QuickserverOrderTemplatesUbuntu64](docs/QuickserverOrderTemplatesUbuntu64.md)
 - [io.swagger.client.models.QuickserverOrderVersion](docs/QuickserverOrderVersion.md)
 - [io.swagger.client.models.QuickserverOrderVersionCentosstream8](docs/QuickserverOrderVersionCentosstream8.md)
 - [io.swagger.client.models.QuickserverRow](docs/QuickserverRow.md)
 - [io.swagger.client.models.QuickserverServiceExtra](docs/QuickserverServiceExtra.md)
 - [io.swagger.client.models.QuickserverServiceInfo](docs/QuickserverServiceInfo.md)
 - [io.swagger.client.models.QuickserverServiceMaster](docs/QuickserverServiceMaster.md)
 - [io.swagger.client.models.RaidOption](docs/RaidOption.md)
 - [io.swagger.client.models.Region](docs/Region.md)
 - [io.swagger.client.models.ReplyTicketRequest](docs/ReplyTicketRequest.md)
 - [io.swagger.client.models.ReplyTicketResponseSchema](docs/ReplyTicketResponseSchema.md)
 - [io.swagger.client.models.RestoreRequest](docs/RestoreRequest.md)
 - [io.swagger.client.models.ReverseDnsEntries](docs/ReverseDnsEntries.md)
 - [io.swagger.client.models.ScrubIpFilterTypes](docs/ScrubIpFilterTypes.md)
 - [io.swagger.client.models.ScrubIpFilterTypesFilters](docs/ScrubIpFilterTypesFilters.md)
 - [io.swagger.client.models.ScrubIpPlaceOrder](docs/ScrubIpPlaceOrder.md)
 - [io.swagger.client.models.ScrubIpsLogRowSchema](docs/ScrubIpsLogRowSchema.md)
 - [io.swagger.client.models.ScrubIpsRowSchema](docs/ScrubIpsRowSchema.md)
 - [io.swagger.client.models.SearchAutocompleteResponse](docs/SearchAutocompleteResponse.md)
 - [io.swagger.client.models.SendMail](docs/SendMail.md)
 - [io.swagger.client.models.SendMailAdv](docs/SendMailAdv.md)
 - [io.swagger.client.models.Server](docs/Server.md)
 - [io.swagger.client.models.ServerAsset](docs/ServerAsset.md)
 - [io.swagger.client.models.ServerAssets](docs/ServerAssets.md)
 - [io.swagger.client.models.ServerBillingDetails](docs/ServerBillingDetails.md)
 - [io.swagger.client.models.ServerClientLink](docs/ServerClientLink.md)
 - [io.swagger.client.models.ServerExtraInfoTables](docs/ServerExtraInfoTables.md)
 - [io.swagger.client.models.ServerIpmiLiveInfo](docs/ServerIpmiLiveInfo.md)
 - [io.swagger.client.models.ServerIpmiLiveRequest](docs/ServerIpmiLiveRequest.md)
 - [io.swagger.client.models.ServerIpmiPowerRequest](docs/ServerIpmiPowerRequest.md)
 - [io.swagger.client.models.ServerLease](docs/ServerLease.md)
 - [io.swagger.client.models.ServerLocation1](docs/ServerLocation1.md)
 - [io.swagger.client.models.ServerLocations](docs/ServerLocations.md)
 - [io.swagger.client.models.ServerNetworkInfo](docs/ServerNetworkInfo.md)
 - [io.swagger.client.models.ServerNetworkInfoAssets](docs/ServerNetworkInfoAssets.md)
 - [io.swagger.client.models.ServerNetworkInfoSwitchports](docs/ServerNetworkInfoSwitchports.md)
 - [io.swagger.client.models.ServerOrder](docs/ServerOrder.md)
 - [io.swagger.client.models.ServerOrderBandwidth](docs/ServerOrderBandwidth.md)
 - [io.swagger.client.models.ServerOrderBandwidthLi](docs/ServerOrderBandwidthLi.md)
 - [io.swagger.client.models.ServerOrderCPU](docs/ServerOrderCPU.md)
 - [io.swagger.client.models.ServerOrderConfigIds](docs/ServerOrderConfigIds.md)
 - [io.swagger.client.models.ServerOrderControlPanel](docs/ServerOrderControlPanel.md)
 - [io.swagger.client.models.ServerOrderCpLi](docs/ServerOrderCpLi.md)
 - [io.swagger.client.models.ServerOrderCpuLi](docs/ServerOrderCpuLi.md)
 - [io.swagger.client.models.ServerOrderFieldLabel](docs/ServerOrderFieldLabel.md)
 - [io.swagger.client.models.ServerOrderFieldLabels](docs/ServerOrderFieldLabels.md)
 - [io.swagger.client.models.ServerOrderFormValues](docs/ServerOrderFormValues.md)
 - [io.swagger.client.models.ServerOrderGetResponse](docs/ServerOrderGetResponse.md)
 - [io.swagger.client.models.ServerOrderIP](docs/ServerOrderIP.md)
 - [io.swagger.client.models.ServerOrderIpsLi](docs/ServerOrderIpsLi.md)
 - [io.swagger.client.models.ServerOrderMemory](docs/ServerOrderMemory.md)
 - [io.swagger.client.models.ServerOrderMemoryLi](docs/ServerOrderMemoryLi.md)
 - [io.swagger.client.models.ServerOrderMemoryLi254](docs/ServerOrderMemoryLi254.md)
 - [io.swagger.client.models.ServerOrderOS](docs/ServerOrderOS.md)
 - [io.swagger.client.models.ServerOrderOsLi](docs/ServerOrderOsLi.md)
 - [io.swagger.client.models.ServerOrderRAID](docs/ServerOrderRAID.md)
 - [io.swagger.client.models.ServerRow](docs/ServerRow.md)
 - [io.swagger.client.models.ServerServiceInfo](docs/ServerServiceInfo.md)
 - [io.swagger.client.models.ServerSwitchport](docs/ServerSwitchport.md)
 - [io.swagger.client.models.ServersBuyNowError](docs/ServersBuyNowError.md)
 - [io.swagger.client.models.ServersBuyNowResponse](docs/ServersBuyNowResponse.md)
 - [io.swagger.client.models.ServersBuyNowResponseOrderDetails](docs/ServersBuyNowResponseOrderDetails.md)
 - [io.swagger.client.models.Service](docs/Service.md)
 - [io.swagger.client.models.ServiceCategories](docs/ServiceCategories.md)
 - [io.swagger.client.models.ServiceCategory](docs/ServiceCategory.md)
 - [io.swagger.client.models.ServiceType](docs/ServiceType.md)
 - [io.swagger.client.models.ServiceTypes](docs/ServiceTypes.md)
 - [io.swagger.client.models.Services](docs/Services.md)
 - [io.swagger.client.models.ServicesInfo](docs/ServicesInfo.md)
 - [io.swagger.client.models.StatusMonthlyBreakdown](docs/StatusMonthlyBreakdown.md)
 - [io.swagger.client.models.SuccessTextResponse](docs/SuccessTextResponse.md)
 - [io.swagger.client.models.TemplateRequest](docs/TemplateRequest.md)
 - [io.swagger.client.models.TextResponse](docs/TextResponse.md)
 - [io.swagger.client.models.TicketCustomFieldDetails](docs/TicketCustomFieldDetails.md)
 - [io.swagger.client.models.TicketDetails](docs/TicketDetails.md)
 - [io.swagger.client.models.TicketNew](docs/TicketNew.md)
 - [io.swagger.client.models.TicketNewResponse](docs/TicketNewResponse.md)
 - [io.swagger.client.models.TicketPostDetails](docs/TicketPostDetails.md)
 - [io.swagger.client.models.TicketPostDetailsInner](docs/TicketPostDetailsInner.md)
 - [io.swagger.client.models.Tickets](docs/Tickets.md)
 - [io.swagger.client.models.TicketsCountArray](docs/TicketsCountArray.md)
 - [io.swagger.client.models.TicketsRow](docs/TicketsRow.md)
 - [io.swagger.client.models.TimezoneUpdate](docs/TimezoneUpdate.md)
 - [io.swagger.client.models.UpdateTicket](docs/UpdateTicket.md)
 - [io.swagger.client.models.UpdateTicketResponseSchema](docs/UpdateTicketResponseSchema.md)
 - [io.swagger.client.models.UrlRequest](docs/UrlRequest.md)
 - [io.swagger.client.models.VPSTrafficDataDataSectionResponse](docs/VPSTrafficDataDataSectionResponse.md)
 - [io.swagger.client.models.ViewTicketResponse](docs/ViewTicketResponse.md)
 - [io.swagger.client.models.Vps](docs/Vps.md)
 - [io.swagger.client.models.VpsBackupRow](docs/VpsBackupRow.md)
 - [io.swagger.client.models.VpsBackupRows](docs/VpsBackupRows.md)
 - [io.swagger.client.models.VpsBillingDetails](docs/VpsBillingDetails.md)
 - [io.swagger.client.models.VpsCPData](docs/VpsCPData.md)
 - [io.swagger.client.models.VpsClientLink](docs/VpsClientLink.md)
 - [io.swagger.client.models.VpsDAData](docs/VpsDAData.md)
 - [io.swagger.client.models.VpsDALicense](docs/VpsDALicense.md)
 - [io.swagger.client.models.VpsExtraInfoTables](docs/VpsExtraInfoTables.md)
 - [io.swagger.client.models.VpsIPInfo](docs/VpsIPInfo.md)
 - [io.swagger.client.models.VpsIPInfoRow](docs/VpsIPInfoRow.md)
 - [io.swagger.client.models.VpsOrder](docs/VpsOrder.md)
 - [io.swagger.client.models.VpsOrderLocationNames](docs/VpsOrderLocationNames.md)
 - [io.swagger.client.models.VpsOrderLocationStock](docs/VpsOrderLocationStock.md)
 - [io.swagger.client.models.VpsOrderLocationStock1](docs/VpsOrderLocationStock1.md)
 - [io.swagger.client.models.VpsOrderOsNames](docs/VpsOrderOsNames.md)
 - [io.swagger.client.models.VpsOrderPackageCosts](docs/VpsOrderPackageCosts.md)
 - [io.swagger.client.models.VpsOrderPlatformNames](docs/VpsOrderPlatformNames.md)
 - [io.swagger.client.models.VpsOrderPlatformPackages](docs/VpsOrderPlatformPackages.md)
 - [io.swagger.client.models.VpsOrderPostRequest](docs/VpsOrderPostRequest.md)
 - [io.swagger.client.models.VpsOrderPutRequest](docs/VpsOrderPutRequest.md)
 - [io.swagger.client.models.VpsOrderPutResponse](docs/VpsOrderPutResponse.md)
 - [io.swagger.client.models.VpsOrderServiceTypes](docs/VpsOrderServiceTypes.md)
 - [io.swagger.client.models.VpsOrderServiceTypes32](docs/VpsOrderServiceTypes32.md)
 - [io.swagger.client.models.VpsOrderTemplates](docs/VpsOrderTemplates.md)
 - [io.swagger.client.models.VpsOrderTemplatesHyperv](docs/VpsOrderTemplatesHyperv.md)
 - [io.swagger.client.models.VpsOrderTemplatesHypervWindows](docs/VpsOrderTemplatesHypervWindows.md)
 - [io.swagger.client.models.VpsPlesk12Data](docs/VpsPlesk12Data.md)
 - [io.swagger.client.models.VpsPleskLicense](docs/VpsPleskLicense.md)
 - [io.swagger.client.models.VpsRow](docs/VpsRow.md)
 - [io.swagger.client.models.VpsServiceAddons](docs/VpsServiceAddons.md)
 - [io.swagger.client.models.VpsServiceExtra](docs/VpsServiceExtra.md)
 - [io.swagger.client.models.VpsServiceInfo](docs/VpsServiceInfo.md)
 - [io.swagger.client.models.VpsServiceMaster](docs/VpsServiceMaster.md)
 - [io.swagger.client.models.VpsSnapshot](docs/VpsSnapshot.md)
 - [io.swagger.client.models.VpsTemplateRow](docs/VpsTemplateRow.md)
 - [io.swagger.client.models.VpsTemplatesList](docs/VpsTemplatesList.md)
 - [io.swagger.client.models.VpsTrafficDataDataResponse](docs/VpsTrafficDataDataResponse.md)
 - [io.swagger.client.models.VpsTrafficDataSectionResponse](docs/VpsTrafficDataSectionResponse.md)
 - [io.swagger.client.models.VpsTrafficHistoryResponse](docs/VpsTrafficHistoryResponse.md)
 - [io.swagger.client.models.VpsTrafficHistorySectionDataResponse](docs/VpsTrafficHistorySectionDataResponse.md)
 - [io.swagger.client.models.VpsTrafficHistorySectionResponse](docs/VpsTrafficHistorySectionResponse.md)
 - [io.swagger.client.models.VpsTrafficResponse](docs/VpsTrafficResponse.md)
 - [io.swagger.client.models.VpsTrafficTotalsResposne](docs/VpsTrafficTotalsResposne.md)
 - [io.swagger.client.models.VpsTrafficTotalsSectionResponse](docs/VpsTrafficTotalsSectionResponse.md)
 - [io.swagger.client.models.VpsTrafficUsageAverageResponse](docs/VpsTrafficUsageAverageResponse.md)
 - [io.swagger.client.models.VpsTrafficUsageAverageSectionResponse](docs/VpsTrafficUsageAverageSectionResponse.md)
 - [io.swagger.client.models.VpsTrafficUsageResponse](docs/VpsTrafficUsageResponse.md)
 - [io.swagger.client.models.Website](docs/Website.md)
 - [io.swagger.client.models.WebsiteBackups](docs/WebsiteBackups.md)
 - [io.swagger.client.models.WebsiteBackupsInner](docs/WebsiteBackupsInner.md)
 - [io.swagger.client.models.WebsiteBillingDetails](docs/WebsiteBillingDetails.md)
 - [io.swagger.client.models.WebsiteClientLink](docs/WebsiteClientLink.md)
 - [io.swagger.client.models.WebsiteExtraInfoTables](docs/WebsiteExtraInfoTables.md)
 - [io.swagger.client.models.WebsiteLoginResponse](docs/WebsiteLoginResponse.md)
 - [io.swagger.client.models.WebsiteRow](docs/WebsiteRow.md)
 - [io.swagger.client.models.WebsiteServiceExtra](docs/WebsiteServiceExtra.md)
 - [io.swagger.client.models.WebsiteServiceInfo](docs/WebsiteServiceInfo.md)
 - [io.swagger.client.models.WebsiteServiceMaster](docs/WebsiteServiceMaster.md)
 - [io.swagger.client.models.WebsiteTable](docs/WebsiteTable.md)
 - [io.swagger.client.models.WebsiteTableRow](docs/WebsiteTableRow.md)
 - [io.swagger.client.models.WebsitesOrder](docs/WebsitesOrder.md)
 - [io.swagger.client.models.WebsitesOrderJsonServiceOffers](docs/WebsitesOrderJsonServiceOffers.md)
 - [io.swagger.client.models.WebsitesOrderJsonServiceOffersItem](docs/WebsitesOrderJsonServiceOffersItem.md)
 - [io.swagger.client.models.WebsitesOrderJsonServices](docs/WebsitesOrderJsonServices.md)
 - [io.swagger.client.models.WebsitesOrderPackages](docs/WebsitesOrderPackages.md)
 - [io.swagger.client.models.WebsitesOrderPackagesInfo](docs/WebsitesOrderPackagesInfo.md)
 - [io.swagger.client.models.WebsitesOrderPackges](docs/WebsitesOrderPackges.md)
 - [io.swagger.client.models.WebsitesOrderServiceOffer](docs/WebsitesOrderServiceOffer.md)
 - [io.swagger.client.models.WebsitesOrderServiceOffers](docs/WebsitesOrderServiceOffers.md)
 - [io.swagger.client.models.WebsitesOrderServiceTypes](docs/WebsitesOrderServiceTypes.md)

<a name="documentation-for-authorization"></a>
## Documentation for Authorization

<a name="apiKeyAuth"></a>
### apiKeyAuth


<a name="sessionIdCookieAuth"></a>
### sessionIdCookieAuth


<a name="sessionIdHeaderAuth"></a>
### sessionIdHeaderAuth


