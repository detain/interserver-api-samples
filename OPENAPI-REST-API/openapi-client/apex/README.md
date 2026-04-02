# InterServer Management API API Client


# Overview\n\nThe InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.\n\nThe API covers the following service categories:\n- [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management\n- [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting\n- [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers\n- [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html)\n- [Backups](https://www.interserver.net/storage/) — storage and backup services\n- Licenses — control panel and software licenses\n- [Mail](https://www.mail.baby/) — mail delivery services\n- SSL — certificate provisioning\n- Billing — invoices, payment methods, and account management\n\nFor interactive testing, see the [API documentation](/api-docs/).\n\n# Authentication\n\nMost endpoints require authentication. Two methods are supported:\n\n## API Key (Preferred)\n\nGenerate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:\n\n```\nX-API-KEY: your-api-key-here\n```\n\n## Session-Based Authentication\n\nAlternatively, authenticate by creating a session:\n\n1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier.\n2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:\n\n```\nsessionid: your-session-id-here\n```\n\nAPI key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.\n\n

## Requirements

- [Salesforce DX](https://www.salesforce.com/products/platform/products/salesforce-dx/)

If everything is set correctly:

- Running `sfdx version` in a command prompt should output something like:

  ```bash
  sfdx-cli/5.7.5-05549de (darwin-amd64) go1.7.5 sfdxstable
  ```

## Installation

1. Copy the output into your Salesforce DX folder - or alternatively deploy the output directly into the workspace.
2. Deploy the code via Salesforce DX to your Scratch Org

   ```bash
      sfdx force:source:push
   ```

3. If the API needs authentication update the Named Credential in Setup.
4. Run your Apex tests using

   ```bash
       sfdx sfdx force:apex:test:run
   ```

5. Retrieve the job id from the console and check the test results.

  ```bash
  sfdx force:apex:test:report -i theJobId
  ```

## Getting Started

Please follow the [installation](#installation) instruction and execute the following Apex code:

```java
OASAccountApi api = new OASAccountApi();
OASClient client = api.getClient();


try {
    // cross your fingers
    OASTextResponse result = api.changeAccountUsername();
    System.debug(result);
} catch (OAS.ApiException e) {
    // ...handle your exceptions
}
```

## Documentation for API Endpoints

All URIs are relative to *https://my.interserver.net/apiv2*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*OASAccountApi* | [**changeAccountUsername**](OASAccountApi.md#changeAccountUsername) | **POST** /account/username | Change Account Username
*OASAccountApi* | [**deleteAccountOauthName**](OASAccountApi.md#deleteAccountOauthName) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
*OASAccountApi* | [**deleteAccountTfa**](OASAccountApi.md#deleteAccountTfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
*OASAccountApi* | [**deleteIpLimit**](OASAccountApi.md#deleteIpLimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
*OASAccountApi* | [**getAccountInfo**](OASAccountApi.md#getAccountInfo) | **GET** /account | Retrieve Account Details
*OASAccountApi* | [**getAccountTfaSetup**](OASAccountApi.md#getAccountTfaSetup) | **GET** /account/2fa | Get Two-Factor Setup Data
*OASAccountApi* | [**getHome**](OASAccountApi.md#getHome) | **GET** /home | Get Home Data
*OASAccountApi* | [**getSearch**](OASAccountApi.md#getSearch) | **GET** /search | Search Autocomplete
*OASAccountApi* | [**logout**](OASAccountApi.md#logout) | **GET** /logout | Log Out
*OASAccountApi* | [**logoutAccountOauth**](OASAccountApi.md#logoutAccountOauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
*OASAccountApi* | [**updateAccountApiKey**](OASAccountApi.md#updateAccountApiKey) | **POST** /account/apikey | Generate New API Key
*OASAccountApi* | [**updateAccountFeatures**](OASAccountApi.md#updateAccountFeatures) | **POST** /account/features | Update Account Feature Flags
*OASAccountApi* | [**updateAccountInfo**](OASAccountApi.md#updateAccountInfo) | **POST** /account | Update Account Information
*OASAccountApi* | [**updateAccountIpLimits**](OASAccountApi.md#updateAccountIpLimits) | **POST** /account/iplimits | Add IP Access Restriction
*OASAccountApi* | [**updateAccountPassword**](OASAccountApi.md#updateAccountPassword) | **POST** /account/password | Change Account Password
*OASAccountApi* | [**updateAccountSshKey**](OASAccountApi.md#updateAccountSshKey) | **POST** /account/sshkey | Update SSH Keys
*OASAccountApi* | [**updateAccountTfa**](OASAccountApi.md#updateAccountTfa) | **POST** /account/2fa | Enable Two-Factor Authentication
*OASBackupsApi* | [**addBackup**](OASBackupsApi.md#addBackup) | **POST** /backups/order | Place Backup Order
*OASBackupsApi* | [**cancelBackup**](OASBackupsApi.md#cancelBackup) | **DELETE** /backups/{id} | Cancel Backup Service
*OASBackupsApi* | [**getBackupInfo**](OASBackupsApi.md#getBackupInfo) | **GET** /backups/{id} | Get Backup Service Details
*OASBackupsApi* | [**getBackupInvoices**](OASBackupsApi.md#getBackupInvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices
*OASBackupsApi* | [**getBackupLogin**](OASBackupsApi.md#getBackupLogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login
*OASBackupsApi* | [**getBackupsList**](OASBackupsApi.md#getBackupsList) | **GET** /backups | List Backup Services
*OASBackupsApi* | [**getBackupsWelcomeEmail**](OASBackupsApi.md#getBackupsWelcomeEmail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email
*OASBackupsApi* | [**getNewBackup**](OASBackupsApi.md#getNewBackup) | **GET** /backups/order | Get Backup Order Form Data
*OASBackupsApi* | [**updateBackupInfo**](OASBackupsApi.md#updateBackupInfo) | **POST** /backups/{id} | Update Backup Information
*OASBackupsApi* | [**validateBackupOrder**](OASBackupsApi.md#validateBackupOrder) | **PUT** /backups/order | Validate Backup Order
*OASBillingApi* | [**addAccountCreditCard**](OASBillingApi.md#addAccountCreditCard) | **POST** /account/creditcards | Add Credit Card to Account
*OASBillingApi* | [**addBillingCreditCard**](OASBillingApi.md#addBillingCreditCard) | **POST** /billing/creditcards | Add Credit Card for Billing
*OASBillingApi* | [**addBillingPrepay**](OASBillingApi.md#addBillingPrepay) | **POST** /billing/prepays | Create Prepay Deposit
*OASBillingApi* | [**deleteAccountCreditCard**](OASBillingApi.md#deleteAccountCreditCard) | **DELETE** /account/creditcards/{id} | Remove Credit Card
*OASBillingApi* | [**deleteBillingCreditCard**](OASBillingApi.md#deleteBillingCreditCard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
*OASBillingApi* | [**deleteBillingInvoice**](OASBillingApi.md#deleteBillingInvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
*OASBillingApi* | [**deleteBillingPrepay**](OASBillingApi.md#deleteBillingPrepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
*OASBillingApi* | [**getAffiliateBanners**](OASBillingApi.md#getAffiliateBanners) | **GET** /affiliate/banners | List Affiliate Banner Assets
*OASBillingApi* | [**getAffiliateRichReport**](OASBillingApi.md#getAffiliateRichReport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
*OASBillingApi* | [**getAffiliateSalesGraph**](OASBillingApi.md#getAffiliateSalesGraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
*OASBillingApi* | [**getAffiliateSalesReport**](OASBillingApi.md#getAffiliateSalesReport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
*OASBillingApi* | [**getAffiliateTrafficGraph**](OASBillingApi.md#getAffiliateTrafficGraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
*OASBillingApi* | [**getAffiliateWebTraffic**](OASBillingApi.md#getAffiliateWebTraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
*OASBillingApi* | [**getBillingCart**](OASBillingApi.md#getBillingCart) | **GET** /billing/cart | Get Shopping Cart Contents
*OASBillingApi* | [**getBillingCreditCardVerify**](OASBillingApi.md#getBillingCreditCardVerify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
*OASBillingApi* | [**getBillingInvoice**](OASBillingApi.md#getBillingInvoice) | **GET** /billing/invoices/{id} | Get Invoice Details
*OASBillingApi* | [**getBillingInvoices**](OASBillingApi.md#getBillingInvoices) | **GET** /billing/invoices | List Account Invoices
*OASBillingApi* | [**getBillingPrePays**](OASBillingApi.md#getBillingPrePays) | **GET** /billing/prepays | List Prepay Balances
*OASBillingApi* | [**getInvoices**](OASBillingApi.md#getInvoices) | **GET** /invoices | Get Invoices
*OASBillingApi* | [**initiatePayment**](OASBillingApi.md#initiatePayment) | **GET** /pay/{method}/{invoices} | Initiate Payment
*OASBillingApi* | [**postBillingCreditCardVerify**](OASBillingApi.md#postBillingCreditCardVerify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
*OASBillingApi* | [**updateAccountCreditCard**](OASBillingApi.md#updateAccountCreditCard) | **POST** /account/creditcards/{id} | Update Credit Card
*OASBillingApi* | [**updateAffiliateDockSetup**](OASBillingApi.md#updateAffiliateDockSetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
*OASBillingApi* | [**updateAffiliateLandingPage**](OASBillingApi.md#updateAffiliateLandingPage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
*OASBillingApi* | [**updateAffiliatePaymentSetup**](OASBillingApi.md#updateAffiliatePaymentSetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
*OASBillingApi* | [**updateBillingCreditCard**](OASBillingApi.md#updateBillingCreditCard) | **POST** /billing/creditcards/{id} | Update Credit Card Details
*OASBillingApi* | [**updateBillingPaymentMethod**](OASBillingApi.md#updateBillingPaymentMethod) | **POST** /billing/payment_method | Update Default Payment Method
*OASDNSApi* | [**addDnsDomain**](OASDNSApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain
*OASDNSApi* | [**addDnsRecord**](OASDNSApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain
*OASDNSApi* | [**deleteDnsDomain**](OASDNSApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain
*OASDNSApi* | [**deleteDnsRecord**](OASDNSApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record
*OASDNSApi* | [**getDnsDomain**](OASDNSApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records
*OASDNSApi* | [**getDnsList**](OASDNSApi.md#getDnsList) | **GET** /dns | List DNS Domains
*OASDNSApi* | [**updateDnsRecord**](OASDNSApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record
*OASDomainsApi* | [**addDomain**](OASDomainsApi.md#addDomain) | **POST** /domains/order | Place Domain Order
*OASDomainsApi* | [**addDomainDnssec**](OASDomainsApi.md#addDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
*OASDomainsApi* | [**addDomainNameserver**](OASDomainsApi.md#addDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
*OASDomainsApi* | [**cancelDomain**](OASDomainsApi.md#cancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order
*OASDomainsApi* | [**deleteDomainDnssec**](OASDomainsApi.md#deleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
*OASDomainsApi* | [**deleteDomainNameserver**](OASDomainsApi.md#deleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
*OASDomainsApi* | [**getDomainContact**](OASDomainsApi.md#getDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details
*OASDomainsApi* | [**getDomainDnssec**](OASDomainsApi.md#getDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
*OASDomainsApi* | [**getDomainInfo**](OASDomainsApi.md#getDomainInfo) | **GET** /domains/{id} | Get Domain Order
*OASDomainsApi* | [**getDomainInvoices**](OASDomainsApi.md#getDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
*OASDomainsApi* | [**getDomainLookup**](OASDomainsApi.md#getDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
*OASDomainsApi* | [**getDomainNameservers**](OASDomainsApi.md#getDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
*OASDomainsApi* | [**getDomainOrderFields**](OASDomainsApi.md#getDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
*OASDomainsApi* | [**getDomainOrderSearchResults**](OASDomainsApi.md#getDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
*OASDomainsApi* | [**getDomainRenewal**](OASDomainsApi.md#getDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
*OASDomainsApi* | [**getDomainSearch**](OASDomainsApi.md#getDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions
*OASDomainsApi* | [**getDomainTransfer**](OASDomainsApi.md#getDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
*OASDomainsApi* | [**getDomainWhoisPrivacy**](OASDomainsApi.md#getDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
*OASDomainsApi* | [**getDomainsList**](OASDomainsApi.md#getDomainsList) | **GET** /domains | List Domain Orders
*OASDomainsApi* | [**getDomainsWelcomeEmail**](OASDomainsApi.md#getDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
*OASDomainsApi* | [**getNewDomain**](OASDomainsApi.md#getNewDomain) | **GET** /domains/order | Get Domain Ordering Information
*OASDomainsApi* | [**patchDomains**](OASDomainsApi.md#patchDomains) | **PATCH** /domains/order | Validate Domain Order
*OASDomainsApi* | [**postDomainRenewal**](OASDomainsApi.md#postDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
*OASDomainsApi* | [**postDomainTransfer**](OASDomainsApi.md#postDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
*OASDomainsApi* | [**putDomains**](OASDomainsApi.md#putDomains) | **PUT** /domains/order | Domain Order Search
*OASDomainsApi* | [**updateDomainContact**](OASDomainsApi.md#updateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details
*OASDomainsApi* | [**updateDomainInfo**](OASDomainsApi.md#updateDomainInfo) | **POST** /domains/{id} | Update Domain Order
*OASDomainsApi* | [**updateDomainNameservers**](OASDomainsApi.md#updateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
*OASDomainsApi* | [**updateDomainWhoisPrivacy**](OASDomainsApi.md#updateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy
*OASFloatingIPsApi* | [**addFloatingIp**](OASFloatingIPsApi.md#addFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order
*OASFloatingIPsApi* | [**floatingIpsCancel**](OASFloatingIPsApi.md#floatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
*OASFloatingIPsApi* | [**getFloatingIpInfo**](OASFloatingIPsApi.md#getFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP
*OASFloatingIPsApi* | [**getFloatingIpInvoices**](OASFloatingIPsApi.md#getFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
*OASFloatingIPsApi* | [**getFloatingIpsList**](OASFloatingIPsApi.md#getFloatingIpsList) | **GET** /floating_ips | List Floating IPs
*OASFloatingIPsApi* | [**getFloatingIpsWelcomeEmail**](OASFloatingIPsApi.md#getFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
*OASFloatingIPsApi* | [**getNewFloatingIp**](OASFloatingIPsApi.md#getNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information
*OASFloatingIPsApi* | [**postFloatingIpsChangeIp**](OASFloatingIPsApi.md#postFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
*OASFloatingIPsApi* | [**putFloatingIps**](OASFloatingIPsApi.md#putFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order
*OASFloatingIPsApi* | [**updateFloatingIpInfo**](OASFloatingIPsApi.md#updateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP
*OASLicensesApi* | [**addLicense**](OASLicensesApi.md#addLicense) | **POST** /licenses/order | Place License Order
*OASLicensesApi* | [**getLicenseInfo**](OASLicensesApi.md#getLicenseInfo) | **GET** /licenses/{id} | Get License
*OASLicensesApi* | [**getLicenseInvoices**](OASLicensesApi.md#getLicenseInvoices) | **GET** /licenses/{id}/invoices | Get License Invoices
*OASLicensesApi* | [**getLicenseList**](OASLicensesApi.md#getLicenseList) | **GET** /licenses | List Licenses
*OASLicensesApi* | [**getLicenseOrderCatTagInfo**](OASLicensesApi.md#getLicenseOrderCatTagInfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category
*OASLicensesApi* | [**getLicensesWelcomeEmail**](OASLicensesApi.md#getLicensesWelcomeEmail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email
*OASLicensesApi* | [**getNewLicense**](OASLicensesApi.md#getNewLicense) | **GET** /licenses/order | Get License Order Information
*OASLicensesApi* | [**licensesCancel**](OASLicensesApi.md#licensesCancel) | **DELETE** /licenses/{id} | Cancel License
*OASLicensesApi* | [**postLicenseChangeIp**](OASLicensesApi.md#postLicenseChangeIp) | **POST** /licenses/{id}/change_ip | Change License IP
*OASLicensesApi* | [**putLicenses**](OASLicensesApi.md#putLicenses) | **PUT** /licenses/order | Validate License Order
*OASLicensesApi* | [**updateLicenseInfo**](OASLicensesApi.md#updateLicenseInfo) | **POST** /licenses/{id} | Update License
*OASMailApi* | [**addMail**](OASMailApi.md#addMail) | **POST** /mail/order | Place Mail Order
*OASMailApi* | [**addRule**](OASMailApi.md#addRule) | **POST** /mail/{id}/rules | Create Deny Rule
*OASMailApi* | [**createMailAlert**](OASMailApi.md#createMailAlert) | **POST** /mail/{id}/alerts | Create Mail Alert
*OASMailApi* | [**deleteMailAlert**](OASMailApi.md#deleteMailAlert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
*OASMailApi* | [**deleteRule**](OASMailApi.md#deleteRule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
*OASMailApi* | [**delistBlock**](OASMailApi.md#delistBlock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
*OASMailApi* | [**getMailAlerts**](OASMailApi.md#getMailAlerts) | **GET** /mail/{id}/alerts | List Mail Alerts
*OASMailApi* | [**getMailBlocks**](OASMailApi.md#getMailBlocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
*OASMailApi* | [**getMailDelist**](OASMailApi.md#getMailDelist) | **GET** /mail/{id}/delist | Get Delist Status
*OASMailApi* | [**getMailDeliverability**](OASMailApi.md#getMailDeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
*OASMailApi* | [**getMailInfo**](OASMailApi.md#getMailInfo) | **GET** /mail/{id} | Get Mail Order
*OASMailApi* | [**getMailInvoices**](OASMailApi.md#getMailInvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
*OASMailApi* | [**getMailList**](OASMailApi.md#getMailList) | **GET** /mail | List Mail Orders
*OASMailApi* | [**getMailWelcomeEmail**](OASMailApi.md#getMailWelcomeEmail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
*OASMailApi* | [**getNewMail**](OASMailApi.md#getNewMail) | **GET** /mail/order | Get Mail Ordering Information
*OASMailApi* | [**getRules**](OASMailApi.md#getRules) | **GET** /mail/{id}/rules | List Deny Rules
*OASMailApi* | [**getStats**](OASMailApi.md#getStats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
*OASMailApi* | [**mailCancel**](OASMailApi.md#mailCancel) | **DELETE** /mail/{id} | Cancel Mail
*OASMailApi* | [**postMailDelist**](OASMailApi.md#postMailDelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
*OASMailApi* | [**putMail**](OASMailApi.md#putMail) | **PUT** /mail/order | Validate Mail Order
*OASMailApi* | [**resetMailPassword**](OASMailApi.md#resetMailPassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
*OASMailApi* | [**sendAdvMail**](OASMailApi.md#sendAdvMail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
*OASMailApi* | [**sendMail**](OASMailApi.md#sendMail) | **POST** /mail/{id}/send | Send Email
*OASMailApi* | [**updateMailAlert**](OASMailApi.md#updateMailAlert) | **PUT** /mail/{id}/alerts | Update Mail Alert
*OASMailApi* | [**updateMailInfo**](OASMailApi.md#updateMailInfo) | **POST** /mail/{id} | Update Mail Order
*OASMailApi* | [**viewMailLog**](OASMailApi.md#viewMailLog) | **GET** /mail/{id}/log | View Mail Log
*OASPublicApi* | [**getCaptcha**](OASPublicApi.md#getCaptcha) | **GET** /captcha | Get Captcha Challenge
*OASPublicApi* | [**getCountries**](OASPublicApi.md#getCountries) | **GET** /account/countries | Get Countries
*OASPublicApi* | [**getInfo**](OASPublicApi.md#getInfo) | **GET** /info | Get Server Info
*OASPublicApi* | [**getLoginInfo**](OASPublicApi.md#getLoginInfo) | **GET** /login | Get Login Info
*OASPublicApi* | [**getMPServers**](OASPublicApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
*OASPublicApi* | [**getOauthRedirect**](OASPublicApi.md#getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL
*OASPublicApi* | [**getTimezones**](OASPublicApi.md#getTimezones) | **GET** /account/timezones | Get Available Timezones
*OASPublicApi* | [**patchOauthTwoFactor**](OASPublicApi.md#patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification
*OASPublicApi* | [**pingServer**](OASPublicApi.md#pingServer) | **GET** /ping | Ping Server
*OASPublicApi* | [**postOauthCallback**](OASPublicApi.md#postOauthCallback) | **POST** /oauth | OAuth Callback
*OASPublicApi* | [**submitLogin**](OASPublicApi.md#submitLogin) | **POST** /login | Submit Login Information
*OASPublicApi* | [**submitSignup**](OASPublicApi.md#submitSignup) | **POST** /signup | Submit Signup Information
*OASQuickServersApi* | [**addQs**](OASQuickServersApi.md#addQs) | **POST** /qs/order | Place QuickServer Order
*OASQuickServersApi* | [**deleteQsBackup**](OASQuickServersApi.md#deleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup
*OASQuickServersApi* | [**doQsBlockSmtp**](OASQuickServersApi.md#doQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP
*OASQuickServersApi* | [**doQsDisableCd**](OASQuickServersApi.md#doQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive
*OASQuickServersApi* | [**doQsDisableQuota**](OASQuickServersApi.md#doQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas
*OASQuickServersApi* | [**doQsEjectCd**](OASQuickServersApi.md#doQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive
*OASQuickServersApi* | [**doQsEnableQuota**](OASQuickServersApi.md#doQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas
*OASQuickServersApi* | [**doQsRestart**](OASQuickServersApi.md#doQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer
*OASQuickServersApi* | [**doQsStart**](OASQuickServersApi.md#doQsStart) | **GET** /qs/{id}/start | Start QuickServer
*OASQuickServersApi* | [**doQsStop**](OASQuickServersApi.md#doQsStop) | **GET** /qs/{id}/stop | Stop QuickServer
*OASQuickServersApi* | [**downloadQsBackup**](OASQuickServersApi.md#downloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup
*OASQuickServersApi* | [**getNewQs**](OASQuickServersApi.md#getNewQs) | **GET** /qs/order | Get QuickServer Ordering Information
*OASQuickServersApi* | [**getQsBackups**](OASQuickServersApi.md#getQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups
*OASQuickServersApi* | [**getQsChangeHostname**](OASQuickServersApi.md#getQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname
*OASQuickServersApi* | [**getQsChangeRootPassword**](OASQuickServersApi.md#getQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info
*OASQuickServersApi* | [**getQsChangeTimezone**](OASQuickServersApi.md#getQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info
*OASQuickServersApi* | [**getQsChangeWebuzoPassword**](OASQuickServersApi.md#getQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info
*OASQuickServersApi* | [**getQsInfo**](OASQuickServersApi.md#getQsInfo) | **GET** /qs/{id} | Get QuickServer Order
*OASQuickServersApi* | [**getQsInsertCd**](OASQuickServersApi.md#getQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information
*OASQuickServersApi* | [**getQsInvoices**](OASQuickServersApi.md#getQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices
*OASQuickServersApi* | [**getQsList**](OASQuickServersApi.md#getQsList) | **GET** /qs | List QuickServers
*OASQuickServersApi* | [**getQsReinstallOs**](OASQuickServersApi.md#getQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options
*OASQuickServersApi* | [**getQsResetPassword**](OASQuickServersApi.md#getQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info
*OASQuickServersApi* | [**getQsReverseDns**](OASQuickServersApi.md#getQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info
*OASQuickServersApi* | [**getQsSetupVnc**](OASQuickServersApi.md#getQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info
*OASQuickServersApi* | [**getQsTrafficUsage**](OASQuickServersApi.md#getQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage
*OASQuickServersApi* | [**getQsViewDesktop**](OASQuickServersApi.md#getQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info
*OASQuickServersApi* | [**getQsWelcomeEmail**](OASQuickServersApi.md#getQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email
*OASQuickServersApi* | [**postQsBackup**](OASQuickServersApi.md#postQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup
*OASQuickServersApi* | [**postQsChangeHostname**](OASQuickServersApi.md#postQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname
*OASQuickServersApi* | [**postQsChangeRootPassword**](OASQuickServersApi.md#postQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password
*OASQuickServersApi* | [**postQsChangeTimezone**](OASQuickServersApi.md#postQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone
*OASQuickServersApi* | [**postQsChangeWebuzoPassword**](OASQuickServersApi.md#postQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password
*OASQuickServersApi* | [**postQsInsertCd**](OASQuickServersApi.md#postQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer
*OASQuickServersApi* | [**postQsReinstallOs**](OASQuickServersApi.md#postQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS
*OASQuickServersApi* | [**postQsResetPassword**](OASQuickServersApi.md#postQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password
*OASQuickServersApi* | [**postQsReverseDns**](OASQuickServersApi.md#postQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS
*OASQuickServersApi* | [**postQsSetupVnc**](OASQuickServersApi.md#postQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC
*OASQuickServersApi* | [**postQsTrafficUsage**](OASQuickServersApi.md#postQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage
*OASQuickServersApi* | [**postQsViewDesktop**](OASQuickServersApi.md#postQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop
*OASQuickServersApi* | [**postQuickServerRestore**](OASQuickServersApi.md#postQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup
*OASQuickServersApi* | [**putQs**](OASQuickServersApi.md#putQs) | **PUT** /qs/order | Validate QuickServer Order
*OASQuickServersApi* | [**quickserversCancel**](OASQuickServersApi.md#quickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order
*OASQuickServersApi* | [**updateQsInfo**](OASQuickServersApi.md#updateQsInfo) | **POST** /qs/{id} | Update QuickServer Order
*OASSSLCertificatesApi* | [**addSsl**](OASSSLCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order
*OASSSLCertificatesApi* | [**getNewSsl**](OASSSLCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
*OASSSLCertificatesApi* | [**getSslInfo**](OASSSLCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
*OASSSLCertificatesApi* | [**getSslInvoices**](OASSSLCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
*OASSSLCertificatesApi* | [**getSslList**](OASSSLCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs
*OASSSLCertificatesApi* | [**getSslWelcomeEmail**](OASSSLCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
*OASSSLCertificatesApi* | [**putSsl**](OASSSLCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order
*OASSSLCertificatesApi* | [**sslCancel**](OASSSLCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
*OASSSLCertificatesApi* | [**updateSslInfo**](OASSSLCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order
*OASScrubIpsApi* | [**cancelScrubIp**](OASScrubIpsApi.md#cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
*OASScrubIpsApi* | [**createFilter**](OASScrubIpsApi.md#createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
*OASScrubIpsApi* | [**createGeoRule**](OASScrubIpsApi.md#createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
*OASScrubIpsApi* | [**createRule**](OASScrubIpsApi.md#createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
*OASScrubIpsApi* | [**deleteFilter**](OASScrubIpsApi.md#deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
*OASScrubIpsApi* | [**disableScrub**](OASScrubIpsApi.md#disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
*OASScrubIpsApi* | [**enableScrub**](OASScrubIpsApi.md#enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
*OASScrubIpsApi* | [**getOrderDetail**](OASScrubIpsApi.md#getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
*OASScrubIpsApi* | [**getScrubIpDetails**](OASScrubIpsApi.md#getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details
*OASScrubIpsApi* | [**getScrubIpFilterTypes**](OASScrubIpsApi.md#getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
*OASScrubIpsApi* | [**getScrubIpInvoices**](OASScrubIpsApi.md#getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
*OASScrubIpsApi* | [**getScrubIpLogs**](OASScrubIpsApi.md#getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
*OASScrubIpsApi* | [**getScrubIpsList**](OASScrubIpsApi.md#getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services
*OASScrubIpsApi* | [**placeScrubOrder**](OASScrubIpsApi.md#placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order
*OASScrubIpsApi* | [**scrubIpsDeleteGeoRule**](OASScrubIpsApi.md#scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
*OASScrubIpsApi* | [**scrubIpsDeleteRule**](OASScrubIpsApi.md#scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule
*OASServersApi* | [**addServer**](OASServersApi.md#addServer) | **POST** /servers/order | Place Server Order
*OASServersApi* | [**buyItNowServerOrder**](OASServersApi.md#buyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options
*OASServersApi* | [**getMPServers**](OASServersApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers
*OASServersApi* | [**getNewServer**](OASServersApi.md#getNewServer) | **GET** /servers/order | Server Ordering Information
*OASServersApi* | [**getServerInfo**](OASServersApi.md#getServerInfo) | **GET** /servers/{id} | Get Server Order
*OASServersApi* | [**getServerInvoices**](OASServersApi.md#getServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices
*OASServersApi* | [**getServerList**](OASServersApi.md#getServerList) | **GET** /servers | List Servers
*OASServersApi* | [**getServerReverseDns**](OASServersApi.md#getServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info
*OASServersApi* | [**getServersWelcomeEmail**](OASServersApi.md#getServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email
*OASServersApi* | [**placeBuyNowServer**](OASServersApi.md#placeBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order
*OASServersApi* | [**postServerReverseDns**](OASServersApi.md#postServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS
*OASServersApi* | [**putServers**](OASServersApi.md#putServers) | **PUT** /servers/order | Validate Server Order
*OASServersApi* | [**serverIpmiLiveGet**](OASServersApi.md#serverIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information
*OASServersApi* | [**serverIpmiLivePost**](OASServersApi.md#serverIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup
*OASServersApi* | [**serverIpmiPowerGet**](OASServersApi.md#serverIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status
*OASServersApi* | [**serverIpmiPowerPost**](OASServersApi.md#serverIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power
*OASServersApi* | [**serversCancel**](OASServersApi.md#serversCancel) | **DELETE** /servers/{id} | Cancel Server Service
*OASServersApi* | [**updateServerInfo**](OASServersApi.md#updateServerInfo) | **POST** /servers/{id} | Update Server Order
*OASTicketsApi* | [**addNewTicket**](OASTicketsApi.md#addNewTicket) | **POST** /tickets/new | Create New Ticket
*OASTicketsApi* | [**closeTicket**](OASTicketsApi.md#closeTicket) | **GET** /tickets/{id}/close | Close Ticket
*OASTicketsApi* | [**deleteTicketInfo**](OASTicketsApi.md#deleteTicketInfo) | **DELETE** /tickets/{id} | Close Ticket
*OASTicketsApi* | [**getNewTicket**](OASTicketsApi.md#getNewTicket) | **GET** /tickets/new | Gets Information for creating a new ticket.
*OASTicketsApi* | [**getTicketInfo**](OASTicketsApi.md#getTicketInfo) | **GET** /tickets/{id} | Get Ticket Information
*OASTicketsApi* | [**getTicketsList**](OASTicketsApi.md#getTicketsList) | **GET** /tickets | List Support Tickets
*OASTicketsApi* | [**postTicketInfo**](OASTicketsApi.md#postTicketInfo) | **POST** /tickets/{id} | Reply To Ticket
*OASTicketsApi* | [**postTicketsList**](OASTicketsApi.md#postTicketsList) | **POST** /tickets | Search Support Tickets
*OASTicketsApi* | [**putTicketInfo**](OASTicketsApi.md#putTicketInfo) | **PUT** /tickets/{id} | Update Ticket
*OASTicketsApi* | [**replyTicket**](OASTicketsApi.md#replyTicket) | **POST** /tickets/{id}/reply | Reply Ticket
*OASTicketsApi* | [**updateTicketInfo**](OASTicketsApi.md#updateTicketInfo) | **POST** /tickets/{id}/update | Update Ticket
*OASVPSApi* | [**addVps**](OASVPSApi.md#addVps) | **POST** /vps/order | Place VPS Order
*OASVPSApi* | [**deleteVpsBackup**](OASVPSApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup
*OASVPSApi* | [**doVpsBlockSmtp**](OASVPSApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP
*OASVPSApi* | [**doVpsDisableCd**](OASVPSApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive
*OASVPSApi* | [**doVpsDisableQuota**](OASVPSApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas
*OASVPSApi* | [**doVpsEjectCd**](OASVPSApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive
*OASVPSApi* | [**doVpsEnableQuota**](OASVPSApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas
*OASVPSApi* | [**doVpsRestart**](OASVPSApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS
*OASVPSApi* | [**doVpsStart**](OASVPSApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS
*OASVPSApi* | [**doVpsStop**](OASVPSApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS
*OASVPSApi* | [**downloadVpsBackup**](OASVPSApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup
*OASVPSApi* | [**getNewVps**](OASVPSApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information
*OASVPSApi* | [**getVpsBackups**](OASVPSApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List
*OASVPSApi* | [**getVpsBuyHdSpace**](OASVPSApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info
*OASVPSApi* | [**getVpsBuyIp**](OASVPSApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info
*OASVPSApi* | [**getVpsChangeTimezone**](OASVPSApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info
*OASVPSApi* | [**getVpsInfo**](OASVPSApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order
*OASVPSApi* | [**getVpsInvoices**](OASVPSApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices
*OASVPSApi* | [**getVpsList**](OASVPSApi.md#getVpsList) | **GET** /vps | List VPS Orders
*OASVPSApi* | [**getVpsReinstallOs**](OASVPSApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options
*OASVPSApi* | [**getVpsReverseDns**](OASVPSApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info
*OASVPSApi* | [**getVpsSetupVnc**](OASVPSApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info
*OASVPSApi* | [**getVpsSlices**](OASVPSApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info
*OASVPSApi* | [**getVpsTrafficUsage**](OASVPSApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage
*OASVPSApi* | [**getVpsViewDesktop**](OASVPSApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info
*OASVPSApi* | [**getVpsWelcomeEmail**](OASVPSApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email
*OASVPSApi* | [**postVpsBackup**](OASVPSApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup
*OASVPSApi* | [**postVpsBuyHdSpace**](OASVPSApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon
*OASVPSApi* | [**postVpsBuyIp**](OASVPSApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP
*OASVPSApi* | [**postVpsChangeHostname**](OASVPSApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname
*OASVPSApi* | [**postVpsChangeRootPassword**](OASVPSApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password
*OASVPSApi* | [**postVpsChangeTimezone**](OASVPSApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone
*OASVPSApi* | [**postVpsChangeWebuzoPassword**](OASVPSApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password
*OASVPSApi* | [**postVpsInsertCd**](OASVPSApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS
*OASVPSApi* | [**postVpsReinstallOs**](OASVPSApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS
*OASVPSApi* | [**postVpsResetPassword**](OASVPSApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password
*OASVPSApi* | [**postVpsRestore**](OASVPSApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup
*OASVPSApi* | [**postVpsReverseDns**](OASVPSApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS
*OASVPSApi* | [**postVpsSetupVnc**](OASVPSApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC
*OASVPSApi* | [**postVpsSlices**](OASVPSApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade
*OASVPSApi* | [**postVpsViewDesktop**](OASVPSApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop
*OASVPSApi* | [**putVps**](OASVPSApi.md#putVps) | **PUT** /vps/order | Validate VPS Order
*OASVPSApi* | [**updateVpsInfo**](OASVPSApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order
*OASVPSApi* | [**vPSCancel**](OASVPSApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service
*OASWebhostingApi* | [**addWebsite**](OASWebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order
*OASWebhostingApi* | [**getNewWebsite**](OASWebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information
*OASWebhostingApi* | [**getWebsiteBuyIp**](OASWebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information
*OASWebhostingApi* | [**getWebsiteInfo**](OASWebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order
*OASWebhostingApi* | [**getWebsiteInvoices**](OASWebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
*OASWebhostingApi* | [**getWebsiteList**](OASWebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing
*OASWebhostingApi* | [**getWebsitesBackups**](OASWebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups
*OASWebhostingApi* | [**getWebsitesLogin**](OASWebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
*OASWebhostingApi* | [**getWebsitesWelcomeEmail**](OASWebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
*OASWebhostingApi* | [**gettWebsiteReverseDns**](OASWebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
*OASWebhostingApi* | [**postWebsiteBuyIp**](OASWebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
*OASWebhostingApi* | [**postWebsiteMigration**](OASWebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration
*OASWebhostingApi* | [**postWebsitesReverseDns**](OASWebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
*OASWebhostingApi* | [**putWebsites**](OASWebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order
*OASWebhostingApi* | [**updateWebsiteInfo**](OASWebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order
*OASWebhostingApi* | [**webhostingCancel**](OASWebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website


## Documentation for Models

 - [OASAccountFeatures](OASAccountFeatures.md)
 - [OASAccountInfo](OASAccountInfo.md)
 - [OASAccountInfoCountryCurrencies](OASAccountInfoCountryCurrencies.md)
 - [OASAccountInfoData](OASAccountInfoData.md)
 - [OASAccountInfoDataCc](OASAccountInfoDataCc.md)
 - [OASAccountInfoDataCcs](OASAccountInfoDataCcs.md)
 - [OASAccountInfoDataEmailSettings](OASAccountInfoDataEmailSettings.md)
 - [OASAccountInfoDataExtra](OASAccountInfoDataExtra.md)
 - [OASAccountInfoDataFraudrecord](OASAccountInfoDataFraudrecord.md)
 - [OASAccountInfoLimits](OASAccountInfoLimits.md)
 - [OASAccountInfoLimitsInner](OASAccountInfoLimitsInner.md)
 - [OASAccountInfoMaxMindResponse](OASAccountInfoMaxMindResponse.md)
 - [OASAccountInfoMaxMindResponseRiskSco](OASAccountInfoMaxMindResponseRiskSco.md)
 - [OASAccountInfoOauthConfig](OASAccountInfoOauthConfig.md)
 - [OASAccountInfoOauthConfigProviders](OASAccountInfoOauthConfigProviders.md)
 - [OASAccountInfoOauthConfigProvidersVa](OASAccountInfoOauthConfigProvidersVa.md)
 - [OASAccountInfoOauthproviders](OASAccountInfoOauthproviders.md)
 - [OASAccountInfoPost](OASAccountInfoPost.md)
 - [OASAccountSshKey](OASAccountSshKey.md)
 - [OASAddServer200Response](OASAddServer200Response.md)
 - [OASAffiliateBannerRow](OASAffiliateBannerRow.md)
 - [OASAffiliateDockSetup](OASAffiliateDockSetup.md)
 - [OASAffiliatePaymentSetup](OASAffiliatePaymentSetup.md)
 - [OASAffiliateTrafficRow](OASAffiliateTrafficRow.md)
 - [OASAssetServer](OASAssetServer.md)
 - [OASAssetServerCPUInner](OASAssetServerCPUInner.md)
 - [OASBackup](OASBackup.md)
 - [OASBackupBillingDetails](OASBackupBillingDetails.md)
 - [OASBackupClientLink](OASBackupClientLink.md)
 - [OASBackupExtraInfoTables](OASBackupExtraInfoTables.md)
 - [OASBackupIPInfo](OASBackupIPInfo.md)
 - [OASBackupIPInfoRow](OASBackupIPInfoRow.md)
 - [OASBackupLoginResponse](OASBackupLoginResponse.md)
 - [OASBackupOrderPostResponse](OASBackupOrderPostResponse.md)
 - [OASBackupOrderPostResponseCjParams](OASBackupOrderPostResponseCjParams.md)
 - [OASBackupOrderPutRequest](OASBackupOrderPutRequest.md)
 - [OASBackupOrderPutResponse](OASBackupOrderPutResponse.md)
 - [OASBackupRow](OASBackupRow.md)
 - [OASBackupServiceInfo](OASBackupServiceInfo.md)
 - [OASBackupServiceMaster](OASBackupServiceMaster.md)
 - [OASBackupsOrder](OASBackupsOrder.md)
 - [OASBackupsOrderPackageCosts](OASBackupsOrderPackageCosts.md)
 - [OASBackupsOrderServiceTypes](OASBackupsOrderServiceTypes.md)
 - [OASBandwidth](OASBandwidth.md)
 - [OASBillingAddCcRequest](OASBillingAddCcRequest.md)
 - [OASBillingInvoiceDetail](OASBillingInvoiceDetail.md)
 - [OASBillingInvoiceList](OASBillingInvoiceList.md)
 - [OASBillingPaymentMethodRequest](OASBillingPaymentMethodRequest.md)
 - [OASBillingPrepayRequest](OASBillingPrepayRequest.md)
 - [OASBillingVerifyCcRequest](OASBillingVerifyCcRequest.md)
 - [OASBuyItNowList](OASBuyItNowList.md)
 - [OASBuyItNowRow](OASBuyItNowRow.md)
 - [OASBuyItNowRowCpuInner](OASBuyItNowRowCpuInner.md)
 - [OASBuyItNowRowCpuInnerOneOf](OASBuyItNowRowCpuInnerOneOf.md)
 - [OASBuyItNowServerOrder200Response](OASBuyItNowServerOrder200Response.md)
 - [OASBuyItNowServerOrder200ResponseBan](OASBuyItNowServerOrder200ResponseBan.md)
 - [OASBuyItNowServerOrder200ResponseCpI](OASBuyItNowServerOrder200ResponseCpI.md)
 - [OASBuyItNowServerOrder200ResponseIps](OASBuyItNowServerOrder200ResponseIps.md)
 - [OASBuyItNowServerOrder200ResponseOsI](OASBuyItNowServerOrder200ResponseOsI.md)
 - [OASBuyItNowServerOrder200ResponseRai](OASBuyItNowServerOrder200ResponseRai.md)
 - [OASCancelBackup200Response](OASCancelBackup200Response.md)
 - [OASCancelDomain200Response](OASCancelDomain200Response.md)
 - [OASCancelScrubIp200Response](OASCancelScrubIp200Response.md)
 - [OASCaptchaResponse](OASCaptchaResponse.md)
 - [OASChargeInvoiceRows](OASChargeInvoiceRows.md)
 - [OASChargeInvoiceRowsInvoicesValue](OASChargeInvoiceRowsInvoicesValue.md)
 - [OASChargeInvoiceRowsInvoicesValuePai](OASChargeInvoiceRowsInvoicesValuePai.md)
 - [OASCloseTicketResponseSchema](OASCloseTicketResponseSchema.md)
 - [OASConfigIds](OASConfigIds.md)
 - [OASConfigLists](OASConfigLists.md)
 - [OASControlPanel](OASControlPanel.md)
 - [OASCpu](OASCpu.md)
 - [OASCpuWithDefaults](OASCpuWithDefaults.md)
 - [OASCreateFilter](OASCreateFilter.md)
 - [OASCreateFilter201Response](OASCreateFilter201Response.md)
 - [OASCreateFilter400Response](OASCreateFilter400Response.md)
 - [OASCreateFilter500Response](OASCreateFilter500Response.md)
 - [OASCreateFirewallRule](OASCreateFirewallRule.md)
 - [OASCreateGeoFirewallRule](OASCreateGeoFirewallRule.md)
 - [OASCreateGeoRule400Response](OASCreateGeoRule400Response.md)
 - [OASCreateRule201Response](OASCreateRule201Response.md)
 - [OASCreateRule400Response](OASCreateRule400Response.md)
 - [OASCreateRule500Response](OASCreateRule500Response.md)
 - [OASDeleteFilter200Response](OASDeleteFilter200Response.md)
 - [OASDeleteFilter400Response](OASDeleteFilter400Response.md)
 - [OASDeleteFilter500Response](OASDeleteFilter500Response.md)
 - [OASDeleteFirewallRule](OASDeleteFirewallRule.md)
 - [OASDeleteGeoFirewallRule](OASDeleteGeoFirewallRule.md)
 - [OASDenyRuleNew](OASDenyRuleNew.md)
 - [OASDenyRuleRecord](OASDenyRuleRecord.md)
 - [OASDisableScrub200Response](OASDisableScrub200Response.md)
 - [OASDisableScrub400Response](OASDisableScrub400Response.md)
 - [OASDisableScrub500Response](OASDisableScrub500Response.md)
 - [OASDnsListItem](OASDnsListItem.md)
 - [OASDnsNewDomain](OASDnsNewDomain.md)
 - [OASDnsNewRecord](OASDnsNewRecord.md)
 - [OASDnsRecord](OASDnsRecord.md)
 - [OASDnsRecordType](OASDnsRecordType.md)
 - [OASDnsUpdateRecord](OASDnsUpdateRecord.md)
 - [OASDomain](OASDomain.md)
 - [OASDomainAdminContact](OASDomainAdminContact.md)
 - [OASDomainAllInfo](OASDomainAllInfo.md)
 - [OASDomainAllInfoAttributes](OASDomainAllInfoAttributes.md)
 - [OASDomainAllInfoAttributesContactSet](OASDomainAllInfoAttributesContactSet.md)
 - [OASDomainBillingDetails](OASDomainBillingDetails.md)
 - [OASDomainBillingExtra](OASDomainBillingExtra.md)
 - [OASDomainClientLink](OASDomainClientLink.md)
 - [OASDomainContactDetails](OASDomainContactDetails.md)
 - [OASDomainDnssecRecords](OASDomainDnssecRecords.md)
 - [OASDomainDnssecRecordsInner](OASDomainDnssecRecordsInner.md)
 - [OASDomainDnssecRequest](OASDomainDnssecRequest.md)
 - [OASDomainLookupResponse](OASDomainLookupResponse.md)
 - [OASDomainNameServer](OASDomainNameServer.md)
 - [OASDomainNameserverGetResponse](OASDomainNameserverGetResponse.md)
 - [OASDomainNameserverGetResponseInner](OASDomainNameserverGetResponseInner.md)
 - [OASDomainNameserverPostRequest](OASDomainNameserverPostRequest.md)
 - [OASDomainNameserverPutRequest](OASDomainNameserverPutRequest.md)
 - [OASDomainOrder](OASDomainOrder.md)
 - [OASDomainOrderResponse](OASDomainOrderResponse.md)
 - [OASDomainOrderResponseAttributes](OASDomainOrderResponseAttributes.md)
 - [OASDomainOrderServices](OASDomainOrderServices.md)
 - [OASDomainOrderServices10001](OASDomainOrderServices10001.md)
 - [OASDomainOrderTldServices](OASDomainOrderTldServices.md)
 - [OASDomainOwnerContact](OASDomainOwnerContact.md)
 - [OASDomainProvProcessPending](OASDomainProvProcessPending.md)
 - [OASDomainProvProcessPendingAttribute](OASDomainProvProcessPendingAttribute.md)
 - [OASDomainRow](OASDomainRow.md)
 - [OASDomainSearchResponse](OASDomainSearchResponse.md)
 - [OASDomainServiceInfo](OASDomainServiceInfo.md)
 - [OASDomainServiceType](OASDomainServiceType.md)
 - [OASDomainTechContact](OASDomainTechContact.md)
 - [OASDomainWhoisPrivacyRequest](OASDomainWhoisPrivacyRequest.md)
 - [OASDownloadQsBackup200Response](OASDownloadQsBackup200Response.md)
 - [OASDownloadQsBackupRequest](OASDownloadQsBackupRequest.md)
 - [OASEmailAddress](OASEmailAddress.md)
 - [OASEmailAddressName](OASEmailAddressName.md)
 - [OASEnableScrub200Response](OASEnableScrub200Response.md)
 - [OASEnableScrub500Response](OASEnableScrub500Response.md)
 - [OASFieldLabel](OASFieldLabel.md)
 - [OASFloatingIpsCancel200Response](OASFloatingIpsCancel200Response.md)
 - [OASFormValues](OASFormValues.md)
 - [OASGenericResponse](OASGenericResponse.md)
 - [OASGetAccountInfo401Response](OASGetAccountInfo401Response.md)
 - [OASGetAccountTfaSetup200Response](OASGetAccountTfaSetup200Response.md)
 - [OASGetOauthRedirect200Response](OASGetOauthRedirect200Response.md)
 - [OASGetOrderDetail200Response](OASGetOrderDetail200Response.md)
 - [OASGetOrderDetail200ResponseIpsInner](OASGetOrderDetail200ResponseIpsInner.md)
 - [OASGetOrderDetail200ResponsePackageC](OASGetOrderDetail200ResponsePackageC.md)
 - [OASGetOrderDetail200ResponseServiceT](OASGetOrderDetail200ResponseServiceT.md)
 - [OASGetScrubIpDetails200Response](OASGetScrubIpDetails200Response.md)
 - [OASGetScrubIpDetails200ResponseBilli](OASGetScrubIpDetails200ResponseBilli.md)
 - [OASGetScrubIpDetails200ResponseClien](OASGetScrubIpDetails200ResponseClien.md)
 - [OASGetScrubIpDetails200ResponseExtra](OASGetScrubIpDetails200ResponseExtra.md)
 - [OASGetScrubIpDetails200ResponseFilte](OASGetScrubIpDetails200ResponseFilte.md)
 - [OASGetScrubIpDetails200ResponseServi](OASGetScrubIpDetails200ResponseServi.md)
 - [OASGetWebsiteBuyIp200Response](OASGetWebsiteBuyIp200Response.md)
 - [OASHardDrive](OASHardDrive.md)
 - [OASHome](OASHome.md)
 - [OASHomeDetails](OASHomeDetails.md)
 - [OASHomeDetailsModules](OASHomeDetailsModules.md)
 - [OASHomeDetailsModulesBackups](OASHomeDetailsModulesBackups.md)
 - [OASHomeDetailsModulesDomains](OASHomeDetailsModulesDomains.md)
 - [OASHomeDetailsModulesLicenses](OASHomeDetailsModulesLicenses.md)
 - [OASHomeDetailsModulesQuickservers](OASHomeDetailsModulesQuickservers.md)
 - [OASHomeDetailsModulesServers](OASHomeDetailsModulesServers.md)
 - [OASHomeDetailsModulesVps](OASHomeDetailsModulesVps.md)
 - [OASHomeDetailsModulesWebhosting](OASHomeDetailsModulesWebhosting.md)
 - [OASHomeServices](OASHomeServices.md)
 - [OASHomeServicesBackups](OASHomeServicesBackups.md)
 - [OASHomeServicesDomains](OASHomeServicesDomains.md)
 - [OASHomeServicesDomainsLinks](OASHomeServicesDomainsLinks.md)
 - [OASHomeServicesLicenses](OASHomeServicesLicenses.md)
 - [OASHomeServicesLicensesLinks](OASHomeServicesLicensesLinks.md)
 - [OASHomeServicesServers](OASHomeServicesServers.md)
 - [OASHomeServicesServersLinks](OASHomeServicesServersLinks.md)
 - [OASHomeServicesVps](OASHomeServicesVps.md)
 - [OASHomeServicesVpsLinks](OASHomeServicesVpsLinks.md)
 - [OASHomeServicesWebhosting](OASHomeServicesWebhosting.md)
 - [OASHomeServicesWebhostingLinks](OASHomeServicesWebhostingLinks.md)
 - [OASHomeTicketStatus](OASHomeTicketStatus.md)
 - [OASHomeTicketStatusView](OASHomeTicketStatusView.md)
 - [OASHostnameObject](OASHostnameObject.md)
 - [OASInitiatePayment200Response](OASInitiatePayment200Response.md)
 - [OASInlineObject](OASInlineObject.md)
 - [OASInvoice](OASInvoice.md)
 - [OASInvoiceRow](OASInvoiceRow.md)
 - [OASIpBlock](OASIpBlock.md)
 - [OASIpLimitRange](OASIpLimitRange.md)
 - [OASIpObject](OASIpObject.md)
 - [OASLicense](OASLicense.md)
 - [OASLicenseBillingDetails](OASLicenseBillingDetails.md)
 - [OASLicenseClientLink](OASLicenseClientLink.md)
 - [OASLicenseExtraInfoTables](OASLicenseExtraInfoTables.md)
 - [OASLicenseIpInfo](OASLicenseIpInfo.md)
 - [OASLicenseIpInfoRow](OASLicenseIpInfoRow.md)
 - [OASLicenseRow](OASLicenseRow.md)
 - [OASLicenseServiceInfo](OASLicenseServiceInfo.md)
 - [OASLicenseServiceType](OASLicenseServiceType.md)
 - [OASLicensesCancel200Response](OASLicensesCancel200Response.md)
 - [OASLicensesOrder](OASLicensesOrder.md)
 - [OASLicensesOrderPackageCosts](OASLicensesOrderPackageCosts.md)
 - [OASLicensesOrderServiceCategories](OASLicensesOrderServiceCategories.md)
 - [OASLicensesOrderServiceCategories509](OASLicensesOrderServiceCategories509.md)
 - [OASLicensesOrderServiceTypes](OASLicensesOrderServiceTypes.md)
 - [OASLicensesOrderServiceTypes11482](OASLicensesOrderServiceTypes11482.md)
 - [OASLoginErrorResponse](OASLoginErrorResponse.md)
 - [OASLoginInfo](OASLoginInfo.md)
 - [OASLoginServiceCounts](OASLoginServiceCounts.md)
 - [OASLoginSubmissionExample](OASLoginSubmissionExample.md)
 - [OASLoginSubmissionExampleGRecaptchaR](OASLoginSubmissionExampleGRecaptchaR.md)
 - [OASLoginSuccessResponse](OASLoginSuccessResponse.md)
 - [OASMailAlertRequest](OASMailAlertRequest.md)
 - [OASMailAlertUpdateRequest](OASMailAlertUpdateRequest.md)
 - [OASMailAlertsResponse](OASMailAlertsResponse.md)
 - [OASMailAlertsResponseInner](OASMailAlertsResponseInner.md)
 - [OASMailAttachment](OASMailAttachment.md)
 - [OASMailBillingDetails](OASMailBillingDetails.md)
 - [OASMailBlockClickHouse](OASMailBlockClickHouse.md)
 - [OASMailBlockRspamd](OASMailBlockRspamd.md)
 - [OASMailBlocks](OASMailBlocks.md)
 - [OASMailCancel200Response](OASMailCancel200Response.md)
 - [OASMailClientLink](OASMailClientLink.md)
 - [OASMailDelistRequest](OASMailDelistRequest.md)
 - [OASMailDelistResponse](OASMailDelistResponse.md)
 - [OASMailDeliverabilityResponse](OASMailDeliverabilityResponse.md)
 - [OASMailExtraInfoTable](OASMailExtraInfoTable.md)
 - [OASMailExtraInfoTableRow](OASMailExtraInfoTableRow.md)
 - [OASMailLog](OASMailLog.md)
 - [OASMailLogEntry](OASMailLogEntry.md)
 - [OASMailOrder](OASMailOrder.md)
 - [OASMailRow](OASMailRow.md)
 - [OASMailSchema](OASMailSchema.md)
 - [OASMailSchemaExtraInfoTables](OASMailSchemaExtraInfoTables.md)
 - [OASMailServiceInfo](OASMailServiceInfo.md)
 - [OASMailServiceType](OASMailServiceType.md)
 - [OASMailStatsType](OASMailStatsType.md)
 - [OASMailStatsTypeVolume](OASMailStatsTypeVolume.md)
 - [OASMailStatsTypeVolumeFrom](OASMailStatsTypeVolumeFrom.md)
 - [OASMailStatsTypeVolumeIp](OASMailStatsTypeVolumeIp.md)
 - [OASMailStatsTypeVolumeTo](OASMailStatsTypeVolumeTo.md)
 - [OASMailTutorialsTable](OASMailTutorialsTable.md)
 - [OASMailTutorialsTableRow](OASMailTutorialsTableRow.md)
 - [OASMemoryOption](OASMemoryOption.md)
 - [OASModuleSettings](OASModuleSettings.md)
 - [OASModules](OASModules.md)
 - [OASMonthlyCounts](OASMonthlyCounts.md)
 - [OASOperatingSystem](OASOperatingSystem.md)
 - [OASPasswordRequest](OASPasswordRequest.md)
 - [OASPatchOauthTwoFactor200Response](OASPatchOauthTwoFactor200Response.md)
 - [OASPatchOauthTwoFactorRequest](OASPatchOauthTwoFactorRequest.md)
 - [OASPaymentInvoiceRows](OASPaymentInvoiceRows.md)
 - [OASPlaceBuyNowServerRequest](OASPlaceBuyNowServerRequest.md)
 - [OASPlaceScrubOrder201Response](OASPlaceScrubOrder201Response.md)
 - [OASPlaceScrubOrder201ResponseOrderDe](OASPlaceScrubOrder201ResponseOrderDe.md)
 - [OASPostOauthCallback200Response](OASPostOauthCallback200Response.md)
 - [OASPostOauthCallbackRequest](OASPostOauthCallbackRequest.md)
 - [OASPostWebsiteBuyIp200Response](OASPostWebsiteBuyIp200Response.md)
 - [OASPostWebsiteBuyIpRequest](OASPostWebsiteBuyIpRequest.md)
 - [OASPostWebsiteMigration200Response](OASPostWebsiteMigration200Response.md)
 - [OASPostWebsiteMigrationRequest](OASPostWebsiteMigrationRequest.md)
 - [OASQueueResponse](OASQueueResponse.md)
 - [OASQuickserver](OASQuickserver.md)
 - [OASQuickserverAddons](OASQuickserverAddons.md)
 - [OASQuickserverAddonsRow](OASQuickserverAddonsRow.md)
 - [OASQuickserverBillingDetails](OASQuickserverBillingDetails.md)
 - [OASQuickserverClientLink](OASQuickserverClientLink.md)
 - [OASQuickserverExtraInfoTables](OASQuickserverExtraInfoTables.md)
 - [OASQuickserverIpInfo](OASQuickserverIpInfo.md)
 - [OASQuickserverIpTableRow](OASQuickserverIpTableRow.md)
 - [OASQuickserverOrder](OASQuickserverOrder.md)
 - [OASQuickserverOrderDistroSel](OASQuickserverOrderDistroSel.md)
 - [OASQuickserverOrderDistroSelUbuntu](OASQuickserverOrderDistroSelUbuntu.md)
 - [OASQuickserverOrderServerDetails](OASQuickserverOrderServerDetails.md)
 - [OASQuickserverOrderServerDetails381](OASQuickserverOrderServerDetails381.md)
 - [OASQuickserverOrderTemplates](OASQuickserverOrderTemplates.md)
 - [OASQuickserverOrderTemplatesUbuntu64](OASQuickserverOrderTemplatesUbuntu64.md)
 - [OASQuickserverOrderVersion](OASQuickserverOrderVersion.md)
 - [OASQuickserverOrderVersionCentosstre](OASQuickserverOrderVersionCentosstre.md)
 - [OASQuickserverRow](OASQuickserverRow.md)
 - [OASQuickserverServiceExtra](OASQuickserverServiceExtra.md)
 - [OASQuickserverServiceInfo](OASQuickserverServiceInfo.md)
 - [OASQuickserverServiceMaster](OASQuickserverServiceMaster.md)
 - [OASQuickserversCancel200Response](OASQuickserversCancel200Response.md)
 - [OASRaidOption](OASRaidOption.md)
 - [OASRegion](OASRegion.md)
 - [OASReplyTicketRequest](OASReplyTicketRequest.md)
 - [OASReplyTicketResponseSchema](OASReplyTicketResponseSchema.md)
 - [OASRestoreRequest](OASRestoreRequest.md)
 - [OASReverseDnsEntries](OASReverseDnsEntries.md)
 - [OASScrubIpFilterTypes](OASScrubIpFilterTypes.md)
 - [OASScrubIpFilterTypesFiltersValue](OASScrubIpFilterTypesFiltersValue.md)
 - [OASScrubIpPlaceOrder](OASScrubIpPlaceOrder.md)
 - [OASScrubIpsDeleteRule200Response](OASScrubIpsDeleteRule200Response.md)
 - [OASScrubIpsDeleteRule400Response](OASScrubIpsDeleteRule400Response.md)
 - [OASScrubIpsDeleteRule500Response](OASScrubIpsDeleteRule500Response.md)
 - [OASScrubIpsLogRowSchema](OASScrubIpsLogRowSchema.md)
 - [OASScrubIpsRowSchema](OASScrubIpsRowSchema.md)
 - [OASSearchAutocompleteResponse](OASSearchAutocompleteResponse.md)
 - [OASSendMail](OASSendMail.md)
 - [OASSendMailAdv](OASSendMailAdv.md)
 - [OASServer](OASServer.md)
 - [OASServerAsset](OASServerAsset.md)
 - [OASServerAssets](OASServerAssets.md)
 - [OASServerBillingDetails](OASServerBillingDetails.md)
 - [OASServerClientLink](OASServerClientLink.md)
 - [OASServerExtraInfoTables](OASServerExtraInfoTables.md)
 - [OASServerIpmiLiveInfo](OASServerIpmiLiveInfo.md)
 - [OASServerIpmiLiveRequest](OASServerIpmiLiveRequest.md)
 - [OASServerIpmiPowerRequest](OASServerIpmiPowerRequest.md)
 - [OASServerLease](OASServerLease.md)
 - [OASServerLocation1](OASServerLocation1.md)
 - [OASServerLocations](OASServerLocations.md)
 - [OASServerNetworkInfo](OASServerNetworkInfo.md)
 - [OASServerNetworkInfoAssets](OASServerNetworkInfoAssets.md)
 - [OASServerNetworkInfoSwitchports](OASServerNetworkInfoSwitchports.md)
 - [OASServerOrder](OASServerOrder.md)
 - [OASServerOrderBandwidth](OASServerOrderBandwidth.md)
 - [OASServerOrderBandwidthLi](OASServerOrderBandwidthLi.md)
 - [OASServerOrderCPU](OASServerOrderCPU.md)
 - [OASServerOrderConfigIds](OASServerOrderConfigIds.md)
 - [OASServerOrderControlPanel](OASServerOrderControlPanel.md)
 - [OASServerOrderCpLi](OASServerOrderCpLi.md)
 - [OASServerOrderCpuLi](OASServerOrderCpuLi.md)
 - [OASServerOrderFieldLabel](OASServerOrderFieldLabel.md)
 - [OASServerOrderFieldLabels](OASServerOrderFieldLabels.md)
 - [OASServerOrderFormValues](OASServerOrderFormValues.md)
 - [OASServerOrderGetResponse](OASServerOrderGetResponse.md)
 - [OASServerOrderIP](OASServerOrderIP.md)
 - [OASServerOrderIpsLi](OASServerOrderIpsLi.md)
 - [OASServerOrderMemory](OASServerOrderMemory.md)
 - [OASServerOrderMemoryLi](OASServerOrderMemoryLi.md)
 - [OASServerOrderMemoryLi254](OASServerOrderMemoryLi254.md)
 - [OASServerOrderOS](OASServerOrderOS.md)
 - [OASServerOrderOsLi](OASServerOrderOsLi.md)
 - [OASServerOrderRAID](OASServerOrderRAID.md)
 - [OASServerRow](OASServerRow.md)
 - [OASServerServiceInfo](OASServerServiceInfo.md)
 - [OASServerSwitchport](OASServerSwitchport.md)
 - [OASServersBuyNowError](OASServersBuyNowError.md)
 - [OASServersBuyNowResponse](OASServersBuyNowResponse.md)
 - [OASServersBuyNowResponseOrderDetails](OASServersBuyNowResponseOrderDetails.md)
 - [OASServersCancel200Response](OASServersCancel200Response.md)
 - [OASService](OASService.md)
 - [OASServiceCategories](OASServiceCategories.md)
 - [OASServiceCategory](OASServiceCategory.md)
 - [OASServiceOrderPostResponse](OASServiceOrderPostResponse.md)
 - [OASServiceType](OASServiceType.md)
 - [OASServiceTypes](OASServiceTypes.md)
 - [OASServices](OASServices.md)
 - [OASServicesInfo](OASServicesInfo.md)
 - [OASSslCancel200Response](OASSslCancel200Response.md)
 - [OASStatusMonthlyBreakdown](OASStatusMonthlyBreakdown.md)
 - [OASSuccessTextResponse](OASSuccessTextResponse.md)
 - [OASTemplateRequest](OASTemplateRequest.md)
 - [OASTextResponse](OASTextResponse.md)
 - [OASTicketCustomFieldDetails](OASTicketCustomFieldDetails.md)
 - [OASTicketDetails](OASTicketDetails.md)
 - [OASTicketNew](OASTicketNew.md)
 - [OASTicketNewResponse](OASTicketNewResponse.md)
 - [OASTicketPostDetails](OASTicketPostDetails.md)
 - [OASTicketPostDetailsInner](OASTicketPostDetailsInner.md)
 - [OASTickets](OASTickets.md)
 - [OASTicketsCountArray](OASTicketsCountArray.md)
 - [OASTicketsRow](OASTicketsRow.md)
 - [OASTimezoneUpdate](OASTimezoneUpdate.md)
 - [OASUpdateAccountTfaRequest](OASUpdateAccountTfaRequest.md)
 - [OASUpdateTicket](OASUpdateTicket.md)
 - [OASUpdateTicketResponseSchema](OASUpdateTicketResponseSchema.md)
 - [OASUrlRequest](OASUrlRequest.md)
 - [OASVPSCancel200Response](OASVPSCancel200Response.md)
 - [OASVPSTrafficDataDataSectionResponse](OASVPSTrafficDataDataSectionResponse.md)
 - [OASViewMailLogStartDateParameter](OASViewMailLogStartDateParameter.md)
 - [OASViewTicketResponse](OASViewTicketResponse.md)
 - [OASVps](OASVps.md)
 - [OASVpsBackupRow](OASVpsBackupRow.md)
 - [OASVpsBackupRows](OASVpsBackupRows.md)
 - [OASVpsBillingDetails](OASVpsBillingDetails.md)
 - [OASVpsCPData](OASVpsCPData.md)
 - [OASVpsClientLink](OASVpsClientLink.md)
 - [OASVpsDAData](OASVpsDAData.md)
 - [OASVpsDALicense](OASVpsDALicense.md)
 - [OASVpsExtraInfoTables](OASVpsExtraInfoTables.md)
 - [OASVpsIPInfo](OASVpsIPInfo.md)
 - [OASVpsIPInfoRow](OASVpsIPInfoRow.md)
 - [OASVpsOrder](OASVpsOrder.md)
 - [OASVpsOrderLocationNames](OASVpsOrderLocationNames.md)
 - [OASVpsOrderLocationStock](OASVpsOrderLocationStock.md)
 - [OASVpsOrderLocationStock1](OASVpsOrderLocationStock1.md)
 - [OASVpsOrderOsNames](OASVpsOrderOsNames.md)
 - [OASVpsOrderPackageCosts](OASVpsOrderPackageCosts.md)
 - [OASVpsOrderPlatformNames](OASVpsOrderPlatformNames.md)
 - [OASVpsOrderPlatformPackages](OASVpsOrderPlatformPackages.md)
 - [OASVpsOrderPostRequest](OASVpsOrderPostRequest.md)
 - [OASVpsOrderPutRequest](OASVpsOrderPutRequest.md)
 - [OASVpsOrderPutResponse](OASVpsOrderPutResponse.md)
 - [OASVpsOrderServiceTypes](OASVpsOrderServiceTypes.md)
 - [OASVpsOrderServiceTypes32](OASVpsOrderServiceTypes32.md)
 - [OASVpsOrderTemplates](OASVpsOrderTemplates.md)
 - [OASVpsOrderTemplatesHyperv](OASVpsOrderTemplatesHyperv.md)
 - [OASVpsOrderTemplatesHypervWindows](OASVpsOrderTemplatesHypervWindows.md)
 - [OASVpsPlesk12Data](OASVpsPlesk12Data.md)
 - [OASVpsPleskLicense](OASVpsPleskLicense.md)
 - [OASVpsRow](OASVpsRow.md)
 - [OASVpsServiceAddons](OASVpsServiceAddons.md)
 - [OASVpsServiceExtra](OASVpsServiceExtra.md)
 - [OASVpsServiceInfo](OASVpsServiceInfo.md)
 - [OASVpsServiceMaster](OASVpsServiceMaster.md)
 - [OASVpsSnapshot](OASVpsSnapshot.md)
 - [OASVpsTemplateRow](OASVpsTemplateRow.md)
 - [OASVpsTemplatesList](OASVpsTemplatesList.md)
 - [OASVpsTrafficDataDataResponse](OASVpsTrafficDataDataResponse.md)
 - [OASVpsTrafficDataSectionResponse](OASVpsTrafficDataSectionResponse.md)
 - [OASVpsTrafficHistoryResponse](OASVpsTrafficHistoryResponse.md)
 - [OASVpsTrafficHistorySectionDataRespo](OASVpsTrafficHistorySectionDataRespo.md)
 - [OASVpsTrafficHistorySectionResponse](OASVpsTrafficHistorySectionResponse.md)
 - [OASVpsTrafficResponse](OASVpsTrafficResponse.md)
 - [OASVpsTrafficTotalsResposne](OASVpsTrafficTotalsResposne.md)
 - [OASVpsTrafficTotalsSectionResponse](OASVpsTrafficTotalsSectionResponse.md)
 - [OASVpsTrafficUsageAverageResponse](OASVpsTrafficUsageAverageResponse.md)
 - [OASVpsTrafficUsageAverageSectionResp](OASVpsTrafficUsageAverageSectionResp.md)
 - [OASVpsTrafficUsageResponse](OASVpsTrafficUsageResponse.md)
 - [OASWebhostingCancel200Response](OASWebhostingCancel200Response.md)
 - [OASWebsite](OASWebsite.md)
 - [OASWebsiteBackups](OASWebsiteBackups.md)
 - [OASWebsiteBackupsInner](OASWebsiteBackupsInner.md)
 - [OASWebsiteBillingDetails](OASWebsiteBillingDetails.md)
 - [OASWebsiteClientLink](OASWebsiteClientLink.md)
 - [OASWebsiteExtraInfoTables](OASWebsiteExtraInfoTables.md)
 - [OASWebsiteLoginResponse](OASWebsiteLoginResponse.md)
 - [OASWebsiteRow](OASWebsiteRow.md)
 - [OASWebsiteServiceInfo](OASWebsiteServiceInfo.md)
 - [OASWebsiteServiceMaster](OASWebsiteServiceMaster.md)
 - [OASWebsiteTable](OASWebsiteTable.md)
 - [OASWebsiteTableRow](OASWebsiteTableRow.md)
 - [OASWebsitesOrder](OASWebsitesOrder.md)
 - [OASWebsitesOrderJsonServiceOffers](OASWebsitesOrderJsonServiceOffers.md)
 - [OASWebsitesOrderJsonServiceOffersIte](OASWebsitesOrderJsonServiceOffersIte.md)
 - [OASWebsitesOrderJsonServices](OASWebsitesOrderJsonServices.md)
 - [OASWebsitesOrderPackages](OASWebsitesOrderPackages.md)
 - [OASWebsitesOrderPackagesInfo](OASWebsitesOrderPackagesInfo.md)
 - [OASWebsitesOrderPackges](OASWebsitesOrderPackges.md)
 - [OASWebsitesOrderServiceOffer](OASWebsitesOrderServiceOffer.md)
 - [OASWebsitesOrderServiceOffers](OASWebsitesOrderServiceOffers.md)
 - [OASWebsitesOrderServiceTypes](OASWebsitesOrderServiceTypes.md)


## Documentation for Authorization


Authentication schemes defined for the API:
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


## Author

support@interserver.net

