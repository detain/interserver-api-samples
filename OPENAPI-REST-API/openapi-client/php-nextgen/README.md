# OpenAPIClient-php

# Overview

The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.

The API covers the following service categories:
- [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management
- [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting
- [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers
- [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html)
- [Backups](https://www.interserver.net/storage/) — storage and backup services
- Licenses — control panel and software licenses
- [Mail](https://www.mail.baby/) — mail delivery services
- SSL — certificate provisioning
- Billing — invoices, payment methods, and account management

For interactive testing, see the [API documentation](/api-docs/).

# Authentication

Most endpoints require authentication. Two methods are supported:

## API Key (Preferred)

Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:

```
X-API-KEY: your-api-key-here
```

## Session-Based Authentication

Alternatively, authenticate by creating a session:

1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier.
2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:

```
sessionid: your-session-id-here
```

API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.



For more information, please visit [https://www.interserver.net/contact-us.html](https://www.interserver.net/contact-us.html).

## Installation & Usage

### Requirements

PHP 8.1 and later.

### Composer

To install the bindings via [Composer](https://getcomposer.org/), add the following to `composer.json`:

```json
{
  "repositories": [
    {
      "type": "vcs",
      "url": "https://github.com/GIT_USER_ID/GIT_REPO_ID.git"
    }
  ],
  "require": {
    "GIT_USER_ID/GIT_REPO_ID": "*@dev"
  }
}
```

Then run `composer install`

### Manual Installation

Download the files and include `autoload.php`:

```php
<?php
require_once('/path/to/OpenAPIClient-php/vendor/autoload.php');
```

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



// Configure API key authorization: sessionIdCookieAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');

// Configure API key authorization: apiKeyAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('X-API-KEY', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-KEY', 'Bearer');

// Configure API key authorization: sessionIdHeaderAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('sessionid', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('sessionid', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\AccountApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->changeAccountUsername();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AccountApi->changeAccountUsername: ', $e->getMessage(), PHP_EOL;
}

```

## API Endpoints

All URIs are relative to *https://my.interserver.net/apiv2*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AccountApi* | [**changeAccountUsername**](docs/Api/AccountApi.md#changeaccountusername) | **POST** /account/username | Change Account Username
*AccountApi* | [**deleteAccountOauthName**](docs/Api/AccountApi.md#deleteaccountoauthname) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
*AccountApi* | [**deleteAccountTfa**](docs/Api/AccountApi.md#deleteaccounttfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
*AccountApi* | [**deleteIpLimit**](docs/Api/AccountApi.md#deleteiplimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
*AccountApi* | [**getAccountInfo**](docs/Api/AccountApi.md#getaccountinfo) | **GET** /account | Retrieve Account Details
*AccountApi* | [**getAccountTfaSetup**](docs/Api/AccountApi.md#getaccounttfasetup) | **GET** /account/2fa | Get Two-Factor Setup Data
*AccountApi* | [**getHome**](docs/Api/AccountApi.md#gethome) | **GET** /home | Get Home Data
*AccountApi* | [**getSearch**](docs/Api/AccountApi.md#getsearch) | **GET** /search | Search Autocomplete
*AccountApi* | [**logout**](docs/Api/AccountApi.md#logout) | **GET** /logout | Log Out
*AccountApi* | [**logoutAccountOauth**](docs/Api/AccountApi.md#logoutaccountoauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
*AccountApi* | [**updateAccountApiKey**](docs/Api/AccountApi.md#updateaccountapikey) | **POST** /account/apikey | Generate New API Key
*AccountApi* | [**updateAccountFeatures**](docs/Api/AccountApi.md#updateaccountfeatures) | **POST** /account/features | Update Account Feature Flags
*AccountApi* | [**updateAccountInfo**](docs/Api/AccountApi.md#updateaccountinfo) | **POST** /account | Update Account Information
*AccountApi* | [**updateAccountIpLimits**](docs/Api/AccountApi.md#updateaccountiplimits) | **POST** /account/iplimits | Add IP Access Restriction
*AccountApi* | [**updateAccountPassword**](docs/Api/AccountApi.md#updateaccountpassword) | **POST** /account/password | Change Account Password
*AccountApi* | [**updateAccountSshKey**](docs/Api/AccountApi.md#updateaccountsshkey) | **POST** /account/sshkey | Update SSH Keys
*AccountApi* | [**updateAccountTfa**](docs/Api/AccountApi.md#updateaccounttfa) | **POST** /account/2fa | Enable Two-Factor Authentication
*BackupsApi* | [**addBackup**](docs/Api/BackupsApi.md#addbackup) | **POST** /backups/order | Place Backup Order
*BackupsApi* | [**cancelBackup**](docs/Api/BackupsApi.md#cancelbackup) | **DELETE** /backups/{id} | Cancel Backup Service
*BackupsApi* | [**getBackupInfo**](docs/Api/BackupsApi.md#getbackupinfo) | **GET** /backups/{id} | Get Backup Service Details
*BackupsApi* | [**getBackupInvoices**](docs/Api/BackupsApi.md#getbackupinvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
*BackupsApi* | [**getBackupLogin**](docs/Api/BackupsApi.md#getbackuplogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
*BackupsApi* | [**getBackupsList**](docs/Api/BackupsApi.md#getbackupslist) | **GET** /backups | List Backup Services
*BackupsApi* | [**getBackupsWelcomeEmail**](docs/Api/BackupsApi.md#getbackupswelcomeemail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
*BackupsApi* | [**getNewBackup**](docs/Api/BackupsApi.md#getnewbackup) | **GET** /backups/order | Get Backup Order Form Data
*BackupsApi* | [**updateBackupInfo**](docs/Api/BackupsApi.md#updatebackupinfo) | **POST** /backups/{id} | Update Backup Information
*BackupsApi* | [**validateBackupOrder**](docs/Api/BackupsApi.md#validatebackuporder) | **PUT** /backups/order | Validate Backup Order
*BillingApi* | [**addAccountCreditCard**](docs/Api/BillingApi.md#addaccountcreditcard) | **POST** /account/creditcards | Add Credit Card to Account
*BillingApi* | [**addBillingCreditCard**](docs/Api/BillingApi.md#addbillingcreditcard) | **POST** /billing/creditcards | Add Credit Card for Billing
*BillingApi* | [**addBillingPrepay**](docs/Api/BillingApi.md#addbillingprepay) | **POST** /billing/prepays | Create Prepay Deposit
*BillingApi* | [**deleteAccountCreditCard**](docs/Api/BillingApi.md#deleteaccountcreditcard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
*BillingApi* | [**deleteBillingCreditCard**](docs/Api/BillingApi.md#deletebillingcreditcard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
*BillingApi* | [**deleteBillingInvoice**](docs/Api/BillingApi.md#deletebillinginvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
*BillingApi* | [**deleteBillingPrepay**](docs/Api/BillingApi.md#deletebillingprepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
*BillingApi* | [**getAffiliateBanners**](docs/Api/BillingApi.md#getaffiliatebanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
*BillingApi* | [**getAffiliateRichReport**](docs/Api/BillingApi.md#getaffiliaterichreport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
*BillingApi* | [**getAffiliateSalesGraph**](docs/Api/BillingApi.md#getaffiliatesalesgraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
*BillingApi* | [**getAffiliateSalesReport**](docs/Api/BillingApi.md#getaffiliatesalesreport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
*BillingApi* | [**getAffiliateTrafficGraph**](docs/Api/BillingApi.md#getaffiliatetrafficgraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
*BillingApi* | [**getAffiliateWebTraffic**](docs/Api/BillingApi.md#getaffiliatewebtraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
*BillingApi* | [**getBillingCart**](docs/Api/BillingApi.md#getbillingcart) | **GET** /billing/cart | Get Shopping Cart Contents
*BillingApi* | [**getBillingCreditCardVerify**](docs/Api/BillingApi.md#getbillingcreditcardverify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
*BillingApi* | [**getBillingInvoice**](docs/Api/BillingApi.md#getbillinginvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
*BillingApi* | [**getBillingInvoices**](docs/Api/BillingApi.md#getbillinginvoices) | **GET** /billing/invoices | List Account Invoices
*BillingApi* | [**getBillingPrePays**](docs/Api/BillingApi.md#getbillingprepays) | **GET** /billing/prepays | List Prepay Balances
*BillingApi* | [**getInvoices**](docs/Api/BillingApi.md#getinvoices) | **GET** /invoices | Get Invoices
*BillingApi* | [**initiatePayment**](docs/Api/BillingApi.md#initiatepayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
*BillingApi* | [**postBillingCreditCardVerify**](docs/Api/BillingApi.md#postbillingcreditcardverify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
*BillingApi* | [**updateAccountCreditCard**](docs/Api/BillingApi.md#updateaccountcreditcard) | **POST** /account/creditcards/{id} | Update Credit Card
*BillingApi* | [**updateAffiliateDockSetup**](docs/Api/BillingApi.md#updateaffiliatedocksetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
*BillingApi* | [**updateAffiliateLandingPage**](docs/Api/BillingApi.md#updateaffiliatelandingpage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
*BillingApi* | [**updateAffiliatePaymentSetup**](docs/Api/BillingApi.md#updateaffiliatepaymentsetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
*BillingApi* | [**updateBillingCreditCard**](docs/Api/BillingApi.md#updatebillingcreditcard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
*BillingApi* | [**updateBillingPaymentMethod**](docs/Api/BillingApi.md#updatebillingpaymentmethod) | **POST** /billing/payment_method | Update Default Payment Method
*DNSApi* | [**addDnsDomain**](docs/Api/DNSApi.md#adddnsdomain) | **POST** /dns | Create DNS Domain
*DNSApi* | [**addDnsRecord**](docs/Api/DNSApi.md#adddnsrecord) | **POST** /dns/{id} | Add DNS Record to Domain
*DNSApi* | [**deleteDnsDomain**](docs/Api/DNSApi.md#deletednsdomain) | **DELETE** /dns/{id} | Delete DNS Domain
*DNSApi* | [**deleteDnsRecord**](docs/Api/DNSApi.md#deletednsrecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
*DNSApi* | [**getDnsDomain**](docs/Api/DNSApi.md#getdnsdomain) | **GET** /dns/{id} | List Domain DNS Records
*DNSApi* | [**getDnsList**](docs/Api/DNSApi.md#getdnslist) | **GET** /dns | List DNS Domains
*DNSApi* | [**updateDnsRecord**](docs/Api/DNSApi.md#updatednsrecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record
*DomainsApi* | [**addDomain**](docs/Api/DomainsApi.md#adddomain) | **POST** /domains/order | Place Domain Order
*DomainsApi* | [**addDomainDnssec**](docs/Api/DomainsApi.md#adddomaindnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
*DomainsApi* | [**addDomainNameserver**](docs/Api/DomainsApi.md#adddomainnameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
*DomainsApi* | [**cancelDomain**](docs/Api/DomainsApi.md#canceldomain) | **DELETE** /domains/{id} | Cancel Domain Order
*DomainsApi* | [**deleteDomainDnssec**](docs/Api/DomainsApi.md#deletedomaindnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
*DomainsApi* | [**deleteDomainNameserver**](docs/Api/DomainsApi.md#deletedomainnameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
*DomainsApi* | [**getDomainContact**](docs/Api/DomainsApi.md#getdomaincontact) | **GET** /domains/{id}/contact | Get Domain Contact Details
*DomainsApi* | [**getDomainDnssec**](docs/Api/DomainsApi.md#getdomaindnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
*DomainsApi* | [**getDomainInfo**](docs/Api/DomainsApi.md#getdomaininfo) | **GET** /domains/{id} | Get Domain Order
*DomainsApi* | [**getDomainInvoices**](docs/Api/DomainsApi.md#getdomaininvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
*DomainsApi* | [**getDomainLookup**](docs/Api/DomainsApi.md#getdomainlookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
*DomainsApi* | [**getDomainNameservers**](docs/Api/DomainsApi.md#getdomainnameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
*DomainsApi* | [**getDomainOrderFields**](docs/Api/DomainsApi.md#getdomainorderfields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
*DomainsApi* | [**getDomainOrderSearchResults**](docs/Api/DomainsApi.md#getdomainordersearchresults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
*DomainsApi* | [**getDomainRenewal**](docs/Api/DomainsApi.md#getdomainrenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
*DomainsApi* | [**getDomainSearch**](docs/Api/DomainsApi.md#getdomainsearch) | **GET** /domains/search/{name} | Search Domain Suggestions
*DomainsApi* | [**getDomainTransfer**](docs/Api/DomainsApi.md#getdomaintransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
*DomainsApi* | [**getDomainWhoisPrivacy**](docs/Api/DomainsApi.md#getdomainwhoisprivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
*DomainsApi* | [**getDomainsList**](docs/Api/DomainsApi.md#getdomainslist) | **GET** /domains | List Domain Orders
*DomainsApi* | [**getDomainsWelcomeEmail**](docs/Api/DomainsApi.md#getdomainswelcomeemail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
*DomainsApi* | [**getNewDomain**](docs/Api/DomainsApi.md#getnewdomain) | **GET** /domains/order | Get Domain Ordering Information
*DomainsApi* | [**patchDomains**](docs/Api/DomainsApi.md#patchdomains) | **PATCH** /domains/order | Validate Domain Order
*DomainsApi* | [**postDomainRenewal**](docs/Api/DomainsApi.md#postdomainrenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
*DomainsApi* | [**postDomainTransfer**](docs/Api/DomainsApi.md#postdomaintransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
*DomainsApi* | [**putDomains**](docs/Api/DomainsApi.md#putdomains) | **PUT** /domains/order | Domain Order Search
*DomainsApi* | [**updateDomainContact**](docs/Api/DomainsApi.md#updatedomaincontact) | **POST** /domains/{id}/contact | Update Domain Contact Details
*DomainsApi* | [**updateDomainInfo**](docs/Api/DomainsApi.md#updatedomaininfo) | **POST** /domains/{id} | Update Domain Order
*DomainsApi* | [**updateDomainNameservers**](docs/Api/DomainsApi.md#updatedomainnameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
*DomainsApi* | [**updateDomainWhoisPrivacy**](docs/Api/DomainsApi.md#updatedomainwhoisprivacy) | **POST** /domains/{id}/whois | Update Whois Privacy
*FloatingIPsApi* | [**addFloatingIp**](docs/Api/FloatingIPsApi.md#addfloatingip) | **POST** /floating_ips/order | Place Floating IP Order
*FloatingIPsApi* | [**floatingIpsCancel**](docs/Api/FloatingIPsApi.md#floatingipscancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
*FloatingIPsApi* | [**getFloatingIpInfo**](docs/Api/FloatingIPsApi.md#getfloatingipinfo) | **GET** /floating_ips/{id} | View Floating IP
*FloatingIPsApi* | [**getFloatingIpInvoices**](docs/Api/FloatingIPsApi.md#getfloatingipinvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
*FloatingIPsApi* | [**getFloatingIpsList**](docs/Api/FloatingIPsApi.md#getfloatingipslist) | **GET** /floating_ips | List Floating IPs
*FloatingIPsApi* | [**getFloatingIpsWelcomeEmail**](docs/Api/FloatingIPsApi.md#getfloatingipswelcomeemail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
*FloatingIPsApi* | [**getNewFloatingIp**](docs/Api/FloatingIPsApi.md#getnewfloatingip) | **GET** /floating_ips/order | Get Floating IP Ordering Information
*FloatingIPsApi* | [**postFloatingIpsChangeIp**](docs/Api/FloatingIPsApi.md#postfloatingipschangeip) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
*FloatingIPsApi* | [**putFloatingIps**](docs/Api/FloatingIPsApi.md#putfloatingips) | **PUT** /floating_ips/order | Validate Floating IP Order
*FloatingIPsApi* | [**updateFloatingIpInfo**](docs/Api/FloatingIPsApi.md#updatefloatingipinfo) | **POST** /floating_ips/{id} | Update Floating IP
*LicensesApi* | [**addLicense**](docs/Api/LicensesApi.md#addlicense) | **POST** /licenses/order | Place License Order
*LicensesApi* | [**getLicenseInfo**](docs/Api/LicensesApi.md#getlicenseinfo) | **GET** /licenses/{id} | Get License
*LicensesApi* | [**getLicenseInvoices**](docs/Api/LicensesApi.md#getlicenseinvoices) | **GET** /licenses/{id}/invoices | Get License Invoices
*LicensesApi* | [**getLicenseList**](docs/Api/LicensesApi.md#getlicenselist) | **GET** /licenses | List Licenses
*LicensesApi* | [**getLicenseOrderCatTagInfo**](docs/Api/LicensesApi.md#getlicenseordercattaginfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category
*LicensesApi* | [**getLicensesWelcomeEmail**](docs/Api/LicensesApi.md#getlicenseswelcomeemail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email
*LicensesApi* | [**getNewLicense**](docs/Api/LicensesApi.md#getnewlicense) | **GET** /licenses/order | Get License Order Information
*LicensesApi* | [**licensesCancel**](docs/Api/LicensesApi.md#licensescancel) | **DELETE** /licenses/{id} | Cancel License
*LicensesApi* | [**postLicenseChangeIp**](docs/Api/LicensesApi.md#postlicensechangeip) | **POST** /licenses/{id}/change_ip | Change License IP
*LicensesApi* | [**putLicenses**](docs/Api/LicensesApi.md#putlicenses) | **PUT** /licenses/order | Validate License Order
*LicensesApi* | [**updateLicenseInfo**](docs/Api/LicensesApi.md#updatelicenseinfo) | **POST** /licenses/{id} | Update License
*MailApi* | [**addMail**](docs/Api/MailApi.md#addmail) | **POST** /mail/order | Place Mail Order
*MailApi* | [**addRule**](docs/Api/MailApi.md#addrule) | **POST** /mail/{id}/rules | Create Deny Rule
*MailApi* | [**createMailAlert**](docs/Api/MailApi.md#createmailalert) | **POST** /mail/{id}/alerts | Create Mail Alert
*MailApi* | [**deleteMailAlert**](docs/Api/MailApi.md#deletemailalert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
*MailApi* | [**deleteRule**](docs/Api/MailApi.md#deleterule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
*MailApi* | [**delistBlock**](docs/Api/MailApi.md#delistblock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
*MailApi* | [**getMailAlerts**](docs/Api/MailApi.md#getmailalerts) | **GET** /mail/{id}/alerts | List Mail Alerts
*MailApi* | [**getMailBlocks**](docs/Api/MailApi.md#getmailblocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
*MailApi* | [**getMailDelist**](docs/Api/MailApi.md#getmaildelist) | **GET** /mail/{id}/delist | Get Delist Status
*MailApi* | [**getMailDeliverability**](docs/Api/MailApi.md#getmaildeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
*MailApi* | [**getMailInfo**](docs/Api/MailApi.md#getmailinfo) | **GET** /mail/{id} | Get Mail Order
*MailApi* | [**getMailInvoices**](docs/Api/MailApi.md#getmailinvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
*MailApi* | [**getMailList**](docs/Api/MailApi.md#getmaillist) | **GET** /mail | List Mail Orders
*MailApi* | [**getMailWelcomeEmail**](docs/Api/MailApi.md#getmailwelcomeemail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
*MailApi* | [**getNewMail**](docs/Api/MailApi.md#getnewmail) | **GET** /mail/order | Get Mail Ordering Information
*MailApi* | [**getRules**](docs/Api/MailApi.md#getrules) | **GET** /mail/{id}/rules | List Deny Rules
*MailApi* | [**getStats**](docs/Api/MailApi.md#getstats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
*MailApi* | [**mailCancel**](docs/Api/MailApi.md#mailcancel) | **DELETE** /mail/{id} | Cancel Mail
*MailApi* | [**postMailDelist**](docs/Api/MailApi.md#postmaildelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
*MailApi* | [**putMail**](docs/Api/MailApi.md#putmail) | **PUT** /mail/order | Validate Mail Order
*MailApi* | [**resetMailPassword**](docs/Api/MailApi.md#resetmailpassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
*MailApi* | [**sendAdvMail**](docs/Api/MailApi.md#sendadvmail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
*MailApi* | [**sendMail**](docs/Api/MailApi.md#sendmail) | **POST** /mail/{id}/send | Send Email
*MailApi* | [**updateMailAlert**](docs/Api/MailApi.md#updatemailalert) | **PUT** /mail/{id}/alerts | Update Mail Alert
*MailApi* | [**updateMailInfo**](docs/Api/MailApi.md#updatemailinfo) | **POST** /mail/{id} | Update Mail Order
*MailApi* | [**viewMailLog**](docs/Api/MailApi.md#viewmaillog) | **GET** /mail/{id}/log | View Mail Log
*PublicApi* | [**getCaptcha**](docs/Api/PublicApi.md#getcaptcha) | **GET** /captcha | Get Captcha Challenge
*PublicApi* | [**getCountries**](docs/Api/PublicApi.md#getcountries) | **GET** /account/countries | Get Countries
*PublicApi* | [**getInfo**](docs/Api/PublicApi.md#getinfo) | **GET** /info | Get Server Info
*PublicApi* | [**getLoginInfo**](docs/Api/PublicApi.md#getlogininfo) | **GET** /login | Get Login Info
*PublicApi* | [**getMPServers**](docs/Api/PublicApi.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
*PublicApi* | [**getOauthRedirect**](docs/Api/PublicApi.md#getoauthredirect) | **GET** /oauth | Get OAuth Redirect URL
*PublicApi* | [**getTimezones**](docs/Api/PublicApi.md#gettimezones) | **GET** /account/timezones | Get Available Timezones
*PublicApi* | [**patchOauthTwoFactor**](docs/Api/PublicApi.md#patchoauthtwofactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
*PublicApi* | [**pingServer**](docs/Api/PublicApi.md#pingserver) | **GET** /ping | Ping Server
*PublicApi* | [**postOauthCallback**](docs/Api/PublicApi.md#postoauthcallback) | **POST** /oauth | OAuth Callback
*PublicApi* | [**submitLogin**](docs/Api/PublicApi.md#submitlogin) | **POST** /login | Submit Login Information
*PublicApi* | [**submitSignup**](docs/Api/PublicApi.md#submitsignup) | **POST** /signup | Submit Signup Information
*QuickServersApi* | [**addQs**](docs/Api/QuickServersApi.md#addqs) | **POST** /qs/order | Place QuickServer Order
*QuickServersApi* | [**deleteQsBackup**](docs/Api/QuickServersApi.md#deleteqsbackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
*QuickServersApi* | [**doQsBlockSmtp**](docs/Api/QuickServersApi.md#doqsblocksmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
*QuickServersApi* | [**doQsDisableCd**](docs/Api/QuickServersApi.md#doqsdisablecd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
*QuickServersApi* | [**doQsDisableQuota**](docs/Api/QuickServersApi.md#doqsdisablequota) | **GET** /qs/{id}/disable_quota | Disable Quotas
*QuickServersApi* | [**doQsEjectCd**](docs/Api/QuickServersApi.md#doqsejectcd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
*QuickServersApi* | [**doQsEnableQuota**](docs/Api/QuickServersApi.md#doqsenablequota) | **GET** /qs/{id}/enable_quota | Enable Quotas
*QuickServersApi* | [**doQsRestart**](docs/Api/QuickServersApi.md#doqsrestart) | **GET** /qs/{id}/restart | Restart QuickServer
*QuickServersApi* | [**doQsStart**](docs/Api/QuickServersApi.md#doqsstart) | **GET** /qs/{id}/start | Start QuickServer
*QuickServersApi* | [**doQsStop**](docs/Api/QuickServersApi.md#doqsstop) | **GET** /qs/{id}/stop | Stop QuickServer
*QuickServersApi* | [**downloadQsBackup**](docs/Api/QuickServersApi.md#downloadqsbackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
*QuickServersApi* | [**getNewQs**](docs/Api/QuickServersApi.md#getnewqs) | **GET** /qs/order | Get QuickServer Ordering Information
*QuickServersApi* | [**getQsBackups**](docs/Api/QuickServersApi.md#getqsbackups) | **GET** /qs/{id}/backups | List QuickServer Backups
*QuickServersApi* | [**getQsChangeHostname**](docs/Api/QuickServersApi.md#getqschangehostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
*QuickServersApi* | [**getQsChangeRootPassword**](docs/Api/QuickServersApi.md#getqschangerootpassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
*QuickServersApi* | [**getQsChangeTimezone**](docs/Api/QuickServersApi.md#getqschangetimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
*QuickServersApi* | [**getQsChangeWebuzoPassword**](docs/Api/QuickServersApi.md#getqschangewebuzopassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
*QuickServersApi* | [**getQsInfo**](docs/Api/QuickServersApi.md#getqsinfo) | **GET** /qs/{id} | Get QuickServer Order
*QuickServersApi* | [**getQsInsertCd**](docs/Api/QuickServersApi.md#getqsinsertcd) | **GET** /qs/{id}/insert_cd | Insert CD Information
*QuickServersApi* | [**getQsInvoices**](docs/Api/QuickServersApi.md#getqsinvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
*QuickServersApi* | [**getQsList**](docs/Api/QuickServersApi.md#getqslist) | **GET** /qs | List QuickServers
*QuickServersApi* | [**getQsReinstallOs**](docs/Api/QuickServersApi.md#getqsreinstallos) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
*QuickServersApi* | [**getQsResetPassword**](docs/Api/QuickServersApi.md#getqsresetpassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
*QuickServersApi* | [**getQsReverseDns**](docs/Api/QuickServersApi.md#getqsreversedns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
*QuickServersApi* | [**getQsSetupVnc**](docs/Api/QuickServersApi.md#getqssetupvnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
*QuickServersApi* | [**getQsTrafficUsage**](docs/Api/QuickServersApi.md#getqstrafficusage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
*QuickServersApi* | [**getQsViewDesktop**](docs/Api/QuickServersApi.md#getqsviewdesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
*QuickServersApi* | [**getQsWelcomeEmail**](docs/Api/QuickServersApi.md#getqswelcomeemail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
*QuickServersApi* | [**postQsBackup**](docs/Api/QuickServersApi.md#postqsbackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
*QuickServersApi* | [**postQsChangeHostname**](docs/Api/QuickServersApi.md#postqschangehostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
*QuickServersApi* | [**postQsChangeRootPassword**](docs/Api/QuickServersApi.md#postqschangerootpassword) | **POST** /qs/{id}/change_root_password | Change Root Password
*QuickServersApi* | [**postQsChangeTimezone**](docs/Api/QuickServersApi.md#postqschangetimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
*QuickServersApi* | [**postQsChangeWebuzoPassword**](docs/Api/QuickServersApi.md#postqschangewebuzopassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
*QuickServersApi* | [**postQsInsertCd**](docs/Api/QuickServersApi.md#postqsinsertcd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
*QuickServersApi* | [**postQsReinstallOs**](docs/Api/QuickServersApi.md#postqsreinstallos) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
*QuickServersApi* | [**postQsResetPassword**](docs/Api/QuickServersApi.md#postqsresetpassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
*QuickServersApi* | [**postQsReverseDns**](docs/Api/QuickServersApi.md#postqsreversedns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
*QuickServersApi* | [**postQsSetupVnc**](docs/Api/QuickServersApi.md#postqssetupvnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
*QuickServersApi* | [**postQsTrafficUsage**](docs/Api/QuickServersApi.md#postqstrafficusage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
*QuickServersApi* | [**postQsViewDesktop**](docs/Api/QuickServersApi.md#postqsviewdesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
*QuickServersApi* | [**postQuickServerRestore**](docs/Api/QuickServersApi.md#postquickserverrestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
*QuickServersApi* | [**putQs**](docs/Api/QuickServersApi.md#putqs) | **PUT** /qs/order | Validate QuickServer Order
*QuickServersApi* | [**quickserversCancel**](docs/Api/QuickServersApi.md#quickserverscancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
*QuickServersApi* | [**updateQsInfo**](docs/Api/QuickServersApi.md#updateqsinfo) | **POST** /qs/{id} | Update QuickServer Order
*SSLCertificatesApi* | [**addSsl**](docs/Api/SSLCertificatesApi.md#addssl) | **POST** /ssl/order | Place SSL Cert Order
*SSLCertificatesApi* | [**getNewSsl**](docs/Api/SSLCertificatesApi.md#getnewssl) | **GET** /ssl/order | SSL Cert Ordering Information
*SSLCertificatesApi* | [**getSslInfo**](docs/Api/SSLCertificatesApi.md#getsslinfo) | **GET** /ssl/{id} | Get SSL Cert Info
*SSLCertificatesApi* | [**getSslInvoices**](docs/Api/SSLCertificatesApi.md#getsslinvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
*SSLCertificatesApi* | [**getSslList**](docs/Api/SSLCertificatesApi.md#getssllist) | **GET** /ssl | List SSL Certs
*SSLCertificatesApi* | [**getSslWelcomeEmail**](docs/Api/SSLCertificatesApi.md#getsslwelcomeemail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
*SSLCertificatesApi* | [**putSsl**](docs/Api/SSLCertificatesApi.md#putssl) | **PUT** /ssl/order | Validate SSL Cert Order
*SSLCertificatesApi* | [**sslCancel**](docs/Api/SSLCertificatesApi.md#sslcancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
*SSLCertificatesApi* | [**updateSslInfo**](docs/Api/SSLCertificatesApi.md#updatesslinfo) | **POST** /ssl/{id} | Update SSL Cert Order
*ScrubIpsApi* | [**cancelScrubIp**](docs/Api/ScrubIpsApi.md#cancelscrubip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
*ScrubIpsApi* | [**createFilter**](docs/Api/ScrubIpsApi.md#createfilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
*ScrubIpsApi* | [**createGeoRule**](docs/Api/ScrubIpsApi.md#creategeorule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
*ScrubIpsApi* | [**createRule**](docs/Api/ScrubIpsApi.md#createrule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
*ScrubIpsApi* | [**deleteFilter**](docs/Api/ScrubIpsApi.md#deletefilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
*ScrubIpsApi* | [**disableScrub**](docs/Api/ScrubIpsApi.md#disablescrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
*ScrubIpsApi* | [**enableScrub**](docs/Api/ScrubIpsApi.md#enablescrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
*ScrubIpsApi* | [**getOrderDetail**](docs/Api/ScrubIpsApi.md#getorderdetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
*ScrubIpsApi* | [**getScrubIpDetails**](docs/Api/ScrubIpsApi.md#getscrubipdetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
*ScrubIpsApi* | [**getScrubIpFilterTypes**](docs/Api/ScrubIpsApi.md#getscrubipfiltertypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
*ScrubIpsApi* | [**getScrubIpInvoices**](docs/Api/ScrubIpsApi.md#getscrubipinvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
*ScrubIpsApi* | [**getScrubIpLogs**](docs/Api/ScrubIpsApi.md#getscrubiplogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
*ScrubIpsApi* | [**getScrubIpsList**](docs/Api/ScrubIpsApi.md#getscrubipslist) | **GET** /scrub_ips | List Scrub IP Services
*ScrubIpsApi* | [**placeScrubOrder**](docs/Api/ScrubIpsApi.md#placescruborder) | **POST** /scrub_ips/order | Place Scrub IP Order
*ScrubIpsApi* | [**scrubIpsDeleteGeoRule**](docs/Api/ScrubIpsApi.md#scrubipsdeletegeorule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
*ScrubIpsApi* | [**scrubIpsDeleteRule**](docs/Api/ScrubIpsApi.md#scrubipsdeleterule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule
*ServersApi* | [**addServer**](docs/Api/ServersApi.md#addserver) | **POST** /servers/order | Place Server Order
*ServersApi* | [**buyItNowServerOrder**](docs/Api/ServersApi.md#buyitnowserverorder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
*ServersApi* | [**getMPServers**](docs/Api/ServersApi.md#getmpservers) | **GET** /buy_now_servers_list | List Marketplace Servers
*ServersApi* | [**getNewServer**](docs/Api/ServersApi.md#getnewserver) | **GET** /servers/order | Server Ordering Information
*ServersApi* | [**getServerInfo**](docs/Api/ServersApi.md#getserverinfo) | **GET** /servers/{id} | Get Server Order
*ServersApi* | [**getServerInvoices**](docs/Api/ServersApi.md#getserverinvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
*ServersApi* | [**getServerList**](docs/Api/ServersApi.md#getserverlist) | **GET** /servers | List Servers
*ServersApi* | [**getServerReverseDns**](docs/Api/ServersApi.md#getserverreversedns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
*ServersApi* | [**getServersWelcomeEmail**](docs/Api/ServersApi.md#getserverswelcomeemail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
*ServersApi* | [**placeBuyNowServer**](docs/Api/ServersApi.md#placebuynowserver) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
*ServersApi* | [**postServerReverseDns**](docs/Api/ServersApi.md#postserverreversedns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
*ServersApi* | [**putServers**](docs/Api/ServersApi.md#putservers) | **PUT** /servers/order | Validate Server Order
*ServersApi* | [**serverIpmiLiveGet**](docs/Api/ServersApi.md#serveripmiliveget) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
*ServersApi* | [**serverIpmiLivePost**](docs/Api/ServersApi.md#serveripmilivepost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
*ServersApi* | [**serverIpmiPowerGet**](docs/Api/ServersApi.md#serveripmipowerget) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
*ServersApi* | [**serverIpmiPowerPost**](docs/Api/ServersApi.md#serveripmipowerpost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
*ServersApi* | [**serversCancel**](docs/Api/ServersApi.md#serverscancel) | **DELETE** /servers/{id} | Cancel Server Service
*ServersApi* | [**updateServerInfo**](docs/Api/ServersApi.md#updateserverinfo) | **POST** /servers/{id} | Update Server Order
*TicketsApi* | [**addNewTicket**](docs/Api/TicketsApi.md#addnewticket) | **POST** /tickets/new | Create New Ticket
*TicketsApi* | [**closeTicket**](docs/Api/TicketsApi.md#closeticket) | **GET** /tickets/{id}/close | Close Ticket
*TicketsApi* | [**deleteTicketInfo**](docs/Api/TicketsApi.md#deleteticketinfo) | **DELETE** /tickets/{id} | Close Ticket
*TicketsApi* | [**getNewTicket**](docs/Api/TicketsApi.md#getnewticket) | **GET** /tickets/new | Gets Information for creating a new ticket.
*TicketsApi* | [**getTicketInfo**](docs/Api/TicketsApi.md#getticketinfo) | **GET** /tickets/{id} | Get Ticket Information
*TicketsApi* | [**getTicketsList**](docs/Api/TicketsApi.md#getticketslist) | **GET** /tickets | List Support Tickets
*TicketsApi* | [**postTicketInfo**](docs/Api/TicketsApi.md#postticketinfo) | **POST** /tickets/{id} | Reply To Ticket
*TicketsApi* | [**postTicketsList**](docs/Api/TicketsApi.md#postticketslist) | **POST** /tickets | Search Support Tickets
*TicketsApi* | [**putTicketInfo**](docs/Api/TicketsApi.md#putticketinfo) | **PUT** /tickets/{id} | Update Ticket
*TicketsApi* | [**replyTicket**](docs/Api/TicketsApi.md#replyticket) | **POST** /tickets/{id}/reply | Reply Ticket
*TicketsApi* | [**updateTicketInfo**](docs/Api/TicketsApi.md#updateticketinfo) | **POST** /tickets/{id}/update | Update Ticket
*VPSApi* | [**addVps**](docs/Api/VPSApi.md#addvps) | **POST** /vps/order | Place VPS Order
*VPSApi* | [**deleteVpsBackup**](docs/Api/VPSApi.md#deletevpsbackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
*VPSApi* | [**doVpsBlockSmtp**](docs/Api/VPSApi.md#dovpsblocksmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
*VPSApi* | [**doVpsDisableCd**](docs/Api/VPSApi.md#dovpsdisablecd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
*VPSApi* | [**doVpsDisableQuota**](docs/Api/VPSApi.md#dovpsdisablequota) | **GET** /vps/{id}/disable_quota | Disable Quotas
*VPSApi* | [**doVpsEjectCd**](docs/Api/VPSApi.md#dovpsejectcd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
*VPSApi* | [**doVpsEnableQuota**](docs/Api/VPSApi.md#dovpsenablequota) | **GET** /vps/{id}/enable_quota | Enable Quotas
*VPSApi* | [**doVpsRestart**](docs/Api/VPSApi.md#dovpsrestart) | **GET** /vps/{id}/restart | Restart VPS
*VPSApi* | [**doVpsStart**](docs/Api/VPSApi.md#dovpsstart) | **GET** /vps/{id}/start | Start VPS
*VPSApi* | [**doVpsStop**](docs/Api/VPSApi.md#dovpsstop) | **GET** /vps/{id}/stop | Stop VPS
*VPSApi* | [**downloadVpsBackup**](docs/Api/VPSApi.md#downloadvpsbackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
*VPSApi* | [**getNewVps**](docs/Api/VPSApi.md#getnewvps) | **GET** /vps/order | VPS Ordering Information
*VPSApi* | [**getVpsBackups**](docs/Api/VPSApi.md#getvpsbackups) | **GET** /vps/{id}/backups | Get VPS Backups List
*VPSApi* | [**getVpsBuyHdSpace**](docs/Api/VPSApi.md#getvpsbuyhdspace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
*VPSApi* | [**getVpsBuyIp**](docs/Api/VPSApi.md#getvpsbuyip) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
*VPSApi* | [**getVpsChangeTimezone**](docs/Api/VPSApi.md#getvpschangetimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
*VPSApi* | [**getVpsInfo**](docs/Api/VPSApi.md#getvpsinfo) | **GET** /vps/{id} | Get VPS Order
*VPSApi* | [**getVpsInvoices**](docs/Api/VPSApi.md#getvpsinvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
*VPSApi* | [**getVpsList**](docs/Api/VPSApi.md#getvpslist) | **GET** /vps | List VPS Orders
*VPSApi* | [**getVpsReinstallOs**](docs/Api/VPSApi.md#getvpsreinstallos) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
*VPSApi* | [**getVpsReverseDns**](docs/Api/VPSApi.md#getvpsreversedns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
*VPSApi* | [**getVpsSetupVnc**](docs/Api/VPSApi.md#getvpssetupvnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
*VPSApi* | [**getVpsSlices**](docs/Api/VPSApi.md#getvpsslices) | **GET** /vps/{id}/slices | Slice Upgrade Info
*VPSApi* | [**getVpsTrafficUsage**](docs/Api/VPSApi.md#getvpstrafficusage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
*VPSApi* | [**getVpsViewDesktop**](docs/Api/VPSApi.md#getvpsviewdesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
*VPSApi* | [**getVpsWelcomeEmail**](docs/Api/VPSApi.md#getvpswelcomeemail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
*VPSApi* | [**postVpsBackup**](docs/Api/VPSApi.md#postvpsbackup) | **GET** /vps/{id}/backup | Start a VPS Backup
*VPSApi* | [**postVpsBuyHdSpace**](docs/Api/VPSApi.md#postvpsbuyhdspace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
*VPSApi* | [**postVpsBuyIp**](docs/Api/VPSApi.md#postvpsbuyip) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
*VPSApi* | [**postVpsChangeHostname**](docs/Api/VPSApi.md#postvpschangehostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
*VPSApi* | [**postVpsChangeRootPassword**](docs/Api/VPSApi.md#postvpschangerootpassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
*VPSApi* | [**postVpsChangeTimezone**](docs/Api/VPSApi.md#postvpschangetimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
*VPSApi* | [**postVpsChangeWebuzoPassword**](docs/Api/VPSApi.md#postvpschangewebuzopassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
*VPSApi* | [**postVpsInsertCd**](docs/Api/VPSApi.md#postvpsinsertcd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
*VPSApi* | [**postVpsReinstallOs**](docs/Api/VPSApi.md#postvpsreinstallos) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
*VPSApi* | [**postVpsResetPassword**](docs/Api/VPSApi.md#postvpsresetpassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
*VPSApi* | [**postVpsRestore**](docs/Api/VPSApi.md#postvpsrestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
*VPSApi* | [**postVpsReverseDns**](docs/Api/VPSApi.md#postvpsreversedns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
*VPSApi* | [**postVpsSetupVnc**](docs/Api/VPSApi.md#postvpssetupvnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
*VPSApi* | [**postVpsSlices**](docs/Api/VPSApi.md#postvpsslices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
*VPSApi* | [**postVpsViewDesktop**](docs/Api/VPSApi.md#postvpsviewdesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
*VPSApi* | [**putVps**](docs/Api/VPSApi.md#putvps) | **PUT** /vps/order | Validate VPS Order
*VPSApi* | [**updateVpsInfo**](docs/Api/VPSApi.md#updatevpsinfo) | **POST** /vps/{id} | Update VPS Order
*VPSApi* | [**vPSCancel**](docs/Api/VPSApi.md#vpscancel) | **DELETE** /vps/{id} | Cancel VPS Service
*WebhostingApi* | [**addWebsite**](docs/Api/WebhostingApi.md#addwebsite) | **POST** /websites/order | Place Website Order
*WebhostingApi* | [**getNewWebsite**](docs/Api/WebhostingApi.md#getnewwebsite) | **GET** /websites/order | Website Ordering Information
*WebhostingApi* | [**getWebsiteBuyIp**](docs/Api/WebhostingApi.md#getwebsitebuyip) | **GET** /websites/{id}/buy_ip | Get Website IP Information
*WebhostingApi* | [**getWebsiteInfo**](docs/Api/WebhostingApi.md#getwebsiteinfo) | **GET** /websites/{id} | Get Website Order
*WebhostingApi* | [**getWebsiteInvoices**](docs/Api/WebhostingApi.md#getwebsiteinvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
*WebhostingApi* | [**getWebsiteList**](docs/Api/WebhostingApi.md#getwebsitelist) | **GET** /websites | Get Website Listing
*WebhostingApi* | [**getWebsitesBackups**](docs/Api/WebhostingApi.md#getwebsitesbackups) | **GET** /websites/{id}/backups | Get Website Backups
*WebhostingApi* | [**getWebsitesLogin**](docs/Api/WebhostingApi.md#getwebsiteslogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
*WebhostingApi* | [**getWebsitesWelcomeEmail**](docs/Api/WebhostingApi.md#getwebsiteswelcomeemail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
*WebhostingApi* | [**gettWebsiteReverseDns**](docs/Api/WebhostingApi.md#gettwebsitereversedns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
*WebhostingApi* | [**postWebsiteBuyIp**](docs/Api/WebhostingApi.md#postwebsitebuyip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
*WebhostingApi* | [**postWebsiteMigration**](docs/Api/WebhostingApi.md#postwebsitemigration) | **POST** /websites/{id}/migration | Request Website Migration
*WebhostingApi* | [**postWebsitesReverseDns**](docs/Api/WebhostingApi.md#postwebsitesreversedns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
*WebhostingApi* | [**putWebsites**](docs/Api/WebhostingApi.md#putwebsites) | **PUT** /websites/order | Validate Webhosting Order
*WebhostingApi* | [**updateWebsiteInfo**](docs/Api/WebhostingApi.md#updatewebsiteinfo) | **POST** /websites/{id} | Update Website Order
*WebhostingApi* | [**webhostingCancel**](docs/Api/WebhostingApi.md#webhostingcancel) | **DELETE** /websites/{id} | Cancel Website

## Models

- [AccountFeatures](docs/Model/AccountFeatures.md)
- [AccountInfo](docs/Model/AccountInfo.md)
- [AccountInfoCountryCurrencies](docs/Model/AccountInfoCountryCurrencies.md)
- [AccountInfoData](docs/Model/AccountInfoData.md)
- [AccountInfoDataCc](docs/Model/AccountInfoDataCc.md)
- [AccountInfoDataCcs](docs/Model/AccountInfoDataCcs.md)
- [AccountInfoDataEmailSettings](docs/Model/AccountInfoDataEmailSettings.md)
- [AccountInfoDataExtra](docs/Model/AccountInfoDataExtra.md)
- [AccountInfoDataFraudrecord](docs/Model/AccountInfoDataFraudrecord.md)
- [AccountInfoLimits](docs/Model/AccountInfoLimits.md)
- [AccountInfoLimitsInner](docs/Model/AccountInfoLimitsInner.md)
- [AccountInfoMaxMindResponse](docs/Model/AccountInfoMaxMindResponse.md)
- [AccountInfoMaxMindResponseRiskScore](docs/Model/AccountInfoMaxMindResponseRiskScore.md)
- [AccountInfoOauthConfig](docs/Model/AccountInfoOauthConfig.md)
- [AccountInfoOauthConfigProviders](docs/Model/AccountInfoOauthConfigProviders.md)
- [AccountInfoOauthConfigProvidersValue](docs/Model/AccountInfoOauthConfigProvidersValue.md)
- [AccountInfoOauthproviders](docs/Model/AccountInfoOauthproviders.md)
- [AccountInfoPost](docs/Model/AccountInfoPost.md)
- [AccountSshKey](docs/Model/AccountSshKey.md)
- [AffiliateBannerRow](docs/Model/AffiliateBannerRow.md)
- [AffiliateDockSetup](docs/Model/AffiliateDockSetup.md)
- [AffiliatePaymentSetup](docs/Model/AffiliatePaymentSetup.md)
- [AffiliateTrafficRow](docs/Model/AffiliateTrafficRow.md)
- [AssetServer](docs/Model/AssetServer.md)
- [AssetServerCPUInner](docs/Model/AssetServerCPUInner.md)
- [Backup](docs/Model/Backup.md)
- [BackupBillingDetails](docs/Model/BackupBillingDetails.md)
- [BackupClientLink](docs/Model/BackupClientLink.md)
- [BackupExtraInfoTables](docs/Model/BackupExtraInfoTables.md)
- [BackupIPInfo](docs/Model/BackupIPInfo.md)
- [BackupIPInfoRow](docs/Model/BackupIPInfoRow.md)
- [BackupLoginResponse](docs/Model/BackupLoginResponse.md)
- [BackupOrderPostResponse](docs/Model/BackupOrderPostResponse.md)
- [BackupOrderPostResponseCjParams](docs/Model/BackupOrderPostResponseCjParams.md)
- [BackupOrderPutRequest](docs/Model/BackupOrderPutRequest.md)
- [BackupOrderPutResponse](docs/Model/BackupOrderPutResponse.md)
- [BackupRow](docs/Model/BackupRow.md)
- [BackupServiceInfo](docs/Model/BackupServiceInfo.md)
- [BackupServiceMaster](docs/Model/BackupServiceMaster.md)
- [BackupsOrder](docs/Model/BackupsOrder.md)
- [BackupsOrderPackageCosts](docs/Model/BackupsOrderPackageCosts.md)
- [BackupsOrderServiceTypes](docs/Model/BackupsOrderServiceTypes.md)
- [Bandwidth](docs/Model/Bandwidth.md)
- [BillingAddCcRequest](docs/Model/BillingAddCcRequest.md)
- [BillingInvoiceDetail](docs/Model/BillingInvoiceDetail.md)
- [BillingInvoiceList](docs/Model/BillingInvoiceList.md)
- [BillingPaymentMethodRequest](docs/Model/BillingPaymentMethodRequest.md)
- [BillingPrepayRequest](docs/Model/BillingPrepayRequest.md)
- [BillingVerifyCcRequest](docs/Model/BillingVerifyCcRequest.md)
- [BuyItNowList](docs/Model/BuyItNowList.md)
- [BuyItNowRow](docs/Model/BuyItNowRow.md)
- [BuyItNowRowCpuInner](docs/Model/BuyItNowRowCpuInner.md)
- [BuyItNowRowCpuInnerOneOf](docs/Model/BuyItNowRowCpuInnerOneOf.md)
- [BuyItNowServerOrder200Response](docs/Model/BuyItNowServerOrder200Response.md)
- [BuyItNowServerOrder200ResponseBandwidthInner](docs/Model/BuyItNowServerOrder200ResponseBandwidthInner.md)
- [BuyItNowServerOrder200ResponseCpInner](docs/Model/BuyItNowServerOrder200ResponseCpInner.md)
- [BuyItNowServerOrder200ResponseIpsInner](docs/Model/BuyItNowServerOrder200ResponseIpsInner.md)
- [BuyItNowServerOrder200ResponseOsInner](docs/Model/BuyItNowServerOrder200ResponseOsInner.md)
- [BuyItNowServerOrder200ResponseRaidInner](docs/Model/BuyItNowServerOrder200ResponseRaidInner.md)
- [CancelBackup200Response](docs/Model/CancelBackup200Response.md)
- [CancelDomain200Response](docs/Model/CancelDomain200Response.md)
- [CancelScrubIp200Response](docs/Model/CancelScrubIp200Response.md)
- [CaptchaResponse](docs/Model/CaptchaResponse.md)
- [ChargeInvoiceRows](docs/Model/ChargeInvoiceRows.md)
- [ChargeInvoiceRowsInvoicesValue](docs/Model/ChargeInvoiceRowsInvoicesValue.md)
- [ChargeInvoiceRowsInvoicesValuePaidInvoicesValue](docs/Model/ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.md)
- [ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue](docs/Model/ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.md)
- [CloseTicketResponseSchema](docs/Model/CloseTicketResponseSchema.md)
- [ConfigIds](docs/Model/ConfigIds.md)
- [ConfigLists](docs/Model/ConfigLists.md)
- [ControlPanel](docs/Model/ControlPanel.md)
- [Cpu](docs/Model/Cpu.md)
- [CpuWithDefaults](docs/Model/CpuWithDefaults.md)
- [CreateFilter](docs/Model/CreateFilter.md)
- [CreateFilter201Response](docs/Model/CreateFilter201Response.md)
- [CreateFilter400Response](docs/Model/CreateFilter400Response.md)
- [CreateFilter500Response](docs/Model/CreateFilter500Response.md)
- [CreateFirewallRule](docs/Model/CreateFirewallRule.md)
- [CreateGeoFirewallRule](docs/Model/CreateGeoFirewallRule.md)
- [CreateGeoRule400Response](docs/Model/CreateGeoRule400Response.md)
- [CreateRule201Response](docs/Model/CreateRule201Response.md)
- [CreateRule400Response](docs/Model/CreateRule400Response.md)
- [CreateRule500Response](docs/Model/CreateRule500Response.md)
- [DeleteFilter200Response](docs/Model/DeleteFilter200Response.md)
- [DeleteFilter400Response](docs/Model/DeleteFilter400Response.md)
- [DeleteFilter500Response](docs/Model/DeleteFilter500Response.md)
- [DeleteFirewallRule](docs/Model/DeleteFirewallRule.md)
- [DeleteGeoFirewallRule](docs/Model/DeleteGeoFirewallRule.md)
- [DenyRuleNew](docs/Model/DenyRuleNew.md)
- [DenyRuleRecord](docs/Model/DenyRuleRecord.md)
- [DisableScrub200Response](docs/Model/DisableScrub200Response.md)
- [DisableScrub400Response](docs/Model/DisableScrub400Response.md)
- [DisableScrub500Response](docs/Model/DisableScrub500Response.md)
- [DnsListItem](docs/Model/DnsListItem.md)
- [DnsNewDomain](docs/Model/DnsNewDomain.md)
- [DnsNewRecord](docs/Model/DnsNewRecord.md)
- [DnsRecord](docs/Model/DnsRecord.md)
- [DnsRecordType](docs/Model/DnsRecordType.md)
- [DnsUpdateRecord](docs/Model/DnsUpdateRecord.md)
- [Domain](docs/Model/Domain.md)
- [DomainAdminContact](docs/Model/DomainAdminContact.md)
- [DomainAllInfo](docs/Model/DomainAllInfo.md)
- [DomainAllInfoAttributes](docs/Model/DomainAllInfoAttributes.md)
- [DomainAllInfoAttributesContactSet](docs/Model/DomainAllInfoAttributesContactSet.md)
- [DomainBillingDetails](docs/Model/DomainBillingDetails.md)
- [DomainBillingExtra](docs/Model/DomainBillingExtra.md)
- [DomainClientLink](docs/Model/DomainClientLink.md)
- [DomainContactDetails](docs/Model/DomainContactDetails.md)
- [DomainDnssecRecords](docs/Model/DomainDnssecRecords.md)
- [DomainDnssecRecordsInner](docs/Model/DomainDnssecRecordsInner.md)
- [DomainDnssecRequest](docs/Model/DomainDnssecRequest.md)
- [DomainLookupResponse](docs/Model/DomainLookupResponse.md)
- [DomainNameServer](docs/Model/DomainNameServer.md)
- [DomainNameserverGetResponse](docs/Model/DomainNameserverGetResponse.md)
- [DomainNameserverGetResponseInner](docs/Model/DomainNameserverGetResponseInner.md)
- [DomainNameserverPostRequest](docs/Model/DomainNameserverPostRequest.md)
- [DomainNameserverPutRequest](docs/Model/DomainNameserverPutRequest.md)
- [DomainOrder](docs/Model/DomainOrder.md)
- [DomainOrderResponse](docs/Model/DomainOrderResponse.md)
- [DomainOrderResponseAttributes](docs/Model/DomainOrderResponseAttributes.md)
- [DomainOrderServices](docs/Model/DomainOrderServices.md)
- [DomainOrderServices10001](docs/Model/DomainOrderServices10001.md)
- [DomainOrderTldServices](docs/Model/DomainOrderTldServices.md)
- [DomainOwnerContact](docs/Model/DomainOwnerContact.md)
- [DomainProvProcessPending](docs/Model/DomainProvProcessPending.md)
- [DomainProvProcessPendingAttributes](docs/Model/DomainProvProcessPendingAttributes.md)
- [DomainRow](docs/Model/DomainRow.md)
- [DomainSearchResponse](docs/Model/DomainSearchResponse.md)
- [DomainServiceInfo](docs/Model/DomainServiceInfo.md)
- [DomainServiceType](docs/Model/DomainServiceType.md)
- [DomainTechContact](docs/Model/DomainTechContact.md)
- [DomainWhoisPrivacyRequest](docs/Model/DomainWhoisPrivacyRequest.md)
- [DownloadQsBackup200Response](docs/Model/DownloadQsBackup200Response.md)
- [DownloadQsBackupRequest](docs/Model/DownloadQsBackupRequest.md)
- [EmailAddress](docs/Model/EmailAddress.md)
- [EmailAddressName](docs/Model/EmailAddressName.md)
- [EnableScrub200Response](docs/Model/EnableScrub200Response.md)
- [EnableScrub500Response](docs/Model/EnableScrub500Response.md)
- [FieldLabel](docs/Model/FieldLabel.md)
- [FloatingIpsCancel200Response](docs/Model/FloatingIpsCancel200Response.md)
- [FormValues](docs/Model/FormValues.md)
- [GenericResponse](docs/Model/GenericResponse.md)
- [GetAccountInfo401Response](docs/Model/GetAccountInfo401Response.md)
- [GetAccountTfaSetup200Response](docs/Model/GetAccountTfaSetup200Response.md)
- [GetOauthRedirect200Response](docs/Model/GetOauthRedirect200Response.md)
- [GetOrderDetail200Response](docs/Model/GetOrderDetail200Response.md)
- [GetOrderDetail200ResponseIpsInner](docs/Model/GetOrderDetail200ResponseIpsInner.md)
- [GetOrderDetail200ResponsePackageCosts](docs/Model/GetOrderDetail200ResponsePackageCosts.md)
- [GetOrderDetail200ResponseServiceTypesInner](docs/Model/GetOrderDetail200ResponseServiceTypesInner.md)
- [GetScrubIpDetails200Response](docs/Model/GetScrubIpDetails200Response.md)
- [GetScrubIpDetails200ResponseBillingDetails](docs/Model/GetScrubIpDetails200ResponseBillingDetails.md)
- [GetScrubIpDetails200ResponseClientLinksInner](docs/Model/GetScrubIpDetails200ResponseClientLinksInner.md)
- [GetScrubIpDetails200ResponseExtraInfoTables](docs/Model/GetScrubIpDetails200ResponseExtraInfoTables.md)
- [GetScrubIpDetails200ResponseExtraInfoTablesScrubIps](docs/Model/GetScrubIpDetails200ResponseExtraInfoTablesScrubIps.md)
- [GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner](docs/Model/GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner.md)
- [GetScrubIpDetails200ResponseFilterFirewall](docs/Model/GetScrubIpDetails200ResponseFilterFirewall.md)
- [GetScrubIpDetails200ResponseFilterFirewallFiltersInner](docs/Model/GetScrubIpDetails200ResponseFilterFirewallFiltersInner.md)
- [GetScrubIpDetails200ResponseFilterFirewallRulesInner](docs/Model/GetScrubIpDetails200ResponseFilterFirewallRulesInner.md)
- [GetScrubIpDetails200ResponseServiceInfo](docs/Model/GetScrubIpDetails200ResponseServiceInfo.md)
- [GetWebsiteBuyIp200Response](docs/Model/GetWebsiteBuyIp200Response.md)
- [HardDrive](docs/Model/HardDrive.md)
- [Home](docs/Model/Home.md)
- [HomeDetails](docs/Model/HomeDetails.md)
- [HomeDetailsModules](docs/Model/HomeDetailsModules.md)
- [HomeDetailsModulesBackups](docs/Model/HomeDetailsModulesBackups.md)
- [HomeDetailsModulesDomains](docs/Model/HomeDetailsModulesDomains.md)
- [HomeDetailsModulesLicenses](docs/Model/HomeDetailsModulesLicenses.md)
- [HomeDetailsModulesQuickservers](docs/Model/HomeDetailsModulesQuickservers.md)
- [HomeDetailsModulesServers](docs/Model/HomeDetailsModulesServers.md)
- [HomeDetailsModulesVps](docs/Model/HomeDetailsModulesVps.md)
- [HomeDetailsModulesWebhosting](docs/Model/HomeDetailsModulesWebhosting.md)
- [HomeServices](docs/Model/HomeServices.md)
- [HomeServicesBackups](docs/Model/HomeServicesBackups.md)
- [HomeServicesDomains](docs/Model/HomeServicesDomains.md)
- [HomeServicesDomainsLinks](docs/Model/HomeServicesDomainsLinks.md)
- [HomeServicesLicenses](docs/Model/HomeServicesLicenses.md)
- [HomeServicesLicensesLinks](docs/Model/HomeServicesLicensesLinks.md)
- [HomeServicesServers](docs/Model/HomeServicesServers.md)
- [HomeServicesServersLinks](docs/Model/HomeServicesServersLinks.md)
- [HomeServicesVps](docs/Model/HomeServicesVps.md)
- [HomeServicesVpsLinks](docs/Model/HomeServicesVpsLinks.md)
- [HomeServicesWebhosting](docs/Model/HomeServicesWebhosting.md)
- [HomeServicesWebhostingLinks](docs/Model/HomeServicesWebhostingLinks.md)
- [HomeTicketStatus](docs/Model/HomeTicketStatus.md)
- [HomeTicketStatusView](docs/Model/HomeTicketStatusView.md)
- [HostnameObject](docs/Model/HostnameObject.md)
- [InitiatePayment200Response](docs/Model/InitiatePayment200Response.md)
- [InlineObject](docs/Model/InlineObject.md)
- [Invoice](docs/Model/Invoice.md)
- [InvoiceRow](docs/Model/InvoiceRow.md)
- [IpBlock](docs/Model/IpBlock.md)
- [IpLimitRange](docs/Model/IpLimitRange.md)
- [IpObject](docs/Model/IpObject.md)
- [License](docs/Model/License.md)
- [LicenseBillingDetails](docs/Model/LicenseBillingDetails.md)
- [LicenseClientLink](docs/Model/LicenseClientLink.md)
- [LicenseExtraInfoTables](docs/Model/LicenseExtraInfoTables.md)
- [LicenseIpInfo](docs/Model/LicenseIpInfo.md)
- [LicenseIpInfoRow](docs/Model/LicenseIpInfoRow.md)
- [LicenseRow](docs/Model/LicenseRow.md)
- [LicenseServiceInfo](docs/Model/LicenseServiceInfo.md)
- [LicenseServiceType](docs/Model/LicenseServiceType.md)
- [LicensesCancel200Response](docs/Model/LicensesCancel200Response.md)
- [LicensesOrder](docs/Model/LicensesOrder.md)
- [LicensesOrderPackageCosts](docs/Model/LicensesOrderPackageCosts.md)
- [LicensesOrderServiceCategories](docs/Model/LicensesOrderServiceCategories.md)
- [LicensesOrderServiceCategories509](docs/Model/LicensesOrderServiceCategories509.md)
- [LicensesOrderServiceTypes](docs/Model/LicensesOrderServiceTypes.md)
- [LicensesOrderServiceTypes11482](docs/Model/LicensesOrderServiceTypes11482.md)
- [LoginErrorResponse](docs/Model/LoginErrorResponse.md)
- [LoginInfo](docs/Model/LoginInfo.md)
- [LoginServiceCounts](docs/Model/LoginServiceCounts.md)
- [LoginSubmissionExample](docs/Model/LoginSubmissionExample.md)
- [LoginSubmissionExampleGRecaptchaResponse](docs/Model/LoginSubmissionExampleGRecaptchaResponse.md)
- [LoginSubmissionExampleGRecaptchaResponseDep](docs/Model/LoginSubmissionExampleGRecaptchaResponseDep.md)
- [LoginSuccessResponse](docs/Model/LoginSuccessResponse.md)
- [MailAlertRequest](docs/Model/MailAlertRequest.md)
- [MailAlertUpdateRequest](docs/Model/MailAlertUpdateRequest.md)
- [MailAlertsResponse](docs/Model/MailAlertsResponse.md)
- [MailAlertsResponseInner](docs/Model/MailAlertsResponseInner.md)
- [MailAttachment](docs/Model/MailAttachment.md)
- [MailBillingDetails](docs/Model/MailBillingDetails.md)
- [MailBlockClickHouse](docs/Model/MailBlockClickHouse.md)
- [MailBlockRspamd](docs/Model/MailBlockRspamd.md)
- [MailBlocks](docs/Model/MailBlocks.md)
- [MailCancel200Response](docs/Model/MailCancel200Response.md)
- [MailClientLink](docs/Model/MailClientLink.md)
- [MailDelistRequest](docs/Model/MailDelistRequest.md)
- [MailDelistResponse](docs/Model/MailDelistResponse.md)
- [MailDeliverabilityResponse](docs/Model/MailDeliverabilityResponse.md)
- [MailExtraInfoTable](docs/Model/MailExtraInfoTable.md)
- [MailExtraInfoTableRow](docs/Model/MailExtraInfoTableRow.md)
- [MailLog](docs/Model/MailLog.md)
- [MailLogEntry](docs/Model/MailLogEntry.md)
- [MailOrder](docs/Model/MailOrder.md)
- [MailRow](docs/Model/MailRow.md)
- [MailSchema](docs/Model/MailSchema.md)
- [MailSchemaExtraInfoTables](docs/Model/MailSchemaExtraInfoTables.md)
- [MailServiceInfo](docs/Model/MailServiceInfo.md)
- [MailServiceType](docs/Model/MailServiceType.md)
- [MailStatsType](docs/Model/MailStatsType.md)
- [MailStatsTypeVolume](docs/Model/MailStatsTypeVolume.md)
- [MailStatsTypeVolumeFrom](docs/Model/MailStatsTypeVolumeFrom.md)
- [MailStatsTypeVolumeIp](docs/Model/MailStatsTypeVolumeIp.md)
- [MailStatsTypeVolumeTo](docs/Model/MailStatsTypeVolumeTo.md)
- [MailTutorialsTable](docs/Model/MailTutorialsTable.md)
- [MailTutorialsTableRow](docs/Model/MailTutorialsTableRow.md)
- [MemoryOption](docs/Model/MemoryOption.md)
- [ModuleSettings](docs/Model/ModuleSettings.md)
- [Modules](docs/Model/Modules.md)
- [MonthlyCounts](docs/Model/MonthlyCounts.md)
- [OperatingSystem](docs/Model/OperatingSystem.md)
- [PasswordRequest](docs/Model/PasswordRequest.md)
- [PatchOauthTwoFactor200Response](docs/Model/PatchOauthTwoFactor200Response.md)
- [PatchOauthTwoFactorRequest](docs/Model/PatchOauthTwoFactorRequest.md)
- [PaymentInvoiceRows](docs/Model/PaymentInvoiceRows.md)
- [PlaceBuyNowServerRequest](docs/Model/PlaceBuyNowServerRequest.md)
- [PlaceScrubOrder201Response](docs/Model/PlaceScrubOrder201Response.md)
- [PlaceScrubOrder201ResponseOrderDetails](docs/Model/PlaceScrubOrder201ResponseOrderDetails.md)
- [PlaceScrubOrder201ResponseOrderDetailsCjParams](docs/Model/PlaceScrubOrder201ResponseOrderDetailsCjParams.md)
- [PostOauthCallback200Response](docs/Model/PostOauthCallback200Response.md)
- [PostOauthCallbackRequest](docs/Model/PostOauthCallbackRequest.md)
- [PostWebsiteBuyIp200Response](docs/Model/PostWebsiteBuyIp200Response.md)
- [PostWebsiteBuyIpRequest](docs/Model/PostWebsiteBuyIpRequest.md)
- [PostWebsiteMigration200Response](docs/Model/PostWebsiteMigration200Response.md)
- [PostWebsiteMigrationRequest](docs/Model/PostWebsiteMigrationRequest.md)
- [QueueResponse](docs/Model/QueueResponse.md)
- [Quickserver](docs/Model/Quickserver.md)
- [QuickserverAddons](docs/Model/QuickserverAddons.md)
- [QuickserverAddonsRow](docs/Model/QuickserverAddonsRow.md)
- [QuickserverBillingDetails](docs/Model/QuickserverBillingDetails.md)
- [QuickserverClientLink](docs/Model/QuickserverClientLink.md)
- [QuickserverExtraInfoTables](docs/Model/QuickserverExtraInfoTables.md)
- [QuickserverIpInfo](docs/Model/QuickserverIpInfo.md)
- [QuickserverIpTableRow](docs/Model/QuickserverIpTableRow.md)
- [QuickserverOrder](docs/Model/QuickserverOrder.md)
- [QuickserverOrderDistroSel](docs/Model/QuickserverOrderDistroSel.md)
- [QuickserverOrderDistroSelUbuntu](docs/Model/QuickserverOrderDistroSelUbuntu.md)
- [QuickserverOrderServerDetails](docs/Model/QuickserverOrderServerDetails.md)
- [QuickserverOrderServerDetails381](docs/Model/QuickserverOrderServerDetails381.md)
- [QuickserverOrderTemplates](docs/Model/QuickserverOrderTemplates.md)
- [QuickserverOrderTemplatesUbuntu64](docs/Model/QuickserverOrderTemplatesUbuntu64.md)
- [QuickserverOrderVersion](docs/Model/QuickserverOrderVersion.md)
- [QuickserverOrderVersionCentosstream8](docs/Model/QuickserverOrderVersionCentosstream8.md)
- [QuickserverRow](docs/Model/QuickserverRow.md)
- [QuickserverServiceExtra](docs/Model/QuickserverServiceExtra.md)
- [QuickserverServiceInfo](docs/Model/QuickserverServiceInfo.md)
- [QuickserverServiceMaster](docs/Model/QuickserverServiceMaster.md)
- [QuickserversCancel200Response](docs/Model/QuickserversCancel200Response.md)
- [RaidOption](docs/Model/RaidOption.md)
- [Region](docs/Model/Region.md)
- [ReplyTicketRequest](docs/Model/ReplyTicketRequest.md)
- [ReplyTicketResponseSchema](docs/Model/ReplyTicketResponseSchema.md)
- [RestoreRequest](docs/Model/RestoreRequest.md)
- [ReverseDnsEntries](docs/Model/ReverseDnsEntries.md)
- [ScrubIpFilterTypes](docs/Model/ScrubIpFilterTypes.md)
- [ScrubIpFilterTypesFiltersValue](docs/Model/ScrubIpFilterTypesFiltersValue.md)
- [ScrubIpPlaceOrder](docs/Model/ScrubIpPlaceOrder.md)
- [ScrubIpsDeleteRule200Response](docs/Model/ScrubIpsDeleteRule200Response.md)
- [ScrubIpsDeleteRule400Response](docs/Model/ScrubIpsDeleteRule400Response.md)
- [ScrubIpsDeleteRule500Response](docs/Model/ScrubIpsDeleteRule500Response.md)
- [ScrubIpsLogRowSchema](docs/Model/ScrubIpsLogRowSchema.md)
- [ScrubIpsRowSchema](docs/Model/ScrubIpsRowSchema.md)
- [SearchAutocompleteResponse](docs/Model/SearchAutocompleteResponse.md)
- [SendMail](docs/Model/SendMail.md)
- [SendMailAdv](docs/Model/SendMailAdv.md)
- [Server](docs/Model/Server.md)
- [ServerAsset](docs/Model/ServerAsset.md)
- [ServerAssets](docs/Model/ServerAssets.md)
- [ServerBillingDetails](docs/Model/ServerBillingDetails.md)
- [ServerClientLink](docs/Model/ServerClientLink.md)
- [ServerExtraInfoTables](docs/Model/ServerExtraInfoTables.md)
- [ServerIpmiLiveInfo](docs/Model/ServerIpmiLiveInfo.md)
- [ServerIpmiLiveRequest](docs/Model/ServerIpmiLiveRequest.md)
- [ServerIpmiPowerRequest](docs/Model/ServerIpmiPowerRequest.md)
- [ServerLease](docs/Model/ServerLease.md)
- [ServerLocation1](docs/Model/ServerLocation1.md)
- [ServerLocations](docs/Model/ServerLocations.md)
- [ServerNetworkInfo](docs/Model/ServerNetworkInfo.md)
- [ServerNetworkInfoAssets](docs/Model/ServerNetworkInfoAssets.md)
- [ServerNetworkInfoSwitchports](docs/Model/ServerNetworkInfoSwitchports.md)
- [ServerOrder](docs/Model/ServerOrder.md)
- [ServerOrderBandwidth](docs/Model/ServerOrderBandwidth.md)
- [ServerOrderBandwidthLi](docs/Model/ServerOrderBandwidthLi.md)
- [ServerOrderCPU](docs/Model/ServerOrderCPU.md)
- [ServerOrderConfigIds](docs/Model/ServerOrderConfigIds.md)
- [ServerOrderControlPanel](docs/Model/ServerOrderControlPanel.md)
- [ServerOrderCpLi](docs/Model/ServerOrderCpLi.md)
- [ServerOrderCpuLi](docs/Model/ServerOrderCpuLi.md)
- [ServerOrderFieldLabel](docs/Model/ServerOrderFieldLabel.md)
- [ServerOrderFieldLabels](docs/Model/ServerOrderFieldLabels.md)
- [ServerOrderFormValues](docs/Model/ServerOrderFormValues.md)
- [ServerOrderGetResponse](docs/Model/ServerOrderGetResponse.md)
- [ServerOrderIP](docs/Model/ServerOrderIP.md)
- [ServerOrderIpsLi](docs/Model/ServerOrderIpsLi.md)
- [ServerOrderMemory](docs/Model/ServerOrderMemory.md)
- [ServerOrderMemoryLi](docs/Model/ServerOrderMemoryLi.md)
- [ServerOrderMemoryLi254](docs/Model/ServerOrderMemoryLi254.md)
- [ServerOrderOS](docs/Model/ServerOrderOS.md)
- [ServerOrderOsLi](docs/Model/ServerOrderOsLi.md)
- [ServerOrderRAID](docs/Model/ServerOrderRAID.md)
- [ServerRow](docs/Model/ServerRow.md)
- [ServerServiceInfo](docs/Model/ServerServiceInfo.md)
- [ServerSwitchport](docs/Model/ServerSwitchport.md)
- [ServersBuyNowError](docs/Model/ServersBuyNowError.md)
- [ServersBuyNowResponse](docs/Model/ServersBuyNowResponse.md)
- [ServersBuyNowResponseOrderDetails](docs/Model/ServersBuyNowResponseOrderDetails.md)
- [ServersCancel200Response](docs/Model/ServersCancel200Response.md)
- [Service](docs/Model/Service.md)
- [ServiceCategories](docs/Model/ServiceCategories.md)
- [ServiceCategory](docs/Model/ServiceCategory.md)
- [ServiceType](docs/Model/ServiceType.md)
- [ServiceTypes](docs/Model/ServiceTypes.md)
- [Services](docs/Model/Services.md)
- [ServicesInfo](docs/Model/ServicesInfo.md)
- [SslCancel200Response](docs/Model/SslCancel200Response.md)
- [StatusMonthlyBreakdown](docs/Model/StatusMonthlyBreakdown.md)
- [SuccessTextResponse](docs/Model/SuccessTextResponse.md)
- [TemplateRequest](docs/Model/TemplateRequest.md)
- [TextResponse](docs/Model/TextResponse.md)
- [TicketCustomFieldDetails](docs/Model/TicketCustomFieldDetails.md)
- [TicketDetails](docs/Model/TicketDetails.md)
- [TicketNew](docs/Model/TicketNew.md)
- [TicketNewResponse](docs/Model/TicketNewResponse.md)
- [TicketPostDetails](docs/Model/TicketPostDetails.md)
- [TicketPostDetailsInner](docs/Model/TicketPostDetailsInner.md)
- [Tickets](docs/Model/Tickets.md)
- [TicketsCountArray](docs/Model/TicketsCountArray.md)
- [TicketsRow](docs/Model/TicketsRow.md)
- [TimezoneUpdate](docs/Model/TimezoneUpdate.md)
- [UpdateAccountTfaRequest](docs/Model/UpdateAccountTfaRequest.md)
- [UpdateTicket](docs/Model/UpdateTicket.md)
- [UpdateTicketResponseSchema](docs/Model/UpdateTicketResponseSchema.md)
- [UrlRequest](docs/Model/UrlRequest.md)
- [VPSCancel200Response](docs/Model/VPSCancel200Response.md)
- [VPSTrafficDataDataSectionResponse](docs/Model/VPSTrafficDataDataSectionResponse.md)
- [VPSTrafficDataDataSectionResponseInner](docs/Model/VPSTrafficDataDataSectionResponseInner.md)
- [ViewTicketResponse](docs/Model/ViewTicketResponse.md)
- [Vps](docs/Model/Vps.md)
- [VpsBackupRow](docs/Model/VpsBackupRow.md)
- [VpsBackupRows](docs/Model/VpsBackupRows.md)
- [VpsBillingDetails](docs/Model/VpsBillingDetails.md)
- [VpsCPData](docs/Model/VpsCPData.md)
- [VpsClientLink](docs/Model/VpsClientLink.md)
- [VpsDAData](docs/Model/VpsDAData.md)
- [VpsDALicense](docs/Model/VpsDALicense.md)
- [VpsExtraInfoTables](docs/Model/VpsExtraInfoTables.md)
- [VpsIPInfo](docs/Model/VpsIPInfo.md)
- [VpsIPInfoRow](docs/Model/VpsIPInfoRow.md)
- [VpsOrder](docs/Model/VpsOrder.md)
- [VpsOrderLocationNames](docs/Model/VpsOrderLocationNames.md)
- [VpsOrderLocationStock](docs/Model/VpsOrderLocationStock.md)
- [VpsOrderLocationStock1](docs/Model/VpsOrderLocationStock1.md)
- [VpsOrderOsNames](docs/Model/VpsOrderOsNames.md)
- [VpsOrderPackageCosts](docs/Model/VpsOrderPackageCosts.md)
- [VpsOrderPlatformNames](docs/Model/VpsOrderPlatformNames.md)
- [VpsOrderPlatformPackages](docs/Model/VpsOrderPlatformPackages.md)
- [VpsOrderPostRequest](docs/Model/VpsOrderPostRequest.md)
- [VpsOrderPutRequest](docs/Model/VpsOrderPutRequest.md)
- [VpsOrderPutResponse](docs/Model/VpsOrderPutResponse.md)
- [VpsOrderServiceTypes](docs/Model/VpsOrderServiceTypes.md)
- [VpsOrderServiceTypes32](docs/Model/VpsOrderServiceTypes32.md)
- [VpsOrderTemplates](docs/Model/VpsOrderTemplates.md)
- [VpsOrderTemplatesHyperv](docs/Model/VpsOrderTemplatesHyperv.md)
- [VpsOrderTemplatesHypervWindows](docs/Model/VpsOrderTemplatesHypervWindows.md)
- [VpsPlesk12Data](docs/Model/VpsPlesk12Data.md)
- [VpsPleskLicense](docs/Model/VpsPleskLicense.md)
- [VpsRow](docs/Model/VpsRow.md)
- [VpsServiceAddons](docs/Model/VpsServiceAddons.md)
- [VpsServiceExtra](docs/Model/VpsServiceExtra.md)
- [VpsServiceInfo](docs/Model/VpsServiceInfo.md)
- [VpsServiceMaster](docs/Model/VpsServiceMaster.md)
- [VpsSnapshot](docs/Model/VpsSnapshot.md)
- [VpsTemplateRow](docs/Model/VpsTemplateRow.md)
- [VpsTemplatesList](docs/Model/VpsTemplatesList.md)
- [VpsTrafficDataDataResponse](docs/Model/VpsTrafficDataDataResponse.md)
- [VpsTrafficDataSectionResponse](docs/Model/VpsTrafficDataSectionResponse.md)
- [VpsTrafficHistoryResponse](docs/Model/VpsTrafficHistoryResponse.md)
- [VpsTrafficHistorySectionDataResponse](docs/Model/VpsTrafficHistorySectionDataResponse.md)
- [VpsTrafficHistorySectionResponse](docs/Model/VpsTrafficHistorySectionResponse.md)
- [VpsTrafficResponse](docs/Model/VpsTrafficResponse.md)
- [VpsTrafficTotalsResposne](docs/Model/VpsTrafficTotalsResposne.md)
- [VpsTrafficTotalsSectionResponse](docs/Model/VpsTrafficTotalsSectionResponse.md)
- [VpsTrafficUsageAverageResponse](docs/Model/VpsTrafficUsageAverageResponse.md)
- [VpsTrafficUsageAverageSectionResponse](docs/Model/VpsTrafficUsageAverageSectionResponse.md)
- [VpsTrafficUsageResponse](docs/Model/VpsTrafficUsageResponse.md)
- [WebhostingCancel200Response](docs/Model/WebhostingCancel200Response.md)
- [Website](docs/Model/Website.md)
- [WebsiteBackups](docs/Model/WebsiteBackups.md)
- [WebsiteBackupsInner](docs/Model/WebsiteBackupsInner.md)
- [WebsiteBillingDetails](docs/Model/WebsiteBillingDetails.md)
- [WebsiteClientLink](docs/Model/WebsiteClientLink.md)
- [WebsiteExtraInfoTables](docs/Model/WebsiteExtraInfoTables.md)
- [WebsiteLoginResponse](docs/Model/WebsiteLoginResponse.md)
- [WebsiteRow](docs/Model/WebsiteRow.md)
- [WebsiteServiceInfo](docs/Model/WebsiteServiceInfo.md)
- [WebsiteServiceMaster](docs/Model/WebsiteServiceMaster.md)
- [WebsiteTable](docs/Model/WebsiteTable.md)
- [WebsiteTableRow](docs/Model/WebsiteTableRow.md)
- [WebsitesOrder](docs/Model/WebsitesOrder.md)
- [WebsitesOrderJsonServiceOffers](docs/Model/WebsitesOrderJsonServiceOffers.md)
- [WebsitesOrderJsonServiceOffersItem](docs/Model/WebsitesOrderJsonServiceOffersItem.md)
- [WebsitesOrderJsonServices](docs/Model/WebsitesOrderJsonServices.md)
- [WebsitesOrderPackages](docs/Model/WebsitesOrderPackages.md)
- [WebsitesOrderPackagesInfo](docs/Model/WebsitesOrderPackagesInfo.md)
- [WebsitesOrderPackges](docs/Model/WebsitesOrderPackges.md)
- [WebsitesOrderServiceOffer](docs/Model/WebsitesOrderServiceOffer.md)
- [WebsitesOrderServiceOffers](docs/Model/WebsitesOrderServiceOffers.md)
- [WebsitesOrderServiceTypes](docs/Model/WebsitesOrderServiceTypes.md)

## Authorization

### apiKeyAuth

- **Type**: API key
- **API key parameter name**: X-API-KEY
- **Location**: HTTP header



### sessionIdHeaderAuth

- **Type**: API key
- **API key parameter name**: sessionid
- **Location**: HTTP header



### sessionIdCookieAuth

- **Type**: API key
- **API key parameter name**: sessionid
- **Location**: 


## Tests

To run the tests, use:

```bash
composer install
vendor/bin/phpunit
```

## Author

support@interserver.net

## About this package

This PHP package is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: `0.9.0`
    - Generator version: `7.20.0`
- Build package: `org.openapitools.codegen.languages.PhpNextgenClientCodegen`
