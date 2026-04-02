# Documentation for OpenAPI Petstore
This is a client generator for microcontrollers on the Espressif32 platform and the Arduino framework
After the client have been generated, you have to change these following variables:
- root.cert | Provide your service root certificate.
- src/main.cpp | Change wifi name
- src/main.cpp | Change wifi password
- lib/service/AbstractService.h | Change to your url

# Documentation for InterServer Management API 0.9.0 Tiny client cpp (Arduino) 

The project is structured like this:
```
samples/client/petstore/tiny/cpp/
├── lib
│   ├── Models
│   ├── service
│   └── TestFiles
├── platformio.ini
├── pre_compiling_bourne.py
├── README.md
├── root.cert
├── src
│   └── main.cpp
└── test
    └── RunTests.cpp
```

All URIs are relative to https://my.interserver.nethttps://my.interserver.net/apiv2

### AccountApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*changeAccountUsername* | *POST* /account/username | Change Account Username.|
|*deleteAccountOauthName* | *DELETE* /account/oauth/{name} | Unlink OAuth Account.|
|*deleteAccountTfa* | *DELETE* /account/2fa | Disable Two-Factor Authentication.|
|*deleteIpLimit* | *PATCH* /account/iplimits | Remove IP Access Restriction.|
|*getAccountInfo* | *GET* /account | Retrieve Account Details.|
|*getAccountTfaSetup* | *GET* /account/2fa | Get Two-Factor Setup Data.|
|*getHome* | *GET* /home | Get Home Data.|
|*getSearch* | *GET* /search | Search Autocomplete.|
|*logout* | *GET* /logout | Log Out.|
|*logoutAccountOauth* | *GET* /account/oauth/{name}/logout | Logout of OAuth.|
|*updateAccountApiKey* | *POST* /account/apikey | Generate New API Key.|
|*updateAccountFeatures* | *POST* /account/features | Update Account Feature Flags.|
|*updateAccountInfo* | *POST* /account | Update Account Information.|
|*updateAccountIpLimits* | *POST* /account/iplimits | Add IP Access Restriction.|
|*updateAccountPassword* | *POST* /account/password | Change Account Password.|
|*updateAccountSshKey* | *POST* /account/sshkey | Update SSH Keys.|
|*updateAccountTfa* | *POST* /account/2fa | Enable Two-Factor Authentication.|

### BackupsApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addBackup* | *POST* /backups/order | Place Backup Order.|
|*cancelBackup* | *DELETE* /backups/{id} | Cancel Backup Service.|
|*getBackupInfo* | *GET* /backups/{id} | Get Backup Service Details.|
|*getBackupInvoices* | *GET* /backups/{id}/invoices | Get Backup Order Invoices.|
|*getBackupLogin* | *GET* /backups/{id}/login | Get Backup Storage Panel Login.|
|*getBackupsList* | *GET* /backups | List Backup Services.|
|*getBackupsWelcomeEmail* | *GET* /backups/{id}/welcome_email | Resend Backup Welcome Email.|
|*getNewBackup* | *GET* /backups/order | Get Backup Order Form Data.|
|*updateBackupInfo* | *POST* /backups/{id} | Update Backup Information.|
|*validateBackupOrder* | *PUT* /backups/order | Validate Backup Order.|

### BillingApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addAccountCreditCard* | *POST* /account/creditcards | Add Credit Card to Account.|
|*addBillingCreditCard* | *POST* /billing/creditcards | Add Credit Card for Billing.|
|*addBillingPrepay* | *POST* /billing/prepays | Create Prepay Deposit.|
|*deleteAccountCreditCard* | *DELETE* /account/creditcards/{id} | Remove Credit Card.|
|*deleteBillingCreditCard* | *DELETE* /billing/creditcards/{id} | Delete Credit Card.|
|*deleteBillingInvoice* | *DELETE* /billing/invoices/{id} | Delete Invoice.|
|*deleteBillingPrepay* | *DELETE* /billing/prepays/{id} | Delete Prepay Balance.|
|*getAffiliateBanners* | *GET* /affiliate/banners | List Affiliate Banner Assets.|
|*getAffiliateRichReport* | *GET* /affiliate/rich_report | Get Affiliate Performance Report.|
|*getAffiliateSalesGraph* | *GET* /affiliate/sales_graph | Get Affiliate Sales Graph Data.|
|*getAffiliateSalesReport* | *GET* /affiliate/sales_report | Get Affiliate Sales Report.|
|*getAffiliateTrafficGraph* | *GET* /affiliate/traffic_graph | Get Affiliate Traffic Graph Data.|
|*getAffiliateWebTraffic* | *GET* /affiliate/web_traffic | List Affiliate Web Traffic Entries.|
|*getBillingCart* | *GET* /billing/cart | Get Shopping Cart Contents.|
|*getBillingCreditCardVerify* | *GET* /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements.|
|*getBillingInvoice* | *GET* /billing/invoices/{id} | Get Invoice Details.|
|*getBillingInvoices* | *GET* /billing/invoices | List Account Invoices.|
|*getBillingPrePays* | *GET* /billing/prepays | List Prepay Balances.|
|*getInvoices* | *GET* /invoices | Get Invoices.|
|*initiatePayment* | *GET* /pay/{method}/{invoices} | Initiate Payment.|
|*postBillingCreditCardVerify* | *POST* /billing/creditcards/{id}/verify | Submit Credit Card Verification.|
|*updateAccountCreditCard* | *POST* /account/creditcards/{id} | Update Credit Card.|
|*updateAffiliateDockSetup* | *POST* /affiliate/dock_setup | Configure Affiliate Dock Settings.|
|*updateAffiliateLandingPage* | *POST* /affiliate/landing_pg | Configure Affiliate Landing Page.|
|*updateAffiliatePaymentSetup* | *POST* /affiliate/payment_setup | Configure Affiliate Payout Preferences.|
|*updateBillingCreditCard* | *POST* /billing/creditcards/{id} | Update Credit Card Details.|
|*updateBillingPaymentMethod* | *POST* /billing/payment_method | Update Default Payment Method.|

### DNSApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addDnsDomain* | *POST* /dns | Create DNS Domain.|
|*addDnsRecord* | *POST* /dns/{id} | Add DNS Record to Domain.|
|*deleteDnsDomain* | *DELETE* /dns/{id} | Delete DNS Domain.|
|*deleteDnsRecord* | *DELETE* /dns/{domainId}/{recordId} | Delete DNS Record.|
|*getDnsDomain* | *GET* /dns/{id} | List Domain DNS Records.|
|*getDnsList* | *GET* /dns | List DNS Domains.|
|*updateDnsRecord* | *POST* /dns/{domainId}/{recordId} | Update DNS Record.|

### DomainsApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addDomain* | *POST* /domains/order | Place Domain Order.|
|*addDomainDnssec* | *POST* /domains/{id}/dnssec | Add Domain DNSSEC Records.|
|*addDomainNameserver* | *POST* /domains/{id}/nameservers | Add Registered Nameserver.|
|*cancelDomain* | *DELETE* /domains/{id} | Cancel Domain Order.|
|*deleteDomainDnssec* | *DELETE* /domains/{id}/dnssec | Remove Domain DNSSEC Records.|
|*deleteDomainNameserver* | *DELETE* /domains/{id}/nameservers | Delete Registered Nameserver.|
|*getDomainContact* | *GET* /domains/{id}/contact | Get Domain Contact Details.|
|*getDomainDnssec* | *GET* /domains/{id}/dnssec | Get Domain DNSSEC Records.|
|*getDomainInfo* | *GET* /domains/{id} | Get Domain Order.|
|*getDomainInvoices* | *GET* /domains/{id}/invoices | Get Domain Invoices.|
|*getDomainLookup* | *GET* /domains/lookup/{name} | Lookup Domain Availability and Pricing.|
|*getDomainNameservers* | *GET* /domains/{id}/nameservers | List Registered Nameservers.|
|*getDomainOrderFields* | *GET* /domains/order/{domain}/{regType} | Get Domain Order Fields.|
|*getDomainOrderSearchResults* | *GET* /domains/order/{domain} | Get Domain Order Search Results.|
|*getDomainRenewal* | *GET* /domains/{id}/renew | Start Domain Renewal Flow.|
|*getDomainSearch* | *GET* /domains/search/{name} | Search Domain Suggestions.|
|*getDomainTransfer* | *GET* /domains/{id}/transfer | Start Domain Transfer Flow.|
|*getDomainWhoisPrivacy* | *GET* /domains/{id}/whois | Get Whois Privacy Status.|
|*getDomainsList* | *GET* /domains | List Domain Orders.|
|*getDomainsWelcomeEmail* | *GET* /domains/{id}/welcome_email | Resend Domain Welcome Email.|
|*getNewDomain* | *GET* /domains/order | Get Domain Ordering Information.|
|*patchDomains* | *PATCH* /domains/order | Validate Domain Order.|
|*postDomainRenewal* | *POST* /domains/{id}/renew | Request Domain Renewal.|
|*postDomainTransfer* | *POST* /domains/{id}/transfer | Request Domain Transfer.|
|*putDomains* | *PUT* /domains/order | Domain Order Search.|
|*updateDomainContact* | *POST* /domains/{id}/contact | Update Domain Contact Details.|
|*updateDomainInfo* | *POST* /domains/{id} | Update Domain Order.|
|*updateDomainNameservers* | *PUT* /domains/{id}/nameservers | Replace Nameserver Set.|
|*updateDomainWhoisPrivacy* | *POST* /domains/{id}/whois | Update Whois Privacy.|

### FloatingIPsApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addFloatingIp* | *POST* /floating_ips/order | Place Floating IP Order.|
|*floatingIpsCancel* | *DELETE* /floating_ips/{id} | Cancel Floating IP.|
|*getFloatingIpInfo* | *GET* /floating_ips/{id} | View Floating IP.|
|*getFloatingIpInvoices* | *GET* /floating_ips/{id}/invoices | Get Floating IP Invoices.|
|*getFloatingIpsList* | *GET* /floating_ips | List Floating IPs.|
|*getFloatingIpsWelcomeEmail* | *GET* /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email.|
|*getNewFloatingIp* | *GET* /floating_ips/order | Get Floating IP Ordering Information.|
|*postFloatingIpsChangeIp* | *POST* /floating_ips/{id}/change_ip | Change Floating IP Target.|
|*putFloatingIps* | *PUT* /floating_ips/order | Validate Floating IP Order.|
|*updateFloatingIpInfo* | *POST* /floating_ips/{id} | Update Floating IP.|

### LicensesApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addLicense* | *POST* /licenses/order | Place License Order.|
|*getLicenseInfo* | *GET* /licenses/{id} | Get License.|
|*getLicenseInvoices* | *GET* /licenses/{id}/invoices | Get License Invoices.|
|*getLicenseList* | *GET* /licenses | List Licenses.|
|*getLicenseOrderCatTagInfo* | *GET* /licenses/order/{catTag} | Get License Order Information for Category.|
|*getLicensesWelcomeEmail* | *GET* /licenses/{id}/welcome_email | Resend License Welcome Email.|
|*getNewLicense* | *GET* /licenses/order | Get License Order Information.|
|*licensesCancel* | *DELETE* /licenses/{id} | Cancel License.|
|*postLicenseChangeIp* | *POST* /licenses/{id}/change_ip | Change License IP.|
|*putLicenses* | *PUT* /licenses/order | Validate License Order.|
|*updateLicenseInfo* | *POST* /licenses/{id} | Update License.|

### MailApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addMail* | *POST* /mail/order | Place Mail Order.|
|*addRule* | *POST* /mail/{id}/rules | Create Deny Rule.|
|*createMailAlert* | *POST* /mail/{id}/alerts | Create Mail Alert.|
|*deleteMailAlert* | *DELETE* /mail/{id}/alerts | Delete Mail Alert.|
|*deleteRule* | *DELETE* /mail/{id}/rules/{rule} | Delete Deny Rule.|
|*delistBlock* | *POST* /mail/{id}/blocks/delete | Remove Email Address from Block List.|
|*getMailAlerts* | *GET* /mail/{id}/alerts | List Mail Alerts.|
|*getMailBlocks* | *GET* /mail/{id}/blocks | List Blocked Email Addresses.|
|*getMailDelist* | *GET* /mail/{id}/delist | Get Delist Status.|
|*getMailDeliverability* | *GET* /mail/{id}/deliverability | Get Deliverability Metrics.|
|*getMailInfo* | *GET* /mail/{id} | Get Mail Order.|
|*getMailInvoices* | *GET* /mail/{id}/invoices | Get Mail Invoices.|
|*getMailList* | *GET* /mail | List Mail Orders.|
|*getMailWelcomeEmail* | *GET* /mail/{id}/welcome_email | Resend Mail Welcome Email.|
|*getNewMail* | *GET* /mail/order | Get Mail Ordering Information.|
|*getRules* | *GET* /mail/{id}/rules | List Deny Rules.|
|*getStats* | *GET* /mail/{id}/stats | Get Mail Usage Statistics.|
|*mailCancel* | *DELETE* /mail/{id} | Cancel Mail.|
|*postMailDelist* | *POST* /mail/{id}/delist | Delist a Blocked Sender.|
|*putMail* | *PUT* /mail/order | Validate Mail Order.|
|*resetMailPassword* | *GET* /mail/{id}/reset_password | Reset Mail Password.|
|*sendAdvMail* | *POST* /mail/{id}/advsend | Send Email with Advanced Options.|
|*sendMail* | *POST* /mail/{id}/send | Send Email.|
|*updateMailAlert* | *PUT* /mail/{id}/alerts | Update Mail Alert.|
|*updateMailInfo* | *POST* /mail/{id} | Update Mail Order.|
|*viewMailLog* | *GET* /mail/{id}/log | View Mail Log.|

### PublicApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*getCaptcha* | *GET* /captcha | Get Captcha Challenge.|
|*getCountries* | *GET* /account/countries | Get Countries.|
|*getInfo* | *GET* /info | Get Server Info.|
|*getLoginInfo* | *GET* /login | Get Login Info.|
|*getMPServers* | *GET* /buy_now_servers_list | List Marketplace Servers.|
|*getOauthRedirect* | *GET* /oauth | Get OAuth Redirect URL.|
|*getTimezones* | *GET* /account/timezones | Get Available Timezones.|
|*patchOauthTwoFactor* | *PATCH* /oauth | Complete OAuth Two-Factor Verification.|
|*pingServer* | *GET* /ping | Ping Server.|
|*postOauthCallback* | *POST* /oauth | OAuth Callback.|
|*submitLogin* | *POST* /login | Submit Login Information.|
|*submitSignup* | *POST* /signup | Submit Signup Information.|

### QuickServersApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addQs* | *POST* /qs/order | Place QuickServer Order.|
|*deleteQsBackup* | *DELETE* /qs/{id}/backups | Delete QuickServer Backup.|
|*doQsBlockSmtp* | *GET* /qs/{id}/block_smtp | Block QuickServer SMTP.|
|*doQsDisableCd* | *GET* /qs/{id}/disable_cd | Disable CD Drive.|
|*doQsDisableQuota* | *GET* /qs/{id}/disable_quota | Disable Quotas.|
|*doQsEjectCd* | *GET* /qs/{id}/eject_cd | Eject CD Drive.|
|*doQsEnableQuota* | *GET* /qs/{id}/enable_quota | Enable Quotas.|
|*doQsRestart* | *GET* /qs/{id}/restart | Restart QuickServer.|
|*doQsStart* | *GET* /qs/{id}/start | Start QuickServer.|
|*doQsStop* | *GET* /qs/{id}/stop | Stop QuickServer.|
|*downloadQsBackup* | *PATCH* /qs/{id}/backups | Download QuickServer Backup.|
|*getNewQs* | *GET* /qs/order | Get QuickServer Ordering Information.|
|*getQsBackups* | *GET* /qs/{id}/backups | List QuickServer Backups.|
|*getQsChangeHostname* | *GET* /qs/{id}/change_hostname | Get QuickServer Hostname.|
|*getQsChangeRootPassword* | *GET* /qs/{id}/change_root_password | Get Change Root Password Info.|
|*getQsChangeTimezone* | *GET* /qs/{id}/change_timezone | Get Timezone Info.|
|*getQsChangeWebuzoPassword* | *GET* /qs/{id}/change_webuzo_password | Webuzo Change Pass Info.|
|*getQsInfo* | *GET* /qs/{id} | Get QuickServer Order.|
|*getQsInsertCd* | *GET* /qs/{id}/insert_cd | Insert CD Information.|
|*getQsInvoices* | *GET* /qs/{id}/invoices | Get QuickServer Invoices.|
|*getQsList* | *GET* /qs | List QuickServers.|
|*getQsReinstallOs* | *GET* /qs/{id}/reinstall_os | QuickServer Reinstall OS Options.|
|*getQsResetPassword* | *GET* /qs/{id}/reset_password | Reset QuickServer Password Info.|
|*getQsReverseDns* | *GET* /qs/{id}/reverse_dns | Reverse DNS Info.|
|*getQsSetupVnc* | *GET* /qs/{id}/setup_vnc | VNC Setup Info.|
|*getQsTrafficUsage* | *GET* /qs/{id}/traffic_usage | Get Traffic Usage.|
|*getQsViewDesktop* | *GET* /qs/{id}/view_desktop | Get View Desktop Info.|
|*getQsWelcomeEmail* | *GET* /qs/{id}/welcome_email | Resend QuickServer Welcome Email.|
|*postQsBackup* | *POST* /qs/{id}/backup | Create QuickServer Backup.|
|*postQsChangeHostname* | *POST* /qs/{id}/change_hostname | Update QuickServer Hostname.|
|*postQsChangeRootPassword* | *POST* /qs/{id}/change_root_password | Change Root Password.|
|*postQsChangeTimezone* | *POST* /qs/{id}/change_timezone | Change QuickServer Timezone.|
|*postQsChangeWebuzoPassword* | *POST* /qs/{id}/change_webuzo_password | Change Webuzo Password.|
|*postQsInsertCd* | *POST* /qs/{id}/insert_cd | Insert CD in QuickServer.|
|*postQsReinstallOs* | *POST* /qs/{id}/reinstall_os | Reinstall QuickServer OS.|
|*postQsResetPassword* | *POST* /qs/{id}/reset_password | Reset QuickServer Password.|
|*postQsReverseDns* | *POST* /qs/{id}/reverse_dns | Update Reverse DNS.|
|*postQsSetupVnc* | *POST* /qs/{id}/setup_vnc | Setup VNC.|
|*postQsTrafficUsage* | *POST* /qs/{id}/traffic_usage | Search Traffic Usage.|
|*postQsViewDesktop* | *POST* /qs/{id}/view_desktop | Update View Desktop.|
|*postQuickServerRestore* | *POST* /qs/{id}/restore | Restore QuickServer from Backup.|
|*putQs* | *PUT* /qs/order | Validate QuickServer Order.|
|*quickserversCancel* | *DELETE* /qs/{id} | Cancel QuickServer Order.|
|*updateQsInfo* | *POST* /qs/{id} | Update QuickServer Order.|

### SSLCertificatesApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addSsl* | *POST* /ssl/order | Place SSL Cert Order.|
|*getNewSsl* | *GET* /ssl/order | SSL Cert Ordering Information.|
|*getSslInfo* | *GET* /ssl/{id} | Get SSL Cert Info.|
|*getSslInvoices* | *GET* /ssl/{id}/invoices | Get SSL Cert Invoices.|
|*getSslList* | *GET* /ssl | List SSL Certs.|
|*getSslWelcomeEmail* | *GET* /ssl/{id}/welcome_email | Resend SSL Welcome Email.|
|*putSsl* | *PUT* /ssl/order | Validate SSL Cert Order.|
|*sslCancel* | *DELETE* /ssl/{id} | Cancel SSL Certificate Service.|
|*updateSslInfo* | *POST* /ssl/{id} | Update SSL Cert Order.|

### ScrubIpsApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*cancelScrubIp* | *DELETE* /scrub_ips/{id} | Cancel Scrub IP Service.|
|*createFilter* | *POST* /scrub_ips/{id}/create_filter | Create Traffic Filter.|
|*createGeoRule* | *POST* /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule.|
|*createRule* | *POST* /scrub_ips/{id}/create_rule | Create Firewall Rule.|
|*deleteFilter* | *POST* /scrub_ips/{id}/delete_filter | Delete Traffic Filter.|
|*disableScrub* | *GET* /scrub_ips/{id}/disable | Disable Scrub Protection.|
|*enableScrub* | *GET* /scrub_ips/{id}/enable | Enable Scrub Protection.|
|*getOrderDetail* | *GET* /scrub_ips/order | Get Scrub IP Ordering Information.|
|*getScrubIpDetails* | *GET* /scrub_ips/{id} | Get Scrub IP Details.|
|*getScrubIpFilterTypes* | *GET* /scrub_ips/filter_types | List Scrub Filter Types.|
|*getScrubIpInvoices* | *GET* /scrub_ips/{id}/invoices | Get ScrubIp Invoices.|
|*getScrubIpLogs* | *GET* /scrub_ips/{id}/logs | Get Scrub IP Logs.|
|*getScrubIpsList* | *GET* /scrub_ips | List Scrub IP Services.|
|*placeScrubOrder* | *POST* /scrub_ips/order | Place Scrub IP Order.|
|*scrubIpsDeleteGeoRule* | *POST* /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule.|
|*scrubIpsDeleteRule* | *POST* /scrub_ips/{id}/delete_rule | Delete Firewall Rule.|

### ServersApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addServer* | *POST* /servers/order | Place Server Order.|
|*buyItNowServerOrder* | *GET* /servers/order/buy_now_server | Get Buy Now Server Options.|
|*getMPServers* | *GET* /buy_now_servers_list | List Marketplace Servers.|
|*getNewServer* | *GET* /servers/order | Server Ordering Information.|
|*getServerInfo* | *GET* /servers/{id} | Get Server Order.|
|*getServerInvoices* | *GET* /servers/{id}/invoices | Get Server Invoices.|
|*getServerList* | *GET* /servers | List Servers.|
|*getServerReverseDns* | *GET* /servers/{id}/reverse_dns | Reverse DNS Info.|
|*getServersWelcomeEmail* | *GET* /servers/{id}/welcome_email | Resend Server Welcome Email.|
|*placeBuyNowServer* | *POST* /servers/order/buy_now_server | Place Buy Now Server Order.|
|*postServerReverseDns* | *POST* /servers/{id}/reverse_dns | Update Reverse DNS.|
|*putServers* | *PUT* /servers/order | Validate Server Order.|
|*serverIpmiLiveGet* | *GET* /servers/{id}/ipmi_live | Server IPMI Live Information.|
|*serverIpmiLivePost* | *POST* /servers/{id}/ipmi_live | Server IPMI Live Setup.|
|*serverIpmiPowerGet* | *GET* /servers/{id}/ipmi_power | Get IPMI Power Status.|
|*serverIpmiPowerPost* | *POST* /servers/{id}/ipmi_power | Server IPMI Power.|
|*serversCancel* | *DELETE* /servers/{id} | Cancel Server Service.|
|*updateServerInfo* | *POST* /servers/{id} | Update Server Order.|

### TicketsApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addNewTicket* | *POST* /tickets/new | Create New Ticket.|
|*closeTicket* | *GET* /tickets/{id}/close | Close Ticket.|
|*deleteTicketInfo* | *DELETE* /tickets/{id} | Close Ticket.|
|*getNewTicket* | *GET* /tickets/new | Gets Information for creating a new ticket..|
|*getTicketInfo* | *GET* /tickets/{id} | Get Ticket Information.|
|*getTicketsList* | *GET* /tickets | List Support Tickets.|
|*postTicketInfo* | *POST* /tickets/{id} | Reply To Ticket.|
|*postTicketsList* | *POST* /tickets | Search Support Tickets.|
|*putTicketInfo* | *PUT* /tickets/{id} | Update Ticket.|
|*replyTicket* | *POST* /tickets/{id}/reply | Reply Ticket.|
|*updateTicketInfo* | *POST* /tickets/{id}/update | Update Ticket.|

### VPSApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addVps* | *POST* /vps/order | Place VPS Order.|
|*deleteVpsBackup* | *DELETE* /vps/{id}/backups | Delete VPS Backup.|
|*doVpsBlockSmtp* | *GET* /vps/{id}/block_smtp | Blocks SMTP.|
|*doVpsDisableCd* | *GET* /vps/{id}/disable_cd | Disable CD Drive.|
|*doVpsDisableQuota* | *GET* /vps/{id}/disable_quota | Disable Quotas.|
|*doVpsEjectCd* | *GET* /vps/{id}/eject_cd | Eject CD Drive.|
|*doVpsEnableQuota* | *GET* /vps/{id}/enable_quota | Enable Quotas.|
|*doVpsRestart* | *GET* /vps/{id}/restart | Restart VPS.|
|*doVpsStart* | *GET* /vps/{id}/start | Start VPS.|
|*doVpsStop* | *GET* /vps/{id}/stop | Stop VPS.|
|*downloadVpsBackup* | *PATCH* /vps/{id}/backups | Download VPS Backup.|
|*getNewVps* | *GET* /vps/order | VPS Ordering Information.|
|*getVpsBackups* | *GET* /vps/{id}/backups | Get VPS Backups List.|
|*getVpsBuyHdSpace* | *GET* /vps/{id}/buy_hd_space | HD Space Addon Info.|
|*getVpsBuyIp* | *GET* /vps/{id}/buy_ip | Additional IP Addon Info.|
|*getVpsChangeTimezone* | *GET* /vps/{id}/change_timezone | Get Timezone Info.|
|*getVpsInfo* | *GET* /vps/{id} | Get VPS Order.|
|*getVpsInvoices* | *GET* /vps/{id}/invoices | Get VPS Invoices.|
|*getVpsList* | *GET* /vps | List VPS Orders.|
|*getVpsReinstallOs* | *GET* /vps/{id}/reinstall_os | VPS Reinstall OS Options.|
|*getVpsReverseDns* | *GET* /vps/{id}/reverse_dns | Reverse DNS Info.|
|*getVpsSetupVnc* | *GET* /vps/{id}/setup_vnc | VNC Setup Info.|
|*getVpsSlices* | *GET* /vps/{id}/slices | Slice Upgrade Info.|
|*getVpsTrafficUsage* | *GET* /vps/{id}/traffic_usage | Get Traffic Usage.|
|*getVpsViewDesktop* | *GET* /vps/{id}/view_desktop | Get View Desktop Info.|
|*getVpsWelcomeEmail* | *GET* /vps/{id}/welcome_email | Resend VPS Welcome Email.|
|*postVpsBackup* | *GET* /vps/{id}/backup | Start a VPS Backup.|
|*postVpsBuyHdSpace* | *POST* /vps/{id}/buy_hd_space | Purchase HD Space Addon.|
|*postVpsBuyIp* | *POST* /vps/{id}/buy_ip | Purchase Additional IP.|
|*postVpsChangeHostname* | *POST* /vps/{id}/change_hostname | Update VPS Hostname.|
|*postVpsChangeRootPassword* | *POST* /vps/{id}/change_root_password | Change VPS Root Password.|
|*postVpsChangeTimezone* | *POST* /vps/{id}/change_timezone | Change VPS Timezone.|
|*postVpsChangeWebuzoPassword* | *POST* /vps/{id}/change_webuzo_password | Change Webuzo Password.|
|*postVpsInsertCd* | *POST* /vps/{id}/insert_cd | Insert CD in VPS.|
|*postVpsReinstallOs* | *POST* /vps/{id}/reinstall_os | Reinstall VPS OS.|
|*postVpsResetPassword* | *POST* /vps/{id}/reset_password | Reset VPS Password.|
|*postVpsRestore* | *POST* /vps/{id}/restore | Restore VPS from Backup.|
|*postVpsReverseDns* | *POST* /vps/{id}/reverse_dns | Update Reverse DNS.|
|*postVpsSetupVnc* | *POST* /vps/{id}/setup_vnc | Setup VNC.|
|*postVpsSlices* | *POST* /vps/{id}/slices | Purchase Slice Upgrade.|
|*postVpsViewDesktop* | *POST* /vps/{id}/view_desktop | Update View Desktop.|
|*putVps* | *PUT* /vps/order | Validate VPS Order.|
|*updateVpsInfo* | *POST* /vps/{id} | Update VPS Order.|
|*vPSCancel* | *DELETE* /vps/{id} | Cancel VPS Service.|

### WebhostingApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*addWebsite* | *POST* /websites/order | Place Website Order.|
|*getNewWebsite* | *GET* /websites/order | Website Ordering Information.|
|*getWebsiteBuyIp* | *GET* /websites/{id}/buy_ip | Get Website IP Information.|
|*getWebsiteInfo* | *GET* /websites/{id} | Get Website Order.|
|*getWebsiteInvoices* | *GET* /websites/{id}/invoices | Get Website Invoices.|
|*getWebsiteList* | *GET* /websites | Get Website Listing.|
|*getWebsitesBackups* | *GET* /websites/{id}/backups | Get Website Backups.|
|*getWebsitesLogin* | *GET* /websites/{id}/login | Hosting Panel Auto Login.|
|*getWebsitesWelcomeEmail* | *GET* /websites/{id}/welcome_email | Resend Website Welcome Email.|
|*gettWebsiteReverseDns* | *GET* /websites/{id}/reverse_dns | Get Website Reverse DNS.|
|*postWebsiteBuyIp* | *POST* /websites/{id}/buy_ip | Update Website IP DNS.|
|*postWebsiteMigration* | *POST* /websites/{id}/migration | Request Website Migration.|
|*postWebsitesReverseDns* | *POST* /websites/{id}/reverse_dns | Update Website Reverse DNS.|
|*putWebsites* | *PUT* /websites/order | Validate Webhosting Order.|
|*updateWebsiteInfo* | *POST* /websites/{id} | Update Website Order.|
|*webhostingCancel* | *DELETE* /websites/{id} | Cancel Website.|


