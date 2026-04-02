# InterServer Management API Bash client

## Overview

This is a Bash client script for accessing InterServer Management API service.

The script uses cURL underneath for making all REST calls.

## Usage

```shell
# Make sure the script has executable rights
$ chmod u+x 

# Print the list of operations available on the service
$ ./ -h

# Print the service description
$ ./ --about

# Print detailed information about specific operation
$ ./ <operationId> -h

# Make GET request
./ --host http://<hostname>:<port> --accept xml <operationId> <queryParam1>=<value1> <header_key1>:<header_value2>

# Make GET request using arbitrary curl options (must be passed before <operationId>) to an SSL service using username:password
 -k -sS --tlsv1.2 --host https://<hostname> -u <user>:<password> --accept xml <operationId> <queryParam1>=<value1> <header_key1>:<header_value2>

# Make POST request
$ echo '<body_content>' |  --host <hostname> --content-type json <operationId> -

# Make POST request with simple JSON content, e.g.:
# {
#   "key1": "value1",
#   "key2": "value2",
#   "key3": 23
# }
$ echo '<body_content>' |  --host <hostname> --content-type json <operationId> key1==value1 key2=value2 key3:=23 -

# Make POST request with form data
$  --host <hostname> <operationId> key1:=value1 key2:=value2 key3:=23

# Preview the cURL command without actually executing it
$  --host http://<hostname>:<port> --dry-run <operationid>

```

## Docker image

You can easily create a Docker image containing a preconfigured environment
for using the REST Bash client including working autocompletion and short
welcome message with basic instructions, using the generated Dockerfile:

```shell
docker build -t my-rest-client .
docker run -it my-rest-client
```

By default you will be logged into a Zsh environment which has much more
advanced auto completion, but you can switch to Bash, where basic autocompletion
is also available.

## Shell completion

### Bash

The generated bash-completion script can be either directly loaded to the current Bash session using:

```shell
source .bash-completion
```

Alternatively, the script can be copied to the `/etc/bash-completion.d` (or on OSX with Homebrew to `/usr/local/etc/bash-completion.d`):

```shell
sudo cp .bash-completion /etc/bash-completion.d/
```

#### OS X

On OSX you might need to install bash-completion using Homebrew:

```shell
brew install bash-completion
```

and add the following to the `~/.bashrc`:

```shell
if [ -f $(brew --prefix)/etc/bash_completion ]; then
  . $(brew --prefix)/etc/bash_completion
fi
```

### Zsh

In Zsh, the generated `_` Zsh completion file must be copied to one of the folders under `$FPATH` variable.

## Documentation for API Endpoints

All URIs are relative to */apiv2*

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


