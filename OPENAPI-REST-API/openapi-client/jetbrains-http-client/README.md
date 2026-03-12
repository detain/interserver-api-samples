# InterServer Management API - Jetbrains API Client

## General API description

# Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the &#x60;X-API-KEY&#x60; request header:  &#x60;&#x60;&#x60; X-API-KEY: your-api-key-here &#x60;&#x60;&#x60;  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a &#x60;POST&#x60; request to &#x60;/login&#x60; with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the &#x60;sessionid&#x60; header on subsequent requests:  &#x60;&#x60;&#x60; sessionid: your-session-id-here &#x60;&#x60;&#x60;  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  

* API basepath : [https://my.interserver.net/apiv2](https://my.interserver.net/apiv2)
* Version : 0.9.0

## Documentation for API Endpoints

All URIs are relative to *https://my.interserver.net/apiv2*, but will link to the `.http` file that contains the endpoint definition.
There may be multiple requests for a single endpoint, one for each example described in the OpenAPI specification.

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AccountApi* | [**changeAccountUsername**](Apis/AccountApi.http#changeaccountusername) | **POST** /account/username | Change Account Username
*AccountApi* | [**deleteAccountOauthName**](Apis/AccountApi.http#deleteaccountoauthname) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
*AccountApi* | [**deleteAccountTfa**](Apis/AccountApi.http#deleteaccounttfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
*AccountApi* | [**deleteIpLimit**](Apis/AccountApi.http#deleteiplimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
*AccountApi* | [**getAccountInfo**](Apis/AccountApi.http#getaccountinfo) | **GET** /account | Retrieve Account Details
*AccountApi* | [**getAccountTfaSetup**](Apis/AccountApi.http#getaccounttfasetup) | **GET** /account/2fa | Get Two-Factor Setup Data
*AccountApi* | [**getHome**](Apis/AccountApi.http#gethome) | **GET** /home | Get Home Data
*AccountApi* | [**getSearch**](Apis/AccountApi.http#getsearch) | **GET** /search | Search Autocomplete
*AccountApi* | [**logout**](Apis/AccountApi.http#logout) | **GET** /logout | Log Out
*AccountApi* | [**logoutAccountOauth**](Apis/AccountApi.http#logoutaccountoauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
*AccountApi* | [**updateAccountApiKey**](Apis/AccountApi.http#updateaccountapikey) | **POST** /account/apikey | Generate New API Key
*AccountApi* | [**updateAccountFeatures**](Apis/AccountApi.http#updateaccountfeatures) | **POST** /account/features | Update Account Feature Flags
*AccountApi* | [**updateAccountInfo**](Apis/AccountApi.http#updateaccountinfo) | **POST** /account | Update Account Information
*AccountApi* | [**updateAccountIpLimits**](Apis/AccountApi.http#updateaccountiplimits) | **POST** /account/iplimits | Add IP Access Restriction
*AccountApi* | [**updateAccountPassword**](Apis/AccountApi.http#updateaccountpassword) | **POST** /account/password | Change Account Password
*AccountApi* | [**updateAccountSshKey**](Apis/AccountApi.http#updateaccountsshkey) | **POST** /account/sshkey | Update SSH Keys
*AccountApi* | [**updateAccountTfa**](Apis/AccountApi.http#updateaccounttfa) | **POST** /account/2fa | Enable Two-Factor Authentication
*BackupsApi* | [**addBackup**](Apis/BackupsApi.http#addbackup) | **POST** /backups/order | Place Backup Order
*BackupsApi* | [**cancelBackup**](Apis/BackupsApi.http#cancelbackup) | **DELETE** /backups/{id} | Cancel Backup Service
*BackupsApi* | [**getBackupInfo**](Apis/BackupsApi.http#getbackupinfo) | **GET** /backups/{id} | Get Backup Service Details
*BackupsApi* | [**getBackupInvoices**](Apis/BackupsApi.http#getbackupinvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
*BackupsApi* | [**getBackupLogin**](Apis/BackupsApi.http#getbackuplogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
*BackupsApi* | [**getBackupsList**](Apis/BackupsApi.http#getbackupslist) | **GET** /backups | List Backup Services
*BackupsApi* | [**getBackupsWelcomeEmail**](Apis/BackupsApi.http#getbackupswelcomeemail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
*BackupsApi* | [**getNewBackup**](Apis/BackupsApi.http#getnewbackup) | **GET** /backups/order | Get Backup Order Form Data
*BackupsApi* | [**updateBackupInfo**](Apis/BackupsApi.http#updatebackupinfo) | **POST** /backups/{id} | Update Backup Information
*BackupsApi* | [**validateBackupOrder**](Apis/BackupsApi.http#validatebackuporder) | **PUT** /backups/order | Validate Backup Order
*BillingApi* | [**addAccountCreditCard**](Apis/BillingApi.http#addaccountcreditcard) | **POST** /account/creditcards | Add Credit Card to Account
*BillingApi* | [**addBillingCreditCard**](Apis/BillingApi.http#addbillingcreditcard) | **POST** /billing/creditcards | Add Credit Card for Billing
*BillingApi* | [**addBillingPrepay**](Apis/BillingApi.http#addbillingprepay) | **POST** /billing/prepays | Create Prepay Deposit
*BillingApi* | [**deleteAccountCreditCard**](Apis/BillingApi.http#deleteaccountcreditcard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
*BillingApi* | [**deleteBillingCreditCard**](Apis/BillingApi.http#deletebillingcreditcard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
*BillingApi* | [**deleteBillingInvoice**](Apis/BillingApi.http#deletebillinginvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
*BillingApi* | [**deleteBillingPrepay**](Apis/BillingApi.http#deletebillingprepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
*BillingApi* | [**getAffiliateBanners**](Apis/BillingApi.http#getaffiliatebanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
*BillingApi* | [**getAffiliateRichReport**](Apis/BillingApi.http#getaffiliaterichreport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
*BillingApi* | [**getAffiliateSalesGraph**](Apis/BillingApi.http#getaffiliatesalesgraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
*BillingApi* | [**getAffiliateSalesReport**](Apis/BillingApi.http#getaffiliatesalesreport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
*BillingApi* | [**getAffiliateTrafficGraph**](Apis/BillingApi.http#getaffiliatetrafficgraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
*BillingApi* | [**getAffiliateWebTraffic**](Apis/BillingApi.http#getaffiliatewebtraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
*BillingApi* | [**getBillingCart**](Apis/BillingApi.http#getbillingcart) | **GET** /billing/cart | Get Shopping Cart Contents
*BillingApi* | [**getBillingCreditCardVerify**](Apis/BillingApi.http#getbillingcreditcardverify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
*BillingApi* | [**getBillingInvoice**](Apis/BillingApi.http#getbillinginvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
*BillingApi* | [**getBillingInvoices**](Apis/BillingApi.http#getbillinginvoices) | **GET** /billing/invoices | List Account Invoices
*BillingApi* | [**getBillingPrePays**](Apis/BillingApi.http#getbillingprepays) | **GET** /billing/prepays | List Prepay Balances
*BillingApi* | [**getInvoices**](Apis/BillingApi.http#getinvoices) | **GET** /invoices | Get Invoices
*BillingApi* | [**initiatePayment**](Apis/BillingApi.http#initiatepayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
*BillingApi* | [**postBillingCreditCardVerify**](Apis/BillingApi.http#postbillingcreditcardverify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
*BillingApi* | [**updateAccountCreditCard**](Apis/BillingApi.http#updateaccountcreditcard) | **POST** /account/creditcards/{id} | Update Credit Card
*BillingApi* | [**updateAffiliateDockSetup**](Apis/BillingApi.http#updateaffiliatedocksetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
*BillingApi* | [**updateAffiliateLandingPage**](Apis/BillingApi.http#updateaffiliatelandingpage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
*BillingApi* | [**updateAffiliatePaymentSetup**](Apis/BillingApi.http#updateaffiliatepaymentsetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
*BillingApi* | [**updateBillingCreditCard**](Apis/BillingApi.http#updatebillingcreditcard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
*BillingApi* | [**updateBillingPaymentMethod**](Apis/BillingApi.http#updatebillingpaymentmethod) | **POST** /billing/payment_method | Update Default Payment Method
*DNSApi* | [**addDnsDomain**](Apis/DNSApi.http#adddnsdomain) | **POST** /dns | Create DNS Domain
*DNSApi* | [**addDnsRecord**](Apis/DNSApi.http#adddnsrecord) | **POST** /dns/{id} | Add DNS Record to Domain
*DNSApi* | [**deleteDnsDomain**](Apis/DNSApi.http#deletednsdomain) | **DELETE** /dns/{id} | Delete DNS Domain
*DNSApi* | [**deleteDnsRecord**](Apis/DNSApi.http#deletednsrecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
*DNSApi* | [**getDnsDomain**](Apis/DNSApi.http#getdnsdomain) | **GET** /dns/{id} | List Domain DNS Records
*DNSApi* | [**getDnsList**](Apis/DNSApi.http#getdnslist) | **GET** /dns | List DNS Domains
*DNSApi* | [**updateDnsRecord**](Apis/DNSApi.http#updatednsrecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record
*DomainsApi* | [**addDomain**](Apis/DomainsApi.http#adddomain) | **POST** /domains/order | Place Domain Order
*DomainsApi* | [**addDomainDnssec**](Apis/DomainsApi.http#adddomaindnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
*DomainsApi* | [**addDomainNameserver**](Apis/DomainsApi.http#adddomainnameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
*DomainsApi* | [**cancelDomain**](Apis/DomainsApi.http#canceldomain) | **DELETE** /domains/{id} | Cancel Domain Order
*DomainsApi* | [**deleteDomainDnssec**](Apis/DomainsApi.http#deletedomaindnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
*DomainsApi* | [**deleteDomainNameserver**](Apis/DomainsApi.http#deletedomainnameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
*DomainsApi* | [**getDomainContact**](Apis/DomainsApi.http#getdomaincontact) | **GET** /domains/{id}/contact | Get Domain Contact Details
*DomainsApi* | [**getDomainDnssec**](Apis/DomainsApi.http#getdomaindnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
*DomainsApi* | [**getDomainInfo**](Apis/DomainsApi.http#getdomaininfo) | **GET** /domains/{id} | Get Domain Order
*DomainsApi* | [**getDomainInvoices**](Apis/DomainsApi.http#getdomaininvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
*DomainsApi* | [**getDomainLookup**](Apis/DomainsApi.http#getdomainlookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
*DomainsApi* | [**getDomainNameservers**](Apis/DomainsApi.http#getdomainnameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
*DomainsApi* | [**getDomainOrderFields**](Apis/DomainsApi.http#getdomainorderfields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
*DomainsApi* | [**getDomainOrderSearchResults**](Apis/DomainsApi.http#getdomainordersearchresults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
*DomainsApi* | [**getDomainRenewal**](Apis/DomainsApi.http#getdomainrenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
*DomainsApi* | [**getDomainSearch**](Apis/DomainsApi.http#getdomainsearch) | **GET** /domains/search/{name} | Search Domain Suggestions
*DomainsApi* | [**getDomainTransfer**](Apis/DomainsApi.http#getdomaintransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
*DomainsApi* | [**getDomainWhoisPrivacy**](Apis/DomainsApi.http#getdomainwhoisprivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
*DomainsApi* | [**getDomainsList**](Apis/DomainsApi.http#getdomainslist) | **GET** /domains | List Domain Orders
*DomainsApi* | [**getDomainsWelcomeEmail**](Apis/DomainsApi.http#getdomainswelcomeemail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
*DomainsApi* | [**getNewDomain**](Apis/DomainsApi.http#getnewdomain) | **GET** /domains/order | Get Domain Ordering Information
*DomainsApi* | [**patchDomains**](Apis/DomainsApi.http#patchdomains) | **PATCH** /domains/order | Validate Domain Order
*DomainsApi* | [**postDomainRenewal**](Apis/DomainsApi.http#postdomainrenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
*DomainsApi* | [**postDomainTransfer**](Apis/DomainsApi.http#postdomaintransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
*DomainsApi* | [**putDomains**](Apis/DomainsApi.http#putdomains) | **PUT** /domains/order | Domain Order Search
*DomainsApi* | [**updateDomainContact**](Apis/DomainsApi.http#updatedomaincontact) | **POST** /domains/{id}/contact | Update Domain Contact Details
*DomainsApi* | [**updateDomainInfo**](Apis/DomainsApi.http#updatedomaininfo) | **POST** /domains/{id} | Update Domain Order
*DomainsApi* | [**updateDomainNameservers**](Apis/DomainsApi.http#updatedomainnameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
*DomainsApi* | [**updateDomainWhoisPrivacy**](Apis/DomainsApi.http#updatedomainwhoisprivacy) | **POST** /domains/{id}/whois | Update Whois Privacy
*FloatingIPsApi* | [**addFloatingIp**](Apis/FloatingIPsApi.http#addfloatingip) | **POST** /floating_ips/order | Place Floating IP Order
*FloatingIPsApi* | [**floatingIpsCancel**](Apis/FloatingIPsApi.http#floatingipscancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
*FloatingIPsApi* | [**getFloatingIpInfo**](Apis/FloatingIPsApi.http#getfloatingipinfo) | **GET** /floating_ips/{id} | View Floating IP
*FloatingIPsApi* | [**getFloatingIpInvoices**](Apis/FloatingIPsApi.http#getfloatingipinvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
*FloatingIPsApi* | [**getFloatingIpsList**](Apis/FloatingIPsApi.http#getfloatingipslist) | **GET** /floating_ips | List Floating IPs
*FloatingIPsApi* | [**getFloatingIpsWelcomeEmail**](Apis/FloatingIPsApi.http#getfloatingipswelcomeemail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
*FloatingIPsApi* | [**getNewFloatingIp**](Apis/FloatingIPsApi.http#getnewfloatingip) | **GET** /floating_ips/order | Get Floating IP Ordering Information
*FloatingIPsApi* | [**postFloatingIpsChangeIp**](Apis/FloatingIPsApi.http#postfloatingipschangeip) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
*FloatingIPsApi* | [**putFloatingIps**](Apis/FloatingIPsApi.http#putfloatingips) | **PUT** /floating_ips/order | Validate Floating IP Order
*FloatingIPsApi* | [**updateFloatingIpInfo**](Apis/FloatingIPsApi.http#updatefloatingipinfo) | **POST** /floating_ips/{id} | Update Floating IP
*LicensesApi* | [**addLicense**](Apis/LicensesApi.http#addlicense) | **POST** /licenses/order | Place License Order
*LicensesApi* | [**getLicenseInfo**](Apis/LicensesApi.http#getlicenseinfo) | **GET** /licenses/{id} | Get License
*LicensesApi* | [**getLicenseInvoices**](Apis/LicensesApi.http#getlicenseinvoices) | **GET** /licenses/{id}/invoices | Get License Invoices
*LicensesApi* | [**getLicenseList**](Apis/LicensesApi.http#getlicenselist) | **GET** /licenses | List Licenses
*LicensesApi* | [**getLicenseOrderCatTagInfo**](Apis/LicensesApi.http#getlicenseordercattaginfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category
*LicensesApi* | [**getLicensesWelcomeEmail**](Apis/LicensesApi.http#getlicenseswelcomeemail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email
*LicensesApi* | [**getNewLicense**](Apis/LicensesApi.http#getnewlicense) | **GET** /licenses/order | Get License Order Information
*LicensesApi* | [**licensesCancel**](Apis/LicensesApi.http#licensescancel) | **DELETE** /licenses/{id} | Cancel License
*LicensesApi* | [**postLicenseChangeIp**](Apis/LicensesApi.http#postlicensechangeip) | **POST** /licenses/{id}/change_ip | Change License IP
*LicensesApi* | [**putLicenses**](Apis/LicensesApi.http#putlicenses) | **PUT** /licenses/order | Validate License Order
*LicensesApi* | [**updateLicenseInfo**](Apis/LicensesApi.http#updatelicenseinfo) | **POST** /licenses/{id} | Update License
*MailApi* | [**addMail**](Apis/MailApi.http#addmail) | **POST** /mail/order | Place Mail Order
*MailApi* | [**addRule**](Apis/MailApi.http#addrule) | **POST** /mail/{id}/rules | Create Deny Rule
*MailApi* | [**createMailAlert**](Apis/MailApi.http#createmailalert) | **POST** /mail/{id}/alerts | Create Mail Alert
*MailApi* | [**deleteMailAlert**](Apis/MailApi.http#deletemailalert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
*MailApi* | [**deleteRule**](Apis/MailApi.http#deleterule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
*MailApi* | [**delistBlock**](Apis/MailApi.http#delistblock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
*MailApi* | [**getMailAlerts**](Apis/MailApi.http#getmailalerts) | **GET** /mail/{id}/alerts | List Mail Alerts
*MailApi* | [**getMailBlocks**](Apis/MailApi.http#getmailblocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
*MailApi* | [**getMailDelist**](Apis/MailApi.http#getmaildelist) | **GET** /mail/{id}/delist | Get Delist Status
*MailApi* | [**getMailDeliverability**](Apis/MailApi.http#getmaildeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
*MailApi* | [**getMailInfo**](Apis/MailApi.http#getmailinfo) | **GET** /mail/{id} | Get Mail Order
*MailApi* | [**getMailInvoices**](Apis/MailApi.http#getmailinvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
*MailApi* | [**getMailList**](Apis/MailApi.http#getmaillist) | **GET** /mail | List Mail Orders
*MailApi* | [**getMailWelcomeEmail**](Apis/MailApi.http#getmailwelcomeemail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
*MailApi* | [**getNewMail**](Apis/MailApi.http#getnewmail) | **GET** /mail/order | Get Mail Ordering Information
*MailApi* | [**getRules**](Apis/MailApi.http#getrules) | **GET** /mail/{id}/rules | List Deny Rules
*MailApi* | [**getStats**](Apis/MailApi.http#getstats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
*MailApi* | [**mailCancel**](Apis/MailApi.http#mailcancel) | **DELETE** /mail/{id} | Cancel Mail
*MailApi* | [**postMailDelist**](Apis/MailApi.http#postmaildelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
*MailApi* | [**putMail**](Apis/MailApi.http#putmail) | **PUT** /mail/order | Validate Mail Order
*MailApi* | [**resetMailPassword**](Apis/MailApi.http#resetmailpassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
*MailApi* | [**sendAdvMail**](Apis/MailApi.http#sendadvmail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
*MailApi* | [**sendMail**](Apis/MailApi.http#sendmail) | **POST** /mail/{id}/send | Send Email
*MailApi* | [**updateMailAlert**](Apis/MailApi.http#updatemailalert) | **PUT** /mail/{id}/alerts | Update Mail Alert
*MailApi* | [**updateMailInfo**](Apis/MailApi.http#updatemailinfo) | **POST** /mail/{id} | Update Mail Order
*MailApi* | [**viewMailLog**](Apis/MailApi.http#viewmaillog) | **GET** /mail/{id}/log | View Mail Log
*PublicApi* | [**getCaptcha**](Apis/PublicApi.http#getcaptcha) | **GET** /captcha | Get Captcha Challenge
*PublicApi* | [**getCountries**](Apis/PublicApi.http#getcountries) | **GET** /account/countries | Get Countries
*PublicApi* | [**getInfo**](Apis/PublicApi.http#getinfo) | **GET** /info | Get Server Info
*PublicApi* | [**getLoginInfo**](Apis/PublicApi.http#getlogininfo) | **GET** /login | Get Login Info
*PublicApi* | [**getMPServers**](Apis/PublicApi.http#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
*PublicApi* | [**getOauthRedirect**](Apis/PublicApi.http#getoauthredirect) | **GET** /oauth | Get OAuth Redirect URL
*PublicApi* | [**getTimezones**](Apis/PublicApi.http#gettimezones) | **GET** /account/timezones | Get Available Timezones
*PublicApi* | [**patchOauthTwoFactor**](Apis/PublicApi.http#patchoauthtwofactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
*PublicApi* | [**pingServer**](Apis/PublicApi.http#pingserver) | **GET** /ping | Ping Server
*PublicApi* | [**postOauthCallback**](Apis/PublicApi.http#postoauthcallback) | **POST** /oauth | OAuth Callback
*PublicApi* | [**submitLogin**](Apis/PublicApi.http#submitlogin) | **POST** /login | Submit Login Information
*PublicApi* | [**submitSignup**](Apis/PublicApi.http#submitsignup) | **POST** /signup | Submit Signup Information
*QuickServersApi* | [**addQs**](Apis/QuickServersApi.http#addqs) | **POST** /qs/order | Place QuickServer Order
*QuickServersApi* | [**deleteQsBackup**](Apis/QuickServersApi.http#deleteqsbackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
*QuickServersApi* | [**doQsBlockSmtp**](Apis/QuickServersApi.http#doqsblocksmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
*QuickServersApi* | [**doQsDisableCd**](Apis/QuickServersApi.http#doqsdisablecd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
*QuickServersApi* | [**doQsDisableQuota**](Apis/QuickServersApi.http#doqsdisablequota) | **GET** /qs/{id}/disable_quota | Disable Quotas
*QuickServersApi* | [**doQsEjectCd**](Apis/QuickServersApi.http#doqsejectcd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
*QuickServersApi* | [**doQsEnableQuota**](Apis/QuickServersApi.http#doqsenablequota) | **GET** /qs/{id}/enable_quota | Enable Quotas
*QuickServersApi* | [**doQsRestart**](Apis/QuickServersApi.http#doqsrestart) | **GET** /qs/{id}/restart | Restart QuickServer
*QuickServersApi* | [**doQsStart**](Apis/QuickServersApi.http#doqsstart) | **GET** /qs/{id}/start | Start QuickServer
*QuickServersApi* | [**doQsStop**](Apis/QuickServersApi.http#doqsstop) | **GET** /qs/{id}/stop | Stop QuickServer
*QuickServersApi* | [**downloadQsBackup**](Apis/QuickServersApi.http#downloadqsbackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
*QuickServersApi* | [**getNewQs**](Apis/QuickServersApi.http#getnewqs) | **GET** /qs/order | Get QuickServer Ordering Information
*QuickServersApi* | [**getQsBackups**](Apis/QuickServersApi.http#getqsbackups) | **GET** /qs/{id}/backups | List QuickServer Backups
*QuickServersApi* | [**getQsChangeHostname**](Apis/QuickServersApi.http#getqschangehostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
*QuickServersApi* | [**getQsChangeRootPassword**](Apis/QuickServersApi.http#getqschangerootpassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
*QuickServersApi* | [**getQsChangeTimezone**](Apis/QuickServersApi.http#getqschangetimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
*QuickServersApi* | [**getQsChangeWebuzoPassword**](Apis/QuickServersApi.http#getqschangewebuzopassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
*QuickServersApi* | [**getQsInfo**](Apis/QuickServersApi.http#getqsinfo) | **GET** /qs/{id} | Get QuickServer Order
*QuickServersApi* | [**getQsInsertCd**](Apis/QuickServersApi.http#getqsinsertcd) | **GET** /qs/{id}/insert_cd | Insert CD Information
*QuickServersApi* | [**getQsInvoices**](Apis/QuickServersApi.http#getqsinvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
*QuickServersApi* | [**getQsList**](Apis/QuickServersApi.http#getqslist) | **GET** /qs | List QuickServers
*QuickServersApi* | [**getQsReinstallOs**](Apis/QuickServersApi.http#getqsreinstallos) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
*QuickServersApi* | [**getQsResetPassword**](Apis/QuickServersApi.http#getqsresetpassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
*QuickServersApi* | [**getQsReverseDns**](Apis/QuickServersApi.http#getqsreversedns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
*QuickServersApi* | [**getQsSetupVnc**](Apis/QuickServersApi.http#getqssetupvnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
*QuickServersApi* | [**getQsTrafficUsage**](Apis/QuickServersApi.http#getqstrafficusage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
*QuickServersApi* | [**getQsViewDesktop**](Apis/QuickServersApi.http#getqsviewdesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
*QuickServersApi* | [**getQsWelcomeEmail**](Apis/QuickServersApi.http#getqswelcomeemail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
*QuickServersApi* | [**postQsBackup**](Apis/QuickServersApi.http#postqsbackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
*QuickServersApi* | [**postQsChangeHostname**](Apis/QuickServersApi.http#postqschangehostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
*QuickServersApi* | [**postQsChangeRootPassword**](Apis/QuickServersApi.http#postqschangerootpassword) | **POST** /qs/{id}/change_root_password | Change Root Password
*QuickServersApi* | [**postQsChangeTimezone**](Apis/QuickServersApi.http#postqschangetimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
*QuickServersApi* | [**postQsChangeWebuzoPassword**](Apis/QuickServersApi.http#postqschangewebuzopassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
*QuickServersApi* | [**postQsInsertCd**](Apis/QuickServersApi.http#postqsinsertcd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
*QuickServersApi* | [**postQsReinstallOs**](Apis/QuickServersApi.http#postqsreinstallos) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
*QuickServersApi* | [**postQsResetPassword**](Apis/QuickServersApi.http#postqsresetpassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
*QuickServersApi* | [**postQsReverseDns**](Apis/QuickServersApi.http#postqsreversedns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
*QuickServersApi* | [**postQsSetupVnc**](Apis/QuickServersApi.http#postqssetupvnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
*QuickServersApi* | [**postQsTrafficUsage**](Apis/QuickServersApi.http#postqstrafficusage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
*QuickServersApi* | [**postQsViewDesktop**](Apis/QuickServersApi.http#postqsviewdesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
*QuickServersApi* | [**postQuickServerRestore**](Apis/QuickServersApi.http#postquickserverrestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
*QuickServersApi* | [**putQs**](Apis/QuickServersApi.http#putqs) | **PUT** /qs/order | Validate QuickServer Order
*QuickServersApi* | [**quickserversCancel**](Apis/QuickServersApi.http#quickserverscancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
*QuickServersApi* | [**updateQsInfo**](Apis/QuickServersApi.http#updateqsinfo) | **POST** /qs/{id} | Update QuickServer Order
*SSLCertificatesApi* | [**addSsl**](Apis/SSLCertificatesApi.http#addssl) | **POST** /ssl/order | Place SSL Cert Order
*SSLCertificatesApi* | [**getNewSsl**](Apis/SSLCertificatesApi.http#getnewssl) | **GET** /ssl/order | SSL Cert Ordering Information
*SSLCertificatesApi* | [**getSslInfo**](Apis/SSLCertificatesApi.http#getsslinfo) | **GET** /ssl/{id} | Get SSL Cert Info
*SSLCertificatesApi* | [**getSslInvoices**](Apis/SSLCertificatesApi.http#getsslinvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
*SSLCertificatesApi* | [**getSslList**](Apis/SSLCertificatesApi.http#getssllist) | **GET** /ssl | List SSL Certs
*SSLCertificatesApi* | [**getSslWelcomeEmail**](Apis/SSLCertificatesApi.http#getsslwelcomeemail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
*SSLCertificatesApi* | [**putSsl**](Apis/SSLCertificatesApi.http#putssl) | **PUT** /ssl/order | Validate SSL Cert Order
*SSLCertificatesApi* | [**sslCancel**](Apis/SSLCertificatesApi.http#sslcancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
*SSLCertificatesApi* | [**updateSslInfo**](Apis/SSLCertificatesApi.http#updatesslinfo) | **POST** /ssl/{id} | Update SSL Cert Order
*ScrubIpsApi* | [**cancelScrubIp**](Apis/ScrubIpsApi.http#cancelscrubip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
*ScrubIpsApi* | [**createFilter**](Apis/ScrubIpsApi.http#createfilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
*ScrubIpsApi* | [**createGeoRule**](Apis/ScrubIpsApi.http#creategeorule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
*ScrubIpsApi* | [**createRule**](Apis/ScrubIpsApi.http#createrule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
*ScrubIpsApi* | [**deleteFilter**](Apis/ScrubIpsApi.http#deletefilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
*ScrubIpsApi* | [**disableScrub**](Apis/ScrubIpsApi.http#disablescrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
*ScrubIpsApi* | [**enableScrub**](Apis/ScrubIpsApi.http#enablescrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
*ScrubIpsApi* | [**getOrderDetail**](Apis/ScrubIpsApi.http#getorderdetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
*ScrubIpsApi* | [**getScrubIpDetails**](Apis/ScrubIpsApi.http#getscrubipdetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
*ScrubIpsApi* | [**getScrubIpFilterTypes**](Apis/ScrubIpsApi.http#getscrubipfiltertypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
*ScrubIpsApi* | [**getScrubIpInvoices**](Apis/ScrubIpsApi.http#getscrubipinvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
*ScrubIpsApi* | [**getScrubIpLogs**](Apis/ScrubIpsApi.http#getscrubiplogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
*ScrubIpsApi* | [**getScrubIpsList**](Apis/ScrubIpsApi.http#getscrubipslist) | **GET** /scrub_ips | List Scrub IP Services
*ScrubIpsApi* | [**placeScrubOrder**](Apis/ScrubIpsApi.http#placescruborder) | **POST** /scrub_ips/order | Place Scrub IP Order
*ScrubIpsApi* | [**scrubIpsDeleteGeoRule**](Apis/ScrubIpsApi.http#scrubipsdeletegeorule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
*ScrubIpsApi* | [**scrubIpsDeleteRule**](Apis/ScrubIpsApi.http#scrubipsdeleterule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule
*ServersApi* | [**addServer**](Apis/ServersApi.http#addserver) | **POST** /servers/order | Place Server Order
*ServersApi* | [**buyItNowServerOrder**](Apis/ServersApi.http#buyitnowserverorder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
*ServersApi* | [**getMPServers**](Apis/ServersApi.http#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
*ServersApi* | [**getNewServer**](Apis/ServersApi.http#getnewserver) | **GET** /servers/order | Server Ordering Information
*ServersApi* | [**getServerInfo**](Apis/ServersApi.http#getserverinfo) | **GET** /servers/{id} | Get Server Order
*ServersApi* | [**getServerInvoices**](Apis/ServersApi.http#getserverinvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
*ServersApi* | [**getServerList**](Apis/ServersApi.http#getserverlist) | **GET** /servers | List Servers
*ServersApi* | [**getServerReverseDns**](Apis/ServersApi.http#getserverreversedns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
*ServersApi* | [**getServersWelcomeEmail**](Apis/ServersApi.http#getserverswelcomeemail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
*ServersApi* | [**placeBuyNowServer**](Apis/ServersApi.http#placebuynowserver) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
*ServersApi* | [**postServerReverseDns**](Apis/ServersApi.http#postserverreversedns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
*ServersApi* | [**putServers**](Apis/ServersApi.http#putservers) | **PUT** /servers/order | Validate Server Order
*ServersApi* | [**serverIpmiLiveGet**](Apis/ServersApi.http#serveripmiliveget) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
*ServersApi* | [**serverIpmiLivePost**](Apis/ServersApi.http#serveripmilivepost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
*ServersApi* | [**serverIpmiPowerGet**](Apis/ServersApi.http#serveripmipowerget) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
*ServersApi* | [**serverIpmiPowerPost**](Apis/ServersApi.http#serveripmipowerpost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
*ServersApi* | [**serversCancel**](Apis/ServersApi.http#serverscancel) | **DELETE** /servers/{id} | Cancel Server Service
*ServersApi* | [**updateServerInfo**](Apis/ServersApi.http#updateserverinfo) | **POST** /servers/{id} | Update Server Order
*TicketsApi* | [**addNewTicket**](Apis/TicketsApi.http#addnewticket) | **POST** /tickets/new | Create New Ticket
*TicketsApi* | [**closeTicket**](Apis/TicketsApi.http#closeticket) | **GET** /tickets/{id}/close | Close Ticket
*TicketsApi* | [**deleteTicketInfo**](Apis/TicketsApi.http#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket
*TicketsApi* | [**getNewTicket**](Apis/TicketsApi.http#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket.
*TicketsApi* | [**getTicketInfo**](Apis/TicketsApi.http#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information
*TicketsApi* | [**getTicketsList**](Apis/TicketsApi.http#getticketslist) | **GET** /tickets | List Support Tickets
*TicketsApi* | [**postTicketInfo**](Apis/TicketsApi.http#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket
*TicketsApi* | [**postTicketsList**](Apis/TicketsApi.http#postticketslist) | **POST** /tickets | Search Support Tickets
*TicketsApi* | [**putTicketInfo**](Apis/TicketsApi.http#putticketinfo) | **PUT** /tickets/{id} | Update Ticket
*TicketsApi* | [**replyTicket**](Apis/TicketsApi.http#replyticket) | **POST** /tickets/{id}/reply | Reply Ticket
*TicketsApi* | [**updateTicketInfo**](Apis/TicketsApi.http#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket
*VPSApi* | [**addVps**](Apis/VPSApi.http#addvps) | **POST** /vps/order | Place VPS Order
*VPSApi* | [**deleteVpsBackup**](Apis/VPSApi.http#deletevpsbackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
*VPSApi* | [**doVpsBlockSmtp**](Apis/VPSApi.http#dovpsblocksmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
*VPSApi* | [**doVpsDisableCd**](Apis/VPSApi.http#dovpsdisablecd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
*VPSApi* | [**doVpsDisableQuota**](Apis/VPSApi.http#dovpsdisablequota) | **GET** /vps/{id}/disable_quota | Disable Quotas
*VPSApi* | [**doVpsEjectCd**](Apis/VPSApi.http#dovpsejectcd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
*VPSApi* | [**doVpsEnableQuota**](Apis/VPSApi.http#dovpsenablequota) | **GET** /vps/{id}/enable_quota | Enable Quotas
*VPSApi* | [**doVpsRestart**](Apis/VPSApi.http#dovpsrestart) | **GET** /vps/{id}/restart | Restart VPS
*VPSApi* | [**doVpsStart**](Apis/VPSApi.http#dovpsstart) | **GET** /vps/{id}/start | Start VPS
*VPSApi* | [**doVpsStop**](Apis/VPSApi.http#dovpsstop) | **GET** /vps/{id}/stop | Stop VPS
*VPSApi* | [**downloadVpsBackup**](Apis/VPSApi.http#downloadvpsbackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
*VPSApi* | [**getNewVps**](Apis/VPSApi.http#getnewvps) | **GET** /vps/order | VPS Ordering Information
*VPSApi* | [**getVpsBackups**](Apis/VPSApi.http#getvpsbackups) | **GET** /vps/{id}/backups | Get VPS Backups List
*VPSApi* | [**getVpsBuyHdSpace**](Apis/VPSApi.http#getvpsbuyhdspace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
*VPSApi* | [**getVpsBuyIp**](Apis/VPSApi.http#getvpsbuyip) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
*VPSApi* | [**getVpsChangeTimezone**](Apis/VPSApi.http#getvpschangetimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
*VPSApi* | [**getVpsInfo**](Apis/VPSApi.http#getvpsinfo) | **GET** /vps/{id} | Get VPS Order
*VPSApi* | [**getVpsInvoices**](Apis/VPSApi.http#getvpsinvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
*VPSApi* | [**getVpsList**](Apis/VPSApi.http#getvpslist) | **GET** /vps | List VPS Orders
*VPSApi* | [**getVpsReinstallOs**](Apis/VPSApi.http#getvpsreinstallos) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
*VPSApi* | [**getVpsReverseDns**](Apis/VPSApi.http#getvpsreversedns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
*VPSApi* | [**getVpsSetupVnc**](Apis/VPSApi.http#getvpssetupvnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
*VPSApi* | [**getVpsSlices**](Apis/VPSApi.http#getvpsslices) | **GET** /vps/{id}/slices | Slice Upgrade Info
*VPSApi* | [**getVpsTrafficUsage**](Apis/VPSApi.http#getvpstrafficusage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
*VPSApi* | [**getVpsViewDesktop**](Apis/VPSApi.http#getvpsviewdesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
*VPSApi* | [**getVpsWelcomeEmail**](Apis/VPSApi.http#getvpswelcomeemail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
*VPSApi* | [**postVpsBackup**](Apis/VPSApi.http#postvpsbackup) | **GET** /vps/{id}/backup | Start a VPS Backup
*VPSApi* | [**postVpsBuyHdSpace**](Apis/VPSApi.http#postvpsbuyhdspace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
*VPSApi* | [**postVpsBuyIp**](Apis/VPSApi.http#postvpsbuyip) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
*VPSApi* | [**postVpsChangeHostname**](Apis/VPSApi.http#postvpschangehostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
*VPSApi* | [**postVpsChangeRootPassword**](Apis/VPSApi.http#postvpschangerootpassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
*VPSApi* | [**postVpsChangeTimezone**](Apis/VPSApi.http#postvpschangetimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
*VPSApi* | [**postVpsChangeWebuzoPassword**](Apis/VPSApi.http#postvpschangewebuzopassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
*VPSApi* | [**postVpsInsertCd**](Apis/VPSApi.http#postvpsinsertcd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
*VPSApi* | [**postVpsReinstallOs**](Apis/VPSApi.http#postvpsreinstallos) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
*VPSApi* | [**postVpsResetPassword**](Apis/VPSApi.http#postvpsresetpassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
*VPSApi* | [**postVpsRestore**](Apis/VPSApi.http#postvpsrestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
*VPSApi* | [**postVpsReverseDns**](Apis/VPSApi.http#postvpsreversedns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
*VPSApi* | [**postVpsSetupVnc**](Apis/VPSApi.http#postvpssetupvnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
*VPSApi* | [**postVpsSlices**](Apis/VPSApi.http#postvpsslices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
*VPSApi* | [**postVpsViewDesktop**](Apis/VPSApi.http#postvpsviewdesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
*VPSApi* | [**putVps**](Apis/VPSApi.http#putvps) | **PUT** /vps/order | Validate VPS Order
*VPSApi* | [**updateVpsInfo**](Apis/VPSApi.http#updatevpsinfo) | **POST** /vps/{id} | Update VPS Order
*VPSApi* | [**vPSCancel**](Apis/VPSApi.http#vpscancel) | **DELETE** /vps/{id} | Cancel VPS Service
*WebhostingApi* | [**addWebsite**](Apis/WebhostingApi.http#addwebsite) | **POST** /websites/order | Place Website Order
*WebhostingApi* | [**getNewWebsite**](Apis/WebhostingApi.http#getnewwebsite) | **GET** /websites/order | Website Ordering Information
*WebhostingApi* | [**getWebsiteBuyIp**](Apis/WebhostingApi.http#getwebsitebuyip) | **GET** /websites/{id}/buy_ip | Get Website IP Information
*WebhostingApi* | [**getWebsiteInfo**](Apis/WebhostingApi.http#getwebsiteinfo) | **GET** /websites/{id} | Get Website Order
*WebhostingApi* | [**getWebsiteInvoices**](Apis/WebhostingApi.http#getwebsiteinvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
*WebhostingApi* | [**getWebsiteList**](Apis/WebhostingApi.http#getwebsitelist) | **GET** /websites | Get Website Listing
*WebhostingApi* | [**getWebsitesBackups**](Apis/WebhostingApi.http#getwebsitesbackups) | **GET** /websites/{id}/backups | Get Website Backups
*WebhostingApi* | [**getWebsitesLogin**](Apis/WebhostingApi.http#getwebsiteslogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
*WebhostingApi* | [**getWebsitesWelcomeEmail**](Apis/WebhostingApi.http#getwebsiteswelcomeemail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
*WebhostingApi* | [**gettWebsiteReverseDns**](Apis/WebhostingApi.http#gettwebsitereversedns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
*WebhostingApi* | [**postWebsiteBuyIp**](Apis/WebhostingApi.http#postwebsitebuyip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
*WebhostingApi* | [**postWebsiteMigration**](Apis/WebhostingApi.http#postwebsitemigration) | **POST** /websites/{id}/migration | Request Website Migration
*WebhostingApi* | [**postWebsitesReverseDns**](Apis/WebhostingApi.http#postwebsitesreversedns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
*WebhostingApi* | [**putWebsites**](Apis/WebhostingApi.http#putwebsites) | **PUT** /websites/order | Validate Webhosting Order
*WebhostingApi* | [**updateWebsiteInfo**](Apis/WebhostingApi.http#updatewebsiteinfo) | **POST** /websites/{id} | Update Website Order
*WebhostingApi* | [**webhostingCancel**](Apis/WebhostingApi.http#webhostingcancel) | **DELETE** /websites/{id} | Cancel Website


## Usage

### Prerequisites

You need [IntelliJ](https://www.jetbrains.com/idea/) to be able to run those queries. More information can be found [here](https://www.jetbrains.com/help/idea/http-client-in-product-code-editor.html).
You may have some luck running queries using the [Code REST Client](https://marketplace.visualstudio.com/items?itemName=humao.rest-client) as well, but your mileage may vary.

### Variables and Environment files

* Generally speaking, you want queries to be specific using custom variables. All variables in the `.http` files have the `` format.
* You can create [public or private environment files](https://www.jetbrains.com/help/idea/exploring-http-syntax.html#environment-variables) to dynamically replace the variables at runtime.

_Note: don't commit private environment files! They typically will contain sensitive information like API Keys._

### Customizations

If you have control over the generation of the files here, there are two main things you can do

* Select elements to replace as variables during generation. The process is case-sensitive. For example, API_KEY -> 
    * For this, run the generation with the `bodyVariables` property, followed by a "-" separated list of variables
    * Example: `--additional-properties bodyVariables=YOUR_MERCHANT_ACCOUNT-YOUR_COMPANY_ACCOUNT-YOUR_BALANCE_PLATFORM`
* Add custom headers to _all_ requests. This can be useful for example if your specifications are missing [security schemes](https://github.com/github/rest-api-description/issues/237).
    * For this, run the generation with the `customHeaders` property, followed by a "&" separated list of variables
    * Example : `--additional-properties=customHeaders="Cookie:X-API-KEY="&"Accept-Encoding=gzip"`

_This client was generated by the [jetbrains-http-client](https://openapi-generator.tech/docs/generators/jetbrains-http-client) generator of OpenAPI Generator_