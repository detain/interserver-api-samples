import { ResponseContext, RequestContext, HttpFile, HttpInfo } from '../http/http';
import { Configuration, PromiseConfigurationOptions, wrapOptions } from '../configuration'
import { PromiseMiddleware, Middleware, PromiseMiddlewareWrapper } from '../middleware';

import { AccountFeatures } from '../models/AccountFeatures';
import { AccountInfo } from '../models/AccountInfo';
import { AccountInfoCountryCurrencies } from '../models/AccountInfoCountryCurrencies';
import { AccountInfoData } from '../models/AccountInfoData';
import { AccountInfoDataCc } from '../models/AccountInfoDataCc';
import { AccountInfoDataCcs } from '../models/AccountInfoDataCcs';
import { AccountInfoDataEmailSettings } from '../models/AccountInfoDataEmailSettings';
import { AccountInfoDataExtra } from '../models/AccountInfoDataExtra';
import { AccountInfoDataFraudrecord } from '../models/AccountInfoDataFraudrecord';
import { AccountInfoLimits } from '../models/AccountInfoLimits';
import { AccountInfoLimitsInner } from '../models/AccountInfoLimitsInner';
import { AccountInfoMaxMindResponse } from '../models/AccountInfoMaxMindResponse';
import { AccountInfoMaxMindResponseRiskScore } from '../models/AccountInfoMaxMindResponseRiskScore';
import { AccountInfoOauthConfig } from '../models/AccountInfoOauthConfig';
import { AccountInfoOauthConfigProviders } from '../models/AccountInfoOauthConfigProviders';
import { AccountInfoOauthConfigProvidersValue } from '../models/AccountInfoOauthConfigProvidersValue';
import { AccountInfoOauthproviders } from '../models/AccountInfoOauthproviders';
import { AccountInfoPost } from '../models/AccountInfoPost';
import { AccountSshKey } from '../models/AccountSshKey';
import { AddServer200Response } from '../models/AddServer200Response';
import { AffiliateBannerRow } from '../models/AffiliateBannerRow';
import { AffiliateDockSetup } from '../models/AffiliateDockSetup';
import { AffiliatePaymentSetup } from '../models/AffiliatePaymentSetup';
import { AffiliateTrafficRow } from '../models/AffiliateTrafficRow';
import { AssetServer } from '../models/AssetServer';
import { AssetServerCPUInner } from '../models/AssetServerCPUInner';
import { Backup } from '../models/Backup';
import { BackupBillingDetails } from '../models/BackupBillingDetails';
import { BackupClientLink } from '../models/BackupClientLink';
import { BackupExtraInfoTables } from '../models/BackupExtraInfoTables';
import { BackupIPInfo } from '../models/BackupIPInfo';
import { BackupIPInfoRow } from '../models/BackupIPInfoRow';
import { BackupLoginResponse } from '../models/BackupLoginResponse';
import { BackupOrderPostResponse } from '../models/BackupOrderPostResponse';
import { BackupOrderPostResponseCjParams } from '../models/BackupOrderPostResponseCjParams';
import { BackupOrderPutRequest } from '../models/BackupOrderPutRequest';
import { BackupOrderPutResponse } from '../models/BackupOrderPutResponse';
import { BackupRow } from '../models/BackupRow';
import { BackupServiceInfo } from '../models/BackupServiceInfo';
import { BackupServiceMaster } from '../models/BackupServiceMaster';
import { BackupsOrder } from '../models/BackupsOrder';
import { BackupsOrderPackageCosts } from '../models/BackupsOrderPackageCosts';
import { BackupsOrderServiceTypes } from '../models/BackupsOrderServiceTypes';
import { Bandwidth } from '../models/Bandwidth';
import { BillingAddCcRequest } from '../models/BillingAddCcRequest';
import { BillingInvoiceDetail } from '../models/BillingInvoiceDetail';
import { BillingInvoiceList } from '../models/BillingInvoiceList';
import { BillingPaymentMethodRequest } from '../models/BillingPaymentMethodRequest';
import { BillingPrepayRequest } from '../models/BillingPrepayRequest';
import { BillingVerifyCcRequest } from '../models/BillingVerifyCcRequest';
import { BuyItNowList } from '../models/BuyItNowList';
import { BuyItNowRow } from '../models/BuyItNowRow';
import { BuyItNowRowCpuInner } from '../models/BuyItNowRowCpuInner';
import { BuyItNowRowCpuInnerOneOf } from '../models/BuyItNowRowCpuInnerOneOf';
import { BuyItNowServerOrder200Response } from '../models/BuyItNowServerOrder200Response';
import { BuyItNowServerOrder200ResponseBandwidthInner } from '../models/BuyItNowServerOrder200ResponseBandwidthInner';
import { BuyItNowServerOrder200ResponseCpInner } from '../models/BuyItNowServerOrder200ResponseCpInner';
import { BuyItNowServerOrder200ResponseIpsInner } from '../models/BuyItNowServerOrder200ResponseIpsInner';
import { BuyItNowServerOrder200ResponseOsInner } from '../models/BuyItNowServerOrder200ResponseOsInner';
import { BuyItNowServerOrder200ResponseRaidInner } from '../models/BuyItNowServerOrder200ResponseRaidInner';
import { CancelBackup200Response } from '../models/CancelBackup200Response';
import { CancelDomain200Response } from '../models/CancelDomain200Response';
import { CancelScrubIp200Response } from '../models/CancelScrubIp200Response';
import { CaptchaResponse } from '../models/CaptchaResponse';
import { ChargeInvoiceRows } from '../models/ChargeInvoiceRows';
import { ChargeInvoiceRowsInvoicesValue } from '../models/ChargeInvoiceRowsInvoicesValue';
import { ChargeInvoiceRowsInvoicesValuePaidInvoicesValue } from '../models/ChargeInvoiceRowsInvoicesValuePaidInvoicesValue';
import { ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue } from '../models/ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue';
import { CloseTicketResponseSchema } from '../models/CloseTicketResponseSchema';
import { ConfigIds } from '../models/ConfigIds';
import { ConfigLists } from '../models/ConfigLists';
import { ControlPanel } from '../models/ControlPanel';
import { Cpu } from '../models/Cpu';
import { CpuWithDefaults } from '../models/CpuWithDefaults';
import { CreateFilter } from '../models/CreateFilter';
import { CreateFilter201Response } from '../models/CreateFilter201Response';
import { CreateFilter400Response } from '../models/CreateFilter400Response';
import { CreateFilter500Response } from '../models/CreateFilter500Response';
import { CreateFirewallRule } from '../models/CreateFirewallRule';
import { CreateGeoFirewallRule } from '../models/CreateGeoFirewallRule';
import { CreateGeoRule400Response } from '../models/CreateGeoRule400Response';
import { CreateRule201Response } from '../models/CreateRule201Response';
import { CreateRule400Response } from '../models/CreateRule400Response';
import { CreateRule500Response } from '../models/CreateRule500Response';
import { DeleteFilter200Response } from '../models/DeleteFilter200Response';
import { DeleteFilter400Response } from '../models/DeleteFilter400Response';
import { DeleteFilter500Response } from '../models/DeleteFilter500Response';
import { DeleteFirewallRule } from '../models/DeleteFirewallRule';
import { DeleteGeoFirewallRule } from '../models/DeleteGeoFirewallRule';
import { DenyRuleNew } from '../models/DenyRuleNew';
import { DenyRuleRecord } from '../models/DenyRuleRecord';
import { DisableScrub200Response } from '../models/DisableScrub200Response';
import { DisableScrub400Response } from '../models/DisableScrub400Response';
import { DisableScrub500Response } from '../models/DisableScrub500Response';
import { DnsListItem } from '../models/DnsListItem';
import { DnsNewDomain } from '../models/DnsNewDomain';
import { DnsNewRecord } from '../models/DnsNewRecord';
import { DnsRecord } from '../models/DnsRecord';
import { DnsRecordType } from '../models/DnsRecordType';
import { DnsUpdateRecord } from '../models/DnsUpdateRecord';
import { Domain } from '../models/Domain';
import { DomainAdminContact } from '../models/DomainAdminContact';
import { DomainAllInfo } from '../models/DomainAllInfo';
import { DomainAllInfoAttributes } from '../models/DomainAllInfoAttributes';
import { DomainAllInfoAttributesContactSet } from '../models/DomainAllInfoAttributesContactSet';
import { DomainBillingDetails } from '../models/DomainBillingDetails';
import { DomainBillingExtra } from '../models/DomainBillingExtra';
import { DomainClientLink } from '../models/DomainClientLink';
import { DomainContactDetails } from '../models/DomainContactDetails';
import { DomainDnssecRecords } from '../models/DomainDnssecRecords';
import { DomainDnssecRecordsInner } from '../models/DomainDnssecRecordsInner';
import { DomainDnssecRequest } from '../models/DomainDnssecRequest';
import { DomainLookupResponse } from '../models/DomainLookupResponse';
import { DomainNameServer } from '../models/DomainNameServer';
import { DomainNameserverGetResponse } from '../models/DomainNameserverGetResponse';
import { DomainNameserverGetResponseInner } from '../models/DomainNameserverGetResponseInner';
import { DomainNameserverPostRequest } from '../models/DomainNameserverPostRequest';
import { DomainNameserverPutRequest } from '../models/DomainNameserverPutRequest';
import { DomainOrder } from '../models/DomainOrder';
import { DomainOrderResponse } from '../models/DomainOrderResponse';
import { DomainOrderResponseAttributes } from '../models/DomainOrderResponseAttributes';
import { DomainOrderServices } from '../models/DomainOrderServices';
import { DomainOrderServices10001 } from '../models/DomainOrderServices10001';
import { DomainOrderTldServices } from '../models/DomainOrderTldServices';
import { DomainOwnerContact } from '../models/DomainOwnerContact';
import { DomainProvProcessPending } from '../models/DomainProvProcessPending';
import { DomainProvProcessPendingAttributes } from '../models/DomainProvProcessPendingAttributes';
import { DomainRow } from '../models/DomainRow';
import { DomainSearchResponse } from '../models/DomainSearchResponse';
import { DomainServiceInfo } from '../models/DomainServiceInfo';
import { DomainServiceType } from '../models/DomainServiceType';
import { DomainTechContact } from '../models/DomainTechContact';
import { DomainWhoisPrivacyRequest } from '../models/DomainWhoisPrivacyRequest';
import { DownloadQsBackup200Response } from '../models/DownloadQsBackup200Response';
import { DownloadQsBackupRequest } from '../models/DownloadQsBackupRequest';
import { EmailAddress } from '../models/EmailAddress';
import { EmailAddressName } from '../models/EmailAddressName';
import { EnableScrub200Response } from '../models/EnableScrub200Response';
import { EnableScrub500Response } from '../models/EnableScrub500Response';
import { FieldLabel } from '../models/FieldLabel';
import { FloatingIpsCancel200Response } from '../models/FloatingIpsCancel200Response';
import { FormValues } from '../models/FormValues';
import { GenericResponse } from '../models/GenericResponse';
import { GetAccountInfo401Response } from '../models/GetAccountInfo401Response';
import { GetAccountTfaSetup200Response } from '../models/GetAccountTfaSetup200Response';
import { GetOauthRedirect200Response } from '../models/GetOauthRedirect200Response';
import { GetOrderDetail200Response } from '../models/GetOrderDetail200Response';
import { GetOrderDetail200ResponseIpsInner } from '../models/GetOrderDetail200ResponseIpsInner';
import { GetOrderDetail200ResponsePackageCosts } from '../models/GetOrderDetail200ResponsePackageCosts';
import { GetOrderDetail200ResponseServiceTypesInner } from '../models/GetOrderDetail200ResponseServiceTypesInner';
import { GetScrubIpDetails200Response } from '../models/GetScrubIpDetails200Response';
import { GetScrubIpDetails200ResponseBillingDetails } from '../models/GetScrubIpDetails200ResponseBillingDetails';
import { GetScrubIpDetails200ResponseClientLinksInner } from '../models/GetScrubIpDetails200ResponseClientLinksInner';
import { GetScrubIpDetails200ResponseExtraInfoTables } from '../models/GetScrubIpDetails200ResponseExtraInfoTables';
import { GetScrubIpDetails200ResponseExtraInfoTablesScrubIps } from '../models/GetScrubIpDetails200ResponseExtraInfoTablesScrubIps';
import { GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner } from '../models/GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner';
import { GetScrubIpDetails200ResponseFilterFirewall } from '../models/GetScrubIpDetails200ResponseFilterFirewall';
import { GetScrubIpDetails200ResponseFilterFirewallFiltersInner } from '../models/GetScrubIpDetails200ResponseFilterFirewallFiltersInner';
import { GetScrubIpDetails200ResponseFilterFirewallRulesInner } from '../models/GetScrubIpDetails200ResponseFilterFirewallRulesInner';
import { GetScrubIpDetails200ResponseServiceInfo } from '../models/GetScrubIpDetails200ResponseServiceInfo';
import { GetWebsiteBuyIp200Response } from '../models/GetWebsiteBuyIp200Response';
import { HardDrive } from '../models/HardDrive';
import { Home } from '../models/Home';
import { HomeDetails } from '../models/HomeDetails';
import { HomeDetailsModules } from '../models/HomeDetailsModules';
import { HomeDetailsModulesBackups } from '../models/HomeDetailsModulesBackups';
import { HomeDetailsModulesDomains } from '../models/HomeDetailsModulesDomains';
import { HomeDetailsModulesLicenses } from '../models/HomeDetailsModulesLicenses';
import { HomeDetailsModulesQuickservers } from '../models/HomeDetailsModulesQuickservers';
import { HomeDetailsModulesServers } from '../models/HomeDetailsModulesServers';
import { HomeDetailsModulesVps } from '../models/HomeDetailsModulesVps';
import { HomeDetailsModulesWebhosting } from '../models/HomeDetailsModulesWebhosting';
import { HomeServices } from '../models/HomeServices';
import { HomeServicesBackups } from '../models/HomeServicesBackups';
import { HomeServicesDomains } from '../models/HomeServicesDomains';
import { HomeServicesDomainsLinks } from '../models/HomeServicesDomainsLinks';
import { HomeServicesLicenses } from '../models/HomeServicesLicenses';
import { HomeServicesLicensesLinks } from '../models/HomeServicesLicensesLinks';
import { HomeServicesServers } from '../models/HomeServicesServers';
import { HomeServicesServersLinks } from '../models/HomeServicesServersLinks';
import { HomeServicesVps } from '../models/HomeServicesVps';
import { HomeServicesVpsLinks } from '../models/HomeServicesVpsLinks';
import { HomeServicesWebhosting } from '../models/HomeServicesWebhosting';
import { HomeServicesWebhostingLinks } from '../models/HomeServicesWebhostingLinks';
import { HomeTicketStatus } from '../models/HomeTicketStatus';
import { HomeTicketStatusView } from '../models/HomeTicketStatusView';
import { HostnameObject } from '../models/HostnameObject';
import { InitiatePayment200Response } from '../models/InitiatePayment200Response';
import { InlineObject } from '../models/InlineObject';
import { Invoice } from '../models/Invoice';
import { InvoiceRow } from '../models/InvoiceRow';
import { IpBlock } from '../models/IpBlock';
import { IpLimitRange } from '../models/IpLimitRange';
import { IpObject } from '../models/IpObject';
import { License } from '../models/License';
import { LicenseBillingDetails } from '../models/LicenseBillingDetails';
import { LicenseClientLink } from '../models/LicenseClientLink';
import { LicenseExtraInfoTables } from '../models/LicenseExtraInfoTables';
import { LicenseIpInfo } from '../models/LicenseIpInfo';
import { LicenseIpInfoRow } from '../models/LicenseIpInfoRow';
import { LicenseRow } from '../models/LicenseRow';
import { LicenseServiceInfo } from '../models/LicenseServiceInfo';
import { LicenseServiceType } from '../models/LicenseServiceType';
import { LicensesCancel200Response } from '../models/LicensesCancel200Response';
import { LicensesOrder } from '../models/LicensesOrder';
import { LicensesOrderPackageCosts } from '../models/LicensesOrderPackageCosts';
import { LicensesOrderServiceCategories } from '../models/LicensesOrderServiceCategories';
import { LicensesOrderServiceCategories509 } from '../models/LicensesOrderServiceCategories509';
import { LicensesOrderServiceTypes } from '../models/LicensesOrderServiceTypes';
import { LicensesOrderServiceTypes11482 } from '../models/LicensesOrderServiceTypes11482';
import { LoginErrorResponse } from '../models/LoginErrorResponse';
import { LoginInfo } from '../models/LoginInfo';
import { LoginServiceCounts } from '../models/LoginServiceCounts';
import { LoginSubmissionExample } from '../models/LoginSubmissionExample';
import { LoginSubmissionExampleGRecaptchaResponse } from '../models/LoginSubmissionExampleGRecaptchaResponse';
import { LoginSubmissionExampleGRecaptchaResponseDep } from '../models/LoginSubmissionExampleGRecaptchaResponseDep';
import { LoginSuccessResponse } from '../models/LoginSuccessResponse';
import { MailAlertRequest } from '../models/MailAlertRequest';
import { MailAlertUpdateRequest } from '../models/MailAlertUpdateRequest';
import { MailAlertsResponse } from '../models/MailAlertsResponse';
import { MailAlertsResponseInner } from '../models/MailAlertsResponseInner';
import { MailAttachment } from '../models/MailAttachment';
import { MailBillingDetails } from '../models/MailBillingDetails';
import { MailBlockClickHouse } from '../models/MailBlockClickHouse';
import { MailBlockRspamd } from '../models/MailBlockRspamd';
import { MailBlocks } from '../models/MailBlocks';
import { MailCancel200Response } from '../models/MailCancel200Response';
import { MailClientLink } from '../models/MailClientLink';
import { MailDelistRequest } from '../models/MailDelistRequest';
import { MailDelistResponse } from '../models/MailDelistResponse';
import { MailDeliverabilityResponse } from '../models/MailDeliverabilityResponse';
import { MailExtraInfoTable } from '../models/MailExtraInfoTable';
import { MailExtraInfoTableRow } from '../models/MailExtraInfoTableRow';
import { MailLog } from '../models/MailLog';
import { MailLogEntry } from '../models/MailLogEntry';
import { MailOrder } from '../models/MailOrder';
import { MailRow } from '../models/MailRow';
import { MailSchema } from '../models/MailSchema';
import { MailSchemaExtraInfoTables } from '../models/MailSchemaExtraInfoTables';
import { MailServiceInfo } from '../models/MailServiceInfo';
import { MailServiceType } from '../models/MailServiceType';
import { MailStatsType } from '../models/MailStatsType';
import { MailStatsTypeVolume } from '../models/MailStatsTypeVolume';
import { MailStatsTypeVolumeFrom } from '../models/MailStatsTypeVolumeFrom';
import { MailStatsTypeVolumeIp } from '../models/MailStatsTypeVolumeIp';
import { MailStatsTypeVolumeTo } from '../models/MailStatsTypeVolumeTo';
import { MailTutorialsTable } from '../models/MailTutorialsTable';
import { MailTutorialsTableRow } from '../models/MailTutorialsTableRow';
import { MemoryOption } from '../models/MemoryOption';
import { ModuleSettings } from '../models/ModuleSettings';
import { Modules } from '../models/Modules';
import { MonthlyCounts } from '../models/MonthlyCounts';
import { OperatingSystem } from '../models/OperatingSystem';
import { PasswordRequest } from '../models/PasswordRequest';
import { PatchOauthTwoFactor200Response } from '../models/PatchOauthTwoFactor200Response';
import { PatchOauthTwoFactorRequest } from '../models/PatchOauthTwoFactorRequest';
import { PaymentInvoiceRows } from '../models/PaymentInvoiceRows';
import { PlaceBuyNowServerRequest } from '../models/PlaceBuyNowServerRequest';
import { PlaceScrubOrder201Response } from '../models/PlaceScrubOrder201Response';
import { PlaceScrubOrder201ResponseOrderDetails } from '../models/PlaceScrubOrder201ResponseOrderDetails';
import { PlaceScrubOrder201ResponseOrderDetailsCjParams } from '../models/PlaceScrubOrder201ResponseOrderDetailsCjParams';
import { PostOauthCallback200Response } from '../models/PostOauthCallback200Response';
import { PostOauthCallbackRequest } from '../models/PostOauthCallbackRequest';
import { PostWebsiteBuyIp200Response } from '../models/PostWebsiteBuyIp200Response';
import { PostWebsiteBuyIpRequest } from '../models/PostWebsiteBuyIpRequest';
import { PostWebsiteMigration200Response } from '../models/PostWebsiteMigration200Response';
import { PostWebsiteMigrationRequest } from '../models/PostWebsiteMigrationRequest';
import { QueueResponse } from '../models/QueueResponse';
import { Quickserver } from '../models/Quickserver';
import { QuickserverAddons } from '../models/QuickserverAddons';
import { QuickserverAddonsRow } from '../models/QuickserverAddonsRow';
import { QuickserverBillingDetails } from '../models/QuickserverBillingDetails';
import { QuickserverClientLink } from '../models/QuickserverClientLink';
import { QuickserverExtraInfoTables } from '../models/QuickserverExtraInfoTables';
import { QuickserverIpInfo } from '../models/QuickserverIpInfo';
import { QuickserverIpTableRow } from '../models/QuickserverIpTableRow';
import { QuickserverOrder } from '../models/QuickserverOrder';
import { QuickserverOrderDistroSel } from '../models/QuickserverOrderDistroSel';
import { QuickserverOrderDistroSelUbuntu } from '../models/QuickserverOrderDistroSelUbuntu';
import { QuickserverOrderServerDetails } from '../models/QuickserverOrderServerDetails';
import { QuickserverOrderServerDetails381 } from '../models/QuickserverOrderServerDetails381';
import { QuickserverOrderTemplates } from '../models/QuickserverOrderTemplates';
import { QuickserverOrderTemplatesUbuntu64 } from '../models/QuickserverOrderTemplatesUbuntu64';
import { QuickserverOrderVersion } from '../models/QuickserverOrderVersion';
import { QuickserverOrderVersionCentosstream8 } from '../models/QuickserverOrderVersionCentosstream8';
import { QuickserverRow } from '../models/QuickserverRow';
import { QuickserverServiceExtra } from '../models/QuickserverServiceExtra';
import { QuickserverServiceInfo } from '../models/QuickserverServiceInfo';
import { QuickserverServiceMaster } from '../models/QuickserverServiceMaster';
import { QuickserversCancel200Response } from '../models/QuickserversCancel200Response';
import { RaidOption } from '../models/RaidOption';
import { Region } from '../models/Region';
import { ReplyTicketRequest } from '../models/ReplyTicketRequest';
import { ReplyTicketResponseSchema } from '../models/ReplyTicketResponseSchema';
import { RestoreRequest } from '../models/RestoreRequest';
import { ReverseDnsEntries } from '../models/ReverseDnsEntries';
import { ScrubIpFilterTypes } from '../models/ScrubIpFilterTypes';
import { ScrubIpFilterTypesFiltersValue } from '../models/ScrubIpFilterTypesFiltersValue';
import { ScrubIpPlaceOrder } from '../models/ScrubIpPlaceOrder';
import { ScrubIpsDeleteRule200Response } from '../models/ScrubIpsDeleteRule200Response';
import { ScrubIpsDeleteRule400Response } from '../models/ScrubIpsDeleteRule400Response';
import { ScrubIpsDeleteRule500Response } from '../models/ScrubIpsDeleteRule500Response';
import { ScrubIpsLogRowSchema } from '../models/ScrubIpsLogRowSchema';
import { ScrubIpsRowSchema } from '../models/ScrubIpsRowSchema';
import { SearchAutocompleteResponse } from '../models/SearchAutocompleteResponse';
import { SendMail } from '../models/SendMail';
import { SendMailAdv } from '../models/SendMailAdv';
import { Server } from '../models/Server';
import { ServerAsset } from '../models/ServerAsset';
import { ServerAssets } from '../models/ServerAssets';
import { ServerBillingDetails } from '../models/ServerBillingDetails';
import { ServerClientLink } from '../models/ServerClientLink';
import { ServerExtraInfoTables } from '../models/ServerExtraInfoTables';
import { ServerIpmiLiveInfo } from '../models/ServerIpmiLiveInfo';
import { ServerIpmiLiveRequest } from '../models/ServerIpmiLiveRequest';
import { ServerIpmiPowerRequest } from '../models/ServerIpmiPowerRequest';
import { ServerLease } from '../models/ServerLease';
import { ServerLocation1 } from '../models/ServerLocation1';
import { ServerLocations } from '../models/ServerLocations';
import { ServerNetworkInfo } from '../models/ServerNetworkInfo';
import { ServerNetworkInfoAssets } from '../models/ServerNetworkInfoAssets';
import { ServerNetworkInfoSwitchports } from '../models/ServerNetworkInfoSwitchports';
import { ServerOrder } from '../models/ServerOrder';
import { ServerOrderBandwidth } from '../models/ServerOrderBandwidth';
import { ServerOrderBandwidthLi } from '../models/ServerOrderBandwidthLi';
import { ServerOrderCPU } from '../models/ServerOrderCPU';
import { ServerOrderConfigIds } from '../models/ServerOrderConfigIds';
import { ServerOrderControlPanel } from '../models/ServerOrderControlPanel';
import { ServerOrderCpLi } from '../models/ServerOrderCpLi';
import { ServerOrderCpuLi } from '../models/ServerOrderCpuLi';
import { ServerOrderFieldLabel } from '../models/ServerOrderFieldLabel';
import { ServerOrderFieldLabels } from '../models/ServerOrderFieldLabels';
import { ServerOrderFormValues } from '../models/ServerOrderFormValues';
import { ServerOrderGetResponse } from '../models/ServerOrderGetResponse';
import { ServerOrderIP } from '../models/ServerOrderIP';
import { ServerOrderIpsLi } from '../models/ServerOrderIpsLi';
import { ServerOrderMemory } from '../models/ServerOrderMemory';
import { ServerOrderMemoryLi } from '../models/ServerOrderMemoryLi';
import { ServerOrderMemoryLi254 } from '../models/ServerOrderMemoryLi254';
import { ServerOrderOS } from '../models/ServerOrderOS';
import { ServerOrderOsLi } from '../models/ServerOrderOsLi';
import { ServerOrderRAID } from '../models/ServerOrderRAID';
import { ServerRow } from '../models/ServerRow';
import { ServerServiceInfo } from '../models/ServerServiceInfo';
import { ServerSwitchport } from '../models/ServerSwitchport';
import { ServersBuyNowError } from '../models/ServersBuyNowError';
import { ServersBuyNowResponse } from '../models/ServersBuyNowResponse';
import { ServersBuyNowResponseOrderDetails } from '../models/ServersBuyNowResponseOrderDetails';
import { ServersCancel200Response } from '../models/ServersCancel200Response';
import { Service } from '../models/Service';
import { ServiceCategories } from '../models/ServiceCategories';
import { ServiceCategory } from '../models/ServiceCategory';
import { ServiceOrderPostResponse } from '../models/ServiceOrderPostResponse';
import { ServiceType } from '../models/ServiceType';
import { ServiceTypes } from '../models/ServiceTypes';
import { Services } from '../models/Services';
import { ServicesInfo } from '../models/ServicesInfo';
import { SslCancel200Response } from '../models/SslCancel200Response';
import { StatusMonthlyBreakdown } from '../models/StatusMonthlyBreakdown';
import { SuccessTextResponse } from '../models/SuccessTextResponse';
import { TemplateRequest } from '../models/TemplateRequest';
import { TextResponse } from '../models/TextResponse';
import { TicketCustomFieldDetails } from '../models/TicketCustomFieldDetails';
import { TicketDetails } from '../models/TicketDetails';
import { TicketNew } from '../models/TicketNew';
import { TicketNewResponse } from '../models/TicketNewResponse';
import { TicketPostDetails } from '../models/TicketPostDetails';
import { TicketPostDetailsInner } from '../models/TicketPostDetailsInner';
import { Tickets } from '../models/Tickets';
import { TicketsCountArray } from '../models/TicketsCountArray';
import { TicketsRow } from '../models/TicketsRow';
import { TimezoneUpdate } from '../models/TimezoneUpdate';
import { UpdateAccountTfaRequest } from '../models/UpdateAccountTfaRequest';
import { UpdateTicket } from '../models/UpdateTicket';
import { UpdateTicketResponseSchema } from '../models/UpdateTicketResponseSchema';
import { UrlRequest } from '../models/UrlRequest';
import { VPSCancel200Response } from '../models/VPSCancel200Response';
import { VPSTrafficDataDataSectionResponse } from '../models/VPSTrafficDataDataSectionResponse';
import { VPSTrafficDataDataSectionResponseInner } from '../models/VPSTrafficDataDataSectionResponseInner';
import { ViewMailLogStartDateParameter } from '../models/ViewMailLogStartDateParameter';
import { ViewTicketResponse } from '../models/ViewTicketResponse';
import { Vps } from '../models/Vps';
import { VpsBackupRow } from '../models/VpsBackupRow';
import { VpsBackupRows } from '../models/VpsBackupRows';
import { VpsBillingDetails } from '../models/VpsBillingDetails';
import { VpsCPData } from '../models/VpsCPData';
import { VpsClientLink } from '../models/VpsClientLink';
import { VpsDAData } from '../models/VpsDAData';
import { VpsDALicense } from '../models/VpsDALicense';
import { VpsExtraInfoTables } from '../models/VpsExtraInfoTables';
import { VpsIPInfo } from '../models/VpsIPInfo';
import { VpsIPInfoRow } from '../models/VpsIPInfoRow';
import { VpsOrder } from '../models/VpsOrder';
import { VpsOrderLocationNames } from '../models/VpsOrderLocationNames';
import { VpsOrderLocationStock } from '../models/VpsOrderLocationStock';
import { VpsOrderLocationStock1 } from '../models/VpsOrderLocationStock1';
import { VpsOrderOsNames } from '../models/VpsOrderOsNames';
import { VpsOrderPackageCosts } from '../models/VpsOrderPackageCosts';
import { VpsOrderPlatformNames } from '../models/VpsOrderPlatformNames';
import { VpsOrderPlatformPackages } from '../models/VpsOrderPlatformPackages';
import { VpsOrderPostRequest } from '../models/VpsOrderPostRequest';
import { VpsOrderPutRequest } from '../models/VpsOrderPutRequest';
import { VpsOrderPutResponse } from '../models/VpsOrderPutResponse';
import { VpsOrderServiceTypes } from '../models/VpsOrderServiceTypes';
import { VpsOrderServiceTypes32 } from '../models/VpsOrderServiceTypes32';
import { VpsOrderTemplates } from '../models/VpsOrderTemplates';
import { VpsOrderTemplatesHyperv } from '../models/VpsOrderTemplatesHyperv';
import { VpsOrderTemplatesHypervWindows } from '../models/VpsOrderTemplatesHypervWindows';
import { VpsPlesk12Data } from '../models/VpsPlesk12Data';
import { VpsPleskLicense } from '../models/VpsPleskLicense';
import { VpsRow } from '../models/VpsRow';
import { VpsServiceAddons } from '../models/VpsServiceAddons';
import { VpsServiceExtra } from '../models/VpsServiceExtra';
import { VpsServiceInfo } from '../models/VpsServiceInfo';
import { VpsServiceMaster } from '../models/VpsServiceMaster';
import { VpsSnapshot } from '../models/VpsSnapshot';
import { VpsTemplateRow } from '../models/VpsTemplateRow';
import { VpsTemplatesList } from '../models/VpsTemplatesList';
import { VpsTrafficDataDataResponse } from '../models/VpsTrafficDataDataResponse';
import { VpsTrafficDataSectionResponse } from '../models/VpsTrafficDataSectionResponse';
import { VpsTrafficHistoryResponse } from '../models/VpsTrafficHistoryResponse';
import { VpsTrafficHistorySectionDataResponse } from '../models/VpsTrafficHistorySectionDataResponse';
import { VpsTrafficHistorySectionResponse } from '../models/VpsTrafficHistorySectionResponse';
import { VpsTrafficResponse } from '../models/VpsTrafficResponse';
import { VpsTrafficTotalsResposne } from '../models/VpsTrafficTotalsResposne';
import { VpsTrafficTotalsSectionResponse } from '../models/VpsTrafficTotalsSectionResponse';
import { VpsTrafficUsageAverageResponse } from '../models/VpsTrafficUsageAverageResponse';
import { VpsTrafficUsageAverageSectionResponse } from '../models/VpsTrafficUsageAverageSectionResponse';
import { VpsTrafficUsageResponse } from '../models/VpsTrafficUsageResponse';
import { WebhostingCancel200Response } from '../models/WebhostingCancel200Response';
import { Website } from '../models/Website';
import { WebsiteBackups } from '../models/WebsiteBackups';
import { WebsiteBackupsInner } from '../models/WebsiteBackupsInner';
import { WebsiteBillingDetails } from '../models/WebsiteBillingDetails';
import { WebsiteClientLink } from '../models/WebsiteClientLink';
import { WebsiteExtraInfoTables } from '../models/WebsiteExtraInfoTables';
import { WebsiteLoginResponse } from '../models/WebsiteLoginResponse';
import { WebsiteRow } from '../models/WebsiteRow';
import { WebsiteServiceInfo } from '../models/WebsiteServiceInfo';
import { WebsiteServiceMaster } from '../models/WebsiteServiceMaster';
import { WebsiteTable } from '../models/WebsiteTable';
import { WebsiteTableRow } from '../models/WebsiteTableRow';
import { WebsitesOrder } from '../models/WebsitesOrder';
import { WebsitesOrderJsonServiceOffers } from '../models/WebsitesOrderJsonServiceOffers';
import { WebsitesOrderJsonServiceOffersItem } from '../models/WebsitesOrderJsonServiceOffersItem';
import { WebsitesOrderJsonServices } from '../models/WebsitesOrderJsonServices';
import { WebsitesOrderPackages } from '../models/WebsitesOrderPackages';
import { WebsitesOrderPackagesInfo } from '../models/WebsitesOrderPackagesInfo';
import { WebsitesOrderPackges } from '../models/WebsitesOrderPackges';
import { WebsitesOrderServiceOffer } from '../models/WebsitesOrderServiceOffer';
import { WebsitesOrderServiceOffers } from '../models/WebsitesOrderServiceOffers';
import { WebsitesOrderServiceTypes } from '../models/WebsitesOrderServiceTypes';
import { ObservableAccountApi } from './ObservableAPI';

