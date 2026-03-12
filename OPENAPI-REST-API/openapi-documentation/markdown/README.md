# Documentation for InterServer Management API

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://my.interserver.net/apiv2*

| Class | Method | HTTP request | Description |
|------------ | ------------- | ------------- | -------------|
| *AccountApi* | [**changeAccountUsername**](Apis/AccountApi.md#changeAccountUsername) | **POST** /account/username | Change Account Username |
*AccountApi* | [**deleteAccountOauthName**](Apis/AccountApi.md#deleteAccountOauthName) | **DELETE** /account/oauth/{name} | Unlink OAuth Account |
*AccountApi* | [**deleteAccountTfa**](Apis/AccountApi.md#deleteAccountTfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication |
*AccountApi* | [**deleteIpLimit**](Apis/AccountApi.md#deleteIpLimit) | **PATCH** /account/iplimits | Remove IP Access Restriction |
*AccountApi* | [**getAccountInfo**](Apis/AccountApi.md#getAccountInfo) | **GET** /account | Retrieve Account Details |
*AccountApi* | [**getAccountTfaSetup**](Apis/AccountApi.md#getAccountTfaSetup) | **GET** /account/2fa | Get Two-Factor Setup Data |
*AccountApi* | [**getHome**](Apis/AccountApi.md#getHome) | **GET** /home | Get Home Data |
*AccountApi* | [**getSearch**](Apis/AccountApi.md#getSearch) | **GET** /search | Search Autocomplete |
*AccountApi* | [**logout**](Apis/AccountApi.md#logout) | **GET** /logout | Log Out |
*AccountApi* | [**logoutAccountOauth**](Apis/AccountApi.md#logoutAccountOauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth |
*AccountApi* | [**updateAccountApiKey**](Apis/AccountApi.md#updateAccountApiKey) | **POST** /account/apikey | Generate New API Key |
*AccountApi* | [**updateAccountFeatures**](Apis/AccountApi.md#updateAccountFeatures) | **POST** /account/features | Update Account Feature Flags |
*AccountApi* | [**updateAccountInfo**](Apis/AccountApi.md#updateAccountInfo) | **POST** /account | Update Account Information |
*AccountApi* | [**updateAccountIpLimits**](Apis/AccountApi.md#updateAccountIpLimits) | **POST** /account/iplimits | Add IP Access Restriction |
*AccountApi* | [**updateAccountPassword**](Apis/AccountApi.md#updateAccountPassword) | **POST** /account/password | Change Account Password |
*AccountApi* | [**updateAccountSshKey**](Apis/AccountApi.md#updateAccountSshKey) | **POST** /account/sshkey | Update SSH Keys |
*AccountApi* | [**updateAccountTfa**](Apis/AccountApi.md#updateAccountTfa) | **POST** /account/2fa | Enable Two-Factor Authentication |
| *BackupsApi* | [**addBackup**](Apis/BackupsApi.md#addBackup) | **POST** /backups/order | Place Backup Order |
*BackupsApi* | [**cancelBackup**](Apis/BackupsApi.md#cancelBackup) | **DELETE** /backups/{id} | Cancel Backup Service |
*BackupsApi* | [**getBackupInfo**](Apis/BackupsApi.md#getBackupInfo) | **GET** /backups/{id} | Get Backup Service Details |
*BackupsApi* | [**getBackupInvoices**](Apis/BackupsApi.md#getBackupInvoices) | **GET** /backups/{id}/invoices | Get Backup Order Invoices |
*BackupsApi* | [**getBackupLogin**](Apis/BackupsApi.md#getBackupLogin) | **GET** /backups/{id}/login | Get Backup Storage Panel Login |
*BackupsApi* | [**getBackupsList**](Apis/BackupsApi.md#getBackupsList) | **GET** /backups | List Backup Services |
*BackupsApi* | [**getBackupsWelcomeEmail**](Apis/BackupsApi.md#getBackupsWelcomeEmail) | **GET** /backups/{id}/welcome_email | Resend Backup Welcome Email |
*BackupsApi* | [**getNewBackup**](Apis/BackupsApi.md#getNewBackup) | **GET** /backups/order | Get Backup Order Form Data |
*BackupsApi* | [**updateBackupInfo**](Apis/BackupsApi.md#updateBackupInfo) | **POST** /backups/{id} | Update Backup Information |
*BackupsApi* | [**validateBackupOrder**](Apis/BackupsApi.md#validateBackupOrder) | **PUT** /backups/order | Validate Backup Order |
| *BillingApi* | [**addAccountCreditCard**](Apis/BillingApi.md#addAccountCreditCard) | **POST** /account/creditcards | Add Credit Card to Account |
*BillingApi* | [**addBillingCreditCard**](Apis/BillingApi.md#addBillingCreditCard) | **POST** /billing/creditcards | Add Credit Card for Billing |
*BillingApi* | [**addBillingPrepay**](Apis/BillingApi.md#addBillingPrepay) | **POST** /billing/prepays | Create Prepay Deposit |
*BillingApi* | [**deleteAccountCreditCard**](Apis/BillingApi.md#deleteAccountCreditCard) | **DELETE** /account/creditcards/{id} | Remove Credit Card |
*BillingApi* | [**deleteBillingCreditCard**](Apis/BillingApi.md#deleteBillingCreditCard) | **DELETE** /billing/creditcards/{id} | Delete Credit Card |
*BillingApi* | [**deleteBillingInvoice**](Apis/BillingApi.md#deleteBillingInvoice) | **DELETE** /billing/invoices/{id} | Delete Invoice |
*BillingApi* | [**deleteBillingPrepay**](Apis/BillingApi.md#deleteBillingPrepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance |
*BillingApi* | [**getAffiliateBanners**](Apis/BillingApi.md#getAffiliateBanners) | **GET** /affiliate/banners | List Affiliate Banner Assets |
*BillingApi* | [**getAffiliateRichReport**](Apis/BillingApi.md#getAffiliateRichReport) | **GET** /affiliate/rich_report | Get Affiliate Performance Report |
*BillingApi* | [**getAffiliateSalesGraph**](Apis/BillingApi.md#getAffiliateSalesGraph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data |
*BillingApi* | [**getAffiliateSalesReport**](Apis/BillingApi.md#getAffiliateSalesReport) | **GET** /affiliate/sales_report | Get Affiliate Sales Report |
*BillingApi* | [**getAffiliateTrafficGraph**](Apis/BillingApi.md#getAffiliateTrafficGraph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data |
*BillingApi* | [**getAffiliateWebTraffic**](Apis/BillingApi.md#getAffiliateWebTraffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries |
*BillingApi* | [**getBillingCart**](Apis/BillingApi.md#getBillingCart) | **GET** /billing/cart | Get Shopping Cart Contents |
*BillingApi* | [**getBillingCreditCardVerify**](Apis/BillingApi.md#getBillingCreditCardVerify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements |
*BillingApi* | [**getBillingInvoice**](Apis/BillingApi.md#getBillingInvoice) | **GET** /billing/invoices/{id} | Get Invoice Details |
*BillingApi* | [**getBillingInvoices**](Apis/BillingApi.md#getBillingInvoices) | **GET** /billing/invoices | List Account Invoices |
*BillingApi* | [**getBillingPrePays**](Apis/BillingApi.md#getBillingPrePays) | **GET** /billing/prepays | List Prepay Balances |
*BillingApi* | [**getInvoices**](Apis/BillingApi.md#getInvoices) | **GET** /invoices | Get Invoices |
*BillingApi* | [**initiatePayment**](Apis/BillingApi.md#initiatePayment) | **GET** /pay/{method}/{invoices} | Initiate Payment |
*BillingApi* | [**postBillingCreditCardVerify**](Apis/BillingApi.md#postBillingCreditCardVerify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification |
*BillingApi* | [**updateAccountCreditCard**](Apis/BillingApi.md#updateAccountCreditCard) | **POST** /account/creditcards/{id} | Update Credit Card |
*BillingApi* | [**updateAffiliateDockSetup**](Apis/BillingApi.md#updateAffiliateDockSetup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings |
*BillingApi* | [**updateAffiliateLandingPage**](Apis/BillingApi.md#updateAffiliateLandingPage) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page |
*BillingApi* | [**updateAffiliatePaymentSetup**](Apis/BillingApi.md#updateAffiliatePaymentSetup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences |
*BillingApi* | [**updateBillingCreditCard**](Apis/BillingApi.md#updateBillingCreditCard) | **POST** /billing/creditcards/{id} | Update Credit Card Details |
*BillingApi* | [**updateBillingPaymentMethod**](Apis/BillingApi.md#updateBillingPaymentMethod) | **POST** /billing/payment_method | Update Default Payment Method |
| *DNSApi* | [**addDnsDomain**](Apis/DNSApi.md#addDnsDomain) | **POST** /dns | Create DNS Domain |
*DNSApi* | [**addDnsRecord**](Apis/DNSApi.md#addDnsRecord) | **POST** /dns/{id} | Add DNS Record to Domain |
*DNSApi* | [**deleteDnsDomain**](Apis/DNSApi.md#deleteDnsDomain) | **DELETE** /dns/{id} | Delete DNS Domain |
*DNSApi* | [**deleteDnsRecord**](Apis/DNSApi.md#deleteDnsRecord) | **DELETE** /dns/{domainId}/{recordId} | Delete DNS Record |
*DNSApi* | [**getDnsDomain**](Apis/DNSApi.md#getDnsDomain) | **GET** /dns/{id} | List Domain DNS Records |
*DNSApi* | [**getDnsList**](Apis/DNSApi.md#getDnsList) | **GET** /dns | List DNS Domains |
*DNSApi* | [**updateDnsRecord**](Apis/DNSApi.md#updateDnsRecord) | **POST** /dns/{domainId}/{recordId} | Update DNS Record |
| *DomainsApi* | [**addDomain**](Apis/DomainsApi.md#addDomain) | **POST** /domains/order | Place Domain Order |
*DomainsApi* | [**addDomainDnssec**](Apis/DomainsApi.md#addDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records |
*DomainsApi* | [**addDomainNameserver**](Apis/DomainsApi.md#addDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver |
*DomainsApi* | [**cancelDomain**](Apis/DomainsApi.md#cancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order |
*DomainsApi* | [**deleteDomainDnssec**](Apis/DomainsApi.md#deleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records |
*DomainsApi* | [**deleteDomainNameserver**](Apis/DomainsApi.md#deleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver |
*DomainsApi* | [**getDomainContact**](Apis/DomainsApi.md#getDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details |
*DomainsApi* | [**getDomainDnssec**](Apis/DomainsApi.md#getDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records |
*DomainsApi* | [**getDomainInfo**](Apis/DomainsApi.md#getDomainInfo) | **GET** /domains/{id} | Get Domain Order |
*DomainsApi* | [**getDomainInvoices**](Apis/DomainsApi.md#getDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices |
*DomainsApi* | [**getDomainLookup**](Apis/DomainsApi.md#getDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing |
*DomainsApi* | [**getDomainNameservers**](Apis/DomainsApi.md#getDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers |
*DomainsApi* | [**getDomainOrderFields**](Apis/DomainsApi.md#getDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields |
*DomainsApi* | [**getDomainOrderSearchResults**](Apis/DomainsApi.md#getDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results |
*DomainsApi* | [**getDomainRenewal**](Apis/DomainsApi.md#getDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow |
*DomainsApi* | [**getDomainSearch**](Apis/DomainsApi.md#getDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions |
*DomainsApi* | [**getDomainTransfer**](Apis/DomainsApi.md#getDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow |
*DomainsApi* | [**getDomainWhoisPrivacy**](Apis/DomainsApi.md#getDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status |
*DomainsApi* | [**getDomainsList**](Apis/DomainsApi.md#getDomainsList) | **GET** /domains | List Domain Orders |
*DomainsApi* | [**getDomainsWelcomeEmail**](Apis/DomainsApi.md#getDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email |
*DomainsApi* | [**getNewDomain**](Apis/DomainsApi.md#getNewDomain) | **GET** /domains/order | Get Domain Ordering Information |
*DomainsApi* | [**patchDomains**](Apis/DomainsApi.md#patchDomains) | **PATCH** /domains/order | Validate Domain Order |
*DomainsApi* | [**postDomainRenewal**](Apis/DomainsApi.md#postDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal |
*DomainsApi* | [**postDomainTransfer**](Apis/DomainsApi.md#postDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer |
*DomainsApi* | [**putDomains**](Apis/DomainsApi.md#putDomains) | **PUT** /domains/order | Domain Order Search |
*DomainsApi* | [**updateDomainContact**](Apis/DomainsApi.md#updateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details |
*DomainsApi* | [**updateDomainInfo**](Apis/DomainsApi.md#updateDomainInfo) | **POST** /domains/{id} | Update Domain Order |
*DomainsApi* | [**updateDomainNameservers**](Apis/DomainsApi.md#updateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set |
*DomainsApi* | [**updateDomainWhoisPrivacy**](Apis/DomainsApi.md#updateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy |
| *FloatingIPsApi* | [**addFloatingIp**](Apis/FloatingIPsApi.md#addFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order |
*FloatingIPsApi* | [**floatingIpsCancel**](Apis/FloatingIPsApi.md#floatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP |
*FloatingIPsApi* | [**getFloatingIpInfo**](Apis/FloatingIPsApi.md#getFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP |
*FloatingIPsApi* | [**getFloatingIpInvoices**](Apis/FloatingIPsApi.md#getFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices |
*FloatingIPsApi* | [**getFloatingIpsList**](Apis/FloatingIPsApi.md#getFloatingIpsList) | **GET** /floating_ips | List Floating IPs |
*FloatingIPsApi* | [**getFloatingIpsWelcomeEmail**](Apis/FloatingIPsApi.md#getFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email |
*FloatingIPsApi* | [**getNewFloatingIp**](Apis/FloatingIPsApi.md#getNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information |
*FloatingIPsApi* | [**postFloatingIpsChangeIp**](Apis/FloatingIPsApi.md#postFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target |
*FloatingIPsApi* | [**putFloatingIps**](Apis/FloatingIPsApi.md#putFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order |
*FloatingIPsApi* | [**updateFloatingIpInfo**](Apis/FloatingIPsApi.md#updateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP |
| *LicensesApi* | [**addLicense**](Apis/LicensesApi.md#addLicense) | **POST** /licenses/order | Place License Order |
*LicensesApi* | [**getLicenseInfo**](Apis/LicensesApi.md#getLicenseInfo) | **GET** /licenses/{id} | Get License |
*LicensesApi* | [**getLicenseInvoices**](Apis/LicensesApi.md#getLicenseInvoices) | **GET** /licenses/{id}/invoices | Get License Invoices |
*LicensesApi* | [**getLicenseList**](Apis/LicensesApi.md#getLicenseList) | **GET** /licenses | List Licenses |
*LicensesApi* | [**getLicenseOrderCatTagInfo**](Apis/LicensesApi.md#getLicenseOrderCatTagInfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category |
*LicensesApi* | [**getLicensesWelcomeEmail**](Apis/LicensesApi.md#getLicensesWelcomeEmail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email |
*LicensesApi* | [**getNewLicense**](Apis/LicensesApi.md#getNewLicense) | **GET** /licenses/order | Get License Order Information |
*LicensesApi* | [**licensesCancel**](Apis/LicensesApi.md#licensesCancel) | **DELETE** /licenses/{id} | Cancel License |
*LicensesApi* | [**postLicenseChangeIp**](Apis/LicensesApi.md#postLicenseChangeIp) | **POST** /licenses/{id}/change_ip | Change License IP |
*LicensesApi* | [**putLicenses**](Apis/LicensesApi.md#putLicenses) | **PUT** /licenses/order | Validate License Order |
*LicensesApi* | [**updateLicenseInfo**](Apis/LicensesApi.md#updateLicenseInfo) | **POST** /licenses/{id} | Update License |
| *MailApi* | [**addMail**](Apis/MailApi.md#addMail) | **POST** /mail/order | Place Mail Order |
*MailApi* | [**addRule**](Apis/MailApi.md#addRule) | **POST** /mail/{id}/rules | Create Deny Rule |
*MailApi* | [**createMailAlert**](Apis/MailApi.md#createMailAlert) | **POST** /mail/{id}/alerts | Create Mail Alert |
*MailApi* | [**deleteMailAlert**](Apis/MailApi.md#deleteMailAlert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert |
*MailApi* | [**deleteRule**](Apis/MailApi.md#deleteRule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule |
*MailApi* | [**delistBlock**](Apis/MailApi.md#delistBlock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List |
*MailApi* | [**getMailAlerts**](Apis/MailApi.md#getMailAlerts) | **GET** /mail/{id}/alerts | List Mail Alerts |
*MailApi* | [**getMailBlocks**](Apis/MailApi.md#getMailBlocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses |
*MailApi* | [**getMailDelist**](Apis/MailApi.md#getMailDelist) | **GET** /mail/{id}/delist | Get Delist Status |
*MailApi* | [**getMailDeliverability**](Apis/MailApi.md#getMailDeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics |
*MailApi* | [**getMailInfo**](Apis/MailApi.md#getMailInfo) | **GET** /mail/{id} | Get Mail Order |
*MailApi* | [**getMailInvoices**](Apis/MailApi.md#getMailInvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices |
*MailApi* | [**getMailList**](Apis/MailApi.md#getMailList) | **GET** /mail | List Mail Orders |
*MailApi* | [**getMailWelcomeEmail**](Apis/MailApi.md#getMailWelcomeEmail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email |
*MailApi* | [**getNewMail**](Apis/MailApi.md#getNewMail) | **GET** /mail/order | Get Mail Ordering Information |
*MailApi* | [**getRules**](Apis/MailApi.md#getRules) | **GET** /mail/{id}/rules | List Deny Rules |
*MailApi* | [**getStats**](Apis/MailApi.md#getStats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics |
*MailApi* | [**mailCancel**](Apis/MailApi.md#mailCancel) | **DELETE** /mail/{id} | Cancel Mail |
*MailApi* | [**postMailDelist**](Apis/MailApi.md#postMailDelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender |
*MailApi* | [**putMail**](Apis/MailApi.md#putMail) | **PUT** /mail/order | Validate Mail Order |
*MailApi* | [**resetMailPassword**](Apis/MailApi.md#resetMailPassword) | **GET** /mail/{id}/reset_password | Reset Mail Password |
*MailApi* | [**sendAdvMail**](Apis/MailApi.md#sendAdvMail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options |
*MailApi* | [**sendMail**](Apis/MailApi.md#sendMail) | **POST** /mail/{id}/send | Send Email |
*MailApi* | [**updateMailAlert**](Apis/MailApi.md#updateMailAlert) | **PUT** /mail/{id}/alerts | Update Mail Alert |
*MailApi* | [**updateMailInfo**](Apis/MailApi.md#updateMailInfo) | **POST** /mail/{id} | Update Mail Order |
*MailApi* | [**viewMailLog**](Apis/MailApi.md#viewMailLog) | **GET** /mail/{id}/log | View Mail Log |
| *PublicApi* | [**getCaptcha**](Apis/PublicApi.md#getCaptcha) | **GET** /captcha | Get Captcha Challenge |
*PublicApi* | [**getCountries**](Apis/PublicApi.md#getCountries) | **GET** /account/countries | Get Countries |
*PublicApi* | [**getInfo**](Apis/PublicApi.md#getInfo) | **GET** /info | Get Server Info |
*PublicApi* | [**getLoginInfo**](Apis/PublicApi.md#getLoginInfo) | **GET** /login | Get Login Info |
*PublicApi* | [**getMPServers**](Apis/PublicApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers |
*PublicApi* | [**getOauthRedirect**](Apis/PublicApi.md#getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL |
*PublicApi* | [**getTimezones**](Apis/PublicApi.md#getTimezones) | **GET** /account/timezones | Get Available Timezones |
*PublicApi* | [**patchOauthTwoFactor**](Apis/PublicApi.md#patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification |
*PublicApi* | [**pingServer**](Apis/PublicApi.md#pingServer) | **GET** /ping | Ping Server |
*PublicApi* | [**postOauthCallback**](Apis/PublicApi.md#postOauthCallback) | **POST** /oauth | OAuth Callback |
*PublicApi* | [**submitLogin**](Apis/PublicApi.md#submitLogin) | **POST** /login | Submit Login Information |
*PublicApi* | [**submitSignup**](Apis/PublicApi.md#submitSignup) | **POST** /signup | Submit Signup Information |
| *QuickServersApi* | [**addQs**](Apis/QuickServersApi.md#addQs) | **POST** /qs/order | Place QuickServer Order |
*QuickServersApi* | [**deleteQsBackup**](Apis/QuickServersApi.md#deleteQsBackup) | **DELETE** /qs/{id}/backups | Delete QuickServer Backup |
*QuickServersApi* | [**doQsBlockSmtp**](Apis/QuickServersApi.md#doQsBlockSmtp) | **GET** /qs/{id}/block_smtp | Block QuickServer SMTP |
*QuickServersApi* | [**doQsDisableCd**](Apis/QuickServersApi.md#doQsDisableCd) | **GET** /qs/{id}/disable_cd | Disable CD Drive |
*QuickServersApi* | [**doQsDisableQuota**](Apis/QuickServersApi.md#doQsDisableQuota) | **GET** /qs/{id}/disable_quota | Disable Quotas |
*QuickServersApi* | [**doQsEjectCd**](Apis/QuickServersApi.md#doQsEjectCd) | **GET** /qs/{id}/eject_cd | Eject CD Drive |
*QuickServersApi* | [**doQsEnableQuota**](Apis/QuickServersApi.md#doQsEnableQuota) | **GET** /qs/{id}/enable_quota | Enable Quotas |
*QuickServersApi* | [**doQsRestart**](Apis/QuickServersApi.md#doQsRestart) | **GET** /qs/{id}/restart | Restart QuickServer |
*QuickServersApi* | [**doQsStart**](Apis/QuickServersApi.md#doQsStart) | **GET** /qs/{id}/start | Start QuickServer |
*QuickServersApi* | [**doQsStop**](Apis/QuickServersApi.md#doQsStop) | **GET** /qs/{id}/stop | Stop QuickServer |
*QuickServersApi* | [**downloadQsBackup**](Apis/QuickServersApi.md#downloadQsBackup) | **PATCH** /qs/{id}/backups | Download QuickServer Backup |
*QuickServersApi* | [**getNewQs**](Apis/QuickServersApi.md#getNewQs) | **GET** /qs/order | Get QuickServer Ordering Information |
*QuickServersApi* | [**getQsBackups**](Apis/QuickServersApi.md#getQsBackups) | **GET** /qs/{id}/backups | List QuickServer Backups |
*QuickServersApi* | [**getQsChangeHostname**](Apis/QuickServersApi.md#getQsChangeHostname) | **GET** /qs/{id}/change_hostname | Get QuickServer Hostname |
*QuickServersApi* | [**getQsChangeRootPassword**](Apis/QuickServersApi.md#getQsChangeRootPassword) | **GET** /qs/{id}/change_root_password | Get Change Root Password Info |
*QuickServersApi* | [**getQsChangeTimezone**](Apis/QuickServersApi.md#getQsChangeTimezone) | **GET** /qs/{id}/change_timezone | Get Timezone Info |
*QuickServersApi* | [**getQsChangeWebuzoPassword**](Apis/QuickServersApi.md#getQsChangeWebuzoPassword) | **GET** /qs/{id}/change_webuzo_password | Webuzo Change Pass Info |
*QuickServersApi* | [**getQsInfo**](Apis/QuickServersApi.md#getQsInfo) | **GET** /qs/{id} | Get QuickServer Order |
*QuickServersApi* | [**getQsInsertCd**](Apis/QuickServersApi.md#getQsInsertCd) | **GET** /qs/{id}/insert_cd | Insert CD Information |
*QuickServersApi* | [**getQsInvoices**](Apis/QuickServersApi.md#getQsInvoices) | **GET** /qs/{id}/invoices | Get QuickServer Invoices |
*QuickServersApi* | [**getQsList**](Apis/QuickServersApi.md#getQsList) | **GET** /qs | List QuickServers |
*QuickServersApi* | [**getQsReinstallOs**](Apis/QuickServersApi.md#getQsReinstallOs) | **GET** /qs/{id}/reinstall_os | QuickServer Reinstall OS Options |
*QuickServersApi* | [**getQsResetPassword**](Apis/QuickServersApi.md#getQsResetPassword) | **GET** /qs/{id}/reset_password | Reset QuickServer Password Info |
*QuickServersApi* | [**getQsReverseDns**](Apis/QuickServersApi.md#getQsReverseDns) | **GET** /qs/{id}/reverse_dns | Reverse DNS Info |
*QuickServersApi* | [**getQsSetupVnc**](Apis/QuickServersApi.md#getQsSetupVnc) | **GET** /qs/{id}/setup_vnc | VNC Setup Info |
*QuickServersApi* | [**getQsTrafficUsage**](Apis/QuickServersApi.md#getQsTrafficUsage) | **GET** /qs/{id}/traffic_usage | Get Traffic Usage |
*QuickServersApi* | [**getQsViewDesktop**](Apis/QuickServersApi.md#getQsViewDesktop) | **GET** /qs/{id}/view_desktop | Get View Desktop Info |
*QuickServersApi* | [**getQsWelcomeEmail**](Apis/QuickServersApi.md#getQsWelcomeEmail) | **GET** /qs/{id}/welcome_email | Resend QuickServer Welcome Email |
*QuickServersApi* | [**postQsBackup**](Apis/QuickServersApi.md#postQsBackup) | **POST** /qs/{id}/backup | Create QuickServer Backup |
*QuickServersApi* | [**postQsChangeHostname**](Apis/QuickServersApi.md#postQsChangeHostname) | **POST** /qs/{id}/change_hostname | Update QuickServer Hostname |
*QuickServersApi* | [**postQsChangeRootPassword**](Apis/QuickServersApi.md#postQsChangeRootPassword) | **POST** /qs/{id}/change_root_password | Change Root Password |
*QuickServersApi* | [**postQsChangeTimezone**](Apis/QuickServersApi.md#postQsChangeTimezone) | **POST** /qs/{id}/change_timezone | Change QuickServer Timezone |
*QuickServersApi* | [**postQsChangeWebuzoPassword**](Apis/QuickServersApi.md#postQsChangeWebuzoPassword) | **POST** /qs/{id}/change_webuzo_password | Change Webuzo Password |
*QuickServersApi* | [**postQsInsertCd**](Apis/QuickServersApi.md#postQsInsertCd) | **POST** /qs/{id}/insert_cd | Insert CD in QuickServer |
*QuickServersApi* | [**postQsReinstallOs**](Apis/QuickServersApi.md#postQsReinstallOs) | **POST** /qs/{id}/reinstall_os | Reinstall QuickServer OS |
*QuickServersApi* | [**postQsResetPassword**](Apis/QuickServersApi.md#postQsResetPassword) | **POST** /qs/{id}/reset_password | Reset QuickServer Password |
*QuickServersApi* | [**postQsReverseDns**](Apis/QuickServersApi.md#postQsReverseDns) | **POST** /qs/{id}/reverse_dns | Update Reverse DNS |
*QuickServersApi* | [**postQsSetupVnc**](Apis/QuickServersApi.md#postQsSetupVnc) | **POST** /qs/{id}/setup_vnc | Setup VNC |
*QuickServersApi* | [**postQsTrafficUsage**](Apis/QuickServersApi.md#postQsTrafficUsage) | **POST** /qs/{id}/traffic_usage | Search Traffic Usage |
*QuickServersApi* | [**postQsViewDesktop**](Apis/QuickServersApi.md#postQsViewDesktop) | **POST** /qs/{id}/view_desktop | Update View Desktop |
*QuickServersApi* | [**postQuickServerRestore**](Apis/QuickServersApi.md#postQuickServerRestore) | **POST** /qs/{id}/restore | Restore QuickServer from Backup |
*QuickServersApi* | [**putQs**](Apis/QuickServersApi.md#putQs) | **PUT** /qs/order | Validate QuickServer Order |
*QuickServersApi* | [**quickserversCancel**](Apis/QuickServersApi.md#quickserversCancel) | **DELETE** /qs/{id} | Cancel QuickServer Order |
*QuickServersApi* | [**updateQsInfo**](Apis/QuickServersApi.md#updateQsInfo) | **POST** /qs/{id} | Update QuickServer Order |
| *SSLCertificatesApi* | [**addSsl**](Apis/SSLCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order |
*SSLCertificatesApi* | [**getNewSsl**](Apis/SSLCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information |
*SSLCertificatesApi* | [**getSslInfo**](Apis/SSLCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info |
*SSLCertificatesApi* | [**getSslInvoices**](Apis/SSLCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices |
*SSLCertificatesApi* | [**getSslList**](Apis/SSLCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs |
*SSLCertificatesApi* | [**getSslWelcomeEmail**](Apis/SSLCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email |
*SSLCertificatesApi* | [**putSsl**](Apis/SSLCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order |
*SSLCertificatesApi* | [**sslCancel**](Apis/SSLCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service |
*SSLCertificatesApi* | [**updateSslInfo**](Apis/SSLCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order |
| *ScrubIpsApi* | [**cancelScrubIp**](Apis/ScrubIpsApi.md#cancelScrubIp) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service |
*ScrubIpsApi* | [**createFilter**](Apis/ScrubIpsApi.md#createFilter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter |
*ScrubIpsApi* | [**createGeoRule**](Apis/ScrubIpsApi.md#createGeoRule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule |
*ScrubIpsApi* | [**createRule**](Apis/ScrubIpsApi.md#createRule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule |
*ScrubIpsApi* | [**deleteFilter**](Apis/ScrubIpsApi.md#deleteFilter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter |
*ScrubIpsApi* | [**disableScrub**](Apis/ScrubIpsApi.md#disableScrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection |
*ScrubIpsApi* | [**enableScrub**](Apis/ScrubIpsApi.md#enableScrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection |
*ScrubIpsApi* | [**getOrderDetail**](Apis/ScrubIpsApi.md#getOrderDetail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information |
*ScrubIpsApi* | [**getScrubIpDetails**](Apis/ScrubIpsApi.md#getScrubIpDetails) | **GET** /scrub_ips/{id} | Get Scrub IP Details |
*ScrubIpsApi* | [**getScrubIpFilterTypes**](Apis/ScrubIpsApi.md#getScrubIpFilterTypes) | **GET** /scrub_ips/filter_types | List Scrub Filter Types |
*ScrubIpsApi* | [**getScrubIpInvoices**](Apis/ScrubIpsApi.md#getScrubIpInvoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices |
*ScrubIpsApi* | [**getScrubIpLogs**](Apis/ScrubIpsApi.md#getScrubIpLogs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs |
*ScrubIpsApi* | [**getScrubIpsList**](Apis/ScrubIpsApi.md#getScrubIpsList) | **GET** /scrub_ips | List Scrub IP Services |
*ScrubIpsApi* | [**placeScrubOrder**](Apis/ScrubIpsApi.md#placeScrubOrder) | **POST** /scrub_ips/order | Place Scrub IP Order |
*ScrubIpsApi* | [**scrubIpsDeleteGeoRule**](Apis/ScrubIpsApi.md#scrubIpsDeleteGeoRule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule |
*ScrubIpsApi* | [**scrubIpsDeleteRule**](Apis/ScrubIpsApi.md#scrubIpsDeleteRule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule |
| *ServersApi* | [**addServer**](Apis/ServersApi.md#addServer) | **POST** /servers/order | Place Server Order |
*ServersApi* | [**buyItNowServerOrder**](Apis/ServersApi.md#buyItNowServerOrder) | **GET** /servers/order/buy_now_server | Get Buy Now Server Options |
*ServersApi* | [**getMPServers**](Apis/ServersApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers |
*ServersApi* | [**getNewServer**](Apis/ServersApi.md#getNewServer) | **GET** /servers/order | Server Ordering Information |
*ServersApi* | [**getServerInfo**](Apis/ServersApi.md#getServerInfo) | **GET** /servers/{id} | Get Server Order |
*ServersApi* | [**getServerInvoices**](Apis/ServersApi.md#getServerInvoices) | **GET** /servers/{id}/invoices | Get Server Invoices |
*ServersApi* | [**getServerList**](Apis/ServersApi.md#getServerList) | **GET** /servers | List Servers |
*ServersApi* | [**getServerReverseDns**](Apis/ServersApi.md#getServerReverseDns) | **GET** /servers/{id}/reverse_dns | Reverse DNS Info |
*ServersApi* | [**getServersWelcomeEmail**](Apis/ServersApi.md#getServersWelcomeEmail) | **GET** /servers/{id}/welcome_email | Resend Server Welcome Email |
*ServersApi* | [**placeBuyNowServer**](Apis/ServersApi.md#placeBuyNowServer) | **POST** /servers/order/buy_now_server | Place Buy Now Server Order |
*ServersApi* | [**postServerReverseDns**](Apis/ServersApi.md#postServerReverseDns) | **POST** /servers/{id}/reverse_dns | Update Reverse DNS |
*ServersApi* | [**putServers**](Apis/ServersApi.md#putServers) | **PUT** /servers/order | Validate Server Order |
*ServersApi* | [**serverIpmiLiveGet**](Apis/ServersApi.md#serverIpmiLiveGet) | **GET** /servers/{id}/ipmi_live | Server IPMI Live Information |
*ServersApi* | [**serverIpmiLivePost**](Apis/ServersApi.md#serverIpmiLivePost) | **POST** /servers/{id}/ipmi_live | Server IPMI Live Setup |
*ServersApi* | [**serverIpmiPowerGet**](Apis/ServersApi.md#serverIpmiPowerGet) | **GET** /servers/{id}/ipmi_power | Get IPMI Power Status |
*ServersApi* | [**serverIpmiPowerPost**](Apis/ServersApi.md#serverIpmiPowerPost) | **POST** /servers/{id}/ipmi_power | Server IPMI Power |
*ServersApi* | [**serversCancel**](Apis/ServersApi.md#serversCancel) | **DELETE** /servers/{id} | Cancel Server Service |
*ServersApi* | [**updateServerInfo**](Apis/ServersApi.md#updateServerInfo) | **POST** /servers/{id} | Update Server Order |
| *TicketsApi* | [**addNewTicket**](Apis/TicketsApi.md#addNewTicket) | **POST** /tickets/new | Create New Ticket |
*TicketsApi* | [**closeTicket**](Apis/TicketsApi.md#closeTicket) | **GET** /tickets/{id}/close | Close Ticket |
*TicketsApi* | [**deleteTicketInfo**](Apis/TicketsApi.md#deleteTicketInfo) | **DELETE** /tickets/{id} | Close Ticket |
*TicketsApi* | [**getNewTicket**](Apis/TicketsApi.md#getNewTicket) | **GET** /tickets/new | Gets Information for creating a new ticket. |
*TicketsApi* | [**getTicketInfo**](Apis/TicketsApi.md#getTicketInfo) | **GET** /tickets/{id} | Get Ticket Information |
*TicketsApi* | [**getTicketsList**](Apis/TicketsApi.md#getTicketsList) | **GET** /tickets | List Support Tickets |
*TicketsApi* | [**postTicketInfo**](Apis/TicketsApi.md#postTicketInfo) | **POST** /tickets/{id} | Reply To Ticket |
*TicketsApi* | [**postTicketsList**](Apis/TicketsApi.md#postTicketsList) | **POST** /tickets | Search Support Tickets |
*TicketsApi* | [**putTicketInfo**](Apis/TicketsApi.md#putTicketInfo) | **PUT** /tickets/{id} | Update Ticket |
*TicketsApi* | [**replyTicket**](Apis/TicketsApi.md#replyTicket) | **POST** /tickets/{id}/reply | Reply Ticket |
*TicketsApi* | [**updateTicketInfo**](Apis/TicketsApi.md#updateTicketInfo) | **POST** /tickets/{id}/update | Update Ticket |
| *VPSApi* | [**addVps**](Apis/VPSApi.md#addVps) | **POST** /vps/order | Place VPS Order |
*VPSApi* | [**deleteVpsBackup**](Apis/VPSApi.md#deleteVpsBackup) | **DELETE** /vps/{id}/backups | Delete VPS Backup |
*VPSApi* | [**doVpsBlockSmtp**](Apis/VPSApi.md#doVpsBlockSmtp) | **GET** /vps/{id}/block_smtp | Blocks SMTP |
*VPSApi* | [**doVpsDisableCd**](Apis/VPSApi.md#doVpsDisableCd) | **GET** /vps/{id}/disable_cd | Disable CD Drive |
*VPSApi* | [**doVpsDisableQuota**](Apis/VPSApi.md#doVpsDisableQuota) | **GET** /vps/{id}/disable_quota | Disable Quotas |
*VPSApi* | [**doVpsEjectCd**](Apis/VPSApi.md#doVpsEjectCd) | **GET** /vps/{id}/eject_cd | Eject CD Drive |
*VPSApi* | [**doVpsEnableQuota**](Apis/VPSApi.md#doVpsEnableQuota) | **GET** /vps/{id}/enable_quota | Enable Quotas |
*VPSApi* | [**doVpsRestart**](Apis/VPSApi.md#doVpsRestart) | **GET** /vps/{id}/restart | Restart VPS |
*VPSApi* | [**doVpsStart**](Apis/VPSApi.md#doVpsStart) | **GET** /vps/{id}/start | Start VPS |
*VPSApi* | [**doVpsStop**](Apis/VPSApi.md#doVpsStop) | **GET** /vps/{id}/stop | Stop VPS |
*VPSApi* | [**downloadVpsBackup**](Apis/VPSApi.md#downloadVpsBackup) | **PATCH** /vps/{id}/backups | Download VPS Backup |
*VPSApi* | [**getNewVps**](Apis/VPSApi.md#getNewVps) | **GET** /vps/order | VPS Ordering Information |
*VPSApi* | [**getVpsBackups**](Apis/VPSApi.md#getVpsBackups) | **GET** /vps/{id}/backups | Get VPS Backups List |
*VPSApi* | [**getVpsBuyHdSpace**](Apis/VPSApi.md#getVpsBuyHdSpace) | **GET** /vps/{id}/buy_hd_space | HD Space Addon Info |
*VPSApi* | [**getVpsBuyIp**](Apis/VPSApi.md#getVpsBuyIp) | **GET** /vps/{id}/buy_ip | Additional IP Addon Info |
*VPSApi* | [**getVpsChangeTimezone**](Apis/VPSApi.md#getVpsChangeTimezone) | **GET** /vps/{id}/change_timezone | Get Timezone Info |
*VPSApi* | [**getVpsInfo**](Apis/VPSApi.md#getVpsInfo) | **GET** /vps/{id} | Get VPS Order |
*VPSApi* | [**getVpsInvoices**](Apis/VPSApi.md#getVpsInvoices) | **GET** /vps/{id}/invoices | Get VPS Invoices |
*VPSApi* | [**getVpsList**](Apis/VPSApi.md#getVpsList) | **GET** /vps | List VPS Orders |
*VPSApi* | [**getVpsReinstallOs**](Apis/VPSApi.md#getVpsReinstallOs) | **GET** /vps/{id}/reinstall_os | VPS Reinstall OS Options |
*VPSApi* | [**getVpsReverseDns**](Apis/VPSApi.md#getVpsReverseDns) | **GET** /vps/{id}/reverse_dns | Reverse DNS Info |
*VPSApi* | [**getVpsSetupVnc**](Apis/VPSApi.md#getVpsSetupVnc) | **GET** /vps/{id}/setup_vnc | VNC Setup Info |
*VPSApi* | [**getVpsSlices**](Apis/VPSApi.md#getVpsSlices) | **GET** /vps/{id}/slices | Slice Upgrade Info |
*VPSApi* | [**getVpsTrafficUsage**](Apis/VPSApi.md#getVpsTrafficUsage) | **GET** /vps/{id}/traffic_usage | Get Traffic Usage |
*VPSApi* | [**getVpsViewDesktop**](Apis/VPSApi.md#getVpsViewDesktop) | **GET** /vps/{id}/view_desktop | Get View Desktop Info |
*VPSApi* | [**getVpsWelcomeEmail**](Apis/VPSApi.md#getVpsWelcomeEmail) | **GET** /vps/{id}/welcome_email | Resend VPS Welcome Email |
*VPSApi* | [**postVpsBackup**](Apis/VPSApi.md#postVpsBackup) | **GET** /vps/{id}/backup | Start a VPS Backup |
*VPSApi* | [**postVpsBuyHdSpace**](Apis/VPSApi.md#postVpsBuyHdSpace) | **POST** /vps/{id}/buy_hd_space | Purchase HD Space Addon |
*VPSApi* | [**postVpsBuyIp**](Apis/VPSApi.md#postVpsBuyIp) | **POST** /vps/{id}/buy_ip | Purchase Additional IP |
*VPSApi* | [**postVpsChangeHostname**](Apis/VPSApi.md#postVpsChangeHostname) | **POST** /vps/{id}/change_hostname | Update VPS Hostname |
*VPSApi* | [**postVpsChangeRootPassword**](Apis/VPSApi.md#postVpsChangeRootPassword) | **POST** /vps/{id}/change_root_password | Change VPS Root Password |
*VPSApi* | [**postVpsChangeTimezone**](Apis/VPSApi.md#postVpsChangeTimezone) | **POST** /vps/{id}/change_timezone | Change VPS Timezone |
*VPSApi* | [**postVpsChangeWebuzoPassword**](Apis/VPSApi.md#postVpsChangeWebuzoPassword) | **POST** /vps/{id}/change_webuzo_password | Change Webuzo Password |
*VPSApi* | [**postVpsInsertCd**](Apis/VPSApi.md#postVpsInsertCd) | **POST** /vps/{id}/insert_cd | Insert CD in VPS |
*VPSApi* | [**postVpsReinstallOs**](Apis/VPSApi.md#postVpsReinstallOs) | **POST** /vps/{id}/reinstall_os | Reinstall VPS OS |
*VPSApi* | [**postVpsResetPassword**](Apis/VPSApi.md#postVpsResetPassword) | **POST** /vps/{id}/reset_password | Reset VPS Password |
*VPSApi* | [**postVpsRestore**](Apis/VPSApi.md#postVpsRestore) | **POST** /vps/{id}/restore | Restore VPS from Backup |
*VPSApi* | [**postVpsReverseDns**](Apis/VPSApi.md#postVpsReverseDns) | **POST** /vps/{id}/reverse_dns | Update Reverse DNS |
*VPSApi* | [**postVpsSetupVnc**](Apis/VPSApi.md#postVpsSetupVnc) | **POST** /vps/{id}/setup_vnc | Setup VNC |
*VPSApi* | [**postVpsSlices**](Apis/VPSApi.md#postVpsSlices) | **POST** /vps/{id}/slices | Purchase Slice Upgrade |
*VPSApi* | [**postVpsViewDesktop**](Apis/VPSApi.md#postVpsViewDesktop) | **POST** /vps/{id}/view_desktop | Update View Desktop |
*VPSApi* | [**putVps**](Apis/VPSApi.md#putVps) | **PUT** /vps/order | Validate VPS Order |
*VPSApi* | [**updateVpsInfo**](Apis/VPSApi.md#updateVpsInfo) | **POST** /vps/{id} | Update VPS Order |
*VPSApi* | [**vPSCancel**](Apis/VPSApi.md#vPSCancel) | **DELETE** /vps/{id} | Cancel VPS Service |
| *WebhostingApi* | [**addWebsite**](Apis/WebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order |
*WebhostingApi* | [**getNewWebsite**](Apis/WebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information |
*WebhostingApi* | [**getWebsiteBuyIp**](Apis/WebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information |
*WebhostingApi* | [**getWebsiteInfo**](Apis/WebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order |
*WebhostingApi* | [**getWebsiteInvoices**](Apis/WebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices |
*WebhostingApi* | [**getWebsiteList**](Apis/WebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing |
*WebhostingApi* | [**getWebsitesBackups**](Apis/WebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups |
*WebhostingApi* | [**getWebsitesLogin**](Apis/WebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login |
*WebhostingApi* | [**getWebsitesWelcomeEmail**](Apis/WebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email |
*WebhostingApi* | [**gettWebsiteReverseDns**](Apis/WebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS |
*WebhostingApi* | [**postWebsiteBuyIp**](Apis/WebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS |
*WebhostingApi* | [**postWebsiteMigration**](Apis/WebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration |
*WebhostingApi* | [**postWebsitesReverseDns**](Apis/WebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS |
*WebhostingApi* | [**putWebsites**](Apis/WebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order |
*WebhostingApi* | [**updateWebsiteInfo**](Apis/WebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order |
*WebhostingApi* | [**webhostingCancel**](Apis/WebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website |


<a name="documentation-for-models"></a>
## Documentation for Models

 - [AccountFeatures](./Models/AccountFeatures.md)
 - [AccountInfo](./Models/AccountInfo.md)
 - [AccountInfoCountryCurrencies](./Models/AccountInfoCountryCurrencies.md)
 - [AccountInfoData](./Models/AccountInfoData.md)
 - [AccountInfoDataCc](./Models/AccountInfoDataCc.md)
 - [AccountInfoDataCcs](./Models/AccountInfoDataCcs.md)
 - [AccountInfoData_email_settings](./Models/AccountInfoData_email_settings.md)
 - [AccountInfoData_extra](./Models/AccountInfoData_extra.md)
 - [AccountInfoData_fraudrecord](./Models/AccountInfoData_fraudrecord.md)
 - [AccountInfoLimits](./Models/AccountInfoLimits.md)
 - [AccountInfoLimits_inner](./Models/AccountInfoLimits_inner.md)
 - [AccountInfoMaxMindResponse](./Models/AccountInfoMaxMindResponse.md)
 - [AccountInfoMaxMindResponse_riskScore](./Models/AccountInfoMaxMindResponse_riskScore.md)
 - [AccountInfoOauthConfig](./Models/AccountInfoOauthConfig.md)
 - [AccountInfoOauthConfigProviders](./Models/AccountInfoOauthConfigProviders.md)
 - [AccountInfoOauthConfigProviders_value](./Models/AccountInfoOauthConfigProviders_value.md)
 - [AccountInfoPost](./Models/AccountInfoPost.md)
 - [AccountInfo_oauthproviders](./Models/AccountInfo_oauthproviders.md)
 - [AccountSshKey](./Models/AccountSshKey.md)
 - [AffiliateBannerRow](./Models/AffiliateBannerRow.md)
 - [AffiliateDockSetup](./Models/AffiliateDockSetup.md)
 - [AffiliatePaymentSetup](./Models/AffiliatePaymentSetup.md)
 - [AffiliateTrafficRow](./Models/AffiliateTrafficRow.md)
 - [AssetServer](./Models/AssetServer.md)
 - [AssetServer_CPU_inner](./Models/AssetServer_CPU_inner.md)
 - [Backup](./Models/Backup.md)
 - [BackupBillingDetails](./Models/BackupBillingDetails.md)
 - [BackupClientLink](./Models/BackupClientLink.md)
 - [BackupExtraInfoTables](./Models/BackupExtraInfoTables.md)
 - [BackupIPInfo](./Models/BackupIPInfo.md)
 - [BackupIPInfoRow](./Models/BackupIPInfoRow.md)
 - [BackupLoginResponse](./Models/BackupLoginResponse.md)
 - [BackupOrderPostResponse](./Models/BackupOrderPostResponse.md)
 - [BackupOrderPostResponse_cj_params](./Models/BackupOrderPostResponse_cj_params.md)
 - [BackupOrderPutRequest](./Models/BackupOrderPutRequest.md)
 - [BackupOrderPutResponse](./Models/BackupOrderPutResponse.md)
 - [BackupRow](./Models/BackupRow.md)
 - [BackupServiceInfo](./Models/BackupServiceInfo.md)
 - [BackupServiceMaster](./Models/BackupServiceMaster.md)
 - [BackupsOrder](./Models/BackupsOrder.md)
 - [BackupsOrderPackageCosts](./Models/BackupsOrderPackageCosts.md)
 - [BackupsOrderServiceTypes](./Models/BackupsOrderServiceTypes.md)
 - [BackupsOrder_serviceTypes](./Models/BackupsOrder_serviceTypes.md)
 - [Bandwidth](./Models/Bandwidth.md)
 - [BillingAddCcRequest](./Models/BillingAddCcRequest.md)
 - [BillingInvoiceDetail](./Models/BillingInvoiceDetail.md)
 - [BillingInvoiceList](./Models/BillingInvoiceList.md)
 - [BillingPaymentMethodRequest](./Models/BillingPaymentMethodRequest.md)
 - [BillingPrepayRequest](./Models/BillingPrepayRequest.md)
 - [BillingVerifyCcRequest](./Models/BillingVerifyCcRequest.md)
 - [BuyItNowList](./Models/BuyItNowList.md)
 - [BuyItNowRow](./Models/BuyItNowRow.md)
 - [BuyItNowRow_cpu_inner](./Models/BuyItNowRow_cpu_inner.md)
 - [BuyItNowRow_cpu_inner_oneOf](./Models/BuyItNowRow_cpu_inner_oneOf.md)
 - [CancelDomain_200_response](./Models/CancelDomain_200_response.md)
 - [CaptchaResponse](./Models/CaptchaResponse.md)
 - [ChargeInvoiceRows](./Models/ChargeInvoiceRows.md)
 - [ChargeInvoiceRows_invoices_value](./Models/ChargeInvoiceRows_invoices_value.md)
 - [ChargeInvoiceRows_invoices_value_paid_invoices_value](./Models/ChargeInvoiceRows_invoices_value_paid_invoices_value.md)
 - [ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value](./Models/ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value.md)
 - [CloseTicketResponseSchema](./Models/CloseTicketResponseSchema.md)
 - [ConfigIds](./Models/ConfigIds.md)
 - [ConfigLists](./Models/ConfigLists.md)
 - [ControlPanel](./Models/ControlPanel.md)
 - [Cpu](./Models/Cpu.md)
 - [CpuWithDefaults](./Models/CpuWithDefaults.md)
 - [CreateFilter](./Models/CreateFilter.md)
 - [CreateFirewallRule](./Models/CreateFirewallRule.md)
 - [CreateGeoFirewallRule](./Models/CreateGeoFirewallRule.md)
 - [Delete_Firewall_Rule](./Models/Delete_Firewall_Rule.md)
 - [Delete_Geo_Firewall_Rule](./Models/Delete_Geo_Firewall_Rule.md)
 - [DenyRuleNew](./Models/DenyRuleNew.md)
 - [DenyRuleRecord](./Models/DenyRuleRecord.md)
 - [DnsListItem](./Models/DnsListItem.md)
 - [DnsNewDomain](./Models/DnsNewDomain.md)
 - [DnsNewRecord](./Models/DnsNewRecord.md)
 - [DnsRecord](./Models/DnsRecord.md)
 - [DnsRecordType](./Models/DnsRecordType.md)
 - [DnsUpdateRecord](./Models/DnsUpdateRecord.md)
 - [Domain](./Models/Domain.md)
 - [DomainAdminContact](./Models/DomainAdminContact.md)
 - [DomainAllInfo](./Models/DomainAllInfo.md)
 - [DomainAllInfo_attributes](./Models/DomainAllInfo_attributes.md)
 - [DomainAllInfo_attributes_contact_set](./Models/DomainAllInfo_attributes_contact_set.md)
 - [DomainBillingDetails](./Models/DomainBillingDetails.md)
 - [DomainBillingExtra](./Models/DomainBillingExtra.md)
 - [DomainClientLink](./Models/DomainClientLink.md)
 - [DomainContactDetails](./Models/DomainContactDetails.md)
 - [DomainDnssecRecords](./Models/DomainDnssecRecords.md)
 - [DomainDnssecRecords_inner](./Models/DomainDnssecRecords_inner.md)
 - [DomainDnssecRequest](./Models/DomainDnssecRequest.md)
 - [DomainLookupResponse](./Models/DomainLookupResponse.md)
 - [DomainNameServer](./Models/DomainNameServer.md)
 - [DomainNameserverGetResponse](./Models/DomainNameserverGetResponse.md)
 - [DomainNameserverGetResponse_inner](./Models/DomainNameserverGetResponse_inner.md)
 - [DomainNameserverPostRequest](./Models/DomainNameserverPostRequest.md)
 - [DomainNameserverPutRequest](./Models/DomainNameserverPutRequest.md)
 - [DomainOrder](./Models/DomainOrder.md)
 - [DomainOrderResponse](./Models/DomainOrderResponse.md)
 - [DomainOrderResponse_attributes](./Models/DomainOrderResponse_attributes.md)
 - [DomainOrderServices10001](./Models/DomainOrderServices10001.md)
 - [DomainOrderTldServices](./Models/DomainOrderTldServices.md)
 - [DomainOrder_services](./Models/DomainOrder_services.md)
 - [DomainOwnerContact](./Models/DomainOwnerContact.md)
 - [DomainProvProcessPending](./Models/DomainProvProcessPending.md)
 - [DomainProvProcessPending_attributes](./Models/DomainProvProcessPending_attributes.md)
 - [DomainRow](./Models/DomainRow.md)
 - [DomainSearchResponse](./Models/DomainSearchResponse.md)
 - [DomainServiceInfo](./Models/DomainServiceInfo.md)
 - [DomainServiceType](./Models/DomainServiceType.md)
 - [DomainTechContact](./Models/DomainTechContact.md)
 - [DomainWhoisPrivacyRequest](./Models/DomainWhoisPrivacyRequest.md)
 - [EmailAddress](./Models/EmailAddress.md)
 - [EmailAddressName](./Models/EmailAddressName.md)
 - [FieldLabel](./Models/FieldLabel.md)
 - [FormValues](./Models/FormValues.md)
 - [GenericResponse](./Models/GenericResponse.md)
 - [HardDrive](./Models/HardDrive.md)
 - [Home](./Models/Home.md)
 - [HomeDetailsModulesBackups](./Models/HomeDetailsModulesBackups.md)
 - [HomeDetailsModulesDomains](./Models/HomeDetailsModulesDomains.md)
 - [HomeDetailsModulesLicenses](./Models/HomeDetailsModulesLicenses.md)
 - [HomeDetailsModulesQuickservers](./Models/HomeDetailsModulesQuickservers.md)
 - [HomeDetailsModulesServers](./Models/HomeDetailsModulesServers.md)
 - [HomeDetailsModulesVps](./Models/HomeDetailsModulesVps.md)
 - [HomeDetailsModulesWebhosting](./Models/HomeDetailsModulesWebhosting.md)
 - [HomeServicesDomainsLinks](./Models/HomeServicesDomainsLinks.md)
 - [HomeServicesLicensesLinks](./Models/HomeServicesLicensesLinks.md)
 - [HomeServicesServersLinks](./Models/HomeServicesServersLinks.md)
 - [HomeServicesVpsLinks](./Models/HomeServicesVpsLinks.md)
 - [HomeServicesWebhostingLinks](./Models/HomeServicesWebhostingLinks.md)
 - [Home_details](./Models/Home_details.md)
 - [Home_details_modules](./Models/Home_details_modules.md)
 - [Home_services](./Models/Home_services.md)
 - [Home_services_backups](./Models/Home_services_backups.md)
 - [Home_services_domains](./Models/Home_services_domains.md)
 - [Home_services_licenses](./Models/Home_services_licenses.md)
 - [Home_services_servers](./Models/Home_services_servers.md)
 - [Home_services_vps](./Models/Home_services_vps.md)
 - [Home_services_webhosting](./Models/Home_services_webhosting.md)
 - [Home_ticketStatus](./Models/Home_ticketStatus.md)
 - [Home_ticketStatusView](./Models/Home_ticketStatusView.md)
 - [HostnameObject](./Models/HostnameObject.md)
 - [Invoice](./Models/Invoice.md)
 - [InvoiceRow](./Models/InvoiceRow.md)
 - [IpBlock](./Models/IpBlock.md)
 - [IpLimitRange](./Models/IpLimitRange.md)
 - [IpObject](./Models/IpObject.md)
 - [License](./Models/License.md)
 - [LicenseBillingDetails](./Models/LicenseBillingDetails.md)
 - [LicenseClientLink](./Models/LicenseClientLink.md)
 - [LicenseIpInfo](./Models/LicenseIpInfo.md)
 - [LicenseIpInfoRow](./Models/LicenseIpInfoRow.md)
 - [LicenseRow](./Models/LicenseRow.md)
 - [LicenseServiceInfo](./Models/LicenseServiceInfo.md)
 - [LicenseServiceType](./Models/LicenseServiceType.md)
 - [License_extraInfoTables](./Models/License_extraInfoTables.md)
 - [LicensesOrder](./Models/LicensesOrder.md)
 - [LicensesOrderServiceCategories509](./Models/LicensesOrderServiceCategories509.md)
 - [LicensesOrderServiceTypes11482](./Models/LicensesOrderServiceTypes11482.md)
 - [LicensesOrder_packageCosts](./Models/LicensesOrder_packageCosts.md)
 - [LicensesOrder_serviceCategories](./Models/LicensesOrder_serviceCategories.md)
 - [LicensesOrder_serviceTypes](./Models/LicensesOrder_serviceTypes.md)
 - [LoginErrorResponse](./Models/LoginErrorResponse.md)
 - [LoginInfo](./Models/LoginInfo.md)
 - [LoginServiceCounts](./Models/LoginServiceCounts.md)
 - [LoginSubmissionExample](./Models/LoginSubmissionExample.md)
 - [LoginSubmissionExample_g_recaptcha_response](./Models/LoginSubmissionExample_g_recaptcha_response.md)
 - [LoginSubmissionExample_g_recaptcha_response_dep](./Models/LoginSubmissionExample_g_recaptcha_response_dep.md)
 - [LoginSuccessResponse](./Models/LoginSuccessResponse.md)
 - [MailAlertRequest](./Models/MailAlertRequest.md)
 - [MailAlertUpdateRequest](./Models/MailAlertUpdateRequest.md)
 - [MailAlertsResponse](./Models/MailAlertsResponse.md)
 - [MailAlertsResponse_inner](./Models/MailAlertsResponse_inner.md)
 - [MailAttachment](./Models/MailAttachment.md)
 - [MailBillingDetails](./Models/MailBillingDetails.md)
 - [MailBlockClickHouse](./Models/MailBlockClickHouse.md)
 - [MailBlockRspamd](./Models/MailBlockRspamd.md)
 - [MailBlocks](./Models/MailBlocks.md)
 - [MailClientLink](./Models/MailClientLink.md)
 - [MailDelistRequest](./Models/MailDelistRequest.md)
 - [MailDelistResponse](./Models/MailDelistResponse.md)
 - [MailDeliverabilityResponse](./Models/MailDeliverabilityResponse.md)
 - [MailExtraInfoTable](./Models/MailExtraInfoTable.md)
 - [MailExtraInfoTableRow](./Models/MailExtraInfoTableRow.md)
 - [MailLog](./Models/MailLog.md)
 - [MailLogEntry](./Models/MailLogEntry.md)
 - [MailOrder](./Models/MailOrder.md)
 - [MailRow](./Models/MailRow.md)
 - [MailSchema](./Models/MailSchema.md)
 - [MailSchema_extraInfoTables](./Models/MailSchema_extraInfoTables.md)
 - [MailServiceInfo](./Models/MailServiceInfo.md)
 - [MailServiceType](./Models/MailServiceType.md)
 - [MailStatsType](./Models/MailStatsType.md)
 - [MailStatsType_volume](./Models/MailStatsType_volume.md)
 - [MailStatsType_volume_from](./Models/MailStatsType_volume_from.md)
 - [MailStatsType_volume_ip](./Models/MailStatsType_volume_ip.md)
 - [MailStatsType_volume_to](./Models/MailStatsType_volume_to.md)
 - [MailTutorialsTable](./Models/MailTutorialsTable.md)
 - [MailTutorialsTableRow](./Models/MailTutorialsTableRow.md)
 - [MemoryOption](./Models/MemoryOption.md)
 - [ModuleSettings](./Models/ModuleSettings.md)
 - [Modules](./Models/Modules.md)
 - [MonthlyCounts](./Models/MonthlyCounts.md)
 - [OperatingSystem](./Models/OperatingSystem.md)
 - [PasswordRequest](./Models/PasswordRequest.md)
 - [PaymentInvoiceRows](./Models/PaymentInvoiceRows.md)
 - [QueueResponse](./Models/QueueResponse.md)
 - [Quickserver](./Models/Quickserver.md)
 - [QuickserverAddons](./Models/QuickserverAddons.md)
 - [QuickserverAddonsRow](./Models/QuickserverAddonsRow.md)
 - [QuickserverBillingDetails](./Models/QuickserverBillingDetails.md)
 - [QuickserverClientLink](./Models/QuickserverClientLink.md)
 - [QuickserverIpInfo](./Models/QuickserverIpInfo.md)
 - [QuickserverIpTableRow](./Models/QuickserverIpTableRow.md)
 - [QuickserverOrder](./Models/QuickserverOrder.md)
 - [QuickserverOrderDistroSelUbuntu](./Models/QuickserverOrderDistroSelUbuntu.md)
 - [QuickserverOrderServerDetails381](./Models/QuickserverOrderServerDetails381.md)
 - [QuickserverOrderTemplatesUbuntu64](./Models/QuickserverOrderTemplatesUbuntu64.md)
 - [QuickserverOrderVersionCentosstream8](./Models/QuickserverOrderVersionCentosstream8.md)
 - [QuickserverOrder_distro_sel](./Models/QuickserverOrder_distro_sel.md)
 - [QuickserverOrder_server_details](./Models/QuickserverOrder_server_details.md)
 - [QuickserverOrder_templates](./Models/QuickserverOrder_templates.md)
 - [QuickserverOrder_version](./Models/QuickserverOrder_version.md)
 - [QuickserverRow](./Models/QuickserverRow.md)
 - [QuickserverServiceExtra](./Models/QuickserverServiceExtra.md)
 - [QuickserverServiceInfo](./Models/QuickserverServiceInfo.md)
 - [QuickserverServiceMaster](./Models/QuickserverServiceMaster.md)
 - [Quickserver_extraInfoTables](./Models/Quickserver_extraInfoTables.md)
 - [Quickserver_serviceExtra](./Models/Quickserver_serviceExtra.md)
 - [RaidOption](./Models/RaidOption.md)
 - [Region](./Models/Region.md)
 - [ReplyTicketRequest](./Models/ReplyTicketRequest.md)
 - [ReplyTicketResponseSchema](./Models/ReplyTicketResponseSchema.md)
 - [RestoreRequest](./Models/RestoreRequest.md)
 - [ReverseDnsEntries](./Models/ReverseDnsEntries.md)
 - [ScrubIpFilterTypes](./Models/ScrubIpFilterTypes.md)
 - [ScrubIpFilterTypes_filters_value](./Models/ScrubIpFilterTypes_filters_value.md)
 - [ScrubIpPlaceOrder](./Models/ScrubIpPlaceOrder.md)
 - [ScrubIpsLogRowSchema](./Models/ScrubIpsLogRowSchema.md)
 - [ScrubIpsRowSchema](./Models/ScrubIpsRowSchema.md)
 - [SearchAutocompleteResponse](./Models/SearchAutocompleteResponse.md)
 - [SendMail](./Models/SendMail.md)
 - [SendMailAdv](./Models/SendMailAdv.md)
 - [Server](./Models/Server.md)
 - [ServerAsset](./Models/ServerAsset.md)
 - [ServerAssets](./Models/ServerAssets.md)
 - [ServerBillingDetails](./Models/ServerBillingDetails.md)
 - [ServerClientLink](./Models/ServerClientLink.md)
 - [ServerExtraInfoTables](./Models/ServerExtraInfoTables.md)
 - [ServerIpmiLiveInfo](./Models/ServerIpmiLiveInfo.md)
 - [ServerIpmiLiveRequest](./Models/ServerIpmiLiveRequest.md)
 - [ServerIpmiPowerRequest](./Models/ServerIpmiPowerRequest.md)
 - [ServerLease](./Models/ServerLease.md)
 - [ServerLocation1](./Models/ServerLocation1.md)
 - [ServerNetworkInfo](./Models/ServerNetworkInfo.md)
 - [ServerNetworkInfo_assets](./Models/ServerNetworkInfo_assets.md)
 - [ServerNetworkInfo_switchports](./Models/ServerNetworkInfo_switchports.md)
 - [ServerOrder](./Models/ServerOrder.md)
 - [ServerOrderBandwidth](./Models/ServerOrderBandwidth.md)
 - [ServerOrderCPU](./Models/ServerOrderCPU.md)
 - [ServerOrderConfigIds](./Models/ServerOrderConfigIds.md)
 - [ServerOrderControlPanel](./Models/ServerOrderControlPanel.md)
 - [ServerOrderFieldLabel](./Models/ServerOrderFieldLabel.md)
 - [ServerOrderFieldLabels](./Models/ServerOrderFieldLabels.md)
 - [ServerOrderFormValues](./Models/ServerOrderFormValues.md)
 - [ServerOrderGetResponse](./Models/ServerOrderGetResponse.md)
 - [ServerOrderIP](./Models/ServerOrderIP.md)
 - [ServerOrderMemory](./Models/ServerOrderMemory.md)
 - [ServerOrderOS](./Models/ServerOrderOS.md)
 - [ServerOrderRAID](./Models/ServerOrderRAID.md)
 - [ServerOrder_bandwidth_li](./Models/ServerOrder_bandwidth_li.md)
 - [ServerOrder_cp_li](./Models/ServerOrder_cp_li.md)
 - [ServerOrder_cpu_li](./Models/ServerOrder_cpu_li.md)
 - [ServerOrder_ips_li](./Models/ServerOrder_ips_li.md)
 - [ServerOrder_memory_li](./Models/ServerOrder_memory_li.md)
 - [ServerOrder_memory_li_254](./Models/ServerOrder_memory_li_254.md)
 - [ServerOrder_os_li](./Models/ServerOrder_os_li.md)
 - [ServerRow](./Models/ServerRow.md)
 - [ServerServiceInfo](./Models/ServerServiceInfo.md)
 - [ServerSwitchport](./Models/ServerSwitchport.md)
 - [Server_locations](./Models/Server_locations.md)
 - [ServersBuyNowError](./Models/ServersBuyNowError.md)
 - [ServersBuyNowResponse](./Models/ServersBuyNowResponse.md)
 - [ServersBuyNowResponse_order_details](./Models/ServersBuyNowResponse_order_details.md)
 - [Service](./Models/Service.md)
 - [ServiceCategories](./Models/ServiceCategories.md)
 - [ServiceCategory](./Models/ServiceCategory.md)
 - [ServiceType](./Models/ServiceType.md)
 - [ServiceTypes](./Models/ServiceTypes.md)
 - [Services](./Models/Services.md)
 - [ServicesInfo](./Models/ServicesInfo.md)
 - [StatusMonthlyBreakdown](./Models/StatusMonthlyBreakdown.md)
 - [SuccessTextResponse](./Models/SuccessTextResponse.md)
 - [TemplateRequest](./Models/TemplateRequest.md)
 - [TextResponse](./Models/TextResponse.md)
 - [TicketCustomFieldDetails](./Models/TicketCustomFieldDetails.md)
 - [TicketDetails](./Models/TicketDetails.md)
 - [TicketNew](./Models/TicketNew.md)
 - [TicketNewResponse](./Models/TicketNewResponse.md)
 - [TicketPostDetails](./Models/TicketPostDetails.md)
 - [TicketPostDetails_inner](./Models/TicketPostDetails_inner.md)
 - [Tickets](./Models/Tickets.md)
 - [TicketsRow](./Models/TicketsRow.md)
 - [Tickets_countArray](./Models/Tickets_countArray.md)
 - [TimezoneUpdate](./Models/TimezoneUpdate.md)
 - [UpdateTicket](./Models/UpdateTicket.md)
 - [UpdateTicketResponseSchema](./Models/UpdateTicketResponseSchema.md)
 - [UrlRequest](./Models/UrlRequest.md)
 - [VPSCancel_200_response](./Models/VPSCancel_200_response.md)
 - [VPSTrafficDataDataSectionResponse](./Models/VPSTrafficDataDataSectionResponse.md)
 - [VPSTrafficDataDataSectionResponse_inner](./Models/VPSTrafficDataDataSectionResponse_inner.md)
 - [ViewTicketResponse](./Models/ViewTicketResponse.md)
 - [Vps](./Models/Vps.md)
 - [VpsBackupRow](./Models/VpsBackupRow.md)
 - [VpsBackupRows](./Models/VpsBackupRows.md)
 - [VpsBillingDetails](./Models/VpsBillingDetails.md)
 - [VpsCPData](./Models/VpsCPData.md)
 - [VpsClientLink](./Models/VpsClientLink.md)
 - [VpsDAData](./Models/VpsDAData.md)
 - [VpsDALicense](./Models/VpsDALicense.md)
 - [VpsExtraInfoTables](./Models/VpsExtraInfoTables.md)
 - [VpsIPInfo](./Models/VpsIPInfo.md)
 - [VpsIPInfoRow](./Models/VpsIPInfoRow.md)
 - [VpsOrder](./Models/VpsOrder.md)
 - [VpsOrderPostRequest](./Models/VpsOrderPostRequest.md)
 - [VpsOrderPutRequest](./Models/VpsOrderPutRequest.md)
 - [VpsOrderPutResponse](./Models/VpsOrderPutResponse.md)
 - [VpsOrder_locationNames](./Models/VpsOrder_locationNames.md)
 - [VpsOrder_locationStock](./Models/VpsOrder_locationStock.md)
 - [VpsOrder_locationStock_1](./Models/VpsOrder_locationStock_1.md)
 - [VpsOrder_osNames](./Models/VpsOrder_osNames.md)
 - [VpsOrder_packageCosts](./Models/VpsOrder_packageCosts.md)
 - [VpsOrder_platformNames](./Models/VpsOrder_platformNames.md)
 - [VpsOrder_platformPackages](./Models/VpsOrder_platformPackages.md)
 - [VpsOrder_serviceTypes](./Models/VpsOrder_serviceTypes.md)
 - [VpsOrder_serviceTypes_32](./Models/VpsOrder_serviceTypes_32.md)
 - [VpsOrder_templates](./Models/VpsOrder_templates.md)
 - [VpsOrder_templates_hyperv](./Models/VpsOrder_templates_hyperv.md)
 - [VpsOrder_templates_hyperv_windows](./Models/VpsOrder_templates_hyperv_windows.md)
 - [VpsPlesk12Data](./Models/VpsPlesk12Data.md)
 - [VpsPleskLicense](./Models/VpsPleskLicense.md)
 - [VpsRow](./Models/VpsRow.md)
 - [VpsServiceAddons](./Models/VpsServiceAddons.md)
 - [VpsServiceExtra](./Models/VpsServiceExtra.md)
 - [VpsServiceInfo](./Models/VpsServiceInfo.md)
 - [VpsServiceMaster](./Models/VpsServiceMaster.md)
 - [VpsSnapshot](./Models/VpsSnapshot.md)
 - [VpsTemplateRow](./Models/VpsTemplateRow.md)
 - [VpsTemplatesList](./Models/VpsTemplatesList.md)
 - [VpsTrafficDataDataResponse](./Models/VpsTrafficDataDataResponse.md)
 - [VpsTrafficDataSectionResponse](./Models/VpsTrafficDataSectionResponse.md)
 - [VpsTrafficHistoryResponse](./Models/VpsTrafficHistoryResponse.md)
 - [VpsTrafficHistorySectionDataResponse](./Models/VpsTrafficHistorySectionDataResponse.md)
 - [VpsTrafficHistorySectionResponse](./Models/VpsTrafficHistorySectionResponse.md)
 - [VpsTrafficResponse](./Models/VpsTrafficResponse.md)
 - [VpsTrafficTotalsResposne](./Models/VpsTrafficTotalsResposne.md)
 - [VpsTrafficTotalsSectionResponse](./Models/VpsTrafficTotalsSectionResponse.md)
 - [VpsTrafficUsageAverageResponse](./Models/VpsTrafficUsageAverageResponse.md)
 - [VpsTrafficUsageAverageSectionResponse](./Models/VpsTrafficUsageAverageSectionResponse.md)
 - [VpsTrafficUsageResponse](./Models/VpsTrafficUsageResponse.md)
 - [Website](./Models/Website.md)
 - [WebsiteBackups](./Models/WebsiteBackups.md)
 - [WebsiteBackups_inner](./Models/WebsiteBackups_inner.md)
 - [WebsiteBillingDetails](./Models/WebsiteBillingDetails.md)
 - [WebsiteClientLink](./Models/WebsiteClientLink.md)
 - [WebsiteExtraInfoTables](./Models/WebsiteExtraInfoTables.md)
 - [WebsiteLoginResponse](./Models/WebsiteLoginResponse.md)
 - [WebsiteRow](./Models/WebsiteRow.md)
 - [WebsiteServiceInfo](./Models/WebsiteServiceInfo.md)
 - [WebsiteServiceMaster](./Models/WebsiteServiceMaster.md)
 - [WebsiteTable](./Models/WebsiteTable.md)
 - [WebsiteTableRow](./Models/WebsiteTableRow.md)
 - [WebsitesOrder](./Models/WebsitesOrder.md)
 - [WebsitesOrderJsonServiceOffers](./Models/WebsitesOrderJsonServiceOffers.md)
 - [WebsitesOrderJsonServiceOffersItem](./Models/WebsitesOrderJsonServiceOffersItem.md)
 - [WebsitesOrderJsonServices](./Models/WebsitesOrderJsonServices.md)
 - [WebsitesOrderPackages](./Models/WebsitesOrderPackages.md)
 - [WebsitesOrderPackagesInfo](./Models/WebsitesOrderPackagesInfo.md)
 - [WebsitesOrderServiceOffer](./Models/WebsitesOrderServiceOffer.md)
 - [WebsitesOrderServiceTypes](./Models/WebsitesOrderServiceTypes.md)
 - [WebsitesOrder_packges](./Models/WebsitesOrder_packges.md)
 - [WebsitesOrder_serviceOffers](./Models/WebsitesOrder_serviceOffers.md)
 - [WebsitesOrder_serviceTypes](./Models/WebsitesOrder_serviceTypes.md)
 - [buyItNowServerOrder_200_response](./Models/buyItNowServerOrder_200_response.md)
 - [buyItNowServerOrder_200_response_bandwidth_inner](./Models/buyItNowServerOrder_200_response_bandwidth_inner.md)
 - [buyItNowServerOrder_200_response_cp_inner](./Models/buyItNowServerOrder_200_response_cp_inner.md)
 - [buyItNowServerOrder_200_response_ips_inner](./Models/buyItNowServerOrder_200_response_ips_inner.md)
 - [buyItNowServerOrder_200_response_os_inner](./Models/buyItNowServerOrder_200_response_os_inner.md)
 - [buyItNowServerOrder_200_response_raid_inner](./Models/buyItNowServerOrder_200_response_raid_inner.md)
 - [cancelBackup_200_response](./Models/cancelBackup_200_response.md)
 - [cancelScrubIp_200_response](./Models/cancelScrubIp_200_response.md)
 - [createFilter_201_response](./Models/createFilter_201_response.md)
 - [createFilter_400_response](./Models/createFilter_400_response.md)
 - [createFilter_500_response](./Models/createFilter_500_response.md)
 - [createGeoRule_400_response](./Models/createGeoRule_400_response.md)
 - [createRule_201_response](./Models/createRule_201_response.md)
 - [createRule_400_response](./Models/createRule_400_response.md)
 - [createRule_500_response](./Models/createRule_500_response.md)
 - [deleteFilter_200_response](./Models/deleteFilter_200_response.md)
 - [deleteFilter_400_response](./Models/deleteFilter_400_response.md)
 - [deleteFilter_500_response](./Models/deleteFilter_500_response.md)
 - [disableScrub_200_response](./Models/disableScrub_200_response.md)
 - [disableScrub_400_response](./Models/disableScrub_400_response.md)
 - [disableScrub_500_response](./Models/disableScrub_500_response.md)
 - [downloadQsBackup_200_response](./Models/downloadQsBackup_200_response.md)
 - [downloadQsBackup_request](./Models/downloadQsBackup_request.md)
 - [enableScrub_200_response](./Models/enableScrub_200_response.md)
 - [enableScrub_500_response](./Models/enableScrub_500_response.md)
 - [floating_ipsCancel_200_response](./Models/floating_ipsCancel_200_response.md)
 - [getAccountInfo_401_response](./Models/getAccountInfo_401_response.md)
 - [getAccountTfaSetup_200_response](./Models/getAccountTfaSetup_200_response.md)
 - [getOauthRedirect_200_response](./Models/getOauthRedirect_200_response.md)
 - [getOrderDetail_200_response](./Models/getOrderDetail_200_response.md)
 - [getOrderDetail_200_response_ips_inner](./Models/getOrderDetail_200_response_ips_inner.md)
 - [getOrderDetail_200_response_packageCosts](./Models/getOrderDetail_200_response_packageCosts.md)
 - [getOrderDetail_200_response_serviceTypes_inner](./Models/getOrderDetail_200_response_serviceTypes_inner.md)
 - [getScrubIpDetails_200_response](./Models/getScrubIpDetails_200_response.md)
 - [getScrubIpDetails_200_response_billingDetails](./Models/getScrubIpDetails_200_response_billingDetails.md)
 - [getScrubIpDetails_200_response_client_links_inner](./Models/getScrubIpDetails_200_response_client_links_inner.md)
 - [getScrubIpDetails_200_response_extraInfoTables](./Models/getScrubIpDetails_200_response_extraInfoTables.md)
 - [getScrubIpDetails_200_response_extraInfoTables_scrub_ips](./Models/getScrubIpDetails_200_response_extraInfoTables_scrub_ips.md)
 - [getScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner](./Models/getScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner.md)
 - [getScrubIpDetails_200_response_filter_firewall](./Models/getScrubIpDetails_200_response_filter_firewall.md)
 - [getScrubIpDetails_200_response_filter_firewall_filters_inner](./Models/getScrubIpDetails_200_response_filter_firewall_filters_inner.md)
 - [getScrubIpDetails_200_response_filter_firewall_rules_inner](./Models/getScrubIpDetails_200_response_filter_firewall_rules_inner.md)
 - [getScrubIpDetails_200_response_serviceInfo](./Models/getScrubIpDetails_200_response_serviceInfo.md)
 - [getWebsiteBuyIp_200_response](./Models/getWebsiteBuyIp_200_response.md)
 - [initiatePayment_200_response](./Models/initiatePayment_200_response.md)
 - [inline_object](./Models/inline_object.md)
 - [licensesCancel_200_response](./Models/licensesCancel_200_response.md)
 - [mailCancel_200_response](./Models/mailCancel_200_response.md)
 - [patchOauthTwoFactor_200_response](./Models/patchOauthTwoFactor_200_response.md)
 - [patchOauthTwoFactor_request](./Models/patchOauthTwoFactor_request.md)
 - [placeBuyNowServer_request](./Models/placeBuyNowServer_request.md)
 - [placeScrubOrder_201_response](./Models/placeScrubOrder_201_response.md)
 - [placeScrubOrder_201_response_order_details](./Models/placeScrubOrder_201_response_order_details.md)
 - [placeScrubOrder_201_response_order_details_cj_params](./Models/placeScrubOrder_201_response_order_details_cj_params.md)
 - [postOauthCallback_200_response](./Models/postOauthCallback_200_response.md)
 - [postOauthCallback_request](./Models/postOauthCallback_request.md)
 - [postWebsiteBuyIp_200_response](./Models/postWebsiteBuyIp_200_response.md)
 - [postWebsiteBuyIp_request](./Models/postWebsiteBuyIp_request.md)
 - [postWebsiteMigration_200_response](./Models/postWebsiteMigration_200_response.md)
 - [postWebsiteMigration_request](./Models/postWebsiteMigration_request.md)
 - [quickserversCancel_200_response](./Models/quickserversCancel_200_response.md)
 - [scrubIpsDeleteRule_200_response](./Models/scrubIpsDeleteRule_200_response.md)
 - [scrubIpsDeleteRule_400_response](./Models/scrubIpsDeleteRule_400_response.md)
 - [scrubIpsDeleteRule_500_response](./Models/scrubIpsDeleteRule_500_response.md)
 - [serversCancel_200_response](./Models/serversCancel_200_response.md)
 - [sslCancel_200_response](./Models/sslCancel_200_response.md)
 - [updateAccountTfa_request](./Models/updateAccountTfa_request.md)
 - [webhostingCancel_200_response](./Models/webhostingCancel_200_response.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

<a name="apiKeyAuth"></a>
### apiKeyAuth

- **Type**: API key
- **API key parameter name**: X-API-KEY
- **Location**: HTTP header

<a name="sessionIdHeaderAuth"></a>
### sessionIdHeaderAuth

- **Type**: API key
- **API key parameter name**: sessionid
- **Location**: HTTP header

<a name="sessionIdCookieAuth"></a>
### sessionIdCookieAuth

- **Type**: API key
- **API key parameter name**: sessionid
- **Location**: 