## Documentation For Models

 - [AccountFeatures](docs/AccountFeatures.md)
 - [AccountInfo](docs/AccountInfo.md)
 - [AccountInfoCountryCurrencies](docs/AccountInfoCountryCurrencies.md)
 - [AccountInfoData](docs/AccountInfoData.md)
 - [AccountInfoDataCc](docs/AccountInfoDataCc.md)
 - [AccountInfoDataCcs](docs/AccountInfoDataCcs.md)
 - [AccountInfoDataEmailSettings](docs/AccountInfoDataEmailSettings.md)
 - [AccountInfoDataExtra](docs/AccountInfoDataExtra.md)
 - [AccountInfoDataFraudrecord](docs/AccountInfoDataFraudrecord.md)
 - [AccountInfoLimits](docs/AccountInfoLimits.md)
 - [AccountInfoLimitsInner](docs/AccountInfoLimitsInner.md)
 - [AccountInfoMaxMindResponse](docs/AccountInfoMaxMindResponse.md)
 - [AccountInfoMaxMindResponseRiskScore](docs/AccountInfoMaxMindResponseRiskScore.md)
 - [AccountInfoOauthConfig](docs/AccountInfoOauthConfig.md)
 - [AccountInfoOauthConfigProviders](docs/AccountInfoOauthConfigProviders.md)
 - [AccountInfoOauthConfigProvidersValue](docs/AccountInfoOauthConfigProvidersValue.md)
 - [AccountInfoOauthproviders](docs/AccountInfoOauthproviders.md)
 - [AccountInfoPost](docs/AccountInfoPost.md)
 - [AccountSshKey](docs/AccountSshKey.md)
 - [AddServer200Response](docs/AddServer200Response.md)
 - [AffiliateBannerRow](docs/AffiliateBannerRow.md)
 - [AffiliateDockSetup](docs/AffiliateDockSetup.md)
 - [AffiliatePaymentSetup](docs/AffiliatePaymentSetup.md)
 - [AffiliateTrafficRow](docs/AffiliateTrafficRow.md)
 - [AssetServer](docs/AssetServer.md)
 - [AssetServerCPUInner](docs/AssetServerCPUInner.md)
 - [Backup](docs/Backup.md)
 - [BackupBillingDetails](docs/BackupBillingDetails.md)
 - [BackupClientLink](docs/BackupClientLink.md)
 - [BackupExtraInfoTables](docs/BackupExtraInfoTables.md)
 - [BackupIPInfo](docs/BackupIPInfo.md)
 - [BackupIPInfoRow](docs/BackupIPInfoRow.md)
 - [BackupLoginResponse](docs/BackupLoginResponse.md)
 - [BackupOrderPostResponse](docs/BackupOrderPostResponse.md)
 - [BackupOrderPostResponseCjParams](docs/BackupOrderPostResponseCjParams.md)
 - [BackupOrderPutRequest](docs/BackupOrderPutRequest.md)
 - [BackupOrderPutResponse](docs/BackupOrderPutResponse.md)
 - [BackupRow](docs/BackupRow.md)
 - [BackupServiceInfo](docs/BackupServiceInfo.md)
 - [BackupServiceMaster](docs/BackupServiceMaster.md)
 - [BackupsOrder](docs/BackupsOrder.md)
 - [BackupsOrderPackageCosts](docs/BackupsOrderPackageCosts.md)
 - [BackupsOrderServiceTypes](docs/BackupsOrderServiceTypes.md)
 - [Bandwidth](docs/Bandwidth.md)
 - [BillingAddCcRequest](docs/BillingAddCcRequest.md)
 - [BillingInvoiceDetail](docs/BillingInvoiceDetail.md)
 - [BillingInvoiceList](docs/BillingInvoiceList.md)
 - [BillingPaymentMethodRequest](docs/BillingPaymentMethodRequest.md)
 - [BillingPrepayRequest](docs/BillingPrepayRequest.md)
 - [BillingVerifyCcRequest](docs/BillingVerifyCcRequest.md)
 - [BuyItNowList](docs/BuyItNowList.md)
 - [BuyItNowRow](docs/BuyItNowRow.md)
 - [BuyItNowRowCpuInner](docs/BuyItNowRowCpuInner.md)
 - [BuyItNowRowCpuInnerOneOf](docs/BuyItNowRowCpuInnerOneOf.md)
 - [BuyItNowServerOrder200Response](docs/BuyItNowServerOrder200Response.md)
 - [BuyItNowServerOrder200ResponseBandwidthInner](docs/BuyItNowServerOrder200ResponseBandwidthInner.md)
 - [BuyItNowServerOrder200ResponseCpInner](docs/BuyItNowServerOrder200ResponseCpInner.md)
 - [BuyItNowServerOrder200ResponseIpsInner](docs/BuyItNowServerOrder200ResponseIpsInner.md)
 - [BuyItNowServerOrder200ResponseOsInner](docs/BuyItNowServerOrder200ResponseOsInner.md)
 - [BuyItNowServerOrder200ResponseRaidInner](docs/BuyItNowServerOrder200ResponseRaidInner.md)
 - [CancelBackup200Response](docs/CancelBackup200Response.md)
 - [CancelDomain200Response](docs/CancelDomain200Response.md)
 - [CancelScrubIp200Response](docs/CancelScrubIp200Response.md)
 - [CaptchaResponse](docs/CaptchaResponse.md)
 - [ChargeInvoiceRows](docs/ChargeInvoiceRows.md)
 - [ChargeInvoiceRowsInvoicesValue](docs/ChargeInvoiceRowsInvoicesValue.md)
 - [ChargeInvoiceRowsInvoicesValuePaidInvoicesValue](docs/ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.md)
 - [ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue](docs/ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.md)
 - [CloseTicketResponseSchema](docs/CloseTicketResponseSchema.md)
 - [ConfigIds](docs/ConfigIds.md)
 - [ConfigLists](docs/ConfigLists.md)
 - [ControlPanel](docs/ControlPanel.md)
 - [Cpu](docs/Cpu.md)
 - [CpuWithDefaults](docs/CpuWithDefaults.md)
 - [CreateFilter](docs/CreateFilter.md)
 - [CreateFilter201Response](docs/CreateFilter201Response.md)
 - [CreateFilter400Response](docs/CreateFilter400Response.md)
 - [CreateFilter500Response](docs/CreateFilter500Response.md)
 - [CreateFirewallRule](docs/CreateFirewallRule.md)
 - [CreateGeoFirewallRule](docs/CreateGeoFirewallRule.md)
 - [CreateGeoRule400Response](docs/CreateGeoRule400Response.md)
 - [CreateRule201Response](docs/CreateRule201Response.md)
 - [CreateRule400Response](docs/CreateRule400Response.md)
 - [CreateRule500Response](docs/CreateRule500Response.md)
 - [DeleteFilter200Response](docs/DeleteFilter200Response.md)
 - [DeleteFilter400Response](docs/DeleteFilter400Response.md)
 - [DeleteFilter500Response](docs/DeleteFilter500Response.md)
 - [DeleteFirewallRule](docs/DeleteFirewallRule.md)
 - [DeleteGeoFirewallRule](docs/DeleteGeoFirewallRule.md)
 - [DenyRuleNew](docs/DenyRuleNew.md)
 - [DenyRuleRecord](docs/DenyRuleRecord.md)
 - [DisableScrub200Response](docs/DisableScrub200Response.md)
 - [DisableScrub400Response](docs/DisableScrub400Response.md)
 - [DisableScrub500Response](docs/DisableScrub500Response.md)
 - [DnsListItem](docs/DnsListItem.md)
 - [DnsNewDomain](docs/DnsNewDomain.md)
 - [DnsNewRecord](docs/DnsNewRecord.md)
 - [DnsRecord](docs/DnsRecord.md)
 - [DnsRecordType](docs/DnsRecordType.md)
 - [DnsUpdateRecord](docs/DnsUpdateRecord.md)
 - [Domain](docs/Domain.md)
 - [DomainAdminContact](docs/DomainAdminContact.md)
 - [DomainAllInfo](docs/DomainAllInfo.md)
 - [DomainAllInfoAttributes](docs/DomainAllInfoAttributes.md)
 - [DomainAllInfoAttributesContactSet](docs/DomainAllInfoAttributesContactSet.md)
 - [DomainBillingDetails](docs/DomainBillingDetails.md)
 - [DomainBillingExtra](docs/DomainBillingExtra.md)
 - [DomainClientLink](docs/DomainClientLink.md)
 - [DomainContactDetails](docs/DomainContactDetails.md)
 - [DomainDnssecRecords](docs/DomainDnssecRecords.md)
 - [DomainDnssecRecordsInner](docs/DomainDnssecRecordsInner.md)
 - [DomainDnssecRequest](docs/DomainDnssecRequest.md)
 - [DomainLookupResponse](docs/DomainLookupResponse.md)
 - [DomainNameServer](docs/DomainNameServer.md)
 - [DomainNameserverGetResponse](docs/DomainNameserverGetResponse.md)
 - [DomainNameserverGetResponseInner](docs/DomainNameserverGetResponseInner.md)
 - [DomainNameserverPostRequest](docs/DomainNameserverPostRequest.md)
 - [DomainNameserverPutRequest](docs/DomainNameserverPutRequest.md)
 - [DomainOrder](docs/DomainOrder.md)
 - [DomainOrderResponse](docs/DomainOrderResponse.md)
 - [DomainOrderResponseAttributes](docs/DomainOrderResponseAttributes.md)
 - [DomainOrderServices](docs/DomainOrderServices.md)
 - [DomainOrderServices10001](docs/DomainOrderServices10001.md)
 - [DomainOrderTldServices](docs/DomainOrderTldServices.md)
 - [DomainOwnerContact](docs/DomainOwnerContact.md)
 - [DomainProvProcessPending](docs/DomainProvProcessPending.md)
 - [DomainProvProcessPendingAttributes](docs/DomainProvProcessPendingAttributes.md)
 - [DomainRow](docs/DomainRow.md)
 - [DomainSearchResponse](docs/DomainSearchResponse.md)
 - [DomainServiceInfo](docs/DomainServiceInfo.md)
 - [DomainServiceType](docs/DomainServiceType.md)
 - [DomainTechContact](docs/DomainTechContact.md)
 - [DomainWhoisPrivacyRequest](docs/DomainWhoisPrivacyRequest.md)
 - [DownloadQsBackup200Response](docs/DownloadQsBackup200Response.md)
 - [DownloadQsBackupRequest](docs/DownloadQsBackupRequest.md)
 - [EmailAddress](docs/EmailAddress.md)
 - [EmailAddressName](docs/EmailAddressName.md)
 - [EnableScrub200Response](docs/EnableScrub200Response.md)
 - [EnableScrub500Response](docs/EnableScrub500Response.md)
 - [FieldLabel](docs/FieldLabel.md)
 - [FloatingIpsCancel200Response](docs/FloatingIpsCancel200Response.md)
 - [FormValues](docs/FormValues.md)
 - [GenericResponse](docs/GenericResponse.md)
 - [GetAccountInfo401Response](docs/GetAccountInfo401Response.md)
 - [GetAccountTfaSetup200Response](docs/GetAccountTfaSetup200Response.md)
 - [GetOauthRedirect200Response](docs/GetOauthRedirect200Response.md)
 - [GetOrderDetail200Response](docs/GetOrderDetail200Response.md)
 - [GetOrderDetail200ResponseIpsInner](docs/GetOrderDetail200ResponseIpsInner.md)
 - [GetOrderDetail200ResponsePackageCosts](docs/GetOrderDetail200ResponsePackageCosts.md)
 - [GetOrderDetail200ResponseServiceTypesInner](docs/GetOrderDetail200ResponseServiceTypesInner.md)
 - [GetScrubIpDetails200Response](docs/GetScrubIpDetails200Response.md)
 - [GetScrubIpDetails200ResponseBillingDetails](docs/GetScrubIpDetails200ResponseBillingDetails.md)
 - [GetScrubIpDetails200ResponseClientLinksInner](docs/GetScrubIpDetails200ResponseClientLinksInner.md)
 - [GetScrubIpDetails200ResponseExtraInfoTables](docs/GetScrubIpDetails200ResponseExtraInfoTables.md)
 - [GetScrubIpDetails200ResponseExtraInfoTablesScrubIps](docs/GetScrubIpDetails200ResponseExtraInfoTablesScrubIps.md)
 - [GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner](docs/GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner.md)
 - [GetScrubIpDetails200ResponseFilterFirewall](docs/GetScrubIpDetails200ResponseFilterFirewall.md)
 - [GetScrubIpDetails200ResponseFilterFirewallFiltersInner](docs/GetScrubIpDetails200ResponseFilterFirewallFiltersInner.md)
 - [GetScrubIpDetails200ResponseFilterFirewallRulesInner](docs/GetScrubIpDetails200ResponseFilterFirewallRulesInner.md)
 - [GetScrubIpDetails200ResponseServiceInfo](docs/GetScrubIpDetails200ResponseServiceInfo.md)
 - [GetWebsiteBuyIp200Response](docs/GetWebsiteBuyIp200Response.md)
 - [HardDrive](docs/HardDrive.md)
 - [Home](docs/Home.md)
 - [HomeDetails](docs/HomeDetails.md)
 - [HomeDetailsModules](docs/HomeDetailsModules.md)
 - [HomeDetailsModulesBackups](docs/HomeDetailsModulesBackups.md)
 - [HomeDetailsModulesDomains](docs/HomeDetailsModulesDomains.md)
 - [HomeDetailsModulesLicenses](docs/HomeDetailsModulesLicenses.md)
 - [HomeDetailsModulesQuickservers](docs/HomeDetailsModulesQuickservers.md)
 - [HomeDetailsModulesServers](docs/HomeDetailsModulesServers.md)
 - [HomeDetailsModulesVps](docs/HomeDetailsModulesVps.md)
 - [HomeDetailsModulesWebhosting](docs/HomeDetailsModulesWebhosting.md)
 - [HomeServices](docs/HomeServices.md)
 - [HomeServicesBackups](docs/HomeServicesBackups.md)
 - [HomeServicesDomains](docs/HomeServicesDomains.md)
 - [HomeServicesDomainsLinks](docs/HomeServicesDomainsLinks.md)
 - [HomeServicesLicenses](docs/HomeServicesLicenses.md)
 - [HomeServicesLicensesLinks](docs/HomeServicesLicensesLinks.md)
 - [HomeServicesServers](docs/HomeServicesServers.md)
 - [HomeServicesServersLinks](docs/HomeServicesServersLinks.md)
 - [HomeServicesVps](docs/HomeServicesVps.md)
 - [HomeServicesVpsLinks](docs/HomeServicesVpsLinks.md)
 - [HomeServicesWebhosting](docs/HomeServicesWebhosting.md)
 - [HomeServicesWebhostingLinks](docs/HomeServicesWebhostingLinks.md)
 - [HomeTicketStatus](docs/HomeTicketStatus.md)
 - [HomeTicketStatusView](docs/HomeTicketStatusView.md)
 - [HostnameObject](docs/HostnameObject.md)
 - [InitiatePayment200Response](docs/InitiatePayment200Response.md)
 - [InlineObject](docs/InlineObject.md)
 - [Invoice](docs/Invoice.md)
 - [InvoiceRow](docs/InvoiceRow.md)
 - [IpBlock](docs/IpBlock.md)
 - [IpLimitRange](docs/IpLimitRange.md)
 - [IpObject](docs/IpObject.md)
 - [License](docs/License.md)
 - [LicenseBillingDetails](docs/LicenseBillingDetails.md)
 - [LicenseClientLink](docs/LicenseClientLink.md)
 - [LicenseExtraInfoTables](docs/LicenseExtraInfoTables.md)
 - [LicenseIpInfo](docs/LicenseIpInfo.md)
 - [LicenseIpInfoRow](docs/LicenseIpInfoRow.md)
 - [LicenseRow](docs/LicenseRow.md)
 - [LicenseServiceInfo](docs/LicenseServiceInfo.md)
 - [LicenseServiceType](docs/LicenseServiceType.md)
 - [LicensesCancel200Response](docs/LicensesCancel200Response.md)
 - [LicensesOrder](docs/LicensesOrder.md)
 - [LicensesOrderPackageCosts](docs/LicensesOrderPackageCosts.md)
 - [LicensesOrderServiceCategories](docs/LicensesOrderServiceCategories.md)
 - [LicensesOrderServiceCategories509](docs/LicensesOrderServiceCategories509.md)
 - [LicensesOrderServiceTypes](docs/LicensesOrderServiceTypes.md)
 - [LicensesOrderServiceTypes11482](docs/LicensesOrderServiceTypes11482.md)
 - [LoginErrorResponse](docs/LoginErrorResponse.md)
 - [LoginInfo](docs/LoginInfo.md)
 - [LoginServiceCounts](docs/LoginServiceCounts.md)
 - [LoginSubmissionExample](docs/LoginSubmissionExample.md)
 - [LoginSubmissionExampleGRecaptchaResponse](docs/LoginSubmissionExampleGRecaptchaResponse.md)
 - [LoginSubmissionExampleGRecaptchaResponseDep](docs/LoginSubmissionExampleGRecaptchaResponseDep.md)
 - [LoginSuccessResponse](docs/LoginSuccessResponse.md)
 - [MailAlertRequest](docs/MailAlertRequest.md)
 - [MailAlertUpdateRequest](docs/MailAlertUpdateRequest.md)
 - [MailAlertsResponse](docs/MailAlertsResponse.md)
 - [MailAlertsResponseInner](docs/MailAlertsResponseInner.md)
 - [MailAttachment](docs/MailAttachment.md)
 - [MailBillingDetails](docs/MailBillingDetails.md)
 - [MailBlockClickHouse](docs/MailBlockClickHouse.md)
 - [MailBlockRspamd](docs/MailBlockRspamd.md)
 - [MailBlocks](docs/MailBlocks.md)
 - [MailCancel200Response](docs/MailCancel200Response.md)
 - [MailClientLink](docs/MailClientLink.md)
 - [MailDelistRequest](docs/MailDelistRequest.md)
 - [MailDelistResponse](docs/MailDelistResponse.md)
 - [MailDeliverabilityResponse](docs/MailDeliverabilityResponse.md)
 - [MailExtraInfoTable](docs/MailExtraInfoTable.md)
 - [MailExtraInfoTableRow](docs/MailExtraInfoTableRow.md)
 - [MailLog](docs/MailLog.md)
 - [MailLogEntry](docs/MailLogEntry.md)
 - [MailOrder](docs/MailOrder.md)
 - [MailRow](docs/MailRow.md)
 - [MailSchema](docs/MailSchema.md)
 - [MailSchemaExtraInfoTables](docs/MailSchemaExtraInfoTables.md)
 - [MailServiceInfo](docs/MailServiceInfo.md)
 - [MailServiceType](docs/MailServiceType.md)
 - [MailStatsType](docs/MailStatsType.md)
 - [MailStatsTypeVolume](docs/MailStatsTypeVolume.md)
 - [MailStatsTypeVolumeFrom](docs/MailStatsTypeVolumeFrom.md)
 - [MailStatsTypeVolumeIp](docs/MailStatsTypeVolumeIp.md)
 - [MailStatsTypeVolumeTo](docs/MailStatsTypeVolumeTo.md)
 - [MailTutorialsTable](docs/MailTutorialsTable.md)
 - [MailTutorialsTableRow](docs/MailTutorialsTableRow.md)
 - [MemoryOption](docs/MemoryOption.md)
 - [ModuleSettings](docs/ModuleSettings.md)
 - [Modules](docs/Modules.md)
 - [MonthlyCounts](docs/MonthlyCounts.md)
 - [OperatingSystem](docs/OperatingSystem.md)
 - [PasswordRequest](docs/PasswordRequest.md)
 - [PatchOauthTwoFactor200Response](docs/PatchOauthTwoFactor200Response.md)
 - [PatchOauthTwoFactorRequest](docs/PatchOauthTwoFactorRequest.md)
 - [PaymentInvoiceRows](docs/PaymentInvoiceRows.md)
 - [PlaceBuyNowServerRequest](docs/PlaceBuyNowServerRequest.md)
 - [PlaceScrubOrder201Response](docs/PlaceScrubOrder201Response.md)
 - [PlaceScrubOrder201ResponseOrderDetails](docs/PlaceScrubOrder201ResponseOrderDetails.md)
 - [PlaceScrubOrder201ResponseOrderDetailsCjParams](docs/PlaceScrubOrder201ResponseOrderDetailsCjParams.md)
 - [PostOauthCallback200Response](docs/PostOauthCallback200Response.md)
 - [PostOauthCallbackRequest](docs/PostOauthCallbackRequest.md)
 - [PostWebsiteBuyIp200Response](docs/PostWebsiteBuyIp200Response.md)
 - [PostWebsiteBuyIpRequest](docs/PostWebsiteBuyIpRequest.md)
 - [PostWebsiteMigration200Response](docs/PostWebsiteMigration200Response.md)
 - [PostWebsiteMigrationRequest](docs/PostWebsiteMigrationRequest.md)
 - [QueueResponse](docs/QueueResponse.md)
 - [Quickserver](docs/Quickserver.md)
 - [QuickserverAddons](docs/QuickserverAddons.md)
 - [QuickserverAddonsRow](docs/QuickserverAddonsRow.md)
 - [QuickserverBillingDetails](docs/QuickserverBillingDetails.md)
 - [QuickserverClientLink](docs/QuickserverClientLink.md)
 - [QuickserverExtraInfoTables](docs/QuickserverExtraInfoTables.md)
 - [QuickserverIpInfo](docs/QuickserverIpInfo.md)
 - [QuickserverIpTableRow](docs/QuickserverIpTableRow.md)
 - [QuickserverOrder](docs/QuickserverOrder.md)
 - [QuickserverOrderDistroSel](docs/QuickserverOrderDistroSel.md)
 - [QuickserverOrderDistroSelUbuntu](docs/QuickserverOrderDistroSelUbuntu.md)
 - [QuickserverOrderServerDetails](docs/QuickserverOrderServerDetails.md)
 - [QuickserverOrderServerDetails381](docs/QuickserverOrderServerDetails381.md)
 - [QuickserverOrderTemplates](docs/QuickserverOrderTemplates.md)
 - [QuickserverOrderTemplatesUbuntu64](docs/QuickserverOrderTemplatesUbuntu64.md)
 - [QuickserverOrderVersion](docs/QuickserverOrderVersion.md)
 - [QuickserverOrderVersionCentosstream8](docs/QuickserverOrderVersionCentosstream8.md)
 - [QuickserverRow](docs/QuickserverRow.md)
 - [QuickserverServiceExtra](docs/QuickserverServiceExtra.md)
 - [QuickserverServiceInfo](docs/QuickserverServiceInfo.md)
 - [QuickserverServiceMaster](docs/QuickserverServiceMaster.md)
 - [QuickserversCancel200Response](docs/QuickserversCancel200Response.md)
 - [RaidOption](docs/RaidOption.md)
 - [Region](docs/Region.md)
 - [ReplyTicketRequest](docs/ReplyTicketRequest.md)
 - [ReplyTicketResponseSchema](docs/ReplyTicketResponseSchema.md)
 - [RestoreRequest](docs/RestoreRequest.md)
 - [ReverseDnsEntries](docs/ReverseDnsEntries.md)
 - [ScrubIpFilterTypes](docs/ScrubIpFilterTypes.md)
 - [ScrubIpFilterTypesFiltersValue](docs/ScrubIpFilterTypesFiltersValue.md)
 - [ScrubIpPlaceOrder](docs/ScrubIpPlaceOrder.md)
 - [ScrubIpsDeleteRule200Response](docs/ScrubIpsDeleteRule200Response.md)
 - [ScrubIpsDeleteRule400Response](docs/ScrubIpsDeleteRule400Response.md)
 - [ScrubIpsDeleteRule500Response](docs/ScrubIpsDeleteRule500Response.md)
 - [ScrubIpsLogRowSchema](docs/ScrubIpsLogRowSchema.md)
 - [ScrubIpsRowSchema](docs/ScrubIpsRowSchema.md)
 - [SearchAutocompleteResponse](docs/SearchAutocompleteResponse.md)
 - [SendMail](docs/SendMail.md)
 - [SendMailAdv](docs/SendMailAdv.md)
 - [Server](docs/Server.md)
 - [ServerAsset](docs/ServerAsset.md)
 - [ServerAssets](docs/ServerAssets.md)
 - [ServerBillingDetails](docs/ServerBillingDetails.md)
 - [ServerClientLink](docs/ServerClientLink.md)
 - [ServerExtraInfoTables](docs/ServerExtraInfoTables.md)
 - [ServerIpmiLiveInfo](docs/ServerIpmiLiveInfo.md)
 - [ServerIpmiLiveRequest](docs/ServerIpmiLiveRequest.md)
 - [ServerIpmiPowerRequest](docs/ServerIpmiPowerRequest.md)
 - [ServerLease](docs/ServerLease.md)
 - [ServerLocation1](docs/ServerLocation1.md)
 - [ServerLocations](docs/ServerLocations.md)
 - [ServerNetworkInfo](docs/ServerNetworkInfo.md)
 - [ServerNetworkInfoAssets](docs/ServerNetworkInfoAssets.md)
 - [ServerNetworkInfoSwitchports](docs/ServerNetworkInfoSwitchports.md)
 - [ServerOrder](docs/ServerOrder.md)
 - [ServerOrderBandwidth](docs/ServerOrderBandwidth.md)
 - [ServerOrderBandwidthLi](docs/ServerOrderBandwidthLi.md)
 - [ServerOrderCPU](docs/ServerOrderCPU.md)
 - [ServerOrderConfigIds](docs/ServerOrderConfigIds.md)
 - [ServerOrderControlPanel](docs/ServerOrderControlPanel.md)
 - [ServerOrderCpLi](docs/ServerOrderCpLi.md)
 - [ServerOrderCpuLi](docs/ServerOrderCpuLi.md)
 - [ServerOrderFieldLabel](docs/ServerOrderFieldLabel.md)
 - [ServerOrderFieldLabels](docs/ServerOrderFieldLabels.md)
 - [ServerOrderFormValues](docs/ServerOrderFormValues.md)
 - [ServerOrderGetResponse](docs/ServerOrderGetResponse.md)
 - [ServerOrderIP](docs/ServerOrderIP.md)
 - [ServerOrderIpsLi](docs/ServerOrderIpsLi.md)
 - [ServerOrderMemory](docs/ServerOrderMemory.md)
 - [ServerOrderMemoryLi](docs/ServerOrderMemoryLi.md)
 - [ServerOrderMemoryLi254](docs/ServerOrderMemoryLi254.md)
 - [ServerOrderOS](docs/ServerOrderOS.md)
 - [ServerOrderOsLi](docs/ServerOrderOsLi.md)
 - [ServerOrderRAID](docs/ServerOrderRAID.md)
 - [ServerRow](docs/ServerRow.md)
 - [ServerServiceInfo](docs/ServerServiceInfo.md)
 - [ServerSwitchport](docs/ServerSwitchport.md)
 - [ServersBuyNowError](docs/ServersBuyNowError.md)
 - [ServersBuyNowResponse](docs/ServersBuyNowResponse.md)
 - [ServersBuyNowResponseOrderDetails](docs/ServersBuyNowResponseOrderDetails.md)
 - [ServersCancel200Response](docs/ServersCancel200Response.md)
 - [Service](docs/Service.md)
 - [ServiceCategories](docs/ServiceCategories.md)
 - [ServiceCategory](docs/ServiceCategory.md)
 - [ServiceOrderPostResponse](docs/ServiceOrderPostResponse.md)
 - [ServiceType](docs/ServiceType.md)
 - [ServiceTypes](docs/ServiceTypes.md)
 - [Services](docs/Services.md)
 - [ServicesInfo](docs/ServicesInfo.md)
 - [SslCancel200Response](docs/SslCancel200Response.md)
 - [StatusMonthlyBreakdown](docs/StatusMonthlyBreakdown.md)
 - [SuccessTextResponse](docs/SuccessTextResponse.md)
 - [TemplateRequest](docs/TemplateRequest.md)
 - [TextResponse](docs/TextResponse.md)
 - [TicketCustomFieldDetails](docs/TicketCustomFieldDetails.md)
 - [TicketDetails](docs/TicketDetails.md)
 - [TicketNew](docs/TicketNew.md)
 - [TicketNewResponse](docs/TicketNewResponse.md)
 - [TicketPostDetails](docs/TicketPostDetails.md)
 - [TicketPostDetailsInner](docs/TicketPostDetailsInner.md)
 - [Tickets](docs/Tickets.md)
 - [TicketsCountArray](docs/TicketsCountArray.md)
 - [TicketsRow](docs/TicketsRow.md)
 - [TimezoneUpdate](docs/TimezoneUpdate.md)
 - [UpdateAccountTfaRequest](docs/UpdateAccountTfaRequest.md)
 - [UpdateTicket](docs/UpdateTicket.md)
 - [UpdateTicketResponseSchema](docs/UpdateTicketResponseSchema.md)
 - [UrlRequest](docs/UrlRequest.md)
 - [VPSCancel200Response](docs/VPSCancel200Response.md)
 - [VPSTrafficDataDataSectionResponse](docs/VPSTrafficDataDataSectionResponse.md)
 - [VPSTrafficDataDataSectionResponseInner](docs/VPSTrafficDataDataSectionResponseInner.md)
 - [ViewMailLogStartDateParameter](docs/ViewMailLogStartDateParameter.md)
 - [ViewTicketResponse](docs/ViewTicketResponse.md)
 - [Vps](docs/Vps.md)
 - [VpsBackupRow](docs/VpsBackupRow.md)
 - [VpsBackupRows](docs/VpsBackupRows.md)
 - [VpsBillingDetails](docs/VpsBillingDetails.md)
 - [VpsCPData](docs/VpsCPData.md)
 - [VpsClientLink](docs/VpsClientLink.md)
 - [VpsDAData](docs/VpsDAData.md)
 - [VpsDALicense](docs/VpsDALicense.md)
 - [VpsExtraInfoTables](docs/VpsExtraInfoTables.md)
 - [VpsIPInfo](docs/VpsIPInfo.md)
 - [VpsIPInfoRow](docs/VpsIPInfoRow.md)
 - [VpsOrder](docs/VpsOrder.md)
 - [VpsOrderLocationNames](docs/VpsOrderLocationNames.md)
 - [VpsOrderLocationStock](docs/VpsOrderLocationStock.md)
 - [VpsOrderLocationStock1](docs/VpsOrderLocationStock1.md)
 - [VpsOrderOsNames](docs/VpsOrderOsNames.md)
 - [VpsOrderPackageCosts](docs/VpsOrderPackageCosts.md)
 - [VpsOrderPlatformNames](docs/VpsOrderPlatformNames.md)
 - [VpsOrderPlatformPackages](docs/VpsOrderPlatformPackages.md)
 - [VpsOrderPostRequest](docs/VpsOrderPostRequest.md)
 - [VpsOrderPutRequest](docs/VpsOrderPutRequest.md)
 - [VpsOrderPutResponse](docs/VpsOrderPutResponse.md)
 - [VpsOrderServiceTypes](docs/VpsOrderServiceTypes.md)
 - [VpsOrderServiceTypes32](docs/VpsOrderServiceTypes32.md)
 - [VpsOrderTemplates](docs/VpsOrderTemplates.md)
 - [VpsOrderTemplatesHyperv](docs/VpsOrderTemplatesHyperv.md)
 - [VpsOrderTemplatesHypervWindows](docs/VpsOrderTemplatesHypervWindows.md)
 - [VpsPlesk12Data](docs/VpsPlesk12Data.md)
 - [VpsPleskLicense](docs/VpsPleskLicense.md)
 - [VpsRow](docs/VpsRow.md)
 - [VpsServiceAddons](docs/VpsServiceAddons.md)
 - [VpsServiceExtra](docs/VpsServiceExtra.md)
 - [VpsServiceInfo](docs/VpsServiceInfo.md)
 - [VpsServiceMaster](docs/VpsServiceMaster.md)
 - [VpsSnapshot](docs/VpsSnapshot.md)
 - [VpsTemplateRow](docs/VpsTemplateRow.md)
 - [VpsTemplatesList](docs/VpsTemplatesList.md)
 - [VpsTrafficDataDataResponse](docs/VpsTrafficDataDataResponse.md)
 - [VpsTrafficDataSectionResponse](docs/VpsTrafficDataSectionResponse.md)
 - [VpsTrafficHistoryResponse](docs/VpsTrafficHistoryResponse.md)
 - [VpsTrafficHistorySectionDataResponse](docs/VpsTrafficHistorySectionDataResponse.md)
 - [VpsTrafficHistorySectionResponse](docs/VpsTrafficHistorySectionResponse.md)
 - [VpsTrafficResponse](docs/VpsTrafficResponse.md)
 - [VpsTrafficTotalsResposne](docs/VpsTrafficTotalsResposne.md)
 - [VpsTrafficTotalsSectionResponse](docs/VpsTrafficTotalsSectionResponse.md)
 - [VpsTrafficUsageAverageResponse](docs/VpsTrafficUsageAverageResponse.md)
 - [VpsTrafficUsageAverageSectionResponse](docs/VpsTrafficUsageAverageSectionResponse.md)
 - [VpsTrafficUsageResponse](docs/VpsTrafficUsageResponse.md)
 - [WebhostingCancel200Response](docs/WebhostingCancel200Response.md)
 - [Website](docs/Website.md)
 - [WebsiteBackups](docs/WebsiteBackups.md)
 - [WebsiteBackupsInner](docs/WebsiteBackupsInner.md)
 - [WebsiteBillingDetails](docs/WebsiteBillingDetails.md)
 - [WebsiteClientLink](docs/WebsiteClientLink.md)
 - [WebsiteExtraInfoTables](docs/WebsiteExtraInfoTables.md)
 - [WebsiteLoginResponse](docs/WebsiteLoginResponse.md)
 - [WebsiteRow](docs/WebsiteRow.md)
 - [WebsiteServiceInfo](docs/WebsiteServiceInfo.md)
 - [WebsiteServiceMaster](docs/WebsiteServiceMaster.md)
 - [WebsiteTable](docs/WebsiteTable.md)
 - [WebsiteTableRow](docs/WebsiteTableRow.md)
 - [WebsitesOrder](docs/WebsitesOrder.md)
 - [WebsitesOrderJsonServiceOffers](docs/WebsitesOrderJsonServiceOffers.md)
 - [WebsitesOrderJsonServiceOffersItem](docs/WebsitesOrderJsonServiceOffersItem.md)
 - [WebsitesOrderJsonServices](docs/WebsitesOrderJsonServices.md)
 - [WebsitesOrderPackages](docs/WebsitesOrderPackages.md)
 - [WebsitesOrderPackagesInfo](docs/WebsitesOrderPackagesInfo.md)
 - [WebsitesOrderPackges](docs/WebsitesOrderPackges.md)
 - [WebsitesOrderServiceOffer](docs/WebsitesOrderServiceOffer.md)
 - [WebsitesOrderServiceOffers](docs/WebsitesOrderServiceOffers.md)
 - [WebsitesOrderServiceTypes](docs/WebsitesOrderServiceTypes.md)


## Documentation For Authorization


## apiKeyAuth


- **Type**: API key
- **API key parameter name**: X-API-KEY
- **Location**: HTTP header

## sessionIdHeaderAuth


- **Type**: API key
- **API key parameter name**: sessionid
- **Location**: HTTP header

## sessionIdCookieAuth


- **Type**: API key
- **API key parameter name**: sessionid
- **Location**: 