import { AccountApiRequestFactory, AccountApiResponseProcessor} from "../apis/AccountApi";
export class PromiseAccountApi {
    private api: ObservableAccountApi

    public constructor(
        configuration: Configuration,
        requestFactory?: AccountApiRequestFactory,
        responseProcessor?: AccountApiResponseProcessor
    ) {
        this.api = new ObservableAccountApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     * Change Account Username
     */
    public changeAccountUsernameWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.changeAccountUsernameWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     * Change Account Username
     */
    public changeAccountUsername(_options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.changeAccountUsername(observableOptions);
        return result.toPromise();
    }

    /**
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     * Unlink OAuth Account
     * @param name
     */
    public deleteAccountOauthNameWithHttpInfo(name: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteAccountOauthNameWithHttpInfo(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     * Unlink OAuth Account
     * @param name
     */
    public deleteAccountOauthName(name: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteAccountOauthName(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     * Disable Two-Factor Authentication
     */
    public deleteAccountTfaWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteAccountTfaWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     * Disable Two-Factor Authentication
     */
    public deleteAccountTfa(_options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteAccountTfa(observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an IP address range from the account\'s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     * Remove IP Access Restriction
     * @param [ipLimitRange]
     */
    public deleteIpLimitWithHttpInfo(ipLimitRange?: IpLimitRange, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteIpLimitWithHttpInfo(ipLimitRange, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an IP address range from the account\'s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     * Remove IP Access Restriction
     * @param [ipLimitRange]
     */
    public deleteIpLimit(ipLimitRange?: IpLimitRange, _options?: PromiseConfigurationOptions): Promise<GenericResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteIpLimit(ipLimitRange, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
     * Retrieve Account Details
     */
    public getAccountInfoWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<AccountInfo>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAccountInfoWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
     * Retrieve Account Details
     */
    public getAccountInfo(_options?: PromiseConfigurationOptions): Promise<AccountInfo> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAccountInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
     * Get Two-Factor Setup Data
     */
    public getAccountTfaSetupWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<GetAccountTfaSetup200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAccountTfaSetupWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
     * Get Two-Factor Setup Data
     */
    public getAccountTfaSetup(_options?: PromiseConfigurationOptions): Promise<GetAccountTfaSetup200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAccountTfaSetup(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     * Get Home Data
     */
    public getHomeWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Home>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getHomeWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     * Get Home Data
     */
    public getHome(_options?: PromiseConfigurationOptions): Promise<Home> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getHome(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns autocomplete results for the account\'s services and records. Use this endpoint to power global search experiences in the client portal.
     * Search Autocomplete
     */
    public getSearchWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<SearchAutocompleteResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSearchWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns autocomplete results for the account\'s services and records. Use this endpoint to power global search experiences in the client portal.
     * Search Autocomplete
     */
    public getSearch(_options?: PromiseConfigurationOptions): Promise<SearchAutocompleteResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSearch(observableOptions);
        return result.toPromise();
    }

    /**
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     * Log Out
     */
    public logoutWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.logoutWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     * Log Out
     */
    public logout(_options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.logout(observableOptions);
        return result.toPromise();
    }

    /**
     * Logs out of the specified OAuth provider session.
     * Logout of OAuth
     * @param name
     */
    public logoutAccountOauthWithHttpInfo(name: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.logoutAccountOauthWithHttpInfo(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Logs out of the specified OAuth provider session.
     * Logout of OAuth
     * @param name
     */
    public logoutAccountOauth(name: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.logoutAccountOauth(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     * Generate New API Key
     */
    public updateAccountApiKeyWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountApiKeyWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     * Generate New API Key
     */
    public updateAccountApiKey(_options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountApiKey(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     * Update Account Feature Flags
     * @param [disableReset]
     * @param [disableReinstall]
     */
    public updateAccountFeaturesWithHttpInfo(disableReset?: number, disableReinstall?: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountFeaturesWithHttpInfo(disableReset, disableReinstall, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     * Update Account Feature Flags
     * @param [disableReset]
     * @param [disableReinstall]
     */
    public updateAccountFeatures(disableReset?: number, disableReinstall?: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountFeatures(disableReset, disableReinstall, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     * Update Account Information
     * @param name Your name.
     * @param address Your address.
     * @param city Your city.
     * @param state Your state.
     * @param zip Your ZIP code.
     * @param country Your country.
     * @param phone Your phone number.
     * @param [company] Your company name.
     * @param [address2] Additional address information.
     * @param [locale] Your preferred locale.
     * @param [emailInvoices] Your email for invoice notifications.
     * @param [emailAbuse] Your email for abuse notifications.
     * @param [disableReset] Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them.
     * @param [disableReinstall] Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them.
     * @param [disableServerNotifications] Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them.
     * @param [disableEmailNotifications] Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them.
     * @param [gstin] Your GST identification number (if applicable).
     */
    public updateAccountInfoWithHttpInfo(name: string, address: string, city: string, state: string, zip: string, country: string, phone: string, company?: string, address2?: string, locale?: string, emailInvoices?: string, emailAbuse?: string, disableReset?: boolean, disableReinstall?: boolean, disableServerNotifications?: boolean, disableEmailNotifications?: boolean, gstin?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountInfoWithHttpInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     * Update Account Information
     * @param name Your name.
     * @param address Your address.
     * @param city Your city.
     * @param state Your state.
     * @param zip Your ZIP code.
     * @param country Your country.
     * @param phone Your phone number.
     * @param [company] Your company name.
     * @param [address2] Additional address information.
     * @param [locale] Your preferred locale.
     * @param [emailInvoices] Your email for invoice notifications.
     * @param [emailAbuse] Your email for abuse notifications.
     * @param [disableReset] Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them.
     * @param [disableReinstall] Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them.
     * @param [disableServerNotifications] Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them.
     * @param [disableEmailNotifications] Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them.
     * @param [gstin] Your GST identification number (if applicable).
     */
    public updateAccountInfo(name: string, address: string, city: string, state: string, zip: string, country: string, phone: string, company?: string, address2?: string, locale?: string, emailInvoices?: string, emailAbuse?: string, disableReset?: boolean, disableReinstall?: boolean, disableServerNotifications?: boolean, disableEmailNotifications?: boolean, gstin?: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds an IP address range to the account\'s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     * Add IP Access Restriction
     * @param start The begining (or first) IP address in the range.
     * @param end The ending (or last) IP address in the range.
     */
    public updateAccountIpLimitsWithHttpInfo(start: string, end: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountIpLimitsWithHttpInfo(start, end, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds an IP address range to the account\'s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     * Add IP Access Restriction
     * @param start The begining (or first) IP address in the range.
     * @param end The ending (or last) IP address in the range.
     */
    public updateAccountIpLimits(start: string, end: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountIpLimits(start, end, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     * Change Account Password
     * @param password
     */
    public updateAccountPasswordWithHttpInfo(password: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountPasswordWithHttpInfo(password, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     * Change Account Password
     * @param password
     */
    public updateAccountPassword(password: string, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountPassword(password, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     * Update SSH Keys
     * @param [sshKey]
     */
    public updateAccountSshKeyWithHttpInfo(sshKey?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountSshKeyWithHttpInfo(sshKey, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     * Update SSH Keys
     * @param [sshKey]
     */
    public updateAccountSshKey(sshKey?: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountSshKey(sshKey, observableOptions);
        return result.toPromise();
    }

    /**
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
     * Enable Two-Factor Authentication
     * @param _2faGoogleCode The 6-digit verification code from your authenticator app.
     */
    public updateAccountTfaWithHttpInfo(_2faGoogleCode: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountTfaWithHttpInfo(_2faGoogleCode, observableOptions);
        return result.toPromise();
    }

    /**
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
     * Enable Two-Factor Authentication
     * @param _2faGoogleCode The 6-digit verification code from your authenticator app.
     */
    public updateAccountTfa(_2faGoogleCode: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountTfa(_2faGoogleCode, observableOptions);
        return result.toPromise();
    }


}



import { ObservableBackupsApi } from './ObservableAPI';

import { BackupsApiRequestFactory, BackupsApiResponseProcessor} from "../apis/BackupsApi";
export class PromiseBackupsApi {
    private api: ObservableBackupsApi

    public constructor(
        configuration: Configuration,
        requestFactory?: BackupsApiRequestFactory,
        responseProcessor?: BackupsApiResponseProcessor
    ) {
        this.api = new ObservableBackupsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
     * Place Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public addBackupWithHttpInfo(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<BackupOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addBackupWithHttpInfo(validateOnly, serviceType, coupon, observableOptions);
        return result.toPromise();
    }

    /**
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
     * Place Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public addBackup(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: PromiseConfigurationOptions): Promise<BackupOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addBackup(validateOnly, serviceType, coupon, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     * Cancel Backup Service
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public cancelBackupWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<CancelBackup200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.cancelBackupWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     * Cancel Backup Service
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public cancelBackup(id: number, _options?: PromiseConfigurationOptions): Promise<CancelBackup200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.cancelBackup(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
     * Get Backup Service Details
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Backup>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
     * Get Backup Service Details
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInfo(id: number, _options?: PromiseConfigurationOptions): Promise<Backup> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     * Get Backup Order Invoices
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     * Get Backup Order Invoices
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     * Get Backup Storage Panel Login
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupLoginWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<BackupLoginResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupLoginWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     * Get Backup Storage Panel Login
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupLogin(id: number, _options?: PromiseConfigurationOptions): Promise<BackupLoginResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupLogin(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
     * List Backup Services
     */
    public getBackupsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<BackupRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
     * List Backup Services
     */
    public getBackupsList(_options?: PromiseConfigurationOptions): Promise<Array<BackupRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     * Resend Backup Welcome Email
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupsWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupsWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     * Resend Backup Welcome Email
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupsWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBackupsWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
     * Get Backup Order Form Data
     */
    public getNewBackupWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<BackupsOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewBackupWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
     * Get Backup Order Form Data
     */
    public getNewBackup(_options?: PromiseConfigurationOptions): Promise<BackupsOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewBackup(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     * Update Backup Information
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public updateBackupInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateBackupInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     * Update Backup Information
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public updateBackupInfo(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateBackupInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
     * Validate Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public validateBackupOrderWithHttpInfo(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<BackupOrderPutResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.validateBackupOrderWithHttpInfo(validateOnly, serviceType, coupon, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
     * Validate Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public validateBackupOrder(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: PromiseConfigurationOptions): Promise<BackupOrderPutResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.validateBackupOrder(validateOnly, serviceType, coupon, observableOptions);
        return result.toPromise();
    }


}



import { ObservableBillingApi } from './ObservableAPI';

import { BillingApiRequestFactory, BillingApiResponseProcessor} from "../apis/BillingApi";
export class PromiseBillingApi {
    private api: ObservableBillingApi

    public constructor(
        configuration: Configuration,
        requestFactory?: BillingApiRequestFactory,
        responseProcessor?: BillingApiResponseProcessor
    ) {
        this.api = new ObservableBillingApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
     * Add Credit Card to Account
     * @param [name]
     * @param [address]
     * @param [city]
     * @param [state]
     * @param [country]
     * @param [zip]
     * @param [cc]
     * @param [ccExp]
     * @param [ccCcv2]
     */
    public addAccountCreditCardWithHttpInfo(name?: string, address?: string, city?: string, state?: string, country?: string, zip?: string, cc?: string, ccExp?: string, ccCcv2?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addAccountCreditCardWithHttpInfo(name, address, city, state, country, zip, cc, ccExp, ccCcv2, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
     * Add Credit Card to Account
     * @param [name]
     * @param [address]
     * @param [city]
     * @param [state]
     * @param [country]
     * @param [zip]
     * @param [cc]
     * @param [ccExp]
     * @param [ccCcv2]
     */
    public addAccountCreditCard(name?: string, address?: string, city?: string, state?: string, country?: string, zip?: string, cc?: string, ccExp?: string, ccCcv2?: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
     * Add Credit Card for Billing
     * @param billingAddCcRequest
     */
    public addBillingCreditCardWithHttpInfo(billingAddCcRequest: BillingAddCcRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addBillingCreditCardWithHttpInfo(billingAddCcRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
     * Add Credit Card for Billing
     * @param billingAddCcRequest
     */
    public addBillingCreditCard(billingAddCcRequest: BillingAddCcRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addBillingCreditCard(billingAddCcRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
     * Create Prepay Deposit
     * @param billingPrepayRequest
     */
    public addBillingPrepayWithHttpInfo(billingPrepayRequest: BillingPrepayRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addBillingPrepayWithHttpInfo(billingPrepayRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
     * Create Prepay Deposit
     * @param billingPrepayRequest
     */
    public addBillingPrepay(billingPrepayRequest: BillingPrepayRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addBillingPrepay(billingPrepayRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
     * Remove Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public deleteAccountCreditCardWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<string>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteAccountCreditCardWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
     * Remove Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public deleteAccountCreditCard(id: string, _options?: PromiseConfigurationOptions): Promise<string> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteAccountCreditCard(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
     * Delete Credit Card
     * @param id The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.
     */
    public deleteBillingCreditCardWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteBillingCreditCardWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
     * Delete Credit Card
     * @param id The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.
     */
    public deleteBillingCreditCard(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteBillingCreditCard(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     * Delete Invoice
     * @param id The invoice ID to delete. Only unpaid invoices can be deleted.
     */
    public deleteBillingInvoiceWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteBillingInvoiceWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     * Delete Invoice
     * @param id The invoice ID to delete. Only unpaid invoices can be deleted.
     */
    public deleteBillingInvoice(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteBillingInvoice(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
     * Delete Prepay Balance
     * @param id The prepay balance ID to delete.
     */
    public deleteBillingPrepayWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteBillingPrepayWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
     * Delete Prepay Balance
     * @param id The prepay balance ID to delete.
     */
    public deleteBillingPrepay(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteBillingPrepay(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     * List Affiliate Banner Assets
     */
    public getAffiliateBannersWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<AffiliateBannerRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateBannersWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     * List Affiliate Banner Assets
     */
    public getAffiliateBanners(_options?: PromiseConfigurationOptions): Promise<Array<AffiliateBannerRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateBanners(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     * Get Affiliate Performance Report
     */
    public getAffiliateRichReportWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateRichReportWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     * Get Affiliate Performance Report
     */
    public getAffiliateRichReport(_options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateRichReport(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     * Get Affiliate Sales Graph Data
     * @param [days] Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateSalesGraphWithHttpInfo(days?: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<StatusMonthlyBreakdown>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateSalesGraphWithHttpInfo(days, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     * Get Affiliate Sales Graph Data
     * @param [days] Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateSalesGraph(days?: number, _options?: PromiseConfigurationOptions): Promise<StatusMonthlyBreakdown> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateSalesGraph(days, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     * Get Affiliate Sales Report
     */
    public getAffiliateSalesReportWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateSalesReportWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     * Get Affiliate Sales Report
     */
    public getAffiliateSalesReport(_options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateSalesReport(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     * Get Affiliate Traffic Graph Data
     * @param [days] Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateTrafficGraphWithHttpInfo(days?: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<MonthlyCounts>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateTrafficGraphWithHttpInfo(days, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     * Get Affiliate Traffic Graph Data
     * @param [days] Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateTrafficGraph(days?: number, _options?: PromiseConfigurationOptions): Promise<MonthlyCounts> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateTrafficGraph(days, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     * List Affiliate Web Traffic Entries
     */
    public getAffiliateWebTrafficWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<AffiliateTrafficRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateWebTrafficWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     * List Affiliate Web Traffic Entries
     */
    public getAffiliateWebTraffic(_options?: PromiseConfigurationOptions): Promise<Array<AffiliateTrafficRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getAffiliateWebTraffic(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
     * Get Shopping Cart Contents
     */
    public getBillingCartWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingCartWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
     * Get Shopping Cart Contents
     */
    public getBillingCart(_options?: PromiseConfigurationOptions): Promise<any> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingCart(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     * Get Credit Card Verification Requirements
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     */
    public getBillingCreditCardVerifyWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingCreditCardVerifyWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     * Get Credit Card Verification Requirements
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     */
    public getBillingCreditCardVerify(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingCreditCardVerify(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
     * Get Invoice Details
     * @param id The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.
     */
    public getBillingInvoiceWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<BillingInvoiceDetail>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingInvoiceWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
     * Get Invoice Details
     * @param id The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.
     */
    public getBillingInvoice(id: number, _options?: PromiseConfigurationOptions): Promise<BillingInvoiceDetail> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingInvoice(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
     * List Account Invoices
     */
    public getBillingInvoicesWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<BillingInvoiceList>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingInvoicesWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
     * List Account Invoices
     */
    public getBillingInvoices(_options?: PromiseConfigurationOptions): Promise<BillingInvoiceList> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingInvoices(observableOptions);
        return result.toPromise();
    }

    /**
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
     * List Prepay Balances
     */
    public getBillingPrePaysWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingPrePaysWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
     * List Prepay Balances
     */
    public getBillingPrePays(_options?: PromiseConfigurationOptions): Promise<any> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getBillingPrePays(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
     * Get Invoices
     * @param [searchString] pass an optional search string for looking up inventory
     * @param [skip] number of records to skip for pagination
     * @param [limit] maximum number of records to return
     */
    public getInvoicesWithHttpInfo(searchString?: string, skip?: number, limit?: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<Invoice>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getInvoicesWithHttpInfo(searchString, skip, limit, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
     * Get Invoices
     * @param [searchString] pass an optional search string for looking up inventory
     * @param [skip] number of records to skip for pagination
     * @param [limit] maximum number of records to return
     */
    public getInvoices(searchString?: string, skip?: number, limit?: number, _options?: PromiseConfigurationOptions): Promise<Array<Invoice>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getInvoices(searchString, skip, limit, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
     * Initiate Payment
     * @param method The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.
     * @param invoices A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.
     */
    public initiatePaymentWithHttpInfo(method: 'cc' | 'paypal' | 'prepay' | 'payssion' | 'payu' | 'ccavenue' | 'cashfree' | 'coinbase' | 'btcpay', invoices: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<InitiatePayment200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.initiatePaymentWithHttpInfo(method, invoices, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
     * Initiate Payment
     * @param method The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.
     * @param invoices A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.
     */
    public initiatePayment(method: 'cc' | 'paypal' | 'prepay' | 'payssion' | 'payu' | 'ccavenue' | 'cashfree' | 'coinbase' | 'btcpay', invoices: string, _options?: PromiseConfigurationOptions): Promise<InitiatePayment200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.initiatePayment(method, invoices, observableOptions);
        return result.toPromise();
    }

    /**
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
     * Submit Credit Card Verification
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     * @param billingVerifyCcRequest
     */
    public postBillingCreditCardVerifyWithHttpInfo(id: number, billingVerifyCcRequest: BillingVerifyCcRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postBillingCreditCardVerifyWithHttpInfo(id, billingVerifyCcRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
     * Submit Credit Card Verification
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     * @param billingVerifyCcRequest
     */
    public postBillingCreditCardVerify(id: number, billingVerifyCcRequest: BillingVerifyCcRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postBillingCreditCardVerify(id, billingVerifyCcRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     * Update Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public updateAccountCreditCardWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<string>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountCreditCardWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     * Update Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public updateAccountCreditCard(id: number, _options?: PromiseConfigurationOptions): Promise<string> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAccountCreditCard(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     * Configure Affiliate Dock Settings
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateDockSetupWithHttpInfo(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAffiliateDockSetupWithHttpInfo(affiliateDockTitle, affiliateDockDescription, referrerCoupon, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     * Configure Affiliate Dock Settings
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateDockSetup(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAffiliateDockSetup(affiliateDockTitle, affiliateDockDescription, referrerCoupon, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     * Configure Affiliate Landing Page
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateLandingPageWithHttpInfo(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAffiliateLandingPageWithHttpInfo(affiliateDockTitle, affiliateDockDescription, referrerCoupon, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     * Configure Affiliate Landing Page
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateLandingPage(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAffiliateLandingPage(affiliateDockTitle, affiliateDockDescription, referrerCoupon, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     * Configure Affiliate Payout Preferences
     * @param [affiliatePaypal]
     * @param [affiliatePaymentMethod]
     */
    public updateAffiliatePaymentSetupWithHttpInfo(affiliatePaypal?: string, affiliatePaymentMethod?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAffiliatePaymentSetupWithHttpInfo(affiliatePaypal, affiliatePaymentMethod, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     * Configure Affiliate Payout Preferences
     * @param [affiliatePaypal]
     * @param [affiliatePaymentMethod]
     */
    public updateAffiliatePaymentSetup(affiliatePaypal?: string, affiliatePaymentMethod?: string, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateAffiliatePaymentSetup(affiliatePaypal, affiliatePaymentMethod, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     * Update Credit Card Details
     * @param id The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.
     */
    public updateBillingCreditCardWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateBillingCreditCardWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     * Update Credit Card Details
     * @param id The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.
     */
    public updateBillingCreditCard(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateBillingCreditCard(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     * Update Default Payment Method
     * @param billingPaymentMethodRequest
     */
    public updateBillingPaymentMethodWithHttpInfo(billingPaymentMethodRequest: BillingPaymentMethodRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateBillingPaymentMethodWithHttpInfo(billingPaymentMethodRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     * Update Default Payment Method
     * @param billingPaymentMethodRequest
     */
    public updateBillingPaymentMethod(billingPaymentMethodRequest: BillingPaymentMethodRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateBillingPaymentMethod(billingPaymentMethodRequest, observableOptions);
        return result.toPromise();
    }


}



import { ObservableDNSApi } from './ObservableAPI';

import { DNSApiRequestFactory, DNSApiResponseProcessor} from "../apis/DNSApi";
export class PromiseDNSApi {
    private api: ObservableDNSApi

    public constructor(
        configuration: Configuration,
        requestFactory?: DNSApiRequestFactory,
        responseProcessor?: DNSApiResponseProcessor
    ) {
        this.api = new ObservableDNSApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.
     * Create DNS Domain
     * @param domain The domain name.
     * @param ip IP Address to point the domain to.
     */
    public addDnsDomainWithHttpInfo(domain: string, ip: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDnsDomainWithHttpInfo(domain, ip, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.
     * Create DNS Domain
     * @param domain The domain name.
     * @param ip IP Address to point the domain to.
     */
    public addDnsDomain(domain: string, ip: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDnsDomain(domain, ip, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
     * Add DNS Record to Domain
     * @param id The DNS Domain ID.
     * @param name Name part of record
     * @param type
     * @param content Content of record
     * @param [ttl] Time-to-live
     * @param [prio] Priority
     */
    public addDnsRecordWithHttpInfo(id: string, name: string, type: DnsRecordType, content: string, ttl?: number, prio?: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDnsRecordWithHttpInfo(id, name, type, content, ttl, prio, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
     * Add DNS Record to Domain
     * @param id The DNS Domain ID.
     * @param name Name part of record
     * @param type
     * @param content Content of record
     * @param [ttl] Time-to-live
     * @param [prio] Priority
     */
    public addDnsRecord(id: string, name: string, type: DnsRecordType, content: string, ttl?: number, prio?: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDnsRecord(id, name, type, content, ttl, prio, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     * Delete DNS Domain
     * @param id The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public deleteDnsDomainWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDnsDomainWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     * Delete DNS Domain
     * @param id The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public deleteDnsDomain(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDnsDomain(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
     * Delete DNS Record
     * @param domainId The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * @param recordId The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     */
    public deleteDnsRecordWithHttpInfo(domainId: number, recordId: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDnsRecordWithHttpInfo(domainId, recordId, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
     * Delete DNS Record
     * @param domainId The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * @param recordId The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     */
    public deleteDnsRecord(domainId: number, recordId: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDnsRecord(domainId, recordId, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
     * List Domain DNS Records
     * @param id The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public getDnsDomainWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<DnsRecord>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDnsDomainWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
     * List Domain DNS Records
     * @param id The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public getDnsDomain(id: number, _options?: PromiseConfigurationOptions): Promise<Array<DnsRecord>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDnsDomain(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
     * List DNS Domains
     */
    public getDnsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<DnsListItem>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDnsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
     * List DNS Domains
     */
    public getDnsList(_options?: PromiseConfigurationOptions): Promise<Array<DnsListItem>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDnsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     * Update DNS Record
     * @param domainId The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * @param recordId The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     * @param [name]
     * @param [type]
     * @param [content]
     * @param [ttl]
     * @param [prio]
     * @param [disabled]
     * @param [ordername]
     * @param [auth]
     */
    public updateDnsRecordWithHttpInfo(domainId: number, recordId: number, name?: string, type?: DnsRecordType, content?: string, ttl?: string, prio?: string, disabled?: string, ordername?: string, auth?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDnsRecordWithHttpInfo(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     * Update DNS Record
     * @param domainId The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * @param recordId The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     * @param [name]
     * @param [type]
     * @param [content]
     * @param [ttl]
     * @param [prio]
     * @param [disabled]
     * @param [ordername]
     * @param [auth]
     */
    public updateDnsRecord(domainId: number, recordId: number, name?: string, type?: DnsRecordType, content?: string, ttl?: string, prio?: string, disabled?: string, ordername?: string, auth?: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth, observableOptions);
        return result.toPromise();
    }


}



import { ObservableDomainsApi } from './ObservableAPI';

import { DomainsApiRequestFactory, DomainsApiResponseProcessor} from "../apis/DomainsApi";
export class PromiseDomainsApi {
    private api: ObservableDomainsApi

    public constructor(
        configuration: Configuration,
        requestFactory?: DomainsApiRequestFactory,
        responseProcessor?: DomainsApiResponseProcessor
    ) {
        this.api = new ObservableDomainsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
     * Place Domain Order
     */
    public addDomainWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDomainWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
     * Place Domain Order
     */
    public addDomain(_options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDomain(observableOptions);
        return result.toPromise();
    }

    /**
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     * Add Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainDnssecRequest
     */
    public addDomainDnssecWithHttpInfo(id: number, domainDnssecRequest: DomainDnssecRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDomainDnssecWithHttpInfo(id, domainDnssecRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     * Add Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainDnssecRequest
     */
    public addDomainDnssec(id: number, domainDnssecRequest: DomainDnssecRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDomainDnssec(id, domainDnssecRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
     * Add Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPostRequest
     */
    public addDomainNameserverWithHttpInfo(id: number, domainNameserverPostRequest: DomainNameserverPostRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDomainNameserverWithHttpInfo(id, domainNameserverPostRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
     * Add Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPostRequest
     */
    public addDomainNameserver(id: number, domainNameserverPostRequest: DomainNameserverPostRequest, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addDomainNameserver(id, domainNameserverPostRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     * Cancel Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public cancelDomainWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<CancelDomain200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.cancelDomainWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     * Cancel Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public cancelDomain(id: number, _options?: PromiseConfigurationOptions): Promise<CancelDomain200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.cancelDomain(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     * Remove Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param action Set to &#x60;delete&#x60; to remove all DNSSEC records.
     */
    public deleteDomainDnssecWithHttpInfo(id: number, action: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDomainDnssecWithHttpInfo(id, action, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     * Remove Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param action Set to &#x60;delete&#x60; to remove all DNSSEC records.
     */
    public deleteDomainDnssec(id: number, action: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDomainDnssec(id, action, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
     * Delete Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param index The index of the registered nameserver from the registered nameservers list to delete.  
     */
    public deleteDomainNameserverWithHttpInfo(id: number, index: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDomainNameserverWithHttpInfo(id, index, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
     * Delete Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param index The index of the registered nameserver from the registered nameservers list to delete.  
     */
    public deleteDomainNameserver(id: number, index: number, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteDomainNameserver(id, index, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     * Get Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainContactWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<DomainContactDetails>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainContactWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     * Get Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainContact(id: number, _options?: PromiseConfigurationOptions): Promise<DomainContactDetails> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainContact(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     * Get Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainDnssecWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<DomainDnssecRecords>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainDnssecWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     * Get Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainDnssec(id: number, _options?: PromiseConfigurationOptions): Promise<DomainDnssecRecords> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainDnssec(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
     * Get Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Domain>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
     * Get Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInfo(id: number, _options?: PromiseConfigurationOptions): Promise<Domain> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     * Get Domain Invoices
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     * Get Domain Invoices
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
     * Lookup Domain Availability and Pricing
     * @param name The full domain name to look up (for example &#x60;example.com&#x60;).
     */
    public getDomainLookupWithHttpInfo(name: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<DomainLookupResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainLookupWithHttpInfo(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
     * Lookup Domain Availability and Pricing
     * @param name The full domain name to look up (for example &#x60;example.com&#x60;).
     */
    public getDomainLookup(name: string, _options?: PromiseConfigurationOptions): Promise<DomainLookupResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainLookup(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     * List Registered Nameservers
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainNameserversWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<DomainNameserverGetResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainNameserversWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     * List Registered Nameservers
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainNameservers(id: number, _options?: PromiseConfigurationOptions): Promise<DomainNameserverGetResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainNameservers(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
     * Get Domain Order Fields
     * @param domain The fully qualified domain name (e.g. &#x60;example.com&#x60;).
     * @param regType The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.
     */
    public getDomainOrderFieldsWithHttpInfo(domain: string, regType: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainOrderFieldsWithHttpInfo(domain, regType, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
     * Get Domain Order Fields
     * @param domain The fully qualified domain name (e.g. &#x60;example.com&#x60;).
     * @param regType The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.
     */
    public getDomainOrderFields(domain: string, regType: string, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainOrderFields(domain, regType, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     * Get Domain Order Search Results
     * @param domain The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).
     */
    public getDomainOrderSearchResultsWithHttpInfo(domain: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainOrderSearchResultsWithHttpInfo(domain, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     * Get Domain Order Search Results
     * @param domain The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).
     */
    public getDomainOrderSearchResults(domain: string, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainOrderSearchResults(domain, observableOptions);
        return result.toPromise();
    }

    /**
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     * Start Domain Renewal Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainRenewalWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainRenewalWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     * Start Domain Renewal Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainRenewal(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainRenewal(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
     * Search Domain Suggestions
     * @param name The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).
     */
    public getDomainSearchWithHttpInfo(name: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<DomainSearchResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainSearchWithHttpInfo(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
     * Search Domain Suggestions
     * @param name The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).
     */
    public getDomainSearch(name: string, _options?: PromiseConfigurationOptions): Promise<DomainSearchResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainSearch(name, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
     * Start Domain Transfer Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainTransferWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainTransferWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
     * Start Domain Transfer Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainTransfer(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainTransfer(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     * Get Whois Privacy Status
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainWhoisPrivacyWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainWhoisPrivacyWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     * Get Whois Privacy Status
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainWhoisPrivacy(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainWhoisPrivacy(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
     * List Domain Orders
     */
    public getDomainsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<DomainRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
     * List Domain Orders
     */
    public getDomainsList(_options?: PromiseConfigurationOptions): Promise<Array<DomainRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     * Resend Domain Welcome Email
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainsWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainsWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     * Resend Domain Welcome Email
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainsWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getDomainsWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
     * Get Domain Ordering Information
     */
    public getNewDomainWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<DomainOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewDomainWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
     * Get Domain Ordering Information
     */
    public getNewDomain(_options?: PromiseConfigurationOptions): Promise<DomainOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewDomain(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
     * Validate Domain Order
     */
    public patchDomainsWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.patchDomainsWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
     * Validate Domain Order
     */
    public patchDomains(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.patchDomains(observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
     * Request Domain Renewal
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainRenewalWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postDomainRenewalWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
     * Request Domain Renewal
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainRenewal(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postDomainRenewal(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
     * Request Domain Transfer
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainTransferWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postDomainTransferWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
     * Request Domain Transfer
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainTransfer(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postDomainTransfer(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     * Domain Order Search
     */
    public putDomainsWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putDomainsWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     * Domain Order Search
     */
    public putDomains(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putDomains(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     * Update Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainContactDetails
     */
    public updateDomainContactWithHttpInfo(id: number, domainContactDetails: DomainContactDetails, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainContactWithHttpInfo(id, domainContactDetails, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     * Update Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainContactDetails
     */
    public updateDomainContact(id: number, domainContactDetails: DomainContactDetails, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainContact(id, domainContactDetails, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     * Update Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public updateDomainInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     * Update Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public updateDomainInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     * Replace Nameserver Set
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPutRequest
     */
    public updateDomainNameserversWithHttpInfo(id: number, domainNameserverPutRequest: DomainNameserverPutRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainNameserversWithHttpInfo(id, domainNameserverPutRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     * Replace Nameserver Set
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPutRequest
     */
    public updateDomainNameservers(id: number, domainNameserverPutRequest: DomainNameserverPutRequest, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainNameservers(id, domainNameserverPutRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
     * Update Whois Privacy
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainWhoisPrivacyRequest
     */
    public updateDomainWhoisPrivacyWithHttpInfo(id: number, domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainWhoisPrivacyWithHttpInfo(id, domainWhoisPrivacyRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
     * Update Whois Privacy
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainWhoisPrivacyRequest
     */
    public updateDomainWhoisPrivacy(id: number, domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateDomainWhoisPrivacy(id, domainWhoisPrivacyRequest, observableOptions);
        return result.toPromise();
    }


}



import { ObservableFloatingIPsApi } from './ObservableAPI';

import { FloatingIPsApiRequestFactory, FloatingIPsApiResponseProcessor} from "../apis/FloatingIPsApi";
export class PromiseFloatingIPsApi {
    private api: ObservableFloatingIPsApi

    public constructor(
        configuration: Configuration,
        requestFactory?: FloatingIPsApiRequestFactory,
        responseProcessor?: FloatingIPsApiResponseProcessor
    ) {
        this.api = new ObservableFloatingIPsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
     * Place Floating IP Order
     */
    public addFloatingIpWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addFloatingIpWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
     * Place Floating IP Order
     */
    public addFloatingIp(_options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addFloatingIp(observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public floatingIpsCancelWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<FloatingIpsCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.floatingIpsCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public floatingIpsCancel(id: number, _options?: PromiseConfigurationOptions): Promise<FloatingIpsCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.floatingIpsCancel(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     * View Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     * View Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<any> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this Floating IP service.
     * Get Floating IP Invoices
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this Floating IP service.
     * Get Floating IP Invoices
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all Floating IP services on the account with their current status and assignment details.
     * List Floating IPs
     */
    public getFloatingIpsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<any>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all Floating IP services on the account with their current status and assignment details.
     * List Floating IPs
     */
    public getFloatingIpsList(_options?: PromiseConfigurationOptions): Promise<Array<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     * Resend Floating IPs Welcome Email
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpsWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpsWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     * Resend Floating IPs Welcome Email
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpsWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getFloatingIpsWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available options and pricing for ordering a new Floating IP.
     * Get Floating IP Ordering Information
     */
    public getNewFloatingIpWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewFloatingIpWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available options and pricing for ordering a new Floating IP.
     * Get Floating IP Ordering Information
     */
    public getNewFloatingIp(_options?: PromiseConfigurationOptions): Promise<any> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewFloatingIp(observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
     * Change Floating IP Target
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * @param ip IP Address
     */
    public postFloatingIpsChangeIpWithHttpInfo(id: number, ip: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postFloatingIpsChangeIpWithHttpInfo(id, ip, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
     * Change Floating IP Target
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * @param ip IP Address
     */
    public postFloatingIpsChangeIp(id: number, ip: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postFloatingIpsChangeIp(id, ip, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Floating IP Order
     */
    public putFloatingIpsWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putFloatingIpsWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Floating IP Order
     */
    public putFloatingIps(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putFloatingIps(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     * Update Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public updateFloatingIpInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateFloatingIpInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     * Update Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public updateFloatingIpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateFloatingIpInfo(id, observableOptions);
        return result.toPromise();
    }


}



import { ObservableLicensesApi } from './ObservableAPI';

import { LicensesApiRequestFactory, LicensesApiResponseProcessor} from "../apis/LicensesApi";
export class PromiseLicensesApi {
    private api: ObservableLicensesApi

    public constructor(
        configuration: Configuration,
        requestFactory?: LicensesApiRequestFactory,
        responseProcessor?: LicensesApiResponseProcessor
    ) {
        this.api = new ObservableLicensesApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
     * Place License Order
     */
    public addLicenseWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addLicenseWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
     * Place License Order
     */
    public addLicense(_options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addLicense(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     * Get License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<License>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     * Get License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInfo(id: number, _options?: PromiseConfigurationOptions): Promise<License> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this license service.
     * Get License Invoices
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this license service.
     * Get License Invoices
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all software license services on the account with their current status and IP assignments.
     * List Licenses
     */
    public getLicenseListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<LicenseRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all software license services on the account with their current status and IP assignments.
     * List Licenses
     */
    public getLicenseList(_options?: PromiseConfigurationOptions): Promise<Array<LicenseRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseList(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
     * Get License Order Information for Category
     * @param catTag The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.
     */
    public getLicenseOrderCatTagInfoWithHttpInfo(catTag: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseOrderCatTagInfoWithHttpInfo(catTag, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
     * Get License Order Information for Category
     * @param catTag The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.
     */
    public getLicenseOrderCatTagInfo(catTag: string, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicenseOrderCatTagInfo(catTag, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     * Resend License Welcome Email
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicensesWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicensesWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     * Resend License Welcome Email
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicensesWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLicensesWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available license types, categories, and pricing for ordering a new license.
     * Get License Order Information
     */
    public getNewLicenseWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<LicensesOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewLicenseWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available license types, categories, and pricing for ordering a new license.
     * Get License Order Information
     */
    public getNewLicense(_options?: PromiseConfigurationOptions): Promise<LicensesOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewLicense(observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public licensesCancelWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<LicensesCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.licensesCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public licensesCancel(id: number, _options?: PromiseConfigurationOptions): Promise<LicensesCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.licensesCancel(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
     * Change License IP
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * @param ipObject
     */
    public postLicenseChangeIpWithHttpInfo(id: number, ipObject: IpObject, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postLicenseChangeIpWithHttpInfo(id, ipObject, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
     * Change License IP
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * @param ipObject
     */
    public postLicenseChangeIp(id: number, ipObject: IpObject, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postLicenseChangeIp(id, ipObject, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     * Validate License Order
     */
    public putLicensesWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putLicensesWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     * Validate License Order
     */
    public putLicenses(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putLicenses(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a license service such as its assigned IP.
     * Update License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public updateLicenseInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateLicenseInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a license service such as its assigned IP.
     * Update License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public updateLicenseInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateLicenseInfo(id, observableOptions);
        return result.toPromise();
    }


}



import { ObservableMailApi } from './ObservableAPI';

import { MailApiRequestFactory, MailApiResponseProcessor} from "../apis/MailApi";
export class PromiseMailApi {
    private api: ObservableMailApi

    public constructor(
        configuration: Configuration,
        requestFactory?: MailApiRequestFactory,
        responseProcessor?: MailApiResponseProcessor
    ) {
        this.api = new ObservableMailApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place Mail Order
     */
    public addMailWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addMailWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place Mail Order
     */
    public addMail(_options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addMail(observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     * Create Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param denyRuleNew These are the fields needed to create a new email deny rule.
     */
    public addRuleWithHttpInfo(id: number, denyRuleNew: DenyRuleNew, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addRuleWithHttpInfo(id, denyRuleNew, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     * Create Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param denyRuleNew These are the fields needed to create a new email deny rule.
     */
    public addRule(id: number, denyRuleNew: DenyRuleNew, _options?: PromiseConfigurationOptions): Promise<GenericResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addRule(id, denyRuleNew, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     * Create Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertRequest
     */
    public createMailAlertWithHttpInfo(id: number, mailAlertRequest: MailAlertRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createMailAlertWithHttpInfo(id, mailAlertRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     * Create Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertRequest
     */
    public createMailAlert(id: number, mailAlertRequest: MailAlertRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createMailAlert(id, mailAlertRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes an existing alert definition for the mail service.
     * Delete Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param alertId Alert ID to delete.
     */
    public deleteMailAlertWithHttpInfo(id: number, alertId: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteMailAlertWithHttpInfo(id, alertId, observableOptions);
        return result.toPromise();
    }

    /**
     * Deletes an existing alert definition for the mail service.
     * Delete Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param alertId Alert ID to delete.
     */
    public deleteMailAlert(id: number, alertId: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteMailAlert(id, alertId, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a deny rule from the mail service.
     * Delete Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param rule The ID of the Rules entry.
     */
    public deleteRuleWithHttpInfo(id: number, rule: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteRuleWithHttpInfo(id, rule, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes a deny rule from the mail service.
     * Delete Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param rule The ID of the Rules entry.
     */
    public deleteRule(id: number, rule: string, _options?: PromiseConfigurationOptions): Promise<GenericResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteRule(id, rule, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an email address from the mail service\'s block lists.
     * Remove Email Address from Block List
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [email] an email address
     */
    public delistBlockWithHttpInfo(id: number, email?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.delistBlockWithHttpInfo(id, email, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an email address from the mail service\'s block lists.
     * Remove Email Address from Block List
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [email] an email address
     */
    public delistBlock(id: number, email?: string, _options?: PromiseConfigurationOptions): Promise<GenericResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.delistBlock(id, email, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     * List Mail Alerts
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailAlertsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailAlertsResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailAlertsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     * List Mail Alerts
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailAlerts(id: number, _options?: PromiseConfigurationOptions): Promise<MailAlertsResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailAlerts(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Displays a listing of the blocked email addresses
     * List Blocked Email Addresses
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailBlocksWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailBlocks>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailBlocksWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Displays a listing of the blocked email addresses
     * List Blocked Email Addresses
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailBlocks(id: number, _options?: PromiseConfigurationOptions): Promise<MailBlocks> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailBlocks(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     * Get Delist Status
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDelistWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailDelistResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailDelistWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     * Get Delist Status
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDelist(id: number, _options?: PromiseConfigurationOptions): Promise<MailDelistResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailDelist(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     * Get Deliverability Metrics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDeliverabilityWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailDeliverabilityResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailDeliverabilityWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     * Get Deliverability Metrics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDeliverability(id: number, _options?: PromiseConfigurationOptions): Promise<MailDeliverabilityResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailDeliverability(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     * Get Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailSchema>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     * Get Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInfo(id: number, _options?: PromiseConfigurationOptions): Promise<MailSchema> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     * Get Mail Invoices
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     * Get Mail Invoices
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
     * List Mail Orders
     */
    public getMailListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<MailRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
     * List Mail Orders
     */
    public getMailList(_options?: PromiseConfigurationOptions): Promise<Array<MailRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailList(observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     * Resend Mail Welcome Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     * Resend Mail Welcome Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMailWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     * Get Mail Ordering Information
     */
    public getNewMailWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<MailOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewMailWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     * Get Mail Ordering Information
     */
    public getNewMail(_options?: PromiseConfigurationOptions): Promise<MailOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewMail(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a listing of all the deny block rules configured for this mail service.
     * List Deny Rules
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getRulesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<DenyRuleRecord>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getRulesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a listing of all the deny block rules configured for this mail service.
     * List Deny Rules
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getRules(id: number, _options?: PromiseConfigurationOptions): Promise<Array<DenyRuleRecord>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getRules(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     * Get Mail Usage Statistics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [time] The timeframe for the statistics.
     */
    public getStatsWithHttpInfo(id: number, time?: 'all' | 'billing' | 'month' | '7d' | '24h' | '1d' | '1h', _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailStatsType>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getStatsWithHttpInfo(id, time, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     * Get Mail Usage Statistics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [time] The timeframe for the statistics.
     */
    public getStats(id: number, time?: 'all' | 'billing' | 'month' | '7d' | '24h' | '1d' | '1h', _options?: PromiseConfigurationOptions): Promise<MailStatsType> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getStats(id, time, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Mail
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public mailCancelWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.mailCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Mail
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public mailCancel(id: number, _options?: PromiseConfigurationOptions): Promise<MailCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.mailCancel(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
     * Delist a Blocked Sender
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailDelistRequest
     */
    public postMailDelistWithHttpInfo(id: number, mailDelistRequest: MailDelistRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postMailDelistWithHttpInfo(id, mailDelistRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
     * Delist a Blocked Sender
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailDelistRequest
     */
    public postMailDelist(id: number, mailDelistRequest: MailDelistRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postMailDelist(id, mailDelistRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     * Validate Mail Order
     */
    public putMailWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putMailWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     * Validate Mail Order
     */
    public putMail(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putMail(observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
     * Reset Mail Password
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public resetMailPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.resetMailPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
     * Reset Mail Password
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public resetMailPassword(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.resetMailPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
     * Send Email with Advanced Options
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMailAdv
     */
    public sendAdvMailWithHttpInfo(id: number, sendMailAdv: SendMailAdv, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.sendAdvMailWithHttpInfo(id, sendMailAdv, observableOptions);
        return result.toPromise();
    }

    /**
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
     * Send Email with Advanced Options
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMailAdv
     */
    public sendAdvMail(id: number, sendMailAdv: SendMailAdv, _options?: PromiseConfigurationOptions): Promise<GenericResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.sendAdvMail(id, sendMailAdv, observableOptions);
        return result.toPromise();
    }

    /**
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
     * Send Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMail
     */
    public sendMailWithHttpInfo(id: number, sendMail: SendMail, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.sendMailWithHttpInfo(id, sendMail, observableOptions);
        return result.toPromise();
    }

    /**
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
     * Send Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMail
     */
    public sendMail(id: number, sendMail: SendMail, _options?: PromiseConfigurationOptions): Promise<GenericResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.sendMail(id, sendMail, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
     * Update Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertUpdateRequest
     */
    public updateMailAlertWithHttpInfo(id: number, mailAlertUpdateRequest: MailAlertUpdateRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateMailAlertWithHttpInfo(id, mailAlertUpdateRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
     * Update Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertUpdateRequest
     */
    public updateMailAlert(id: number, mailAlertUpdateRequest: MailAlertUpdateRequest, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateMailAlert(id, mailAlertUpdateRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates mail service metadata for the order, such as stored settings or account details.
     * Update Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public updateMailInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateMailInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates mail service metadata for the order, such as stored settings or account details.
     * Update Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public updateMailInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateMailInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
     * View Mail Log
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [id2] The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;.
     * @param [origin] Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address.
     * @param [mx] Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response.
     * @param [_from] Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;.
     * @param [to] Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved.
     * @param [subject] Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response.
     * @param [mailid] Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;.
     * @param [messageId] Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match. The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;.
     * @param [replyto] Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set.
     * @param [headerfrom] Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address.
     * @param [delivered] Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status.
     * @param [skip] Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip).
     * @param [limit] Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages.
     * @param [startDate] Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included.
     * @param [endDate] Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;. Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included.
     * @param [sort] Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order).
     * @param [dir] Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first.
     * @param [groupby] Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode.
     */
    public viewMailLogWithHttpInfo(id: number, id2?: number, origin?: string, mx?: string, _from?: string, to?: string, subject?: string, mailid?: string, messageId?: string, replyto?: string, headerfrom?: string, delivered?: 0 | 1, skip?: number, limit?: number, startDate?: ViewMailLogStartDateParameter, endDate?: ViewMailLogStartDateParameter, sort?: 'time', dir?: 'asc' | 'desc', groupby?: 'message' | 'recipient', _options?: PromiseConfigurationOptions): Promise<HttpInfo<MailLog>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.viewMailLogWithHttpInfo(id, id2, origin, mx, _from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
     * View Mail Log
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [id2] The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;.
     * @param [origin] Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address.
     * @param [mx] Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response.
     * @param [_from] Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;.
     * @param [to] Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved.
     * @param [subject] Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response.
     * @param [mailid] Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;.
     * @param [messageId] Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match. The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;.
     * @param [replyto] Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set.
     * @param [headerfrom] Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address.
     * @param [delivered] Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status.
     * @param [skip] Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip).
     * @param [limit] Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages.
     * @param [startDate] Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included.
     * @param [endDate] Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;. Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included.
     * @param [sort] Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order).
     * @param [dir] Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first.
     * @param [groupby] Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode.
     */
    public viewMailLog(id: number, id2?: number, origin?: string, mx?: string, _from?: string, to?: string, subject?: string, mailid?: string, messageId?: string, replyto?: string, headerfrom?: string, delivered?: 0 | 1, skip?: number, limit?: number, startDate?: ViewMailLogStartDateParameter, endDate?: ViewMailLogStartDateParameter, sort?: 'time', dir?: 'asc' | 'desc', groupby?: 'message' | 'recipient', _options?: PromiseConfigurationOptions): Promise<MailLog> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.viewMailLog(id, id2, origin, mx, _from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby, observableOptions);
        return result.toPromise();
    }


}



import { ObservablePublicApi } from './ObservableAPI';

import { PublicApiRequestFactory, PublicApiResponseProcessor} from "../apis/PublicApi";
export class PromisePublicApi {
    private api: ObservablePublicApi

    public constructor(
        configuration: Configuration,
        requestFactory?: PublicApiRequestFactory,
        responseProcessor?: PublicApiResponseProcessor
    ) {
        this.api = new ObservablePublicApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     * Get Captcha Challenge
     */
    public getCaptchaWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<CaptchaResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getCaptchaWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     * Get Captcha Challenge
     */
    public getCaptcha(_options?: PromiseConfigurationOptions): Promise<CaptchaResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getCaptcha(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     * Get Countries
     * @param [fetchBy] Get countries by iso2 or iso3 or numcode
     */
    public getCountriesWithHttpInfo(fetchBy?: 'iso2' | 'iso3' | 'numcode', _options?: PromiseConfigurationOptions): Promise<HttpInfo<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getCountriesWithHttpInfo(fetchBy, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     * Get Countries
     * @param [fetchBy] Get countries by iso2 or iso3 or numcode
     */
    public getCountries(fetchBy?: 'iso2' | 'iso3' | 'numcode', _options?: PromiseConfigurationOptions): Promise<any> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getCountries(fetchBy, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns metadata about the API server\'s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     * Get Server Info
     */
    public getInfoWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServicesInfo>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getInfoWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns metadata about the API server\'s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     * Get Server Info
     */
    public getInfo(_options?: PromiseConfigurationOptions): Promise<ServicesInfo> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Gets the various pieces of information useful for generating a login page.
     * Get Login Info
     */
    public getLoginInfoWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<LoginInfo>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLoginInfoWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Gets the various pieces of information useful for generating a login page.
     * Get Login Info
     */
    public getLoginInfo(_options?: PromiseConfigurationOptions): Promise<LoginInfo> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getLoginInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServersWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<BuyItNowList>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMPServersWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServers(_options?: PromiseConfigurationOptions): Promise<BuyItNowList> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMPServers(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
     * Get OAuth Redirect URL
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     */
    public getOauthRedirectWithHttpInfo(provider: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GetOauthRedirect200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getOauthRedirectWithHttpInfo(provider, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
     * Get OAuth Redirect URL
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     */
    public getOauthRedirect(provider: string, _options?: PromiseConfigurationOptions): Promise<GetOauthRedirect200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getOauthRedirect(provider, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
     * Get Available Timezones
     */
    public getTimezonesWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<string>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getTimezonesWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
     * Get Available Timezones
     */
    public getTimezones(_options?: PromiseConfigurationOptions): Promise<Array<string>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getTimezones(observableOptions);
        return result.toPromise();
    }

    /**
     * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
     * Complete OAuth Two-Factor Verification
     * @param patchOauthTwoFactorRequest
     */
    public patchOauthTwoFactorWithHttpInfo(patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<PatchOauthTwoFactor200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.patchOauthTwoFactorWithHttpInfo(patchOauthTwoFactorRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
     * Complete OAuth Two-Factor Verification
     * @param patchOauthTwoFactorRequest
     */
    public patchOauthTwoFactor(patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest, _options?: PromiseConfigurationOptions): Promise<PatchOauthTwoFactor200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.patchOauthTwoFactor(patchOauthTwoFactorRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Performs a single ping/pong request to let you know if the server is up.
     * Ping Server
     */
    public pingServerWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<string>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.pingServerWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Performs a single ping/pong request to let you know if the server is up.
     * Ping Server
     */
    public pingServer(_options?: PromiseConfigurationOptions): Promise<string> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.pingServer(observableOptions);
        return result.toPromise();
    }

    /**
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
     * OAuth Callback
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     * @param [postOauthCallbackRequest]
     */
    public postOauthCallbackWithHttpInfo(provider: string, postOauthCallbackRequest?: PostOauthCallbackRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<PostOauthCallback200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postOauthCallbackWithHttpInfo(provider, postOauthCallbackRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
     * OAuth Callback
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     * @param [postOauthCallbackRequest]
     */
    public postOauthCallback(provider: string, postOauthCallbackRequest?: PostOauthCallbackRequest, _options?: PromiseConfigurationOptions): Promise<PostOauthCallback200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postOauthCallback(provider, postOauthCallbackRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
     * Submit Login Information
     * @param login
     * @param passwd
     * @param [remember]
     * @param [gRecaptchaResponse]
     * @param [tfa] Two Factor Authentication Response.
     */
    public submitLoginWithHttpInfo(login: string, passwd: string, remember?: string, gRecaptchaResponse?: LoginSubmissionExampleGRecaptchaResponse, tfa?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<LoginSuccessResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.submitLoginWithHttpInfo(login, passwd, remember, gRecaptchaResponse, tfa, observableOptions);
        return result.toPromise();
    }

    /**
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
     * Submit Login Information
     * @param login
     * @param passwd
     * @param [remember]
     * @param [gRecaptchaResponse]
     * @param [tfa] Two Factor Authentication Response.
     */
    public submitLogin(login: string, passwd: string, remember?: string, gRecaptchaResponse?: LoginSubmissionExampleGRecaptchaResponse, tfa?: string, _options?: PromiseConfigurationOptions): Promise<LoginSuccessResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new account in our system using the provided information.
     * Submit Signup Information
     * @param [loginSubmissionExample]
     */
    public submitSignupWithHttpInfo(loginSubmissionExample?: LoginSubmissionExample, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.submitSignupWithHttpInfo(loginSubmissionExample, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new account in our system using the provided information.
     * Submit Signup Information
     * @param [loginSubmissionExample]
     */
    public submitSignup(loginSubmissionExample?: LoginSubmissionExample, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.submitSignup(loginSubmissionExample, observableOptions);
        return result.toPromise();
    }


}



import { ObservableQuickServersApi } from './ObservableAPI';

import { QuickServersApiRequestFactory, QuickServersApiResponseProcessor} from "../apis/QuickServersApi";
export class PromiseQuickServersApi {
    private api: ObservableQuickServersApi

    public constructor(
        configuration: Configuration,
        requestFactory?: QuickServersApiRequestFactory,
        responseProcessor?: QuickServersApiResponseProcessor
    ) {
        this.api = new ObservableQuickServersApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place QuickServer Order
     */
    public addQsWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addQsWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place QuickServer Order
     */
    public addQs(_options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addQs(observableOptions);
        return result.toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
     * Delete QuickServer Backup
     * @param id QuickServer ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public deleteQsBackupWithHttpInfo(id: number, file: string, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteQsBackupWithHttpInfo(id, file, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
     * Delete QuickServer Backup
     * @param id QuickServer ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public deleteQsBackup(id: number, file: string, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteQsBackup(id, file, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     * Block QuickServer SMTP
     * @param id QuickServer ID number.
     */
    public doQsBlockSmtpWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsBlockSmtpWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     * Block QuickServer SMTP
     * @param id QuickServer ID number.
     */
    public doQsBlockSmtp(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsBlockSmtp(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables the virtual CD drive for the QuickServer.
     * Disable CD Drive
     * @param id QuickServer ID number.
     */
    public doQsDisableCdWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsDisableCdWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables the virtual CD drive for the QuickServer.
     * Disable CD Drive
     * @param id QuickServer ID number.
     */
    public doQsDisableCd(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsDisableCd(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables disk quota enforcement for the QuickServer.
     * Disable Quotas
     * @param id QuickServer ID number.
     */
    public doQsDisableQuotaWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsDisableQuotaWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables disk quota enforcement for the QuickServer.
     * Disable Quotas
     * @param id QuickServer ID number.
     */
    public doQsDisableQuota(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsDisableQuota(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Ejects the virtual CD from the QuickServer\'s CD drive.
     * Eject CD Drive
     * @param id QuickServer ID number.
     */
    public doQsEjectCdWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsEjectCdWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Ejects the virtual CD from the QuickServer\'s CD drive.
     * Eject CD Drive
     * @param id QuickServer ID number.
     */
    public doQsEjectCd(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsEjectCd(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables disk quota enforcement for the QuickServer.
     * Enable Quotas
     * @param id QuickServer ID number.
     */
    public doQsEnableQuotaWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsEnableQuotaWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables disk quota enforcement for the QuickServer.
     * Enable Quotas
     * @param id QuickServer ID number.
     */
    public doQsEnableQuota(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsEnableQuota(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Restarts the QuickServer. The server will be shut down and started again.
     * Restart QuickServer
     * @param id QuickServer ID number.
     */
    public doQsRestartWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsRestartWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Restarts the QuickServer. The server will be shut down and started again.
     * Restart QuickServer
     * @param id QuickServer ID number.
     */
    public doQsRestart(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsRestart(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers on the QuickServer.
     * Start QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStartWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsStartWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers on the QuickServer.
     * Start QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStart(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsStart(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers off the QuickServer.
     * Stop QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStopWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsStopWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers off the QuickServer.
     * Stop QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStop(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doQsStop(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
     * Download QuickServer Backup
     * @param id QuickServer ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public downloadQsBackupWithHttpInfo(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<HttpInfo<DownloadQsBackup200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.downloadQsBackupWithHttpInfo(id, downloadQsBackupRequest, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
     * Download QuickServer Backup
     * @param id QuickServer ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public downloadQsBackup(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<DownloadQsBackup200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.downloadQsBackup(id, downloadQsBackupRequest, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     * Get QuickServer Ordering Information
     */
    public getNewQsWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<QuickserverOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewQsWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     * Get QuickServer Ordering Information
     */
    public getNewQs(_options?: PromiseConfigurationOptions): Promise<QuickserverOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewQs(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
     * List QuickServer Backups
     * @param id QuickServer ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public getQsBackupsWithHttpInfo(id: number, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<HttpInfo<VpsBackupRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsBackupsWithHttpInfo(id, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
     * List QuickServer Backups
     * @param id QuickServer ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public getQsBackups(id: number, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<VpsBackupRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsBackups(id, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves the current hostname and any validation requirements for changing it.
     * Get QuickServer Hostname
     * @param id QuickServer ID number
     */
    public getQsChangeHostnameWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeHostnameWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves the current hostname and any validation requirements for changing it.
     * Get QuickServer Hostname
     * @param id QuickServer ID number
     */
    public getQsChangeHostname(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeHostname(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves instructions or metadata needed to reset the root password.
     * Get Change Root Password Info
     * @param id QuickServer ID number
     */
    public getQsChangeRootPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeRootPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves instructions or metadata needed to reset the root password.
     * Get Change Root Password Info
     * @param id QuickServer ID number
     */
    public getQsChangeRootPassword(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeRootPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the QuickServer.
     * Get Timezone Info
     * @param id QuickServer ID number
     */
    public getQsChangeTimezoneWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<string>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeTimezoneWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the QuickServer.
     * Get Timezone Info
     * @param id QuickServer ID number
     */
    public getQsChangeTimezone(id: number, _options?: PromiseConfigurationOptions): Promise<Array<string>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeTimezone(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     * Webuzo Change Pass Info
     * @param id QuickServer ID number
     */
    public getQsChangeWebuzoPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeWebuzoPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     * Webuzo Change Pass Info
     * @param id QuickServer ID number
     */
    public getQsChangeWebuzoPassword(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsChangeWebuzoPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     * Get QuickServer Order
     * @param id QuickServer ID number.
     */
    public getQsInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Quickserver>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     * Get QuickServer Order
     * @param id QuickServer ID number.
     */
    public getQsInfo(id: number, _options?: PromiseConfigurationOptions): Promise<Quickserver> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.
     * Insert CD Information
     * @param id QuickServer ID number
     */
    public getQsInsertCdWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsInsertCdWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.
     * Insert CD Information
     * @param id QuickServer ID number
     */
    public getQsInsertCd(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsInsertCd(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this QuickServer.
     * Get QuickServer Invoices
     * @param id QuickServer ID number
     */
    public getQsInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this QuickServer.
     * Get QuickServer Invoices
     * @param id QuickServer ID number
     */
    public getQsInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
     * List QuickServers
     */
    public getQsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<QuickserverRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
     * List QuickServers
     */
    public getQsList(_options?: PromiseConfigurationOptions): Promise<Array<QuickserverRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     * QuickServer Reinstall OS Options
     * @param id QuickServer ID number
     */
    public getQsReinstallOsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<VpsTemplatesList>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsReinstallOsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     * QuickServer Reinstall OS Options
     * @param id QuickServer ID number
     */
    public getQsReinstallOs(id: number, _options?: PromiseConfigurationOptions): Promise<VpsTemplatesList> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsReinstallOs(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns information needed before resetting the QuickServer\'s root password.
     * Reset QuickServer Password Info
     * @param id QuickServer ID number
     */
    public getQsResetPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsResetPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns information needed before resetting the QuickServer\'s root password.
     * Reset QuickServer Password Info
     * @param id QuickServer ID number
     */
    public getQsResetPassword(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsResetPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Reverse DNS Info
     * @param id QuickServer ID number
     */
    public getQsReverseDnsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsReverseDnsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Reverse DNS Info
     * @param id QuickServer ID number
     */
    public getQsReverseDns(id: number, _options?: PromiseConfigurationOptions): Promise<ReverseDnsEntries> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsReverseDns(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current VNC connection information for the QuickServer.
     * VNC Setup Info
     * @param id QuickServer ID number
     */
    public getQsSetupVncWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsSetupVncWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current VNC connection information for the QuickServer.
     * VNC Setup Info
     * @param id QuickServer ID number
     */
    public getQsSetupVnc(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsSetupVnc(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the QuickServer.
     * Get Traffic Usage
     * @param id QuickServer ID number
     */
    public getQsTrafficUsageWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsTrafficUsageWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the QuickServer.
     * Get Traffic Usage
     * @param id QuickServer ID number
     */
    public getQsTrafficUsage(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsTrafficUsage(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns remote desktop connection information for the QuickServer.
     * Get View Desktop Info
     * @param id QuickServer ID number
     */
    public getQsViewDesktopWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsViewDesktopWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns remote desktop connection information for the QuickServer.
     * Get View Desktop Info
     * @param id QuickServer ID number
     */
    public getQsViewDesktop(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsViewDesktop(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     * Resend QuickServer Welcome Email
     * @param id Quickserver ID
     */
    public getQsWelcomeEmailWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     * Resend QuickServer Welcome Email
     * @param id Quickserver ID
     */
    public getQsWelcomeEmail(id: string, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getQsWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     * Create QuickServer Backup
     * @param id QuickServer ID number
     */
    public postQsBackupWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsBackupWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     * Create QuickServer Backup
     * @param id QuickServer ID number
     */
    public postQsBackup(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsBackup(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a hostname change request for the QuickServer.
     * Update QuickServer Hostname
     * @param id QuickServer ID number
     */
    public postQsChangeHostnameWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeHostnameWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a hostname change request for the QuickServer.
     * Update QuickServer Hostname
     * @param id QuickServer ID number
     */
    public postQsChangeHostname(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeHostname(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Triggers a root password reset for the QuickServer.
     * Change Root Password
     * @param id QuickServer ID number
     */
    public postQsChangeRootPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeRootPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Triggers a root password reset for the QuickServer.
     * Change Root Password
     * @param id QuickServer ID number
     */
    public postQsChangeRootPassword(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeRootPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
     * Change QuickServer Timezone
     * @param id QuickServer ID number
     * @param timezone The time zone
     */
    public postQsChangeTimezoneWithHttpInfo(id: number, timezone: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeTimezoneWithHttpInfo(id, timezone, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
     * Change QuickServer Timezone
     * @param id QuickServer ID number
     * @param timezone The time zone
     */
    public postQsChangeTimezone(id: number, timezone: string, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeTimezone(id, timezone, observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the Webuzo control panel password for the QuickServer.
     * Change Webuzo Password
     * @param id QuickServer ID number
     */
    public postQsChangeWebuzoPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeWebuzoPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the Webuzo control panel password for the QuickServer.
     * Change Webuzo Password
     * @param id QuickServer ID number
     */
    public postQsChangeWebuzoPassword(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsChangeWebuzoPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
     * Insert CD in QuickServer
     * @param id QuickServer ID number
     */
    public postQsInsertCdWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsInsertCdWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
     * Insert CD in QuickServer
     * @param id QuickServer ID number
     */
    public postQsInsertCd(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsInsertCd(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     * Reinstall QuickServer OS
     * @param id QuickServer ID number
     */
    public postQsReinstallOsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsReinstallOsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     * Reinstall QuickServer OS
     * @param id QuickServer ID number
     */
    public postQsReinstallOs(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsReinstallOs(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the root password on the QuickServer to a new randomly generated password.
     * Reset QuickServer Password
     * @param id QuickServer ID number
     */
    public postQsResetPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsResetPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the root password on the QuickServer to a new randomly generated password.
     * Reset QuickServer Password
     * @param id QuickServer ID number
     */
    public postQsResetPassword(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsResetPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Update Reverse DNS
     * @param id QuickServer ID number
     * @param reverseDnsEntries
     */
    public postQsReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsReverseDnsWithHttpInfo(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Update Reverse DNS
     * @param id QuickServer ID number
     * @param reverseDnsEntries
     */
    public postQsReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsReverseDns(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the QuickServer.
     * Setup VNC
     * @param id QuickServer ID number
     */
    public postQsSetupVncWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsSetupVncWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the QuickServer.
     * Setup VNC
     * @param id QuickServer ID number
     */
    public postQsSetupVnc(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsSetupVnc(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.
     * Search Traffic Usage
     * @param id QuickServer ID number
     */
    public postQsTrafficUsageWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsTrafficUsageWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.
     * Search Traffic Usage
     * @param id QuickServer ID number
     */
    public postQsTrafficUsage(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsTrafficUsage(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the QuickServer.
     * Update View Desktop
     * @param id QuickServer ID number
     */
    public postQsViewDesktopWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsViewDesktopWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the QuickServer.
     * Update View Desktop
     * @param id QuickServer ID number
     */
    public postQsViewDesktop(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQsViewDesktop(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
     * Restore QuickServer from Backup
     * @param id QuickServer ID number
     * @param restoreRequest QuickServer Restore request
     */
    public postQuickServerRestoreWithHttpInfo(id: number, restoreRequest: RestoreRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQuickServerRestoreWithHttpInfo(id, restoreRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
     * Restore QuickServer from Backup
     * @param id QuickServer ID number
     * @param restoreRequest QuickServer Restore request
     */
    public postQuickServerRestore(id: number, restoreRequest: RestoreRequest, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postQuickServerRestore(id, restoreRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     * Validate QuickServer Order
     */
    public putQsWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putQsWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     * Validate QuickServer Order
     */
    public putQs(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putQs(observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel QuickServer Order
     * @param id QuickServer ID number
     */
    public quickserversCancelWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QuickserversCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.quickserversCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel QuickServer Order
     * @param id QuickServer ID number
     */
    public quickserversCancel(id: number, _options?: PromiseConfigurationOptions): Promise<QuickserversCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.quickserversCancel(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates QuickServer metadata or stored settings associated with the order.
     * Update QuickServer Order
     * @param id QuickServer ID number.
     */
    public updateQsInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateQsInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates QuickServer metadata or stored settings associated with the order.
     * Update QuickServer Order
     * @param id QuickServer ID number.
     */
    public updateQsInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateQsInfo(id, observableOptions);
        return result.toPromise();
    }


}



import { ObservableSSLCertificatesApi } from './ObservableAPI';

import { SSLCertificatesApiRequestFactory, SSLCertificatesApiResponseProcessor} from "../apis/SSLCertificatesApi";
export class PromiseSSLCertificatesApi {
    private api: ObservableSSLCertificatesApi

    public constructor(
        configuration: Configuration,
        requestFactory?: SSLCertificatesApiRequestFactory,
        responseProcessor?: SSLCertificatesApiResponseProcessor
    ) {
        this.api = new ObservableSSLCertificatesApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
     * Place SSL Cert Order
     */
    public addSslWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addSslWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
     * Place SSL Cert Order
     */
    public addSsl(_options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addSsl(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available SSL certificate types and pricing for ordering.
     * SSL Cert Ordering Information
     */
    public getNewSslWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewSslWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available SSL certificate types and pricing for ordering.
     * SSL Cert Ordering Information
     */
    public getNewSsl(_options?: PromiseConfigurationOptions): Promise<any> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewSsl(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     * Get SSL Cert Info
     * @param id SSL certificate ID number.
     */
    public getSslInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<any>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     * Get SSL Cert Info
     * @param id SSL certificate ID number.
     */
    public getSslInfo(id: number, _options?: PromiseConfigurationOptions): Promise<any> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this SSL certificate.
     * Get SSL Cert Invoices
     * @param id SSL Cert ID number
     */
    public getSslInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this SSL certificate.
     * Get SSL Cert Invoices
     * @param id SSL Cert ID number
     */
    public getSslInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all SSL certificate services on the account with their current status.
     * List SSL Certs
     */
    public getSslListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all SSL certificate services on the account with their current status.
     * List SSL Certs
     */
    public getSslList(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslList(observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend SSL Welcome Email
     * @param id SSL Cert ID number
     */
    public getSslWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend SSL Welcome Email
     * @param id SSL Cert ID number
     */
    public getSslWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getSslWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates an SSL certificate order before placing it.
     * Validate SSL Cert Order
     */
    public putSslWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putSslWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Validates an SSL certificate order before placing it.
     * Validate SSL Cert Order
     */
    public putSsl(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putSsl(observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     * Cancel SSL Certificate Service
     * @param id SSL Cert ID number
     */
    public sslCancelWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SslCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.sslCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     * Cancel SSL Certificate Service
     * @param id SSL Cert ID number
     */
    public sslCancel(id: number, _options?: PromiseConfigurationOptions): Promise<SslCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.sslCancel(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on an SSL certificate order.
     * Update SSL Cert Order
     * @param id SSL certificate ID number.
     */
    public updateSslInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateSslInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on an SSL certificate order.
     * Update SSL Cert Order
     * @param id SSL certificate ID number.
     */
    public updateSslInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateSslInfo(id, observableOptions);
        return result.toPromise();
    }


}



import { ObservableScrubIpsApi } from './ObservableAPI';

import { ScrubIpsApiRequestFactory, ScrubIpsApiResponseProcessor} from "../apis/ScrubIpsApi";
export class PromiseScrubIpsApi {
    private api: ObservableScrubIpsApi

    public constructor(
        configuration: Configuration,
        requestFactory?: ScrubIpsApiRequestFactory,
        responseProcessor?: ScrubIpsApiResponseProcessor
    ) {
        this.api = new ObservableScrubIpsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     * Cancel Scrub IP Service
     * @param id ScrubIp ID number
     */
    public cancelScrubIpWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<CancelScrubIp200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.cancelScrubIpWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     * Cancel Scrub IP Service
     * @param id ScrubIp ID number
     */
    public cancelScrubIp(id: number, _options?: PromiseConfigurationOptions): Promise<CancelScrubIp200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.cancelScrubIp(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
     * Create Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public createFilterWithHttpInfo(id: number, createFilter: CreateFilter, _options?: PromiseConfigurationOptions): Promise<HttpInfo<CreateFilter201Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createFilterWithHttpInfo(id, createFilter, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
     * Create Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public createFilter(id: number, createFilter: CreateFilter, _options?: PromiseConfigurationOptions): Promise<CreateFilter201Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createFilter(id, createFilter, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     * Create Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param createGeoFirewallRule
     */
    public createGeoRuleWithHttpInfo(id: number, createGeoFirewallRule: CreateGeoFirewallRule, _options?: PromiseConfigurationOptions): Promise<HttpInfo<CreateRule201Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createGeoRuleWithHttpInfo(id, createGeoFirewallRule, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     * Create Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param createGeoFirewallRule
     */
    public createGeoRule(id: number, createGeoFirewallRule: CreateGeoFirewallRule, _options?: PromiseConfigurationOptions): Promise<CreateRule201Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createGeoRule(id, createGeoFirewallRule, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     * Create Firewall Rule
     * @param id ScrubIp ID number
     * @param createFirewallRule
     */
    public createRuleWithHttpInfo(id: number, createFirewallRule: CreateFirewallRule, _options?: PromiseConfigurationOptions): Promise<HttpInfo<CreateRule201Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createRuleWithHttpInfo(id, createFirewallRule, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     * Create Firewall Rule
     * @param id ScrubIp ID number
     * @param createFirewallRule
     */
    public createRule(id: number, createFirewallRule: CreateFirewallRule, _options?: PromiseConfigurationOptions): Promise<CreateRule201Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.createRule(id, createFirewallRule, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     * Delete Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public deleteFilterWithHttpInfo(id: number, createFilter: CreateFilter, _options?: PromiseConfigurationOptions): Promise<HttpInfo<DeleteFilter200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteFilterWithHttpInfo(id, createFilter, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     * Delete Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public deleteFilter(id: number, createFilter: CreateFilter, _options?: PromiseConfigurationOptions): Promise<DeleteFilter200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteFilter(id, createFilter, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     * Disable Scrub Protection
     * @param id ScrubIp ID number
     */
    public disableScrubWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<DisableScrub200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.disableScrubWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     * Disable Scrub Protection
     * @param id ScrubIp ID number
     */
    public disableScrub(id: number, _options?: PromiseConfigurationOptions): Promise<DisableScrub200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.disableScrub(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     * Enable Scrub Protection
     * @param id ScrubIp ID number
     */
    public enableScrubWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<EnableScrub200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.enableScrubWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     * Enable Scrub Protection
     * @param id ScrubIp ID number
     */
    public enableScrub(id: number, _options?: PromiseConfigurationOptions): Promise<EnableScrub200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.enableScrub(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     * Get Scrub IP Ordering Information
     */
    public getOrderDetailWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<GetOrderDetail200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getOrderDetailWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     * Get Scrub IP Ordering Information
     */
    public getOrderDetail(_options?: PromiseConfigurationOptions): Promise<GetOrderDetail200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getOrderDetail(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     * Get Scrub IP Details
     * @param id ScrubIp ID number
     */
    public getScrubIpDetailsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GetScrubIpDetails200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpDetailsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     * Get Scrub IP Details
     * @param id ScrubIp ID number
     */
    public getScrubIpDetails(id: number, _options?: PromiseConfigurationOptions): Promise<GetScrubIpDetails200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpDetails(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
     * List Scrub Filter Types
     */
    public getScrubIpFilterTypesWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ScrubIpFilterTypes>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpFilterTypesWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
     * List Scrub Filter Types
     */
    public getScrubIpFilterTypes(_options?: PromiseConfigurationOptions): Promise<ScrubIpFilterTypes> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpFilterTypes(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     * Get ScrubIp Invoices
     * @param id ScrubIp ID number
     */
    public getScrubIpInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     * Get ScrubIp Invoices
     * @param id ScrubIp ID number
     */
    public getScrubIpInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     * Get Scrub IP Logs
     * @param id Scrub Order ID
     */
    public getScrubIpLogsWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<ScrubIpsLogRowSchema>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpLogsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     * Get Scrub IP Logs
     * @param id Scrub Order ID
     */
    public getScrubIpLogs(id: string, _options?: PromiseConfigurationOptions): Promise<Array<ScrubIpsLogRowSchema>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpLogs(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     * List Scrub IP Services
     */
    public getScrubIpsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<ScrubIpsRowSchema>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     * List Scrub IP Services
     */
    public getScrubIpsList(_options?: PromiseConfigurationOptions): Promise<Array<ScrubIpsRowSchema>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getScrubIpsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     * Place Scrub IP Order
     * @param scrubIpPlaceOrder
     */
    public placeScrubOrderWithHttpInfo(scrubIpPlaceOrder: ScrubIpPlaceOrder, _options?: PromiseConfigurationOptions): Promise<HttpInfo<PlaceScrubOrder201Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.placeScrubOrderWithHttpInfo(scrubIpPlaceOrder, observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     * Place Scrub IP Order
     * @param scrubIpPlaceOrder
     */
    public placeScrubOrder(scrubIpPlaceOrder: ScrubIpPlaceOrder, _options?: PromiseConfigurationOptions): Promise<PlaceScrubOrder201Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.placeScrubOrder(scrubIpPlaceOrder, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteGeoFirewallRule
     */
    public scrubIpsDeleteGeoRuleWithHttpInfo(id: number, deleteGeoFirewallRule: DeleteGeoFirewallRule, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ScrubIpsDeleteRule200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.scrubIpsDeleteGeoRuleWithHttpInfo(id, deleteGeoFirewallRule, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteGeoFirewallRule
     */
    public scrubIpsDeleteGeoRule(id: number, deleteGeoFirewallRule: DeleteGeoFirewallRule, _options?: PromiseConfigurationOptions): Promise<ScrubIpsDeleteRule200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.scrubIpsDeleteGeoRule(id, deleteGeoFirewallRule, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteFirewallRule
     */
    public scrubIpsDeleteRuleWithHttpInfo(id: number, deleteFirewallRule: DeleteFirewallRule, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ScrubIpsDeleteRule200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.scrubIpsDeleteRuleWithHttpInfo(id, deleteFirewallRule, observableOptions);
        return result.toPromise();
    }

    /**
     * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteFirewallRule
     */
    public scrubIpsDeleteRule(id: number, deleteFirewallRule: DeleteFirewallRule, _options?: PromiseConfigurationOptions): Promise<ScrubIpsDeleteRule200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.scrubIpsDeleteRule(id, deleteFirewallRule, observableOptions);
        return result.toPromise();
    }


}



import { ObservableServersApi } from './ObservableAPI';

import { ServersApiRequestFactory, ServersApiResponseProcessor} from "../apis/ServersApi";
export class PromiseServersApi {
    private api: ObservableServersApi

    public constructor(
        configuration: Configuration,
        requestFactory?: ServersApiRequestFactory,
        responseProcessor?: ServersApiResponseProcessor
    ) {
        this.api = new ObservableServersApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
     * Place Server Order
     */
    public addServerWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<AddServer200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addServerWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
     * Place Server Order
     */
    public addServer(_options?: PromiseConfigurationOptions): Promise<AddServer200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addServer(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
     * Get Buy Now Server Options
     */
    public buyItNowServerOrderWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<BuyItNowServerOrder200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.buyItNowServerOrderWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
     * Get Buy Now Server Options
     */
    public buyItNowServerOrder(_options?: PromiseConfigurationOptions): Promise<BuyItNowServerOrder200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.buyItNowServerOrder(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServersWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<BuyItNowList>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMPServersWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServers(_options?: PromiseConfigurationOptions): Promise<BuyItNowList> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getMPServers(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     * Server Ordering Information
     */
    public getNewServerWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServerOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewServerWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     * Server Ordering Information
     */
    public getNewServer(_options?: PromiseConfigurationOptions): Promise<ServerOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewServer(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     * Get Server Order
     * @param id Server ID number.
     */
    public getServerInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Server>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     * Get Server Order
     * @param id Server ID number.
     */
    public getServerInfo(id: number, _options?: PromiseConfigurationOptions): Promise<Server> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this dedicated server.
     * Get Server Invoices
     * @param id Server ID number
     */
    public getServerInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this dedicated server.
     * Get Server Invoices
     * @param id Server ID number
     */
    public getServerInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all dedicated server services on the account with their current status and configuration.
     * List Servers
     */
    public getServerListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<ServerRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all dedicated server services on the account with their current status and configuration.
     * List Servers
     */
    public getServerList(_options?: PromiseConfigurationOptions): Promise<Array<ServerRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerList(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Reverse DNS Info
     * @param id Server ID number
     */
    public getServerReverseDnsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerReverseDnsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Reverse DNS Info
     * @param id Server ID number
     */
    public getServerReverseDns(id: number, _options?: PromiseConfigurationOptions): Promise<ReverseDnsEntries> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServerReverseDns(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend Server Welcome Email
     * @param id Server ID number
     */
    public getServersWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServersWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend Server Welcome Email
     * @param id Server ID number
     */
    public getServersWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getServersWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
     * Place Buy Now Server Order
     * @param [placeBuyNowServerRequest]
     */
    public placeBuyNowServerWithHttpInfo(placeBuyNowServerRequest?: PlaceBuyNowServerRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ServersBuyNowResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.placeBuyNowServerWithHttpInfo(placeBuyNowServerRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
     * Place Buy Now Server Order
     * @param [placeBuyNowServerRequest]
     */
    public placeBuyNowServer(placeBuyNowServerRequest?: PlaceBuyNowServerRequest, _options?: PromiseConfigurationOptions): Promise<ServersBuyNowResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.placeBuyNowServer(placeBuyNowServerRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Update Reverse DNS
     * @param id Server ID number
     * @param reverseDnsEntries
     */
    public postServerReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postServerReverseDnsWithHttpInfo(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Update Reverse DNS
     * @param id Server ID number
     * @param reverseDnsEntries
     */
    public postServerReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postServerReverseDns(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Server Order
     */
    public putServersWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putServersWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Server Order
     */
    public putServers(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putServers(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current IPMI live connection information for the server.
     * Server IPMI Live Information
     * @param id Server ID number
     */
    public serverIpmiLiveGetWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ServerIpmiLiveInfo>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiLiveGetWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current IPMI live connection information for the server.
     * Server IPMI Live Information
     * @param id Server ID number
     */
    public serverIpmiLiveGet(id: number, _options?: PromiseConfigurationOptions): Promise<ServerIpmiLiveInfo> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiLiveGet(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.
     * Server IPMI Live Setup
     * @param id Server ID number
     * @param ip Your IP Address you wish to connect to the IPMI system from.
     * @param [asset] Asset ID
     */
    public serverIpmiLivePostWithHttpInfo(id: number, ip: string, asset?: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ServerIpmiLiveInfo>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiLivePostWithHttpInfo(id, ip, asset, observableOptions);
        return result.toPromise();
    }

    /**
     * Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.
     * Server IPMI Live Setup
     * @param id Server ID number
     * @param ip Your IP Address you wish to connect to the IPMI system from.
     * @param [asset] Asset ID
     */
    public serverIpmiLivePost(id: number, ip: string, asset?: number, _options?: PromiseConfigurationOptions): Promise<ServerIpmiLiveInfo> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiLivePost(id, ip, asset, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the chassis power status from ipmi.
     * Get IPMI Power Status
     * @param id Server ID number
     */
    public serverIpmiPowerGetWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiPowerGetWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the chassis power status from ipmi.
     * Get IPMI Power Status
     * @param id Server ID number
     */
    public serverIpmiPowerGet(id: number, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiPowerGet(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Uses the IPMI interface to set the Power status on the server.
     * Server IPMI Power
     * @param id Server ID number
     * @param action The power action to send to the ipmi controller.
     * @param [asset] The Asset ID
     */
    public serverIpmiPowerPostWithHttpInfo(id: number, action: string, asset?: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiPowerPostWithHttpInfo(id, action, asset, observableOptions);
        return result.toPromise();
    }

    /**
     * Uses the IPMI interface to set the Power status on the server.
     * Server IPMI Power
     * @param id Server ID number
     * @param action The power action to send to the ipmi controller.
     * @param [asset] The Asset ID
     */
    public serverIpmiPowerPost(id: number, action: string, asset?: number, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serverIpmiPowerPost(id, action, asset, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel Server Service
     * @param id Server ID number
     */
    public serversCancelWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ServersCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serversCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel Server Service
     * @param id Server ID number
     */
    public serversCancel(id: number, _options?: PromiseConfigurationOptions): Promise<ServersCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.serversCancel(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a dedicated server order.
     * Update Server Order
     * @param id Server ID number.
     */
    public updateServerInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateServerInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a dedicated server order.
     * Update Server Order
     * @param id Server ID number.
     */
    public updateServerInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateServerInfo(id, observableOptions);
        return result.toPromise();
    }


}



import { ObservableTicketsApi } from './ObservableAPI';

import { TicketsApiRequestFactory, TicketsApiResponseProcessor} from "../apis/TicketsApi";
export class PromiseTicketsApi {
    private api: ObservableTicketsApi

    public constructor(
        configuration: Configuration,
        requestFactory?: TicketsApiRequestFactory,
        responseProcessor?: TicketsApiResponseProcessor
    ) {
        this.api = new ObservableTicketsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     * Create New Ticket
     * @param ticketNew
     */
    public addNewTicketWithHttpInfo(ticketNew: TicketNew, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TicketNewResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addNewTicketWithHttpInfo(ticketNew, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     * Create New Ticket
     * @param ticketNew
     */
    public addNewTicket(ticketNew: TicketNew, _options?: PromiseConfigurationOptions): Promise<TicketNewResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addNewTicket(ticketNew, observableOptions);
        return result.toPromise();
    }

    /**
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     * Close Ticket
     * @param id Ticket ID
     */
    public closeTicketWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<CloseTicketResponseSchema>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.closeTicketWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     * Close Ticket
     * @param id Ticket ID
     */
    public closeTicket(id: string, _options?: PromiseConfigurationOptions): Promise<CloseTicketResponseSchema> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.closeTicket(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Closes the support ticket.
     * Close Ticket
     * @param id Ticket ID number.
     */
    public deleteTicketInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteTicketInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Closes the support ticket.
     * Close Ticket
     * @param id Ticket ID number.
     */
    public deleteTicketInfo(id: number, _options?: PromiseConfigurationOptions): Promise<ViewTicketResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteTicketInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     * Gets Information for creating a new ticket.
     */
    public getNewTicketWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewTicketWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     * Gets Information for creating a new ticket.
     */
    public getNewTicket(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewTicket(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the full details of a support ticket including its history of replies.
     * Get Ticket Information
     * @param id Ticket ID number.
     */
    public getTicketInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getTicketInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the full details of a support ticket including its history of replies.
     * Get Ticket Information
     * @param id Ticket ID number.
     */
    public getTicketInfo(id: number, _options?: PromiseConfigurationOptions): Promise<ViewTicketResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getTicketInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     * List Support Tickets
     * @param [page] Page number for paginated results.
     * @param [period] How far back to show tickets from. Value is in days.
     * @param [view] The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
     */
    public getTicketsListWithHttpInfo(page?: number, period?: '30' | '90' | '365' | '1825' | 'all', view?: 'Open' | 'Closed' | 'On Hold' | 'In Progress', _options?: PromiseConfigurationOptions): Promise<HttpInfo<Tickets>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getTicketsListWithHttpInfo(page, period, view, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     * List Support Tickets
     * @param [page] Page number for paginated results.
     * @param [period] How far back to show tickets from. Value is in days.
     * @param [view] The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
     */
    public getTicketsList(page?: number, period?: '30' | '90' | '365' | '1825' | 'all', view?: 'Open' | 'Closed' | 'On Hold' | 'In Progress', _options?: PromiseConfigurationOptions): Promise<Tickets> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getTicketsList(page, period, view, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a reply to an existing support ticket.
     * Reply To Ticket
     * @param id Ticket ID number.
     */
    public postTicketInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postTicketInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Adds a reply to an existing support ticket.
     * Reply To Ticket
     * @param id Ticket ID number.
     */
    public postTicketInfo(id: number, _options?: PromiseConfigurationOptions): Promise<ViewTicketResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postTicketInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Searches support tickets by email, subject, or ticket mask ID.
     * Search Support Tickets
     */
    public postTicketsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Tickets>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postTicketsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Searches support tickets by email, subject, or ticket mask ID.
     * Search Support Tickets
     */
    public postTicketsList(_options?: PromiseConfigurationOptions): Promise<Tickets> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postTicketsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates a support ticket\'s properties such as subject or status.
     * Update Ticket
     * @param id Ticket ID number.
     */
    public putTicketInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putTicketInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates a support ticket\'s properties such as subject or status.
     * Update Ticket
     * @param id Ticket ID number.
     */
    public putTicketInfo(id: number, _options?: PromiseConfigurationOptions): Promise<ViewTicketResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putTicketInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Posts a reply to an existing support ticket thread.
     * Reply Ticket
     * @param id The ticket ID number.
     * @param [replyTicketRequest]
     */
    public replyTicketWithHttpInfo(id: number, replyTicketRequest?: ReplyTicketRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ReplyTicketResponseSchema>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.replyTicketWithHttpInfo(id, replyTicketRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Posts a reply to an existing support ticket thread.
     * Reply Ticket
     * @param id The ticket ID number.
     * @param [replyTicketRequest]
     */
    public replyTicket(id: number, replyTicketRequest?: ReplyTicketRequest, _options?: PromiseConfigurationOptions): Promise<ReplyTicketResponseSchema> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.replyTicket(id, replyTicketRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates a support ticket\'s subject or body content.
     * Update Ticket
     * @param id The ticket ID number.
     * @param [updateTicket]
     */
    public updateTicketInfoWithHttpInfo(id: number, updateTicket?: UpdateTicket, _options?: PromiseConfigurationOptions): Promise<HttpInfo<UpdateTicketResponseSchema>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateTicketInfoWithHttpInfo(id, updateTicket, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates a support ticket\'s subject or body content.
     * Update Ticket
     * @param id The ticket ID number.
     * @param [updateTicket]
     */
    public updateTicketInfo(id: number, updateTicket?: UpdateTicket, _options?: PromiseConfigurationOptions): Promise<UpdateTicketResponseSchema> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateTicketInfo(id, updateTicket, observableOptions);
        return result.toPromise();
    }


}



import { ObservableVPSApi } from './ObservableAPI';

import { VPSApiRequestFactory, VPSApiResponseProcessor} from "../apis/VPSApi";
export class PromiseVPSApi {
    private api: ObservableVPSApi

    public constructor(
        configuration: Configuration,
        requestFactory?: VPSApiRequestFactory,
        responseProcessor?: VPSApiResponseProcessor
    ) {
        this.api = new ObservableVPSApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
     * Place VPS Order
     * @param [vpsOrderPostRequest]
     */
    public addVpsWithHttpInfo(vpsOrderPostRequest?: VpsOrderPostRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addVpsWithHttpInfo(vpsOrderPostRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
     * Place VPS Order
     * @param [vpsOrderPostRequest]
     */
    public addVps(vpsOrderPostRequest?: VpsOrderPostRequest, _options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addVps(vpsOrderPostRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
     * Delete VPS Backup
     * @param id VPS ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public deleteVpsBackupWithHttpInfo(id: number, file: string, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteVpsBackupWithHttpInfo(id, file, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
     * Delete VPS Backup
     * @param id VPS ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public deleteVpsBackup(id: number, file: string, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.deleteVpsBackup(id, file, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     * Blocks SMTP
     * @param id VPS ID number.
     */
    public doVpsBlockSmtpWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsBlockSmtpWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     * Blocks SMTP
     * @param id VPS ID number.
     */
    public doVpsBlockSmtp(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsBlockSmtp(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables the virtual CD drive on the VPS.
     * Disable CD Drive
     * @param id VPS ID number.
     */
    public doVpsDisableCdWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsDisableCdWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables the virtual CD drive on the VPS.
     * Disable CD Drive
     * @param id VPS ID number.
     */
    public doVpsDisableCd(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsDisableCd(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables disk quota enforcement on the VPS.
     * Disable Quotas
     * @param id VPS ID number.
     */
    public doVpsDisableQuotaWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsDisableQuotaWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Disables disk quota enforcement on the VPS.
     * Disable Quotas
     * @param id VPS ID number.
     */
    public doVpsDisableQuota(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsDisableQuota(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Ejects the virtual CD from the VPS CD drive.
     * Eject CD Drive
     * @param id VPS ID number.
     */
    public doVpsEjectCdWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsEjectCdWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Ejects the virtual CD from the VPS CD drive.
     * Eject CD Drive
     * @param id VPS ID number.
     */
    public doVpsEjectCd(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsEjectCd(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables disk quota enforcement on the VPS.
     * Enable Quotas
     * @param id VPS ID number.
     */
    public doVpsEnableQuotaWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsEnableQuotaWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Enables disk quota enforcement on the VPS.
     * Enable Quotas
     * @param id VPS ID number.
     */
    public doVpsEnableQuota(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsEnableQuota(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Restarts the VPS.
     * Restart VPS
     * @param id VPS ID number.
     */
    public doVpsRestartWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsRestartWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Restarts the VPS.
     * Restart VPS
     * @param id VPS ID number.
     */
    public doVpsRestart(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsRestart(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers on the VPS.
     * Start VPS
     * @param id VPS ID number.
     */
    public doVpsStartWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsStartWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers on the VPS.
     * Start VPS
     * @param id VPS ID number.
     */
    public doVpsStart(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsStart(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers off the VPS.
     * Stop VPS
     * @param id VPS ID number.
     */
    public doVpsStopWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsStopWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Powers off the VPS.
     * Stop VPS
     * @param id VPS ID number.
     */
    public doVpsStop(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.doVpsStop(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
     * Download VPS Backup
     * @param id VPS ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public downloadVpsBackupWithHttpInfo(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<HttpInfo<DownloadQsBackup200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.downloadVpsBackupWithHttpInfo(id, downloadQsBackupRequest, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
     * Download VPS Backup
     * @param id VPS ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public downloadVpsBackup(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<DownloadQsBackup200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.downloadVpsBackup(id, downloadQsBackupRequest, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     * VPS Ordering Information
     */
    public getNewVpsWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<VpsOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewVpsWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     * VPS Ordering Information
     */
    public getNewVps(_options?: PromiseConfigurationOptions): Promise<VpsOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewVps(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
     * Get VPS Backups List
     * @param id VPS ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public getVpsBackupsWithHttpInfo(id: number, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<HttpInfo<VpsBackupRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsBackupsWithHttpInfo(id, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
     * Get VPS Backups List
     * @param id VPS ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public getVpsBackups(id: number, all?: '0' | '1', _options?: PromiseConfigurationOptions): Promise<VpsBackupRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsBackups(id, all, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available hard drive space addon options and pricing for the VPS.
     * HD Space Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyHdSpaceWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsBuyHdSpaceWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available hard drive space addon options and pricing for the VPS.
     * HD Space Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyHdSpace(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsBuyHdSpace(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available additional IP address options and pricing for the VPS.
     * Additional IP Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyIpWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsBuyIpWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available additional IP address options and pricing for the VPS.
     * Additional IP Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyIp(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsBuyIp(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the VPS.
     * Get Timezone Info
     * @param id VPS ID number
     */
    public getVpsChangeTimezoneWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<string>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsChangeTimezoneWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the VPS.
     * Get Timezone Info
     * @param id VPS ID number
     */
    public getVpsChangeTimezone(id: number, _options?: PromiseConfigurationOptions): Promise<Array<string>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsChangeTimezone(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     * Get VPS Order
     * @param id VPS ID number
     */
    public getVpsInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Vps>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     * Get VPS Order
     * @param id VPS ID number
     */
    public getVpsInfo(id: number, _options?: PromiseConfigurationOptions): Promise<Vps> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this VPS.
     * Get VPS Invoices
     * @param id VPS ID number
     */
    public getVpsInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this VPS.
     * Get VPS Invoices
     * @param id VPS ID number
     */
    public getVpsInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all VPS services on the account with their current status and configuration.
     * List VPS Orders
     */
    public getVpsListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<VpsRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns all VPS services on the account with their current status and configuration.
     * List VPS Orders
     */
    public getVpsList(_options?: PromiseConfigurationOptions): Promise<Array<VpsRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsList(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available OS templates for reinstalling the VPS.
     * VPS Reinstall OS Options
     * @param id VPS ID number
     */
    public getVpsReinstallOsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<VpsTemplatesList>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsReinstallOsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the list of available OS templates for reinstalling the VPS.
     * VPS Reinstall OS Options
     * @param id VPS ID number
     */
    public getVpsReinstallOs(id: number, _options?: PromiseConfigurationOptions): Promise<VpsTemplatesList> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsReinstallOs(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     * Reverse DNS Info
     * @param id VPS ID number
     */
    public getVpsReverseDnsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsReverseDnsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     * Reverse DNS Info
     * @param id VPS ID number
     */
    public getVpsReverseDns(id: number, _options?: PromiseConfigurationOptions): Promise<ReverseDnsEntries> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsReverseDns(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current VNC connection information for the VPS.
     * VNC Setup Info
     * @param id VPS ID number
     */
    public getVpsSetupVncWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsSetupVncWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current VNC connection information for the VPS.
     * VNC Setup Info
     * @param id VPS ID number
     */
    public getVpsSetupVnc(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsSetupVnc(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available slice upgrade options and pricing for the VPS.
     * Slice Upgrade Info
     * @param id VPS ID number
     */
    public getVpsSlicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsSlicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns available slice upgrade options and pricing for the VPS.
     * Slice Upgrade Info
     * @param id VPS ID number
     */
    public getVpsSlices(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsSlices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the VPS.
     * Get Traffic Usage
     * @param id VPS ID number
     */
    public getVpsTrafficUsageWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<VpsTrafficResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsTrafficUsageWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the VPS.
     * Get Traffic Usage
     * @param id VPS ID number
     */
    public getVpsTrafficUsage(id: number, _options?: PromiseConfigurationOptions): Promise<VpsTrafficResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsTrafficUsage(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns remote desktop connection information for the VPS.
     * Get View Desktop Info
     * @param id VPS ID number
     */
    public getVpsViewDesktopWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsViewDesktopWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns remote desktop connection information for the VPS.
     * Get View Desktop Info
     * @param id VPS ID number
     */
    public getVpsViewDesktop(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsViewDesktop(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the VPS order.
     * Resend VPS Welcome Email
     * @param id VPS ID
     */
    public getVpsWelcomeEmailWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the VPS order.
     * Resend VPS Welcome Email
     * @param id VPS ID
     */
    public getVpsWelcomeEmail(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getVpsWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     * Start a VPS Backup
     * @param id VPS ID number
     */
    public postVpsBackupWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsBackupWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     * Start a VPS Backup
     * @param id VPS ID number
     */
    public postVpsBackup(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsBackup(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Purchases additional hard drive space for the VPS.
     * Purchase HD Space Addon
     * @param id VPS ID number
     */
    public postVpsBuyHdSpaceWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsBuyHdSpaceWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Purchases additional hard drive space for the VPS.
     * Purchase HD Space Addon
     * @param id VPS ID number
     */
    public postVpsBuyHdSpace(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsBuyHdSpace(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Purchases an additional IP address for the VPS.
     * Purchase Additional IP
     * @param id VPS ID number
     */
    public postVpsBuyIpWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsBuyIpWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Purchases an additional IP address for the VPS.
     * Purchase Additional IP
     * @param id VPS ID number
     */
    public postVpsBuyIp(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsBuyIp(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the hostname of the VPS. This queues a background task to update the server.
     * Update VPS Hostname
     * @param id VPS ID number
     * @param [hostname]
     */
    public postVpsChangeHostnameWithHttpInfo(id: number, hostname?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeHostnameWithHttpInfo(id, hostname, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the hostname of the VPS. This queues a background task to update the server.
     * Update VPS Hostname
     * @param id VPS ID number
     * @param [hostname]
     */
    public postVpsChangeHostname(id: number, hostname?: string, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeHostname(id, hostname, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the root password of the VPS.
     * Change VPS Root Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeRootPasswordWithHttpInfo(id: number, password: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeRootPasswordWithHttpInfo(id, password, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the root password of the VPS.
     * Change VPS Root Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeRootPassword(id: number, password: string, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeRootPassword(id, password, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the system timezone on the VPS.
     * Change VPS Timezone
     * @param id VPS ID number
     * @param timezone The time zone
     */
    public postVpsChangeTimezoneWithHttpInfo(id: number, timezone: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeTimezoneWithHttpInfo(id, timezone, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the system timezone on the VPS.
     * Change VPS Timezone
     * @param id VPS ID number
     * @param timezone The time zone
     */
    public postVpsChangeTimezone(id: number, timezone: string, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeTimezone(id, timezone, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the Webuzo control panel password on the VPS.
     * Change Webuzo Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeWebuzoPasswordWithHttpInfo(id: number, password: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeWebuzoPasswordWithHttpInfo(id, password, observableOptions);
        return result.toPromise();
    }

    /**
     * Changes the Webuzo control panel password on the VPS.
     * Change Webuzo Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeWebuzoPassword(id: number, password: string, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsChangeWebuzoPassword(id, password, observableOptions);
        return result.toPromise();
    }

    /**
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     * Insert CD in VPS
     * @param id VPS ID number
     * @param [url]
     */
    public postVpsInsertCdWithHttpInfo(id: number, url?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsInsertCdWithHttpInfo(id, url, observableOptions);
        return result.toPromise();
    }

    /**
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     * Insert CD in VPS
     * @param id VPS ID number
     * @param [url]
     */
    public postVpsInsertCd(id: number, url?: string, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsInsertCd(id, url, observableOptions);
        return result.toPromise();
    }

    /**
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     * Reinstall VPS OS
     * @param id VPS ID number
     * @param template OS Template Filename
     * @param localPassword Password for this account.
     * @param [password] Password for Root / Administrator Account.
     */
    public postVpsReinstallOsWithHttpInfo(id: number, template: string, localPassword: string, password?: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsReinstallOsWithHttpInfo(id, template, localPassword, password, observableOptions);
        return result.toPromise();
    }

    /**
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     * Reinstall VPS OS
     * @param id VPS ID number
     * @param template OS Template Filename
     * @param localPassword Password for this account.
     * @param [password] Password for Root / Administrator Account.
     */
    public postVpsReinstallOs(id: number, template: string, localPassword: string, password?: string, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsReinstallOs(id, template, localPassword, password, observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the root password on the VPS to a new randomly generated password.
     * Reset VPS Password
     * @param id VPS ID number
     */
    public postVpsResetPasswordWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsResetPasswordWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resets the root password on the VPS to a new randomly generated password.
     * Reset VPS Password
     * @param id VPS ID number
     */
    public postVpsResetPassword(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsResetPassword(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
     * Restore VPS from Backup
     * @param id VPS ID number
     * @param restoreRequest VPS Restore request
     */
    public postVpsRestoreWithHttpInfo(id: number, restoreRequest: RestoreRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsRestoreWithHttpInfo(id, restoreRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
     * Restore VPS from Backup
     * @param id VPS ID number
     * @param restoreRequest VPS Restore request
     */
    public postVpsRestore(id: number, restoreRequest: RestoreRequest, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsRestore(id, restoreRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     * Update Reverse DNS
     * @param id VPS ID number
     * @param reverseDnsEntries
     */
    public postVpsReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsReverseDnsWithHttpInfo(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     * Update Reverse DNS
     * @param id VPS ID number
     * @param reverseDnsEntries
     */
    public postVpsReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsReverseDns(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the VPS.
     * Setup VNC
     * @param id VPS ID number
     */
    public postVpsSetupVncWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsSetupVncWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the VPS.
     * Setup VNC
     * @param id VPS ID number
     */
    public postVpsSetupVnc(id: number, _options?: PromiseConfigurationOptions): Promise<QueueResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsSetupVnc(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     * Purchase Slice Upgrade
     * @param id VPS ID number
     */
    public postVpsSlicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsSlicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     * Purchase Slice Upgrade
     * @param id VPS ID number
     */
    public postVpsSlices(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsSlices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the VPS.
     * Update View Desktop
     * @param id VPS ID number
     */
    public postVpsViewDesktopWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsViewDesktopWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the VPS.
     * Update View Desktop
     * @param id VPS ID number
     */
    public postVpsViewDesktop(id: number, _options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postVpsViewDesktop(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     * Validate VPS Order
     * @param [vpsOrderPutRequest]
     */
    public putVpsWithHttpInfo(vpsOrderPutRequest?: VpsOrderPutRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<VpsOrderPutResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putVpsWithHttpInfo(vpsOrderPutRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     * Validate VPS Order
     * @param [vpsOrderPutRequest]
     */
    public putVps(vpsOrderPutRequest?: VpsOrderPutRequest, _options?: PromiseConfigurationOptions): Promise<VpsOrderPutResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putVps(vpsOrderPutRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a VPS order.
     * Update VPS Order
     * @param id VPS ID number.
     */
    public updateVpsInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateVpsInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a VPS order.
     * Update VPS Order
     * @param id VPS ID number.
     */
    public updateVpsInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateVpsInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel VPS Service
     * @param id VPS ID number
     */
    public vPSCancelWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<VPSCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.vPSCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel VPS Service
     * @param id VPS ID number
     */
    public vPSCancel(id: number, _options?: PromiseConfigurationOptions): Promise<VPSCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.vPSCancel(id, observableOptions);
        return result.toPromise();
    }


}



import { ObservableWebhostingApi } from './ObservableAPI';

import { WebhostingApiRequestFactory, WebhostingApiResponseProcessor} from "../apis/WebhostingApi";
export class PromiseWebhostingApi {
    private api: ObservableWebhostingApi

    public constructor(
        configuration: Configuration,
        requestFactory?: WebhostingApiRequestFactory,
        responseProcessor?: WebhostingApiResponseProcessor
    ) {
        this.api = new ObservableWebhostingApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
     * Place Website Order
     */
    public addWebsiteWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addWebsiteWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
     * Place Website Order
     */
    public addWebsite(_options?: PromiseConfigurationOptions): Promise<ServiceOrderPostResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.addWebsite(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available webhosting plans and pricing for ordering.
     * Website Ordering Information
     */
    public getNewWebsiteWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<WebsitesOrder>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewWebsiteWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Retrieves available webhosting plans and pricing for ordering.
     * Website Ordering Information
     */
    public getNewWebsite(_options?: PromiseConfigurationOptions): Promise<WebsitesOrder> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getNewWebsite(observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
     * Get Website IP Information
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteBuyIpWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<GetWebsiteBuyIp200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteBuyIpWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
     * Get Website IP Information
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteBuyIp(id: number, _options?: PromiseConfigurationOptions): Promise<GetWebsiteBuyIp200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteBuyIp(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     * Get Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInfoWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<Website>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     * Get Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInfo(id: number, _options?: PromiseConfigurationOptions): Promise<Website> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this webhosting service.
     * Get Website Invoices
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInvoicesWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteInvoicesWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the billing invoices associated with this webhosting service.
     * Get Website Invoices
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInvoices(id: number, _options?: PromiseConfigurationOptions): Promise<ChargeInvoiceRows> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteInvoices(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Gets a listing of your webhosting orders and service details.
     * Get Website Listing
     */
    public getWebsiteListWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<Array<WebsiteRow>>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteListWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Gets a listing of your webhosting orders and service details.
     * Get Website Listing
     */
    public getWebsiteList(_options?: PromiseConfigurationOptions): Promise<Array<WebsiteRow>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsiteList(observableOptions);
        return result.toPromise();
    }

    /**
     * Gets a list of the backups that exist for a website and their sizes.
     * Get Website Backups
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesBackupsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<WebsiteBackups>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsitesBackupsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Gets a list of the backups that exist for a website and their sizes.
     * Get Website Backups
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesBackups(id: number, _options?: PromiseConfigurationOptions): Promise<WebsiteBackups> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsitesBackups(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     * Hosting Panel Auto Login
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesLoginWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<WebsiteLoginResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsitesLoginWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     * Hosting Panel Auto Login
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesLogin(id: number, _options?: PromiseConfigurationOptions): Promise<WebsiteLoginResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsitesLogin(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     * Resend Website Welcome Email
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesWelcomeEmailWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsitesWelcomeEmailWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     * Resend Website Welcome Email
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesWelcomeEmail(id: number, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.getWebsitesWelcomeEmail(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.
     * Get Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public gettWebsiteReverseDnsWithHttpInfo(id: number, _options?: PromiseConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.gettWebsiteReverseDnsWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.
     * Get Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public gettWebsiteReverseDns(id: number, _options?: PromiseConfigurationOptions): Promise<ReverseDnsEntries> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.gettWebsiteReverseDns(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
     * Update Website IP DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteBuyIpRequest
     */
    public postWebsiteBuyIpWithHttpInfo(id: number, postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<PostWebsiteBuyIp200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postWebsiteBuyIpWithHttpInfo(id, postWebsiteBuyIpRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
     * Update Website IP DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteBuyIpRequest
     */
    public postWebsiteBuyIp(id: number, postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest, _options?: PromiseConfigurationOptions): Promise<PostWebsiteBuyIp200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postWebsiteBuyIp(id, postWebsiteBuyIpRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
     * Request Website Migration
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteMigrationRequest
     */
    public postWebsiteMigrationWithHttpInfo(id: number, postWebsiteMigrationRequest: PostWebsiteMigrationRequest, _options?: PromiseConfigurationOptions): Promise<HttpInfo<PostWebsiteMigration200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postWebsiteMigrationWithHttpInfo(id, postWebsiteMigrationRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
     * Request Website Migration
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteMigrationRequest
     */
    public postWebsiteMigration(id: number, postWebsiteMigrationRequest: PostWebsiteMigrationRequest, _options?: PromiseConfigurationOptions): Promise<PostWebsiteMigration200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postWebsiteMigration(id, postWebsiteMigrationRequest, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     * Update Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param reverseDnsEntries
     */
    public postWebsitesReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postWebsitesReverseDnsWithHttpInfo(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     * Update Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param reverseDnsEntries
     */
    public postWebsitesReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: PromiseConfigurationOptions): Promise<TextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.postWebsitesReverseDns(id, reverseDnsEntries, observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a webhosting order before placing it.
     * Validate Webhosting Order
     */
    public putWebsitesWithHttpInfo(_options?: PromiseConfigurationOptions): Promise<HttpInfo<void>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putWebsitesWithHttpInfo(observableOptions);
        return result.toPromise();
    }

    /**
     * Validates a webhosting order before placing it.
     * Validate Webhosting Order
     */
    public putWebsites(_options?: PromiseConfigurationOptions): Promise<void> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.putWebsites(observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a webhosting order.
     * Update Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public updateWebsiteInfoWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateWebsiteInfoWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Updates settings on a webhosting order.
     * Update Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public updateWebsiteInfo(id: string, _options?: PromiseConfigurationOptions): Promise<SuccessTextResponse> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.updateWebsiteInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     * Cancel Website
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public webhostingCancelWithHttpInfo(id: string, _options?: PromiseConfigurationOptions): Promise<HttpInfo<WebhostingCancel200Response>> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.webhostingCancelWithHttpInfo(id, observableOptions);
        return result.toPromise();
    }

    /**
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     * Cancel Website
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public webhostingCancel(id: string, _options?: PromiseConfigurationOptions): Promise<WebhostingCancel200Response> {
        const observableOptions = wrapOptions(_options);
        const result = this.api.webhostingCancel(id, observableOptions);
        return result.toPromise();
    }


}