## What are the Model files for the data structures/objects?
|Class | Description|
|------------- | -------------|
|*AccountFeatures* | Account Features data.|
|*AccountInfo* | Contains the full account profile including personal info, billing details, OAuth connections, and security settings.|
|*AccountInfoCountryCurrencies* | Maps country codes to their available currency options.|
|*AccountInfoData* | Detailed account profile data including contact info, billing, API keys, and security settings.|
|*AccountInfoDataCc* | Credit card information stored on the account.|
|*AccountInfoDataCcs* | Collection of credit cards on the account, keyed by card ID.|
|*AccountInfoData_email_settings* | |
|*AccountInfoData_extra* | |
|*AccountInfoData_fraudrecord* | |
|*AccountInfoLimits* | IP address ranges used to restrict account access to specific IPs.|
|*AccountInfoLimits_inner* | |
|*AccountInfoMaxMindResponse* | MaxMind fraud detection scoring data for a credit card transaction.|
|*AccountInfoMaxMindResponse_riskScore* | |
|*AccountInfoOauthConfig* | OAuth integration configuration including callback URL and available providers.|
|*AccountInfoOauthConfigProviders* | Map of OAuth providers and their linked status on the account.|
|*AccountInfoOauthConfigProviders_value* | |
|*AccountInfoPost* | Request to update account information.|
|*AccountInfo_oauthproviders* | |
|*AccountSshKey* | SSH Keys|
|*AddServer_200_response* | |
|*AffiliateBannerRow* | An affiliate banner image details.|
|*AffiliateDockSetup* | Affiliate Landing Page information.|
|*AffiliatePaymentSetup* | Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.|
|*AffiliateTrafficRow* | Affiliate Web Traffic Entry|
|*AssetServer* | A pre-configured asset server available for immediate provisioning.|
|*AssetServer_CPU_inner* | |
|*Backup* | Full detail view of a backup service including billing, service info, and configuration.|
|*BackupBillingDetails* | |
|*BackupClientLink* | A navigation link for backup service actions in the client portal.|
|*BackupExtraInfoTables* | Supplementary information tables for a backup service (IP info, etc.).|
|*BackupIPInfo* | IP address information table for a backup service.|
|*BackupIPInfoRow* | A single row in the backup IP information table.|
|*BackupLoginResponse* | Login session response for backup storage.|
|*BackupOrderPostResponse* | Backup Order Placement Response|
|*BackupOrderPostResponse_cj_params* | |
|*BackupOrderPutRequest* | Parameters to submit to validate your backup order|
|*BackupOrderPutResponse* | Backup Order validation response|
|*BackupRow* | A result row from the `Backups` `GET` request.|
|*BackupServiceInfo* | Core service record for a backup storage service including ID, status, quota, and billing details.|
|*BackupServiceMaster* | |
|*BackupsOrder* | Available backup storage packages and pricing for ordering a new backup service.|
|*BackupsOrderPackageCosts* | |
|*BackupsOrderServiceTypes* | |
|*BackupsOrder_serviceTypes* | |
|*Bandwidth* | A bandwidth option available for a dedicated server configuration.|
|*BillingAddCcRequest* | Request to add a new creditcard into the system.|
|*BillingInvoiceDetail* | Detailed invoice data payload returned for a single invoice.|
|*BillingInvoiceList* | Summary list of invoices for the account.|
|*BillingPaymentMethodRequest* | Payload for updating the default account payment method.|
|*BillingPrepayRequest* | Request payload for creating a new prepay balance.|
|*BillingVerifyCcRequest* | Payload for verifying a credit card through the verification flow.|
|*BuyItNowList* | Marketplace buy it now servers list|
|*BuyItNowRow* | A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.|
|*BuyItNowRow_cpu_inner* | |
|*BuyItNowRow_cpu_inner_oneOf* | |
|*BuyItNowServerOrder_200_response* | |
|*BuyItNowServerOrder_200_response_bandwidth_inner* | |
|*BuyItNowServerOrder_200_response_cp_inner* | |
|*BuyItNowServerOrder_200_response_ips_inner* | |
|*BuyItNowServerOrder_200_response_os_inner* | |
|*BuyItNowServerOrder_200_response_raid_inner* | |
|*CancelBackup_200_response* | |
|*CancelDomain_200_response* | |
|*CancelScrubIp_200_response* | |
|*CaptchaResponse* | A base-64 encoded captcha image.|
|*ChargeInvoiceRows* | Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.|
|*ChargeInvoiceRows_invoices_value* | |
|*ChargeInvoiceRows_invoices_value_paid_invoices_value* | |
|*ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value* | |
|*CloseTicketResponseSchema* | |
|*ConfigIds* | Internal configuration IDs mapped from the selected form values for a server order.|
|*ConfigLists* | All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.|
|*ControlPanel* | A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.|
|*Cpu* | A CPU option available for dedicated server ordering.|
|*CpuWithDefaults* | |
|*CreateFilter* | Create firewall rule for your ip|
|*CreateFilter_201_response* | |
|*CreateFilter_400_response* | |
|*CreateFilter_500_response* | |
|*CreateFirewallRule* | Create firewall rule for your ip|
|*CreateGeoFirewallRule* | Create firewall rule for your ip|
|*CreateGeoRule_400_response* | |
|*CreateRule_201_response* | |
|*CreateRule_400_response* | |
|*CreateRule_500_response* | |
|*DeleteFilter_200_response* | |
|*DeleteFilter_400_response* | |
|*DeleteFilter_500_response* | |
|*Delete_Firewall_Rule* | Delete firewall rule for your ip|
|*Delete_Geo_Firewall_Rule* | Delete geo firewall rule for your scrub ip|
|*DenyRuleNew* | The data for a email deny rule record.|
|*DenyRuleRecord* | The data for a email deny rule record.|
|*DisableScrub_200_response* | |
|*DisableScrub_400_response* | |
|*DisableScrub_500_response* | |
|*DnsListItem* | A DNS zone entry with its ID, domain name, and record content.|
|*DnsNewDomain* | The request for a new domain to be managed by the dns servers.|
|*DnsNewRecord* | Request data for a new DNS record.|
|*DnsRecord* | A single DNS Record row for a Domain|
|*DnsRecordType* | Type of DNS Record|
|*DnsUpdateRecord* | The request data to update a dns record.|
|*Domain* | Full detail view of a domain service including billing, contacts, DNS, and configuration.|
|*DomainAdminContact* | Administrative contact information for a domain registration.|
|*DomainAllInfo* | Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.|
|*DomainAllInfo_attributes* | |
|*DomainAllInfo_attributes_contact_set* | |
|*DomainBillingDetails* | Billing information for a domain service including payment status, dates, and cost.|
|*DomainBillingExtra* | Extended billing context for a domain including registrar order details and contact info.|
|*DomainClientLink* | Links and labels for domain-related UI actions.|
|*DomainContactDetails* | Contact details used for domain registrant/admin/technical/billing records.|
|*DomainDnssecRecords* | DNSSEC DS records currently configured for a domain.|
|*DomainDnssecRecords_inner* | |
|*DomainDnssecRequest* | Request payload for adding DNSSEC DS records to a domain.|
|*DomainLookupResponse* | Availability, pricing, and order-field metadata for a domain lookup.|
|*DomainNameServer* | A single registered nameserver entry with glue IPs.|
|*DomainNameserverGetResponse* | List of registered nameserver hosts with glue record metadata.|
|*DomainNameserverGetResponse_inner* | |
|*DomainNameserverPostRequest* | Payload for adding a registered nameserver (glue record).|
|*DomainNameserverPutRequest* | Payload for replacing the assigned nameserver list for a domain.|
|*DomainOrder* | Ordering metadata for domain registration and transfers.|
|*DomainOrderResponse* | Registrar response metadata returned after a domain order.|
|*DomainOrderResponse_attributes* | |
|*DomainOrderServices10001* | Example schema for a domain service catalog entry.|
|*DomainOrderTldServices* | Example map of TLDs to service IDs for domain ordering.|
|*DomainOrder_services* | Available domain service catalog entries keyed by service ID.|
|*DomainOwnerContact* | Contact details for the registered domain owner.|
|*DomainProvProcessPending* | Provisioning status data for a pending domain order.|
|*DomainProvProcessPending_attributes* | |
|*DomainRow* | A result row from the `Domains` `GET` request.|
|*DomainSearchResponse* | Lookup and suggestion results returned for a domain search.|
|*DomainServiceInfo* | Detailed domain service record for a domain order.|
|*DomainServiceType* | Service type definition for a domain registration, including name, pricing, and category.|
|*DomainTechContact* | Technical contact information for a domain registration.|
|*DomainWhoisPrivacyRequest* | Request payload for enabling or disabling Whois privacy.|
|*DownloadQsBackup_200_response* | |
|*DownloadQsBackup_request* | |
|*EmailAddress* | an email address|
|*EmailAddressName* | An email contact.|
|*EnableScrub_200_response* | |
|*EnableScrub_500_response* | |
|*FieldLabel* | A display label for a server order form field.|
|*Floating_ipsCancel_200_response* | |
|*FormValues* | Currently selected configuration option IDs for a server order form.|
|*GenericResponse* | Generic Response|
|*GetAccountInfo_401_response* | |
|*GetAccountTfaSetup_200_response* | |
|*GetOauthRedirect_200_response* | |
|*GetOrderDetail_200_response* | |
|*GetOrderDetail_200_response_ips_inner* | |
|*GetOrderDetail_200_response_packageCosts* | |
|*GetOrderDetail_200_response_serviceTypes_inner* | |
|*GetScrubIpDetails_200_response* | |
|*GetScrubIpDetails_200_response_billingDetails* | |
|*GetScrubIpDetails_200_response_client_links_inner* | |
|*GetScrubIpDetails_200_response_extraInfoTables* | |
|*GetScrubIpDetails_200_response_extraInfoTables_scrub_ips* | |
|*GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner* | |
|*GetScrubIpDetails_200_response_filter_firewall* | |
|*GetScrubIpDetails_200_response_filter_firewall_filters_inner* | |
|*GetScrubIpDetails_200_response_filter_firewall_rules_inner* | |
|*GetScrubIpDetails_200_response_serviceInfo* | |
|*GetWebsiteBuyIp_200_response* | |
|*HardDrive* | A hard drive option available for a dedicated server configuration.|
|*Home* | |
|*HomeDetailsModulesBackups* | Dashboard module configuration for backup storage services.|
|*HomeDetailsModulesDomains* | Dashboard module configuration for domain registration services.|
|*HomeDetailsModulesLicenses* | Dashboard module configuration for software license services.|
|*HomeDetailsModulesQuickservers* | Dashboard module configuration for QuickServer services.|
|*HomeDetailsModulesServers* | Dashboard module configuration for dedicated server services.|
|*HomeDetailsModulesVps* | Dashboard module configuration for VPS services.|
|*HomeDetailsModulesWebhosting* | Dashboard module configuration for webhosting services.|
|*HomeServicesDomainsLinks* | Map of domain service IDs to their hostnames for the account dashboard.|
|*HomeServicesLicensesLinks* | Map of license service IDs to their IP addresses for the account dashboard.|
|*HomeServicesServersLinks* | Map of dedicated server service IDs to their hostnames for the account dashboard.|
|*HomeServicesVpsLinks* | Map of VPS service IDs to their hostnames for the account dashboard.|
|*HomeServicesWebhostingLinks* | Map of webhosting service IDs to their hostnames for the account dashboard.|
|*Home_details* | Users details.|
|*Home_details_modules* | |
|*Home_services* | Users services.|
|*Home_services_backups* | |
|*Home_services_domains* | |
|*Home_services_licenses* | |
|*Home_services_servers* | |
|*Home_services_vps* | |
|*Home_services_webhosting* | |
|*Home_ticketStatus* | Ticket statuses.|
|*Home_ticketStatusView* | Ticket statuses with view numbers.|
|*HostnameObject* | Request specifying the hostname.|
|*InitiatePayment_200_response* | |
|*Inline_object* | |
|*Invoice* | An invoice record|
|*InvoiceRow* | |
|*IpBlock* | An IP address block option available for a dedicated server configuration.|
|*IpLimitRange* | The lower and upper bounds of an ip range.|
|*IpObject* | IP Address|
|*License* | |
|*LicenseBillingDetails* | Billing information for a software license including payment status, billing cycle, and cost.|
|*LicenseClientLink* | |
|*LicenseIpInfo* | IP address information table for a software license service.|
|*LicenseIpInfoRow* | A single row in the license IP information table.|
|*LicenseRow* | A result row from the `Licenses` `GET` request.|
|*LicenseServiceInfo* | |
|*LicenseServiceType* | Service type definition for a software license, including name, pricing, and category.|
|*License_extraInfoTables* | |
|*LicensesCancel_200_response* | |
|*LicensesOrder* | Available license packages and pricing for ordering a new software license.|
|*LicensesOrderServiceCategories509* | |
|*LicensesOrderServiceTypes11482* | |
|*LicensesOrder_packageCosts* | Costs of license packages|
|*LicensesOrder_serviceCategories* | License service categories|
|*LicensesOrder_serviceTypes* | Types of license services|
|*LoginErrorResponse* | Error resposne during login indicating further action.|
|*LoginInfo* | Basic information useful for rendering a login page.|
|*LoginServiceCounts* | Order counts per module.|
|*LoginSubmissionExample* | The data to submit in the login request.|
|*LoginSubmissionExample_g_recaptcha_response* | |
|*LoginSubmissionExample_g_recaptcha_response_dep* | |
|*LoginSuccessResponse* | The response from a successful login.|
|*MailAlertRequest* | Payload for creating a mail alert.|
|*MailAlertUpdateRequest* | Payload for updating an existing mail alert.|
|*MailAlertsResponse* | Alert configuration entries for a mail service.|
|*MailAlertsResponse_inner* | |
|*MailAttachment* | (optional) File attachments to include in the email.  The file contents must be base64|
|*MailBillingDetails* | Billing information for a mail service including payment status, billing cycle, and cost.|
|*MailBlockClickHouse* | A block entry from the clickhouse mailblocks server.|
|*MailBlockRspamd* | This is a block entry from the rspamd block list.|
|*MailBlocks* | The listing of blocked emails.|
|*MailCancel_200_response* | |
|*MailClientLink* | A navigation link for mail service actions in the client portal.|
|*MailDelistRequest* | Payload for removing a sender from mail blocklists.|
|*MailDelistResponse* | Blocklist status information for a mail service.|
|*MailDeliverabilityResponse* | Deliverability statistics for a mail service.|
|*MailExtraInfoTable* | A supplementary information table for a mail service (e.g., connection details).|
|*MailExtraInfoTableRow* | A single row in the mail service supplementary information table.|
|*MailLog* | Paginated mail log response.  Contains the full matched count (`total`) plus a page of `MailLogEntry` records.  The `total` reflects the grouping mode: with `groupby=recipient` it counts delivery attempts, with `groupby=message` it counts unique messages.|
|*MailLogEntry* | A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.|
|*MailOrder* | A mail order record|
|*MailRow* | A result row from the `Mail` `GET` request.|
|*MailSchema* | |
|*MailSchema_extraInfoTables* | Additional information tables for the mail service.|
|*MailServiceInfo* | |
|*MailServiceType* | Service type definition for a mail service, including name, pricing, and category.|
|*MailStatsType* | Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.|
|*MailStatsType_volume* | |
|*MailStatsType_volume_from* | |
|*MailStatsType_volume_ip* | |
|*MailStatsType_volume_to* | |
|*MailTutorialsTable* | A table of tutorial links displayed for a mail service.|
|*MailTutorialsTableRow* | A single tutorial entry with a label and URL.|
|*MemoryOption* | A memory (RAM) upgrade option available for a dedicated server configuration.|
|*ModuleSettings* | The settings for a module.|
|*Modules* | The modules and settings.|
|*MonthlyCounts* | A map of month labels (e.g., \"2024-01\") to counts for a specific mail status.|
|*OperatingSystem* | An operating system option available for server provisioning.|
|*PasswordRequest* | Request containing a password|
|*PatchOauthTwoFactor_200_response* | |
|*PatchOauthTwoFactor_request* | |
|*PaymentInvoiceRows* | |
|*PlaceBuyNowServer_request* | |
|*PlaceScrubOrder_201_response* | |
|*PlaceScrubOrder_201_response_order_details* | |
|*PlaceScrubOrder_201_response_order_details_cj_params* | |
|*PostOauthCallback_200_response* | |
|*PostOauthCallback_request* | |
|*PostWebsiteBuyIp_200_response* | |
|*PostWebsiteBuyIp_request* | |
|*PostWebsiteMigration_200_response* | |
|*PostWebsiteMigration_request* | |
|*QueueResponse* | Response after sending an action queue to a service.|
|*Quickserver* | |
|*QuickserverAddons* | |
|*QuickserverAddonsRow* | A single add-on item associated with a QuickServer service.|
|*QuickserverBillingDetails* | Billing information for a QuickServer service including payment status, billing cycle, and cost.|
|*QuickserverClientLink* | A navigation link for QuickServer-related actions in the client portal.|
|*QuickserverIpInfo* | IP address information table for a QuickServer service.|
|*QuickserverIpTableRow* | A single row in the QuickServer IP information table.|
|*QuickserverOrder* | Available QuickServer options and OS templates for ordering a new QuickServer.|
|*QuickserverOrderDistroSelUbuntu* | |
|*QuickserverOrderServerDetails381* | |
|*QuickserverOrderTemplatesUbuntu64* | Ubuntu template details.|
|*QuickserverOrderVersionCentosstream8* | |
|*QuickserverOrder_distro_sel* | Distribution selection.|
|*QuickserverOrder_server_details* | Server details.|
|*QuickserverOrder_templates* | Templates details.|
|*QuickserverOrder_version* | Version details.|
|*QuickserverRow* | A result row from the `Quickservers` `GET` request.|
|*QuickserverServiceExtra* | |
|*QuickserverServiceInfo* | Core service record for a QuickServer including ID, status, IP, OS, and billing details.|
|*QuickserverServiceMaster* | Information about the host node running this QuickServer, including hardware specs and resource utilization.|
|*Quickserver_extraInfoTables* | |
|*Quickserver_serviceExtra* | |
|*QuickserversCancel_200_response* | |
|*RaidOption* | A RAID configuration option available for a dedicated server.|
|*Region* | A datacenter region where a server can be provisioned.|
|*ReplyTicketRequest* | Post reply to your ticket|
|*ReplyTicketResponseSchema* | |
|*RestoreRequest* | Request data to trigger a restore from backup.|
|*ReverseDnsEntries* | The Reverse DNS entries.|
|*ScrubIpFilterTypes* | Available scrub filter types for building firewall rules.|
|*ScrubIpFilterTypes_filters_value* | |
|*ScrubIpPlaceOrder* | Place ScrubIP Order|
|*ScrubIpsDeleteRule_200_response* | |
|*ScrubIpsDeleteRule_400_response* | |
|*ScrubIpsDeleteRule_500_response* | |
|*ScrubIpsLogRowSchema* | |
|*ScrubIpsRowSchema* | |
|*SearchAutocompleteResponse* | Autocomplete search results for the authenticated account.|
|*SendMail* | Details for an Email|
|*SendMailAdv* | Details for an Email|
|*Server* | |
|*ServerAsset* | |
|*ServerAssets* | |
|*ServerBillingDetails* | Billing information for a dedicated server service including payment status, billing cycle, and cost.|
|*ServerClientLink* | |
|*ServerExtraInfoTables* | |
|*ServerIpmiLiveInfo* | Information about the IPMI connection.|
|*ServerIpmiLiveRequest* | Request body to setup an IPMI Live connection.|
|*ServerIpmiPowerRequest* | IPMI Power command for servers|
|*ServerLease* | |
|*ServerLocation1* | |
|*ServerNetworkInfo* | |
|*ServerNetworkInfo_assets* | Object containing asset information.|
|*ServerNetworkInfo_switchports* | Object containing switchport information.|
|*ServerOrder* | Object representing a server order.|
|*ServerOrderBandwidth* | A bandwidth option available when ordering a dedicated server.|
|*ServerOrderCPU* | A CPU option available when ordering a dedicated server.|
|*ServerOrderConfigIds* | Configuration IDs for the server order.|
|*ServerOrderControlPanel* | A control panel option available when ordering a dedicated server.|
|*ServerOrderFieldLabel* | A display label for a field in the server order form.|
|*ServerOrderFieldLabels* | Field labels for the server order.|
|*ServerOrderFormValues* | Form values for the server order.|
|*ServerOrderGetResponse* | Configuration options and pricing data returned when starting a dedicated server order.|
|*ServerOrderIP* | An IP block option available when ordering a dedicated server.|
|*ServerOrderMemory* | A memory (RAM) option available when ordering a dedicated server.|
|*ServerOrderOS* | An operating system option available when ordering a dedicated server.|
|*ServerOrderRAID* | A RAID configuration option available when ordering a dedicated server.|
|*ServerOrder_bandwidth_li* | Bandwidth options for the server order.|
|*ServerOrder_cp_li* | Control Panel options for the server order.|
|*ServerOrder_cpu_li* | CPU options for the server order.|
|*ServerOrder_ips_li* | IP options for the server order.|
|*ServerOrder_memory_li* | Memory options for the server order.|
|*ServerOrder_memory_li_254* | |
|*ServerOrder_os_li* | Operating System options for the server order.|
|*ServerRow* | A result row from the `Servers` `GET` request.|
|*ServerServiceInfo* | |
|*ServerSwitchport* | |
|*Server_locations* | |
|*ServersBuyNowError* | Error response when a buy-it-now server order fails validation.|
|*ServersBuyNowResponse* | Success response after placing a buy-it-now dedicated server order.|
|*ServersBuyNowResponse_order_details* | Details of the placed order.|
|*ServersCancel_200_response* | |
|*Service* | An individual package tied to one of our services.|
|*ServiceCategories* | The listing of the categories for the services.|
|*ServiceCategory* | A Category of Services.  This is the broadest grouping within a module.|
|*ServiceOrderPostResponse* | Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.|
|*ServiceType* | A general grouping of services within a category.|
|*ServiceTypes* | The listing of service types|
|*Services* | The list of service packages.|
|*ServicesInfo* | Contains the complete catalog of available modules, services, service types, and service categories.|
|*SslCancel_200_response* | |
|*StatusMonthlyBreakdown* | Monthly mail delivery status breakdown, showing counts per status category.|
|*SuccessTextResponse* | Response with success flag and text description.|
|*TemplateRequest* | VPS OS Template Request|
|*TextResponse* | Text Response Object|
|*TicketCustomFieldDetails* | Optional fields providing additional info in ticket|
|*TicketDetails* | Detailed ticket information|
|*TicketNew* | New helpdesk ticket request.  |
|*TicketNewResponse* | Response returned after creating a new support ticket.|
|*TicketPostDetails* | Fetches every posts of ticket|
|*TicketPostDetails_inner* | |
|*Tickets* | A listing of support tickets.|
|*TicketsRow* | Information about a single ticket.|
|*Tickets_countArray* | |
|*TimezoneUpdate* | The request to update the time zone of a vps.|
|*UpdateAccountTfa_request* | |
|*UpdateTicket* | Update custom fields of the ticket|
|*UpdateTicketResponseSchema* | |
|*UrlRequest* | URL|
|*VPSCancel_200_response* | |
|*VPSTrafficDataDataSectionResponse* | VPS Traffic Data section Data subsection Row Response|
|*VPSTrafficDataDataSectionResponse_inner* | |
|*ViewMailLog_startDate_parameter* | |
|*ViewTicketResponse* | Ticket details|
|*Vps* | |
|*VpsBackupRow* | A single backed-up item and information about it.|
|*VpsBackupRows* | The listing of the backups for your service.|
|*VpsBillingDetails* | Billing information for a VPS service including payment status, billing cycle, and cost.|
|*VpsCPData* | Control panel license options available for a VPS.|
|*VpsClientLink* | A navigation link for VPS-related actions in the client portal.|
|*VpsDAData* | DirectAdmin license options available for a VPS.|
|*VpsDALicense* | A DirectAdmin license tier option.|
|*VpsExtraInfoTables* | Additional informational tables displayed for a VPS service.|
|*VpsIPInfo* | IP address information table for a VPS service.|
|*VpsIPInfoRow* | |
|*VpsOrder* | Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.|
|*VpsOrderPostRequest* | request to validate a vps order|
|*VpsOrderPutRequest* | request to validate a vps order|
|*VpsOrderPutResponse* | Response from VPS order validation request|
|*VpsOrder_locationNames* | Location Names|
|*VpsOrder_locationStock* | Location Stock|
|*VpsOrder_locationStock_1* | |
|*VpsOrder_osNames* | OS Names|
|*VpsOrder_packageCosts* | Package Costs|
|*VpsOrder_platformNames* | Platform Names|
|*VpsOrder_platformPackages* | Platform Packages|
|*VpsOrder_serviceTypes* | Service Types|
|*VpsOrder_serviceTypes_32* | |
|*VpsOrder_templates* | Templates|
|*VpsOrder_templates_hyperv* | |
|*VpsOrder_templates_hyperv_windows* | |
|*VpsPlesk12Data* | |
|*VpsPleskLicense* | |
|*VpsRow* | A result row from the `Vps` `GET` request.|
|*VpsServiceAddons* | Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.|
|*VpsServiceExtra* | |
|*VpsServiceInfo* | |
|*VpsServiceMaster* | Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.|
|*VpsSnapshot* | A VPS snapshot (point-in-time backup) stored on the host node.|
|*VpsTemplateRow* | A VPS OS Template.|
|*VpsTemplatesList* | A listing of the OS Templates available for use.|
|*VpsTrafficDataDataResponse* | VPS Traffic Data section Data subsection response|
|*VpsTrafficDataSectionResponse* | VPS Traffic Data Section Response|
|*VpsTrafficHistoryResponse* | VPS Traffic Data History Section|
|*VpsTrafficHistorySectionDataResponse* | VPS Traffic Hisotrty Data Row of Hour/Day Section|
|*VpsTrafficHistorySectionResponse* | VPS Traffic History Hour and Day Sections|
|*VpsTrafficResponse* | VPS Traffic Information|
|*VpsTrafficTotalsResposne* | VPS Traffic Totals Section|
|*VpsTrafficTotalsSectionResponse* | VPS Traffic Totals Secttions Data|
|*VpsTrafficUsageAverageResponse* | VPS Traffic Usage Average Section|
|*VpsTrafficUsageAverageSectionResponse* | VPS Traffic Usage Average Section Response|
|*VpsTrafficUsageResponse* | VPS Traffic Usage Section|
|*WebhostingCancel_200_response* | |
|*Website* | Full detail view of a webhosting service including billing, service configuration, and panel access links.|
|*WebsiteBackups* | List of available backups for a webhosting service with their names and sizes.|
|*WebsiteBackups_inner* | |
|*WebsiteBillingDetails* | Billing information for a webhosting service including payment status, billing cycle, and cost.|
|*WebsiteClientLink* | A navigation link for webhosting-related actions in the client portal.|
|*WebsiteExtraInfoTables* | Supplementary information tables displayed for a webhosting service (links, DNS, preview).|
|*WebsiteLoginResponse* | Response from a website login request.|
|*WebsiteRow* | A result row from the `Webhosting` `GET` request.|
|*WebsiteServiceInfo* | |
|*WebsiteServiceMaster* | |
|*WebsiteTable* | |
|*WebsiteTableRow* | |
|*WebsitesOrder* | Schema for the WebsitesOrder object|
|*WebsitesOrderJsonServiceOffers* | Schema for the jsonServiceOffers field in WebsitesOrder|
|*WebsitesOrderJsonServiceOffersItem* | |
|*WebsitesOrderJsonServices* | Schema for the jsonServices field in WebsitesOrder|
|*WebsitesOrderPackages* | Schema for the packages field in WebsitesOrder|
|*WebsitesOrderPackagesInfo* | |
|*WebsitesOrderServiceOffer* | |
|*WebsitesOrderServiceTypes* | |
|*WebsitesOrder_packges* | The packages data.|
|*WebsitesOrder_serviceOffers* | The service offers data.|
|*WebsitesOrder_serviceTypes* | The service types data.|

