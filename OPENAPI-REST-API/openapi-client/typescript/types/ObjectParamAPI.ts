import { ResponseContext, RequestContext, HttpFile, HttpInfo } from '../http/http';
import { Configuration, ConfigurationOptions } from '../configuration'
import type { Middleware } from '../middleware';

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

import { ObservableAccountApi } from "./ObservableAPI";
import { AccountApiRequestFactory, AccountApiResponseProcessor} from "../apis/AccountApi";

export interface AccountApiChangeAccountUsernameRequest {
}

export interface AccountApiDeleteAccountOauthNameRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof AccountApideleteAccountOauthName
     */
    name: string
}

export interface AccountApiDeleteAccountTfaRequest {
}

export interface AccountApiDeleteIpLimitRequest {
}

export interface AccountApiGetAccountInfoRequest {
}

export interface AccountApiGetAccountTfaSetupRequest {
}

export interface AccountApiGetHomeRequest {
}

export interface AccountApiGetSearchRequest {
}

export interface AccountApiLogoutRequest {
}

export interface AccountApiLogoutAccountOauthRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof AccountApilogoutAccountOauth
     */
    name: string
}

export interface AccountApiUpdateAccountApiKeyRequest {
}

export interface AccountApiUpdateAccountFeaturesRequest {
    /**
     * 
     * Defaults to: undefined
     * @type number
     * @memberof AccountApiupdateAccountFeatures
     */
    disableReset?: number
    /**
     * 
     * Defaults to: undefined
     * @type number
     * @memberof AccountApiupdateAccountFeatures
     */
    disableReinstall?: number
}

export interface AccountApiUpdateAccountInfoRequest {
    /**
     * Your name.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    name: string
    /**
     * Your address.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    address: string
    /**
     * Your city.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    city: string
    /**
     * Your state.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    state: string
    /**
     * Your ZIP code.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    zip: string
    /**
     * Your country.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    country: string
    /**
     * Your phone number.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    phone: string
    /**
     * Your company name.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    company?: string
    /**
     * Additional address information.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    address2?: string
    /**
     * Your preferred locale.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    locale?: string
    /**
     * Your email for invoice notifications.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    emailInvoices?: string
    /**
     * Your email for abuse notifications.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    emailAbuse?: string
    /**
     * Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them.
     * Defaults to: undefined
     * @type boolean
     * @memberof AccountApiupdateAccountInfo
     */
    disableReset?: boolean
    /**
     * Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them.
     * Defaults to: undefined
     * @type boolean
     * @memberof AccountApiupdateAccountInfo
     */
    disableReinstall?: boolean
    /**
     * Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them.
     * Defaults to: undefined
     * @type boolean
     * @memberof AccountApiupdateAccountInfo
     */
    disableServerNotifications?: boolean
    /**
     * Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them.
     * Defaults to: undefined
     * @type boolean
     * @memberof AccountApiupdateAccountInfo
     */
    disableEmailNotifications?: boolean
    /**
     * Your GST identification number (if applicable).
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountInfo
     */
    gstin?: string
}

export interface AccountApiUpdateAccountIpLimitsRequest {
    /**
     * The begining (or first) IP address in the range.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountIpLimits
     */
    start: string
    /**
     * The ending (or last) IP address in the range.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountIpLimits
     */
    end: string
}

export interface AccountApiUpdateAccountPasswordRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountPassword
     */
    password: string
}

export interface AccountApiUpdateAccountSshKeyRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountSshKey
     */
    sshKey?: string
}

export interface AccountApiUpdateAccountTfaRequest {
    /**
     * The 6-digit verification code from your authenticator app.
     * Defaults to: undefined
     * @type string
     * @memberof AccountApiupdateAccountTfa
     */
    _2faGoogleCode: string
}

export class ObjectAccountApi {
    private api: ObservableAccountApi

    public constructor(configuration: Configuration, requestFactory?: AccountApiRequestFactory, responseProcessor?: AccountApiResponseProcessor) {
        this.api = new ObservableAccountApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     * Change Account Username
     * @param param the request object
     */
    public changeAccountUsernameWithHttpInfo(param: AccountApiChangeAccountUsernameRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.changeAccountUsernameWithHttpInfo( options).toPromise();
    }

    /**
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     * Change Account Username
     * @param param the request object
     */
    public changeAccountUsername(param: AccountApiChangeAccountUsernameRequest = {}, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.changeAccountUsername( options).toPromise();
    }

    /**
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     * Unlink OAuth Account
     * @param param the request object
     */
    public deleteAccountOauthNameWithHttpInfo(param: AccountApiDeleteAccountOauthNameRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteAccountOauthNameWithHttpInfo(param.name,  options).toPromise();
    }

    /**
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     * Unlink OAuth Account
     * @param param the request object
     */
    public deleteAccountOauthName(param: AccountApiDeleteAccountOauthNameRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteAccountOauthName(param.name,  options).toPromise();
    }

    /**
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     * Disable Two-Factor Authentication
     * @param param the request object
     */
    public deleteAccountTfaWithHttpInfo(param: AccountApiDeleteAccountTfaRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteAccountTfaWithHttpInfo( options).toPromise();
    }

    /**
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     * Disable Two-Factor Authentication
     * @param param the request object
     */
    public deleteAccountTfa(param: AccountApiDeleteAccountTfaRequest = {}, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteAccountTfa( options).toPromise();
    }

    /**
     * Removes an IP address range from the account\'s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     * Remove IP Access Restriction
     * @param param the request object
     */
    public deleteIpLimitWithHttpInfo(param: AccountApiDeleteIpLimitRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        return this.api.deleteIpLimitWithHttpInfo( options).toPromise();
    }

    /**
     * Removes an IP address range from the account\'s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     * Remove IP Access Restriction
     * @param param the request object
     */
    public deleteIpLimit(param: AccountApiDeleteIpLimitRequest = {}, options?: ConfigurationOptions): Promise<GenericResponse> {
        return this.api.deleteIpLimit( options).toPromise();
    }

    /**
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
     * Retrieve Account Details
     * @param param the request object
     */
    public getAccountInfoWithHttpInfo(param: AccountApiGetAccountInfoRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<AccountInfo>> {
        return this.api.getAccountInfoWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
     * Retrieve Account Details
     * @param param the request object
     */
    public getAccountInfo(param: AccountApiGetAccountInfoRequest = {}, options?: ConfigurationOptions): Promise<AccountInfo> {
        return this.api.getAccountInfo( options).toPromise();
    }

    /**
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
     * Get Two-Factor Setup Data
     * @param param the request object
     */
    public getAccountTfaSetupWithHttpInfo(param: AccountApiGetAccountTfaSetupRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<GetAccountTfaSetup200Response>> {
        return this.api.getAccountTfaSetupWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
     * Get Two-Factor Setup Data
     * @param param the request object
     */
    public getAccountTfaSetup(param: AccountApiGetAccountTfaSetupRequest = {}, options?: ConfigurationOptions): Promise<GetAccountTfaSetup200Response> {
        return this.api.getAccountTfaSetup( options).toPromise();
    }

    /**
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     * Get Home Data
     * @param param the request object
     */
    public getHomeWithHttpInfo(param: AccountApiGetHomeRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Home>> {
        return this.api.getHomeWithHttpInfo( options).toPromise();
    }

    /**
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     * Get Home Data
     * @param param the request object
     */
    public getHome(param: AccountApiGetHomeRequest = {}, options?: ConfigurationOptions): Promise<Home> {
        return this.api.getHome( options).toPromise();
    }

    /**
     * Returns autocomplete results for the account\'s services and records. Use this endpoint to power global search experiences in the client portal.
     * Search Autocomplete
     * @param param the request object
     */
    public getSearchWithHttpInfo(param: AccountApiGetSearchRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<SearchAutocompleteResponse>> {
        return this.api.getSearchWithHttpInfo( options).toPromise();
    }

    /**
     * Returns autocomplete results for the account\'s services and records. Use this endpoint to power global search experiences in the client portal.
     * Search Autocomplete
     * @param param the request object
     */
    public getSearch(param: AccountApiGetSearchRequest = {}, options?: ConfigurationOptions): Promise<SearchAutocompleteResponse> {
        return this.api.getSearch( options).toPromise();
    }

    /**
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     * Log Out
     * @param param the request object
     */
    public logoutWithHttpInfo(param: AccountApiLogoutRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.logoutWithHttpInfo( options).toPromise();
    }

    /**
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     * Log Out
     * @param param the request object
     */
    public logout(param: AccountApiLogoutRequest = {}, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.logout( options).toPromise();
    }

    /**
     * Logs out of the specified OAuth provider session.
     * Logout of OAuth
     * @param param the request object
     */
    public logoutAccountOauthWithHttpInfo(param: AccountApiLogoutAccountOauthRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.logoutAccountOauthWithHttpInfo(param.name,  options).toPromise();
    }

    /**
     * Logs out of the specified OAuth provider session.
     * Logout of OAuth
     * @param param the request object
     */
    public logoutAccountOauth(param: AccountApiLogoutAccountOauthRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.logoutAccountOauth(param.name,  options).toPromise();
    }

    /**
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     * Generate New API Key
     * @param param the request object
     */
    public updateAccountApiKeyWithHttpInfo(param: AccountApiUpdateAccountApiKeyRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateAccountApiKeyWithHttpInfo( options).toPromise();
    }

    /**
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     * Generate New API Key
     * @param param the request object
     */
    public updateAccountApiKey(param: AccountApiUpdateAccountApiKeyRequest = {}, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateAccountApiKey( options).toPromise();
    }

    /**
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     * Update Account Feature Flags
     * @param param the request object
     */
    public updateAccountFeaturesWithHttpInfo(param: AccountApiUpdateAccountFeaturesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateAccountFeaturesWithHttpInfo(param.disableReset, param.disableReinstall,  options).toPromise();
    }

    /**
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     * Update Account Feature Flags
     * @param param the request object
     */
    public updateAccountFeatures(param: AccountApiUpdateAccountFeaturesRequest = {}, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateAccountFeatures(param.disableReset, param.disableReinstall,  options).toPromise();
    }

    /**
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     * Update Account Information
     * @param param the request object
     */
    public updateAccountInfoWithHttpInfo(param: AccountApiUpdateAccountInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateAccountInfoWithHttpInfo(param.name, param.address, param.city, param.state, param.zip, param.country, param.phone, param.company, param.address2, param.locale, param.emailInvoices, param.emailAbuse, param.disableReset, param.disableReinstall, param.disableServerNotifications, param.disableEmailNotifications, param.gstin,  options).toPromise();
    }

    /**
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     * Update Account Information
     * @param param the request object
     */
    public updateAccountInfo(param: AccountApiUpdateAccountInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateAccountInfo(param.name, param.address, param.city, param.state, param.zip, param.country, param.phone, param.company, param.address2, param.locale, param.emailInvoices, param.emailAbuse, param.disableReset, param.disableReinstall, param.disableServerNotifications, param.disableEmailNotifications, param.gstin,  options).toPromise();
    }

    /**
     * Adds an IP address range to the account\'s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     * Add IP Access Restriction
     * @param param the request object
     */
    public updateAccountIpLimitsWithHttpInfo(param: AccountApiUpdateAccountIpLimitsRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateAccountIpLimitsWithHttpInfo(param.start, param.end,  options).toPromise();
    }

    /**
     * Adds an IP address range to the account\'s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     * Add IP Access Restriction
     * @param param the request object
     */
    public updateAccountIpLimits(param: AccountApiUpdateAccountIpLimitsRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateAccountIpLimits(param.start, param.end,  options).toPromise();
    }

    /**
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     * Change Account Password
     * @param param the request object
     */
    public updateAccountPasswordWithHttpInfo(param: AccountApiUpdateAccountPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.updateAccountPasswordWithHttpInfo(param.password,  options).toPromise();
    }

    /**
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     * Change Account Password
     * @param param the request object
     */
    public updateAccountPassword(param: AccountApiUpdateAccountPasswordRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.updateAccountPassword(param.password,  options).toPromise();
    }

    /**
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     * Update SSH Keys
     * @param param the request object
     */
    public updateAccountSshKeyWithHttpInfo(param: AccountApiUpdateAccountSshKeyRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateAccountSshKeyWithHttpInfo(param.sshKey,  options).toPromise();
    }

    /**
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     * Update SSH Keys
     * @param param the request object
     */
    public updateAccountSshKey(param: AccountApiUpdateAccountSshKeyRequest = {}, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateAccountSshKey(param.sshKey,  options).toPromise();
    }

    /**
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
     * Enable Two-Factor Authentication
     * @param param the request object
     */
    public updateAccountTfaWithHttpInfo(param: AccountApiUpdateAccountTfaRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateAccountTfaWithHttpInfo(param._2faGoogleCode,  options).toPromise();
    }

    /**
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
     * Enable Two-Factor Authentication
     * @param param the request object
     */
    public updateAccountTfa(param: AccountApiUpdateAccountTfaRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateAccountTfa(param._2faGoogleCode,  options).toPromise();
    }

}

import { ObservableBackupsApi } from "./ObservableAPI";
import { BackupsApiRequestFactory, BackupsApiResponseProcessor} from "../apis/BackupsApi";

export interface BackupsApiAddBackupRequest {
    /**
     * 
     * Defaults to: undefined
     * @type boolean
     * @memberof BackupsApiaddBackup
     */
    validateOnly?: boolean
    /**
     * 
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApiaddBackup
     */
    serviceType?: number
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BackupsApiaddBackup
     */
    coupon?: string
}

export interface BackupsApiCancelBackupRequest {
    /**
     * The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApicancelBackup
     */
    id: number
}

export interface BackupsApiGetBackupInfoRequest {
    /**
     * The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApigetBackupInfo
     */
    id: number
}

export interface BackupsApiGetBackupInvoicesRequest {
    /**
     * The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApigetBackupInvoices
     */
    id: number
}

export interface BackupsApiGetBackupLoginRequest {
    /**
     * The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApigetBackupLogin
     */
    id: number
}

export interface BackupsApiGetBackupsListRequest {
}

export interface BackupsApiGetBackupsWelcomeEmailRequest {
    /**
     * The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApigetBackupsWelcomeEmail
     */
    id: number
}

export interface BackupsApiGetNewBackupRequest {
}

export interface BackupsApiUpdateBackupInfoRequest {
    /**
     * The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApiupdateBackupInfo
     */
    id: number
}

export interface BackupsApiValidateBackupOrderRequest {
    /**
     * 
     * Defaults to: undefined
     * @type boolean
     * @memberof BackupsApivalidateBackupOrder
     */
    validateOnly?: boolean
    /**
     * 
     * Defaults to: undefined
     * @type number
     * @memberof BackupsApivalidateBackupOrder
     */
    serviceType?: number
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BackupsApivalidateBackupOrder
     */
    coupon?: string
}

export class ObjectBackupsApi {
    private api: ObservableBackupsApi

    public constructor(configuration: Configuration, requestFactory?: BackupsApiRequestFactory, responseProcessor?: BackupsApiResponseProcessor) {
        this.api = new ObservableBackupsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
     * Place Backup Order
     * @param param the request object
     */
    public addBackupWithHttpInfo(param: BackupsApiAddBackupRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<BackupOrderPostResponse>> {
        return this.api.addBackupWithHttpInfo(param.validateOnly, param.serviceType, param.coupon,  options).toPromise();
    }

    /**
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
     * Place Backup Order
     * @param param the request object
     */
    public addBackup(param: BackupsApiAddBackupRequest = {}, options?: ConfigurationOptions): Promise<BackupOrderPostResponse> {
        return this.api.addBackup(param.validateOnly, param.serviceType, param.coupon,  options).toPromise();
    }

    /**
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     * Cancel Backup Service
     * @param param the request object
     */
    public cancelBackupWithHttpInfo(param: BackupsApiCancelBackupRequest, options?: ConfigurationOptions): Promise<HttpInfo<CancelBackup200Response>> {
        return this.api.cancelBackupWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     * Cancel Backup Service
     * @param param the request object
     */
    public cancelBackup(param: BackupsApiCancelBackupRequest, options?: ConfigurationOptions): Promise<CancelBackup200Response> {
        return this.api.cancelBackup(param.id,  options).toPromise();
    }

    /**
     * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
     * Get Backup Service Details
     * @param param the request object
     */
    public getBackupInfoWithHttpInfo(param: BackupsApiGetBackupInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<Backup>> {
        return this.api.getBackupInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
     * Get Backup Service Details
     * @param param the request object
     */
    public getBackupInfo(param: BackupsApiGetBackupInfoRequest, options?: ConfigurationOptions): Promise<Backup> {
        return this.api.getBackupInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     * Get Backup Order Invoices
     * @param param the request object
     */
    public getBackupInvoicesWithHttpInfo(param: BackupsApiGetBackupInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getBackupInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     * Get Backup Order Invoices
     * @param param the request object
     */
    public getBackupInvoices(param: BackupsApiGetBackupInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getBackupInvoices(param.id,  options).toPromise();
    }

    /**
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     * Get Backup Storage Panel Login
     * @param param the request object
     */
    public getBackupLoginWithHttpInfo(param: BackupsApiGetBackupLoginRequest, options?: ConfigurationOptions): Promise<HttpInfo<BackupLoginResponse>> {
        return this.api.getBackupLoginWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     * Get Backup Storage Panel Login
     * @param param the request object
     */
    public getBackupLogin(param: BackupsApiGetBackupLoginRequest, options?: ConfigurationOptions): Promise<BackupLoginResponse> {
        return this.api.getBackupLogin(param.id,  options).toPromise();
    }

    /**
     * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
     * List Backup Services
     * @param param the request object
     */
    public getBackupsListWithHttpInfo(param: BackupsApiGetBackupsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<BackupRow>>> {
        return this.api.getBackupsListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
     * List Backup Services
     * @param param the request object
     */
    public getBackupsList(param: BackupsApiGetBackupsListRequest = {}, options?: ConfigurationOptions): Promise<Array<BackupRow>> {
        return this.api.getBackupsList( options).toPromise();
    }

    /**
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     * Resend Backup Welcome Email
     * @param param the request object
     */
    public getBackupsWelcomeEmailWithHttpInfo(param: BackupsApiGetBackupsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getBackupsWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     * Resend Backup Welcome Email
     * @param param the request object
     */
    public getBackupsWelcomeEmail(param: BackupsApiGetBackupsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getBackupsWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
     * Get Backup Order Form Data
     * @param param the request object
     */
    public getNewBackupWithHttpInfo(param: BackupsApiGetNewBackupRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<BackupsOrder>> {
        return this.api.getNewBackupWithHttpInfo( options).toPromise();
    }

    /**
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
     * Get Backup Order Form Data
     * @param param the request object
     */
    public getNewBackup(param: BackupsApiGetNewBackupRequest = {}, options?: ConfigurationOptions): Promise<BackupsOrder> {
        return this.api.getNewBackup( options).toPromise();
    }

    /**
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     * Update Backup Information
     * @param param the request object
     */
    public updateBackupInfoWithHttpInfo(param: BackupsApiUpdateBackupInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateBackupInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     * Update Backup Information
     * @param param the request object
     */
    public updateBackupInfo(param: BackupsApiUpdateBackupInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateBackupInfo(param.id,  options).toPromise();
    }

    /**
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
     * Validate Backup Order
     * @param param the request object
     */
    public validateBackupOrderWithHttpInfo(param: BackupsApiValidateBackupOrderRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<BackupOrderPutResponse>> {
        return this.api.validateBackupOrderWithHttpInfo(param.validateOnly, param.serviceType, param.coupon,  options).toPromise();
    }

    /**
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
     * Validate Backup Order
     * @param param the request object
     */
    public validateBackupOrder(param: BackupsApiValidateBackupOrderRequest = {}, options?: ConfigurationOptions): Promise<BackupOrderPutResponse> {
        return this.api.validateBackupOrder(param.validateOnly, param.serviceType, param.coupon,  options).toPromise();
    }

}

import { ObservableBillingApi } from "./ObservableAPI";
import { BillingApiRequestFactory, BillingApiResponseProcessor} from "../apis/BillingApi";

export interface BillingApiAddAccountCreditCardRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    name?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    address?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    city?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    state?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    country?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    zip?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    cc?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    ccExp?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiaddAccountCreditCard
     */
    ccCcv2?: string
}

export interface BillingApiAddBillingCreditCardRequest {
    /**
     * 
     * @type BillingAddCcRequest
     * @memberof BillingApiaddBillingCreditCard
     */
    billingAddCcRequest: BillingAddCcRequest
}

export interface BillingApiAddBillingPrepayRequest {
    /**
     * 
     * @type BillingPrepayRequest
     * @memberof BillingApiaddBillingPrepay
     */
    billingPrepayRequest: BillingPrepayRequest
}

export interface BillingApiDeleteAccountCreditCardRequest {
    /**
     * The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof BillingApideleteAccountCreditCard
     */
    id: string
}

export interface BillingApiDeleteBillingCreditCardRequest {
    /**
     * The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApideleteBillingCreditCard
     */
    id: number
}

export interface BillingApiDeleteBillingInvoiceRequest {
    /**
     * The invoice ID to delete. Only unpaid invoices can be deleted.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApideleteBillingInvoice
     */
    id: number
}

export interface BillingApiDeleteBillingPrepayRequest {
    /**
     * The prepay balance ID to delete.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApideleteBillingPrepay
     */
    id: number
}

export interface BillingApiGetAffiliateBannersRequest {
}

export interface BillingApiGetAffiliateRichReportRequest {
}

export interface BillingApiGetAffiliateSalesGraphRequest {
    /**
     * Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApigetAffiliateSalesGraph
     */
    days?: number
}

export interface BillingApiGetAffiliateSalesReportRequest {
}

export interface BillingApiGetAffiliateTrafficGraphRequest {
    /**
     * Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApigetAffiliateTrafficGraph
     */
    days?: number
}

export interface BillingApiGetAffiliateWebTrafficRequest {
}

export interface BillingApiGetBillingCartRequest {
}

export interface BillingApiGetBillingCreditCardVerifyRequest {
    /**
     * The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApigetBillingCreditCardVerify
     */
    id: number
}

export interface BillingApiGetBillingInvoiceRequest {
    /**
     * The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApigetBillingInvoice
     */
    id: number
}

export interface BillingApiGetBillingInvoicesRequest {
}

export interface BillingApiGetBillingPrePaysRequest {
}

export interface BillingApiGetInvoicesRequest {
    /**
     * pass an optional search string for looking up inventory
     * Defaults to: undefined
     * @type string
     * @memberof BillingApigetInvoices
     */
    searchString?: string
    /**
     * number of records to skip for pagination
     * Minimum: 0
     * Defaults to: undefined
     * @type number
     * @memberof BillingApigetInvoices
     */
    skip?: number
    /**
     * maximum number of records to return
     * Minimum: 0
     * Maximum: 50
     * Defaults to: undefined
     * @type number
     * @memberof BillingApigetInvoices
     */
    limit?: number
}

export interface BillingApiInitiatePaymentRequest {
    /**
     * The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.
     * Defaults to: undefined
     * @type &#39;cc&#39; | &#39;paypal&#39; | &#39;prepay&#39; | &#39;payssion&#39; | &#39;payu&#39; | &#39;ccavenue&#39; | &#39;cashfree&#39; | &#39;coinbase&#39; | &#39;btcpay&#39;
     * @memberof BillingApiinitiatePayment
     */
    method: 'cc' | 'paypal' | 'prepay' | 'payssion' | 'payu' | 'ccavenue' | 'cashfree' | 'coinbase' | 'btcpay'
    /**
     * A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiinitiatePayment
     */
    invoices: string
}

export interface BillingApiPostBillingCreditCardVerifyRequest {
    /**
     * The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApipostBillingCreditCardVerify
     */
    id: number
    /**
     * 
     * @type BillingVerifyCcRequest
     * @memberof BillingApipostBillingCreditCardVerify
     */
    billingVerifyCcRequest: BillingVerifyCcRequest
}

export interface BillingApiUpdateAccountCreditCardRequest {
    /**
     * The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApiupdateAccountCreditCard
     */
    id: number
}

export interface BillingApiUpdateAffiliateDockSetupRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliateDockSetup
     */
    affiliateDockTitle?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliateDockSetup
     */
    affiliateDockDescription?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliateDockSetup
     */
    referrerCoupon?: string
}

export interface BillingApiUpdateAffiliateLandingPageRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliateLandingPage
     */
    affiliateDockTitle?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliateLandingPage
     */
    affiliateDockDescription?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliateLandingPage
     */
    referrerCoupon?: string
}

export interface BillingApiUpdateAffiliatePaymentSetupRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliatePaymentSetup
     */
    affiliatePaypal?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof BillingApiupdateAffiliatePaymentSetup
     */
    affiliatePaymentMethod?: string
}

export interface BillingApiUpdateBillingCreditCardRequest {
    /**
     * The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof BillingApiupdateBillingCreditCard
     */
    id: number
}

export interface BillingApiUpdateBillingPaymentMethodRequest {
    /**
     * 
     * @type BillingPaymentMethodRequest
     * @memberof BillingApiupdateBillingPaymentMethod
     */
    billingPaymentMethodRequest: BillingPaymentMethodRequest
}

export class ObjectBillingApi {
    private api: ObservableBillingApi

    public constructor(configuration: Configuration, requestFactory?: BillingApiRequestFactory, responseProcessor?: BillingApiResponseProcessor) {
        this.api = new ObservableBillingApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
     * Add Credit Card to Account
     * @param param the request object
     */
    public addAccountCreditCardWithHttpInfo(param: BillingApiAddAccountCreditCardRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.addAccountCreditCardWithHttpInfo(param.name, param.address, param.city, param.state, param.country, param.zip, param.cc, param.ccExp, param.ccCcv2,  options).toPromise();
    }

    /**
     * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
     * Add Credit Card to Account
     * @param param the request object
     */
    public addAccountCreditCard(param: BillingApiAddAccountCreditCardRequest = {}, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.addAccountCreditCard(param.name, param.address, param.city, param.state, param.country, param.zip, param.cc, param.ccExp, param.ccCcv2,  options).toPromise();
    }

    /**
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
     * Add Credit Card for Billing
     * @param param the request object
     */
    public addBillingCreditCardWithHttpInfo(param: BillingApiAddBillingCreditCardRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.addBillingCreditCardWithHttpInfo(param.billingAddCcRequest,  options).toPromise();
    }

    /**
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
     * Add Credit Card for Billing
     * @param param the request object
     */
    public addBillingCreditCard(param: BillingApiAddBillingCreditCardRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.addBillingCreditCard(param.billingAddCcRequest,  options).toPromise();
    }

    /**
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
     * Create Prepay Deposit
     * @param param the request object
     */
    public addBillingPrepayWithHttpInfo(param: BillingApiAddBillingPrepayRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.addBillingPrepayWithHttpInfo(param.billingPrepayRequest,  options).toPromise();
    }

    /**
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
     * Create Prepay Deposit
     * @param param the request object
     */
    public addBillingPrepay(param: BillingApiAddBillingPrepayRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.addBillingPrepay(param.billingPrepayRequest,  options).toPromise();
    }

    /**
     * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
     * Remove Credit Card
     * @param param the request object
     */
    public deleteAccountCreditCardWithHttpInfo(param: BillingApiDeleteAccountCreditCardRequest, options?: ConfigurationOptions): Promise<HttpInfo<string>> {
        return this.api.deleteAccountCreditCardWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
     * Remove Credit Card
     * @param param the request object
     */
    public deleteAccountCreditCard(param: BillingApiDeleteAccountCreditCardRequest, options?: ConfigurationOptions): Promise<string> {
        return this.api.deleteAccountCreditCard(param.id,  options).toPromise();
    }

    /**
     * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
     * Delete Credit Card
     * @param param the request object
     */
    public deleteBillingCreditCardWithHttpInfo(param: BillingApiDeleteBillingCreditCardRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteBillingCreditCardWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
     * Delete Credit Card
     * @param param the request object
     */
    public deleteBillingCreditCard(param: BillingApiDeleteBillingCreditCardRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteBillingCreditCard(param.id,  options).toPromise();
    }

    /**
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     * Delete Invoice
     * @param param the request object
     */
    public deleteBillingInvoiceWithHttpInfo(param: BillingApiDeleteBillingInvoiceRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteBillingInvoiceWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     * Delete Invoice
     * @param param the request object
     */
    public deleteBillingInvoice(param: BillingApiDeleteBillingInvoiceRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteBillingInvoice(param.id,  options).toPromise();
    }

    /**
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
     * Delete Prepay Balance
     * @param param the request object
     */
    public deleteBillingPrepayWithHttpInfo(param: BillingApiDeleteBillingPrepayRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteBillingPrepayWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
     * Delete Prepay Balance
     * @param param the request object
     */
    public deleteBillingPrepay(param: BillingApiDeleteBillingPrepayRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteBillingPrepay(param.id,  options).toPromise();
    }

    /**
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     * List Affiliate Banner Assets
     * @param param the request object
     */
    public getAffiliateBannersWithHttpInfo(param: BillingApiGetAffiliateBannersRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<AffiliateBannerRow>>> {
        return this.api.getAffiliateBannersWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     * List Affiliate Banner Assets
     * @param param the request object
     */
    public getAffiliateBanners(param: BillingApiGetAffiliateBannersRequest = {}, options?: ConfigurationOptions): Promise<Array<AffiliateBannerRow>> {
        return this.api.getAffiliateBanners( options).toPromise();
    }

    /**
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     * Get Affiliate Performance Report
     * @param param the request object
     */
    public getAffiliateRichReportWithHttpInfo(param: BillingApiGetAffiliateRichReportRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.getAffiliateRichReportWithHttpInfo( options).toPromise();
    }

    /**
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     * Get Affiliate Performance Report
     * @param param the request object
     */
    public getAffiliateRichReport(param: BillingApiGetAffiliateRichReportRequest = {}, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.getAffiliateRichReport( options).toPromise();
    }

    /**
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     * Get Affiliate Sales Graph Data
     * @param param the request object
     */
    public getAffiliateSalesGraphWithHttpInfo(param: BillingApiGetAffiliateSalesGraphRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<StatusMonthlyBreakdown>> {
        return this.api.getAffiliateSalesGraphWithHttpInfo(param.days,  options).toPromise();
    }

    /**
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     * Get Affiliate Sales Graph Data
     * @param param the request object
     */
    public getAffiliateSalesGraph(param: BillingApiGetAffiliateSalesGraphRequest = {}, options?: ConfigurationOptions): Promise<StatusMonthlyBreakdown> {
        return this.api.getAffiliateSalesGraph(param.days,  options).toPromise();
    }

    /**
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     * Get Affiliate Sales Report
     * @param param the request object
     */
    public getAffiliateSalesReportWithHttpInfo(param: BillingApiGetAffiliateSalesReportRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.getAffiliateSalesReportWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     * Get Affiliate Sales Report
     * @param param the request object
     */
    public getAffiliateSalesReport(param: BillingApiGetAffiliateSalesReportRequest = {}, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.getAffiliateSalesReport( options).toPromise();
    }

    /**
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     * Get Affiliate Traffic Graph Data
     * @param param the request object
     */
    public getAffiliateTrafficGraphWithHttpInfo(param: BillingApiGetAffiliateTrafficGraphRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<MonthlyCounts>> {
        return this.api.getAffiliateTrafficGraphWithHttpInfo(param.days,  options).toPromise();
    }

    /**
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     * Get Affiliate Traffic Graph Data
     * @param param the request object
     */
    public getAffiliateTrafficGraph(param: BillingApiGetAffiliateTrafficGraphRequest = {}, options?: ConfigurationOptions): Promise<MonthlyCounts> {
        return this.api.getAffiliateTrafficGraph(param.days,  options).toPromise();
    }

    /**
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     * List Affiliate Web Traffic Entries
     * @param param the request object
     */
    public getAffiliateWebTrafficWithHttpInfo(param: BillingApiGetAffiliateWebTrafficRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<AffiliateTrafficRow>>> {
        return this.api.getAffiliateWebTrafficWithHttpInfo( options).toPromise();
    }

    /**
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     * List Affiliate Web Traffic Entries
     * @param param the request object
     */
    public getAffiliateWebTraffic(param: BillingApiGetAffiliateWebTrafficRequest = {}, options?: ConfigurationOptions): Promise<Array<AffiliateTrafficRow>> {
        return this.api.getAffiliateWebTraffic( options).toPromise();
    }

    /**
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
     * Get Shopping Cart Contents
     * @param param the request object
     */
    public getBillingCartWithHttpInfo(param: BillingApiGetBillingCartRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<any>> {
        return this.api.getBillingCartWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
     * Get Shopping Cart Contents
     * @param param the request object
     */
    public getBillingCart(param: BillingApiGetBillingCartRequest = {}, options?: ConfigurationOptions): Promise<any> {
        return this.api.getBillingCart( options).toPromise();
    }

    /**
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     * Get Credit Card Verification Requirements
     * @param param the request object
     */
    public getBillingCreditCardVerifyWithHttpInfo(param: BillingApiGetBillingCreditCardVerifyRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getBillingCreditCardVerifyWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     * Get Credit Card Verification Requirements
     * @param param the request object
     */
    public getBillingCreditCardVerify(param: BillingApiGetBillingCreditCardVerifyRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getBillingCreditCardVerify(param.id,  options).toPromise();
    }

    /**
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
     * Get Invoice Details
     * @param param the request object
     */
    public getBillingInvoiceWithHttpInfo(param: BillingApiGetBillingInvoiceRequest, options?: ConfigurationOptions): Promise<HttpInfo<BillingInvoiceDetail>> {
        return this.api.getBillingInvoiceWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
     * Get Invoice Details
     * @param param the request object
     */
    public getBillingInvoice(param: BillingApiGetBillingInvoiceRequest, options?: ConfigurationOptions): Promise<BillingInvoiceDetail> {
        return this.api.getBillingInvoice(param.id,  options).toPromise();
    }

    /**
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
     * List Account Invoices
     * @param param the request object
     */
    public getBillingInvoicesWithHttpInfo(param: BillingApiGetBillingInvoicesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<BillingInvoiceList>> {
        return this.api.getBillingInvoicesWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
     * List Account Invoices
     * @param param the request object
     */
    public getBillingInvoices(param: BillingApiGetBillingInvoicesRequest = {}, options?: ConfigurationOptions): Promise<BillingInvoiceList> {
        return this.api.getBillingInvoices( options).toPromise();
    }

    /**
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
     * List Prepay Balances
     * @param param the request object
     */
    public getBillingPrePaysWithHttpInfo(param: BillingApiGetBillingPrePaysRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<any>> {
        return this.api.getBillingPrePaysWithHttpInfo( options).toPromise();
    }

    /**
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
     * List Prepay Balances
     * @param param the request object
     */
    public getBillingPrePays(param: BillingApiGetBillingPrePaysRequest = {}, options?: ConfigurationOptions): Promise<any> {
        return this.api.getBillingPrePays( options).toPromise();
    }

    /**
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
     * Get Invoices
     * @param param the request object
     */
    public getInvoicesWithHttpInfo(param: BillingApiGetInvoicesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<Invoice>>> {
        return this.api.getInvoicesWithHttpInfo(param.searchString, param.skip, param.limit,  options).toPromise();
    }

    /**
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
     * Get Invoices
     * @param param the request object
     */
    public getInvoices(param: BillingApiGetInvoicesRequest = {}, options?: ConfigurationOptions): Promise<Array<Invoice>> {
        return this.api.getInvoices(param.searchString, param.skip, param.limit,  options).toPromise();
    }

    /**
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
     * Initiate Payment
     * @param param the request object
     */
    public initiatePaymentWithHttpInfo(param: BillingApiInitiatePaymentRequest, options?: ConfigurationOptions): Promise<HttpInfo<InitiatePayment200Response>> {
        return this.api.initiatePaymentWithHttpInfo(param.method, param.invoices,  options).toPromise();
    }

    /**
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
     * Initiate Payment
     * @param param the request object
     */
    public initiatePayment(param: BillingApiInitiatePaymentRequest, options?: ConfigurationOptions): Promise<InitiatePayment200Response> {
        return this.api.initiatePayment(param.method, param.invoices,  options).toPromise();
    }

    /**
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
     * Submit Credit Card Verification
     * @param param the request object
     */
    public postBillingCreditCardVerifyWithHttpInfo(param: BillingApiPostBillingCreditCardVerifyRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.postBillingCreditCardVerifyWithHttpInfo(param.id, param.billingVerifyCcRequest,  options).toPromise();
    }

    /**
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
     * Submit Credit Card Verification
     * @param param the request object
     */
    public postBillingCreditCardVerify(param: BillingApiPostBillingCreditCardVerifyRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.postBillingCreditCardVerify(param.id, param.billingVerifyCcRequest,  options).toPromise();
    }

    /**
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     * Update Credit Card
     * @param param the request object
     */
    public updateAccountCreditCardWithHttpInfo(param: BillingApiUpdateAccountCreditCardRequest, options?: ConfigurationOptions): Promise<HttpInfo<string>> {
        return this.api.updateAccountCreditCardWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     * Update Credit Card
     * @param param the request object
     */
    public updateAccountCreditCard(param: BillingApiUpdateAccountCreditCardRequest, options?: ConfigurationOptions): Promise<string> {
        return this.api.updateAccountCreditCard(param.id,  options).toPromise();
    }

    /**
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     * Configure Affiliate Dock Settings
     * @param param the request object
     */
    public updateAffiliateDockSetupWithHttpInfo(param: BillingApiUpdateAffiliateDockSetupRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.updateAffiliateDockSetupWithHttpInfo(param.affiliateDockTitle, param.affiliateDockDescription, param.referrerCoupon,  options).toPromise();
    }

    /**
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     * Configure Affiliate Dock Settings
     * @param param the request object
     */
    public updateAffiliateDockSetup(param: BillingApiUpdateAffiliateDockSetupRequest = {}, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.updateAffiliateDockSetup(param.affiliateDockTitle, param.affiliateDockDescription, param.referrerCoupon,  options).toPromise();
    }

    /**
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     * Configure Affiliate Landing Page
     * @param param the request object
     */
    public updateAffiliateLandingPageWithHttpInfo(param: BillingApiUpdateAffiliateLandingPageRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.updateAffiliateLandingPageWithHttpInfo(param.affiliateDockTitle, param.affiliateDockDescription, param.referrerCoupon,  options).toPromise();
    }

    /**
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     * Configure Affiliate Landing Page
     * @param param the request object
     */
    public updateAffiliateLandingPage(param: BillingApiUpdateAffiliateLandingPageRequest = {}, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.updateAffiliateLandingPage(param.affiliateDockTitle, param.affiliateDockDescription, param.referrerCoupon,  options).toPromise();
    }

    /**
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     * Configure Affiliate Payout Preferences
     * @param param the request object
     */
    public updateAffiliatePaymentSetupWithHttpInfo(param: BillingApiUpdateAffiliatePaymentSetupRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.updateAffiliatePaymentSetupWithHttpInfo(param.affiliatePaypal, param.affiliatePaymentMethod,  options).toPromise();
    }

    /**
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     * Configure Affiliate Payout Preferences
     * @param param the request object
     */
    public updateAffiliatePaymentSetup(param: BillingApiUpdateAffiliatePaymentSetupRequest = {}, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.updateAffiliatePaymentSetup(param.affiliatePaypal, param.affiliatePaymentMethod,  options).toPromise();
    }

    /**
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     * Update Credit Card Details
     * @param param the request object
     */
    public updateBillingCreditCardWithHttpInfo(param: BillingApiUpdateBillingCreditCardRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateBillingCreditCardWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     * Update Credit Card Details
     * @param param the request object
     */
    public updateBillingCreditCard(param: BillingApiUpdateBillingCreditCardRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateBillingCreditCard(param.id,  options).toPromise();
    }

    /**
     * Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     * Update Default Payment Method
     * @param param the request object
     */
    public updateBillingPaymentMethodWithHttpInfo(param: BillingApiUpdateBillingPaymentMethodRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateBillingPaymentMethodWithHttpInfo(param.billingPaymentMethodRequest,  options).toPromise();
    }

    /**
     * Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     * Update Default Payment Method
     * @param param the request object
     */
    public updateBillingPaymentMethod(param: BillingApiUpdateBillingPaymentMethodRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateBillingPaymentMethod(param.billingPaymentMethodRequest,  options).toPromise();
    }

}

import { ObservableDNSApi } from "./ObservableAPI";
import { DNSApiRequestFactory, DNSApiResponseProcessor} from "../apis/DNSApi";

export interface DNSApiAddDnsDomainRequest {
    /**
     * The domain name.
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiaddDnsDomain
     */
    domain: string
    /**
     * IP Address to point the domain to.
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiaddDnsDomain
     */
    ip: string
}

export interface DNSApiAddDnsRecordRequest {
    /**
     * The DNS Domain ID.
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiaddDnsRecord
     */
    id: string
    /**
     * Name part of record
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiaddDnsRecord
     */
    name: string
    /**
     * 
     * Defaults to: undefined
     * @type DnsRecordType
     * @memberof DNSApiaddDnsRecord
     */
    type: DnsRecordType
    /**
     * Content of record
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiaddDnsRecord
     */
    content: string
    /**
     * Time-to-live
     * Defaults to: 86400
     * @type number
     * @memberof DNSApiaddDnsRecord
     */
    ttl?: number
    /**
     * Priority
     * Defaults to: 0
     * @type number
     * @memberof DNSApiaddDnsRecord
     */
    prio?: number
}

export interface DNSApiDeleteDnsDomainRequest {
    /**
     * The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * Defaults to: undefined
     * @type string
     * @memberof DNSApideleteDnsDomain
     */
    id: string
}

export interface DNSApiDeleteDnsRecordRequest {
    /**
     * The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * Defaults to: undefined
     * @type number
     * @memberof DNSApideleteDnsRecord
     */
    domainId: number
    /**
     * The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     * Defaults to: undefined
     * @type number
     * @memberof DNSApideleteDnsRecord
     */
    recordId: number
}

export interface DNSApiGetDnsDomainRequest {
    /**
     * The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * Defaults to: undefined
     * @type number
     * @memberof DNSApigetDnsDomain
     */
    id: number
}

export interface DNSApiGetDnsListRequest {
}

export interface DNSApiUpdateDnsRecordRequest {
    /**
     * The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * Defaults to: undefined
     * @type number
     * @memberof DNSApiupdateDnsRecord
     */
    domainId: number
    /**
     * The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     * Defaults to: undefined
     * @type number
     * @memberof DNSApiupdateDnsRecord
     */
    recordId: number
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiupdateDnsRecord
     */
    name?: string
    /**
     * 
     * Defaults to: undefined
     * @type DnsRecordType
     * @memberof DNSApiupdateDnsRecord
     */
    type?: DnsRecordType
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiupdateDnsRecord
     */
    content?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiupdateDnsRecord
     */
    ttl?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiupdateDnsRecord
     */
    prio?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiupdateDnsRecord
     */
    disabled?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiupdateDnsRecord
     */
    ordername?: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof DNSApiupdateDnsRecord
     */
    auth?: string
}

export class ObjectDNSApi {
    private api: ObservableDNSApi

    public constructor(configuration: Configuration, requestFactory?: DNSApiRequestFactory, responseProcessor?: DNSApiResponseProcessor) {
        this.api = new ObservableDNSApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.
     * Create DNS Domain
     * @param param the request object
     */
    public addDnsDomainWithHttpInfo(param: DNSApiAddDnsDomainRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.addDnsDomainWithHttpInfo(param.domain, param.ip,  options).toPromise();
    }

    /**
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.
     * Create DNS Domain
     * @param param the request object
     */
    public addDnsDomain(param: DNSApiAddDnsDomainRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.addDnsDomain(param.domain, param.ip,  options).toPromise();
    }

    /**
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
     * Add DNS Record to Domain
     * @param param the request object
     */
    public addDnsRecordWithHttpInfo(param: DNSApiAddDnsRecordRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.addDnsRecordWithHttpInfo(param.id, param.name, param.type, param.content, param.ttl, param.prio,  options).toPromise();
    }

    /**
     * Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
     * Add DNS Record to Domain
     * @param param the request object
     */
    public addDnsRecord(param: DNSApiAddDnsRecordRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.addDnsRecord(param.id, param.name, param.type, param.content, param.ttl, param.prio,  options).toPromise();
    }

    /**
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     * Delete DNS Domain
     * @param param the request object
     */
    public deleteDnsDomainWithHttpInfo(param: DNSApiDeleteDnsDomainRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteDnsDomainWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     * Delete DNS Domain
     * @param param the request object
     */
    public deleteDnsDomain(param: DNSApiDeleteDnsDomainRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteDnsDomain(param.id,  options).toPromise();
    }

    /**
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
     * Delete DNS Record
     * @param param the request object
     */
    public deleteDnsRecordWithHttpInfo(param: DNSApiDeleteDnsRecordRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteDnsRecordWithHttpInfo(param.domainId, param.recordId,  options).toPromise();
    }

    /**
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
     * Delete DNS Record
     * @param param the request object
     */
    public deleteDnsRecord(param: DNSApiDeleteDnsRecordRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteDnsRecord(param.domainId, param.recordId,  options).toPromise();
    }

    /**
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
     * List Domain DNS Records
     * @param param the request object
     */
    public getDnsDomainWithHttpInfo(param: DNSApiGetDnsDomainRequest, options?: ConfigurationOptions): Promise<HttpInfo<Array<DnsRecord>>> {
        return this.api.getDnsDomainWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
     * List Domain DNS Records
     * @param param the request object
     */
    public getDnsDomain(param: DNSApiGetDnsDomainRequest, options?: ConfigurationOptions): Promise<Array<DnsRecord>> {
        return this.api.getDnsDomain(param.id,  options).toPromise();
    }

    /**
     * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
     * List DNS Domains
     * @param param the request object
     */
    public getDnsListWithHttpInfo(param: DNSApiGetDnsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<DnsListItem>>> {
        return this.api.getDnsListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
     * List DNS Domains
     * @param param the request object
     */
    public getDnsList(param: DNSApiGetDnsListRequest = {}, options?: ConfigurationOptions): Promise<Array<DnsListItem>> {
        return this.api.getDnsList( options).toPromise();
    }

    /**
     * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     * Update DNS Record
     * @param param the request object
     */
    public updateDnsRecordWithHttpInfo(param: DNSApiUpdateDnsRecordRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateDnsRecordWithHttpInfo(param.domainId, param.recordId, param.name, param.type, param.content, param.ttl, param.prio, param.disabled, param.ordername, param.auth,  options).toPromise();
    }

    /**
     * Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
     * Update DNS Record
     * @param param the request object
     */
    public updateDnsRecord(param: DNSApiUpdateDnsRecordRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateDnsRecord(param.domainId, param.recordId, param.name, param.type, param.content, param.ttl, param.prio, param.disabled, param.ordername, param.auth,  options).toPromise();
    }

}

import { ObservableDomainsApi } from "./ObservableAPI";
import { DomainsApiRequestFactory, DomainsApiResponseProcessor} from "../apis/DomainsApi";

export interface DomainsApiAddDomainRequest {
}

export interface DomainsApiAddDomainDnssecRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApiaddDomainDnssec
     */
    id: number
    /**
     * 
     * @type DomainDnssecRequest
     * @memberof DomainsApiaddDomainDnssec
     */
    domainDnssecRequest: DomainDnssecRequest
}

export interface DomainsApiAddDomainNameserverRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApiaddDomainNameserver
     */
    id: number
    /**
     * 
     * @type DomainNameserverPostRequest
     * @memberof DomainsApiaddDomainNameserver
     */
    domainNameserverPostRequest: DomainNameserverPostRequest
}

export interface DomainsApiCancelDomainRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApicancelDomain
     */
    id: number
}

export interface DomainsApiDeleteDomainDnssecRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApideleteDomainDnssec
     */
    id: number
    /**
     * Set to &#x60;delete&#x60; to remove all DNSSEC records.
     * Defaults to: undefined
     * @type string
     * @memberof DomainsApideleteDomainDnssec
     */
    action: string
}

export interface DomainsApiDeleteDomainNameserverRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApideleteDomainNameserver
     */
    id: number
    /**
     * The index of the registered nameserver from the registered nameservers list to delete.  
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApideleteDomainNameserver
     */
    index: number
}

export interface DomainsApiGetDomainContactRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainContact
     */
    id: number
}

export interface DomainsApiGetDomainDnssecRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainDnssec
     */
    id: number
}

export interface DomainsApiGetDomainInfoRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainInfo
     */
    id: number
}

export interface DomainsApiGetDomainInvoicesRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainInvoices
     */
    id: number
}

export interface DomainsApiGetDomainLookupRequest {
    /**
     * The full domain name to look up (for example &#x60;example.com&#x60;).
     * Defaults to: undefined
     * @type string
     * @memberof DomainsApigetDomainLookup
     */
    name: string
}

export interface DomainsApiGetDomainNameserversRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainNameservers
     */
    id: number
}

export interface DomainsApiGetDomainOrderFieldsRequest {
    /**
     * The fully qualified domain name (e.g. &#x60;example.com&#x60;).
     * Defaults to: undefined
     * @type string
     * @memberof DomainsApigetDomainOrderFields
     */
    domain: string
    /**
     * The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.
     * Defaults to: undefined
     * @type string
     * @memberof DomainsApigetDomainOrderFields
     */
    regType: string
}

export interface DomainsApiGetDomainOrderSearchResultsRequest {
    /**
     * The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).
     * Defaults to: undefined
     * @type string
     * @memberof DomainsApigetDomainOrderSearchResults
     */
    domain: string
}

export interface DomainsApiGetDomainRenewalRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainRenewal
     */
    id: number
}

export interface DomainsApiGetDomainSearchRequest {
    /**
     * The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).
     * Defaults to: undefined
     * @type string
     * @memberof DomainsApigetDomainSearch
     */
    name: string
}

export interface DomainsApiGetDomainTransferRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainTransfer
     */
    id: number
}

export interface DomainsApiGetDomainWhoisPrivacyRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainWhoisPrivacy
     */
    id: number
}

export interface DomainsApiGetDomainsListRequest {
}

export interface DomainsApiGetDomainsWelcomeEmailRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApigetDomainsWelcomeEmail
     */
    id: number
}

export interface DomainsApiGetNewDomainRequest {
}

export interface DomainsApiPatchDomainsRequest {
}

export interface DomainsApiPostDomainRenewalRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApipostDomainRenewal
     */
    id: number
}

export interface DomainsApiPostDomainTransferRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApipostDomainTransfer
     */
    id: number
}

export interface DomainsApiPutDomainsRequest {
}

export interface DomainsApiUpdateDomainContactRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApiupdateDomainContact
     */
    id: number
    /**
     * 
     * @type DomainContactDetails
     * @memberof DomainsApiupdateDomainContact
     */
    domainContactDetails: DomainContactDetails
}

export interface DomainsApiUpdateDomainInfoRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof DomainsApiupdateDomainInfo
     */
    id: string
}

export interface DomainsApiUpdateDomainNameserversRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApiupdateDomainNameservers
     */
    id: number
    /**
     * 
     * @type DomainNameserverPutRequest
     * @memberof DomainsApiupdateDomainNameservers
     */
    domainNameserverPutRequest: DomainNameserverPutRequest
}

export interface DomainsApiUpdateDomainWhoisPrivacyRequest {
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof DomainsApiupdateDomainWhoisPrivacy
     */
    id: number
    /**
     * 
     * @type DomainWhoisPrivacyRequest
     * @memberof DomainsApiupdateDomainWhoisPrivacy
     */
    domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest
}

export class ObjectDomainsApi {
    private api: ObservableDomainsApi

    public constructor(configuration: Configuration, requestFactory?: DomainsApiRequestFactory, responseProcessor?: DomainsApiResponseProcessor) {
        this.api = new ObservableDomainsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
     * Place Domain Order
     * @param param the request object
     */
    public addDomainWithHttpInfo(param: DomainsApiAddDomainRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addDomainWithHttpInfo( options).toPromise();
    }

    /**
     * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
     * Place Domain Order
     * @param param the request object
     */
    public addDomain(param: DomainsApiAddDomainRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addDomain( options).toPromise();
    }

    /**
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     * Add Domain DNSSEC Records
     * @param param the request object
     */
    public addDomainDnssecWithHttpInfo(param: DomainsApiAddDomainDnssecRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.addDomainDnssecWithHttpInfo(param.id, param.domainDnssecRequest,  options).toPromise();
    }

    /**
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     * Add Domain DNSSEC Records
     * @param param the request object
     */
    public addDomainDnssec(param: DomainsApiAddDomainDnssecRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.addDomainDnssec(param.id, param.domainDnssecRequest,  options).toPromise();
    }

    /**
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
     * Add Registered Nameserver
     * @param param the request object
     */
    public addDomainNameserverWithHttpInfo(param: DomainsApiAddDomainNameserverRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.addDomainNameserverWithHttpInfo(param.id, param.domainNameserverPostRequest,  options).toPromise();
    }

    /**
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
     * Add Registered Nameserver
     * @param param the request object
     */
    public addDomainNameserver(param: DomainsApiAddDomainNameserverRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.addDomainNameserver(param.id, param.domainNameserverPostRequest,  options).toPromise();
    }

    /**
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     * Cancel Domain Order
     * @param param the request object
     */
    public cancelDomainWithHttpInfo(param: DomainsApiCancelDomainRequest, options?: ConfigurationOptions): Promise<HttpInfo<CancelDomain200Response>> {
        return this.api.cancelDomainWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     * Cancel Domain Order
     * @param param the request object
     */
    public cancelDomain(param: DomainsApiCancelDomainRequest, options?: ConfigurationOptions): Promise<CancelDomain200Response> {
        return this.api.cancelDomain(param.id,  options).toPromise();
    }

    /**
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     * Remove Domain DNSSEC Records
     * @param param the request object
     */
    public deleteDomainDnssecWithHttpInfo(param: DomainsApiDeleteDomainDnssecRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteDomainDnssecWithHttpInfo(param.id, param.action,  options).toPromise();
    }

    /**
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     * Remove Domain DNSSEC Records
     * @param param the request object
     */
    public deleteDomainDnssec(param: DomainsApiDeleteDomainDnssecRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteDomainDnssec(param.id, param.action,  options).toPromise();
    }

    /**
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
     * Delete Registered Nameserver
     * @param param the request object
     */
    public deleteDomainNameserverWithHttpInfo(param: DomainsApiDeleteDomainNameserverRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.deleteDomainNameserverWithHttpInfo(param.id, param.index,  options).toPromise();
    }

    /**
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
     * Delete Registered Nameserver
     * @param param the request object
     */
    public deleteDomainNameserver(param: DomainsApiDeleteDomainNameserverRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.deleteDomainNameserver(param.id, param.index,  options).toPromise();
    }

    /**
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     * Get Domain Contact Details
     * @param param the request object
     */
    public getDomainContactWithHttpInfo(param: DomainsApiGetDomainContactRequest, options?: ConfigurationOptions): Promise<HttpInfo<DomainContactDetails>> {
        return this.api.getDomainContactWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     * Get Domain Contact Details
     * @param param the request object
     */
    public getDomainContact(param: DomainsApiGetDomainContactRequest, options?: ConfigurationOptions): Promise<DomainContactDetails> {
        return this.api.getDomainContact(param.id,  options).toPromise();
    }

    /**
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     * Get Domain DNSSEC Records
     * @param param the request object
     */
    public getDomainDnssecWithHttpInfo(param: DomainsApiGetDomainDnssecRequest, options?: ConfigurationOptions): Promise<HttpInfo<DomainDnssecRecords>> {
        return this.api.getDomainDnssecWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     * Get Domain DNSSEC Records
     * @param param the request object
     */
    public getDomainDnssec(param: DomainsApiGetDomainDnssecRequest, options?: ConfigurationOptions): Promise<DomainDnssecRecords> {
        return this.api.getDomainDnssec(param.id,  options).toPromise();
    }

    /**
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
     * Get Domain Order
     * @param param the request object
     */
    public getDomainInfoWithHttpInfo(param: DomainsApiGetDomainInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<Domain>> {
        return this.api.getDomainInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
     * Get Domain Order
     * @param param the request object
     */
    public getDomainInfo(param: DomainsApiGetDomainInfoRequest, options?: ConfigurationOptions): Promise<Domain> {
        return this.api.getDomainInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     * Get Domain Invoices
     * @param param the request object
     */
    public getDomainInvoicesWithHttpInfo(param: DomainsApiGetDomainInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getDomainInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     * Get Domain Invoices
     * @param param the request object
     */
    public getDomainInvoices(param: DomainsApiGetDomainInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getDomainInvoices(param.id,  options).toPromise();
    }

    /**
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
     * Lookup Domain Availability and Pricing
     * @param param the request object
     */
    public getDomainLookupWithHttpInfo(param: DomainsApiGetDomainLookupRequest, options?: ConfigurationOptions): Promise<HttpInfo<DomainLookupResponse>> {
        return this.api.getDomainLookupWithHttpInfo(param.name,  options).toPromise();
    }

    /**
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
     * Lookup Domain Availability and Pricing
     * @param param the request object
     */
    public getDomainLookup(param: DomainsApiGetDomainLookupRequest, options?: ConfigurationOptions): Promise<DomainLookupResponse> {
        return this.api.getDomainLookup(param.name,  options).toPromise();
    }

    /**
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     * List Registered Nameservers
     * @param param the request object
     */
    public getDomainNameserversWithHttpInfo(param: DomainsApiGetDomainNameserversRequest, options?: ConfigurationOptions): Promise<HttpInfo<DomainNameserverGetResponse>> {
        return this.api.getDomainNameserversWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     * List Registered Nameservers
     * @param param the request object
     */
    public getDomainNameservers(param: DomainsApiGetDomainNameserversRequest, options?: ConfigurationOptions): Promise<DomainNameserverGetResponse> {
        return this.api.getDomainNameservers(param.id,  options).toPromise();
    }

    /**
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
     * Get Domain Order Fields
     * @param param the request object
     */
    public getDomainOrderFieldsWithHttpInfo(param: DomainsApiGetDomainOrderFieldsRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getDomainOrderFieldsWithHttpInfo(param.domain, param.regType,  options).toPromise();
    }

    /**
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
     * Get Domain Order Fields
     * @param param the request object
     */
    public getDomainOrderFields(param: DomainsApiGetDomainOrderFieldsRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getDomainOrderFields(param.domain, param.regType,  options).toPromise();
    }

    /**
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     * Get Domain Order Search Results
     * @param param the request object
     */
    public getDomainOrderSearchResultsWithHttpInfo(param: DomainsApiGetDomainOrderSearchResultsRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getDomainOrderSearchResultsWithHttpInfo(param.domain,  options).toPromise();
    }

    /**
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     * Get Domain Order Search Results
     * @param param the request object
     */
    public getDomainOrderSearchResults(param: DomainsApiGetDomainOrderSearchResultsRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getDomainOrderSearchResults(param.domain,  options).toPromise();
    }

    /**
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     * Start Domain Renewal Flow
     * @param param the request object
     */
    public getDomainRenewalWithHttpInfo(param: DomainsApiGetDomainRenewalRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getDomainRenewalWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     * Start Domain Renewal Flow
     * @param param the request object
     */
    public getDomainRenewal(param: DomainsApiGetDomainRenewalRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getDomainRenewal(param.id,  options).toPromise();
    }

    /**
     * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
     * Search Domain Suggestions
     * @param param the request object
     */
    public getDomainSearchWithHttpInfo(param: DomainsApiGetDomainSearchRequest, options?: ConfigurationOptions): Promise<HttpInfo<DomainSearchResponse>> {
        return this.api.getDomainSearchWithHttpInfo(param.name,  options).toPromise();
    }

    /**
     * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
     * Search Domain Suggestions
     * @param param the request object
     */
    public getDomainSearch(param: DomainsApiGetDomainSearchRequest, options?: ConfigurationOptions): Promise<DomainSearchResponse> {
        return this.api.getDomainSearch(param.name,  options).toPromise();
    }

    /**
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
     * Start Domain Transfer Flow
     * @param param the request object
     */
    public getDomainTransferWithHttpInfo(param: DomainsApiGetDomainTransferRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getDomainTransferWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
     * Start Domain Transfer Flow
     * @param param the request object
     */
    public getDomainTransfer(param: DomainsApiGetDomainTransferRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getDomainTransfer(param.id,  options).toPromise();
    }

    /**
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     * Get Whois Privacy Status
     * @param param the request object
     */
    public getDomainWhoisPrivacyWithHttpInfo(param: DomainsApiGetDomainWhoisPrivacyRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getDomainWhoisPrivacyWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     * Get Whois Privacy Status
     * @param param the request object
     */
    public getDomainWhoisPrivacy(param: DomainsApiGetDomainWhoisPrivacyRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getDomainWhoisPrivacy(param.id,  options).toPromise();
    }

    /**
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
     * List Domain Orders
     * @param param the request object
     */
    public getDomainsListWithHttpInfo(param: DomainsApiGetDomainsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<DomainRow>>> {
        return this.api.getDomainsListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
     * List Domain Orders
     * @param param the request object
     */
    public getDomainsList(param: DomainsApiGetDomainsListRequest = {}, options?: ConfigurationOptions): Promise<Array<DomainRow>> {
        return this.api.getDomainsList( options).toPromise();
    }

    /**
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     * Resend Domain Welcome Email
     * @param param the request object
     */
    public getDomainsWelcomeEmailWithHttpInfo(param: DomainsApiGetDomainsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getDomainsWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     * Resend Domain Welcome Email
     * @param param the request object
     */
    public getDomainsWelcomeEmail(param: DomainsApiGetDomainsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getDomainsWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
     * Get Domain Ordering Information
     * @param param the request object
     */
    public getNewDomainWithHttpInfo(param: DomainsApiGetNewDomainRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<DomainOrder>> {
        return this.api.getNewDomainWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
     * Get Domain Ordering Information
     * @param param the request object
     */
    public getNewDomain(param: DomainsApiGetNewDomainRequest = {}, options?: ConfigurationOptions): Promise<DomainOrder> {
        return this.api.getNewDomain( options).toPromise();
    }

    /**
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
     * Validate Domain Order
     * @param param the request object
     */
    public patchDomainsWithHttpInfo(param: DomainsApiPatchDomainsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.patchDomainsWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
     * Validate Domain Order
     * @param param the request object
     */
    public patchDomains(param: DomainsApiPatchDomainsRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.patchDomains( options).toPromise();
    }

    /**
     * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
     * Request Domain Renewal
     * @param param the request object
     */
    public postDomainRenewalWithHttpInfo(param: DomainsApiPostDomainRenewalRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.postDomainRenewalWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
     * Request Domain Renewal
     * @param param the request object
     */
    public postDomainRenewal(param: DomainsApiPostDomainRenewalRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.postDomainRenewal(param.id,  options).toPromise();
    }

    /**
     * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
     * Request Domain Transfer
     * @param param the request object
     */
    public postDomainTransferWithHttpInfo(param: DomainsApiPostDomainTransferRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.postDomainTransferWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
     * Request Domain Transfer
     * @param param the request object
     */
    public postDomainTransfer(param: DomainsApiPostDomainTransferRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.postDomainTransfer(param.id,  options).toPromise();
    }

    /**
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     * Domain Order Search
     * @param param the request object
     */
    public putDomainsWithHttpInfo(param: DomainsApiPutDomainsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putDomainsWithHttpInfo( options).toPromise();
    }

    /**
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     * Domain Order Search
     * @param param the request object
     */
    public putDomains(param: DomainsApiPutDomainsRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putDomains( options).toPromise();
    }

    /**
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     * Update Domain Contact Details
     * @param param the request object
     */
    public updateDomainContactWithHttpInfo(param: DomainsApiUpdateDomainContactRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateDomainContactWithHttpInfo(param.id, param.domainContactDetails,  options).toPromise();
    }

    /**
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     * Update Domain Contact Details
     * @param param the request object
     */
    public updateDomainContact(param: DomainsApiUpdateDomainContactRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateDomainContact(param.id, param.domainContactDetails,  options).toPromise();
    }

    /**
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     * Update Domain Order
     * @param param the request object
     */
    public updateDomainInfoWithHttpInfo(param: DomainsApiUpdateDomainInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateDomainInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     * Update Domain Order
     * @param param the request object
     */
    public updateDomainInfo(param: DomainsApiUpdateDomainInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateDomainInfo(param.id,  options).toPromise();
    }

    /**
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     * Replace Nameserver Set
     * @param param the request object
     */
    public updateDomainNameserversWithHttpInfo(param: DomainsApiUpdateDomainNameserversRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.updateDomainNameserversWithHttpInfo(param.id, param.domainNameserverPutRequest,  options).toPromise();
    }

    /**
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     * Replace Nameserver Set
     * @param param the request object
     */
    public updateDomainNameservers(param: DomainsApiUpdateDomainNameserversRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.updateDomainNameservers(param.id, param.domainNameserverPutRequest,  options).toPromise();
    }

    /**
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
     * Update Whois Privacy
     * @param param the request object
     */
    public updateDomainWhoisPrivacyWithHttpInfo(param: DomainsApiUpdateDomainWhoisPrivacyRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateDomainWhoisPrivacyWithHttpInfo(param.id, param.domainWhoisPrivacyRequest,  options).toPromise();
    }

    /**
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
     * Update Whois Privacy
     * @param param the request object
     */
    public updateDomainWhoisPrivacy(param: DomainsApiUpdateDomainWhoisPrivacyRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateDomainWhoisPrivacy(param.id, param.domainWhoisPrivacyRequest,  options).toPromise();
    }

}

import { ObservableFloatingIPsApi } from "./ObservableAPI";
import { FloatingIPsApiRequestFactory, FloatingIPsApiResponseProcessor} from "../apis/FloatingIPsApi";

export interface FloatingIPsApiAddFloatingIpRequest {
}

export interface FloatingIPsApiFloatingIpsCancelRequest {
    /**
     * The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof FloatingIPsApifloatingIpsCancel
     */
    id: number
}

export interface FloatingIPsApiGetFloatingIpInfoRequest {
    /**
     * The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof FloatingIPsApigetFloatingIpInfo
     */
    id: number
}

export interface FloatingIPsApiGetFloatingIpInvoicesRequest {
    /**
     * The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof FloatingIPsApigetFloatingIpInvoices
     */
    id: number
}

export interface FloatingIPsApiGetFloatingIpsListRequest {
}

export interface FloatingIPsApiGetFloatingIpsWelcomeEmailRequest {
    /**
     * The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof FloatingIPsApigetFloatingIpsWelcomeEmail
     */
    id: number
}

export interface FloatingIPsApiGetNewFloatingIpRequest {
}

export interface FloatingIPsApiPostFloatingIpsChangeIpRequest {
    /**
     * The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof FloatingIPsApipostFloatingIpsChangeIp
     */
    id: number
    /**
     * IP Address
     * Defaults to: undefined
     * @type string
     * @memberof FloatingIPsApipostFloatingIpsChangeIp
     */
    ip: string
}

export interface FloatingIPsApiPutFloatingIpsRequest {
}

export interface FloatingIPsApiUpdateFloatingIpInfoRequest {
    /**
     * The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof FloatingIPsApiupdateFloatingIpInfo
     */
    id: string
}

export class ObjectFloatingIPsApi {
    private api: ObservableFloatingIPsApi

    public constructor(configuration: Configuration, requestFactory?: FloatingIPsApiRequestFactory, responseProcessor?: FloatingIPsApiResponseProcessor) {
        this.api = new ObservableFloatingIPsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
     * Place Floating IP Order
     * @param param the request object
     */
    public addFloatingIpWithHttpInfo(param: FloatingIPsApiAddFloatingIpRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addFloatingIpWithHttpInfo( options).toPromise();
    }

    /**
     * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
     * Place Floating IP Order
     * @param param the request object
     */
    public addFloatingIp(param: FloatingIPsApiAddFloatingIpRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addFloatingIp( options).toPromise();
    }

    /**
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Floating IP
     * @param param the request object
     */
    public floatingIpsCancelWithHttpInfo(param: FloatingIPsApiFloatingIpsCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<FloatingIpsCancel200Response>> {
        return this.api.floatingIpsCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Floating IP
     * @param param the request object
     */
    public floatingIpsCancel(param: FloatingIPsApiFloatingIpsCancelRequest, options?: ConfigurationOptions): Promise<FloatingIpsCancel200Response> {
        return this.api.floatingIpsCancel(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     * View Floating IP
     * @param param the request object
     */
    public getFloatingIpInfoWithHttpInfo(param: FloatingIPsApiGetFloatingIpInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<any>> {
        return this.api.getFloatingIpInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     * View Floating IP
     * @param param the request object
     */
    public getFloatingIpInfo(param: FloatingIPsApiGetFloatingIpInfoRequest, options?: ConfigurationOptions): Promise<any> {
        return this.api.getFloatingIpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this Floating IP service.
     * Get Floating IP Invoices
     * @param param the request object
     */
    public getFloatingIpInvoicesWithHttpInfo(param: FloatingIPsApiGetFloatingIpInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getFloatingIpInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this Floating IP service.
     * Get Floating IP Invoices
     * @param param the request object
     */
    public getFloatingIpInvoices(param: FloatingIPsApiGetFloatingIpInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getFloatingIpInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns all Floating IP services on the account with their current status and assignment details.
     * List Floating IPs
     * @param param the request object
     */
    public getFloatingIpsListWithHttpInfo(param: FloatingIPsApiGetFloatingIpsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getFloatingIpsListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns all Floating IP services on the account with their current status and assignment details.
     * List Floating IPs
     * @param param the request object
     */
    public getFloatingIpsList(param: FloatingIPsApiGetFloatingIpsListRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.getFloatingIpsList( options).toPromise();
    }

    /**
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     * Resend Floating IPs Welcome Email
     * @param param the request object
     */
    public getFloatingIpsWelcomeEmailWithHttpInfo(param: FloatingIPsApiGetFloatingIpsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getFloatingIpsWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     * Resend Floating IPs Welcome Email
     * @param param the request object
     */
    public getFloatingIpsWelcomeEmail(param: FloatingIPsApiGetFloatingIpsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getFloatingIpsWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Retrieves available options and pricing for ordering a new Floating IP.
     * Get Floating IP Ordering Information
     * @param param the request object
     */
    public getNewFloatingIpWithHttpInfo(param: FloatingIPsApiGetNewFloatingIpRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<any>> {
        return this.api.getNewFloatingIpWithHttpInfo( options).toPromise();
    }

    /**
     * Retrieves available options and pricing for ordering a new Floating IP.
     * Get Floating IP Ordering Information
     * @param param the request object
     */
    public getNewFloatingIp(param: FloatingIPsApiGetNewFloatingIpRequest = {}, options?: ConfigurationOptions): Promise<any> {
        return this.api.getNewFloatingIp( options).toPromise();
    }

    /**
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
     * Change Floating IP Target
     * @param param the request object
     */
    public postFloatingIpsChangeIpWithHttpInfo(param: FloatingIPsApiPostFloatingIpsChangeIpRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.postFloatingIpsChangeIpWithHttpInfo(param.id, param.ip,  options).toPromise();
    }

    /**
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
     * Change Floating IP Target
     * @param param the request object
     */
    public postFloatingIpsChangeIp(param: FloatingIPsApiPostFloatingIpsChangeIpRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.postFloatingIpsChangeIp(param.id, param.ip,  options).toPromise();
    }

    /**
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Floating IP Order
     * @param param the request object
     */
    public putFloatingIpsWithHttpInfo(param: FloatingIPsApiPutFloatingIpsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putFloatingIpsWithHttpInfo( options).toPromise();
    }

    /**
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Floating IP Order
     * @param param the request object
     */
    public putFloatingIps(param: FloatingIPsApiPutFloatingIpsRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putFloatingIps( options).toPromise();
    }

    /**
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     * Update Floating IP
     * @param param the request object
     */
    public updateFloatingIpInfoWithHttpInfo(param: FloatingIPsApiUpdateFloatingIpInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateFloatingIpInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     * Update Floating IP
     * @param param the request object
     */
    public updateFloatingIpInfo(param: FloatingIPsApiUpdateFloatingIpInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateFloatingIpInfo(param.id,  options).toPromise();
    }

}

import { ObservableLicensesApi } from "./ObservableAPI";
import { LicensesApiRequestFactory, LicensesApiResponseProcessor} from "../apis/LicensesApi";

export interface LicensesApiAddLicenseRequest {
}

export interface LicensesApiGetLicenseInfoRequest {
    /**
     * The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof LicensesApigetLicenseInfo
     */
    id: number
}

export interface LicensesApiGetLicenseInvoicesRequest {
    /**
     * The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof LicensesApigetLicenseInvoices
     */
    id: number
}

export interface LicensesApiGetLicenseListRequest {
}

export interface LicensesApiGetLicenseOrderCatTagInfoRequest {
    /**
     * The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.
     * Defaults to: undefined
     * @type string
     * @memberof LicensesApigetLicenseOrderCatTagInfo
     */
    catTag: string
}

export interface LicensesApiGetLicensesWelcomeEmailRequest {
    /**
     * The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof LicensesApigetLicensesWelcomeEmail
     */
    id: number
}

export interface LicensesApiGetNewLicenseRequest {
}

export interface LicensesApiLicensesCancelRequest {
    /**
     * The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof LicensesApilicensesCancel
     */
    id: number
}

export interface LicensesApiPostLicenseChangeIpRequest {
    /**
     * The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof LicensesApipostLicenseChangeIp
     */
    id: number
    /**
     * 
     * @type IpObject
     * @memberof LicensesApipostLicenseChangeIp
     */
    ipObject: IpObject
}

export interface LicensesApiPutLicensesRequest {
}

export interface LicensesApiUpdateLicenseInfoRequest {
    /**
     * The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof LicensesApiupdateLicenseInfo
     */
    id: string
}

export class ObjectLicensesApi {
    private api: ObservableLicensesApi

    public constructor(configuration: Configuration, requestFactory?: LicensesApiRequestFactory, responseProcessor?: LicensesApiResponseProcessor) {
        this.api = new ObservableLicensesApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
     * Place License Order
     * @param param the request object
     */
    public addLicenseWithHttpInfo(param: LicensesApiAddLicenseRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addLicenseWithHttpInfo( options).toPromise();
    }

    /**
     * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
     * Place License Order
     * @param param the request object
     */
    public addLicense(param: LicensesApiAddLicenseRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addLicense( options).toPromise();
    }

    /**
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     * Get License
     * @param param the request object
     */
    public getLicenseInfoWithHttpInfo(param: LicensesApiGetLicenseInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<License>> {
        return this.api.getLicenseInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     * Get License
     * @param param the request object
     */
    public getLicenseInfo(param: LicensesApiGetLicenseInfoRequest, options?: ConfigurationOptions): Promise<License> {
        return this.api.getLicenseInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this license service.
     * Get License Invoices
     * @param param the request object
     */
    public getLicenseInvoicesWithHttpInfo(param: LicensesApiGetLicenseInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getLicenseInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this license service.
     * Get License Invoices
     * @param param the request object
     */
    public getLicenseInvoices(param: LicensesApiGetLicenseInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getLicenseInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns all software license services on the account with their current status and IP assignments.
     * List Licenses
     * @param param the request object
     */
    public getLicenseListWithHttpInfo(param: LicensesApiGetLicenseListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<LicenseRow>>> {
        return this.api.getLicenseListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns all software license services on the account with their current status and IP assignments.
     * List Licenses
     * @param param the request object
     */
    public getLicenseList(param: LicensesApiGetLicenseListRequest = {}, options?: ConfigurationOptions): Promise<Array<LicenseRow>> {
        return this.api.getLicenseList( options).toPromise();
    }

    /**
     * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
     * Get License Order Information for Category
     * @param param the request object
     */
    public getLicenseOrderCatTagInfoWithHttpInfo(param: LicensesApiGetLicenseOrderCatTagInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getLicenseOrderCatTagInfoWithHttpInfo(param.catTag,  options).toPromise();
    }

    /**
     * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
     * Get License Order Information for Category
     * @param param the request object
     */
    public getLicenseOrderCatTagInfo(param: LicensesApiGetLicenseOrderCatTagInfoRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getLicenseOrderCatTagInfo(param.catTag,  options).toPromise();
    }

    /**
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     * Resend License Welcome Email
     * @param param the request object
     */
    public getLicensesWelcomeEmailWithHttpInfo(param: LicensesApiGetLicensesWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getLicensesWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     * Resend License Welcome Email
     * @param param the request object
     */
    public getLicensesWelcomeEmail(param: LicensesApiGetLicensesWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getLicensesWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Retrieves available license types, categories, and pricing for ordering a new license.
     * Get License Order Information
     * @param param the request object
     */
    public getNewLicenseWithHttpInfo(param: LicensesApiGetNewLicenseRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<LicensesOrder>> {
        return this.api.getNewLicenseWithHttpInfo( options).toPromise();
    }

    /**
     * Retrieves available license types, categories, and pricing for ordering a new license.
     * Get License Order Information
     * @param param the request object
     */
    public getNewLicense(param: LicensesApiGetNewLicenseRequest = {}, options?: ConfigurationOptions): Promise<LicensesOrder> {
        return this.api.getNewLicense( options).toPromise();
    }

    /**
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel License
     * @param param the request object
     */
    public licensesCancelWithHttpInfo(param: LicensesApiLicensesCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<LicensesCancel200Response>> {
        return this.api.licensesCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel License
     * @param param the request object
     */
    public licensesCancel(param: LicensesApiLicensesCancelRequest, options?: ConfigurationOptions): Promise<LicensesCancel200Response> {
        return this.api.licensesCancel(param.id,  options).toPromise();
    }

    /**
     * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
     * Change License IP
     * @param param the request object
     */
    public postLicenseChangeIpWithHttpInfo(param: LicensesApiPostLicenseChangeIpRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.postLicenseChangeIpWithHttpInfo(param.id, param.ipObject,  options).toPromise();
    }

    /**
     * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
     * Change License IP
     * @param param the request object
     */
    public postLicenseChangeIp(param: LicensesApiPostLicenseChangeIpRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.postLicenseChangeIp(param.id, param.ipObject,  options).toPromise();
    }

    /**
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     * Validate License Order
     * @param param the request object
     */
    public putLicensesWithHttpInfo(param: LicensesApiPutLicensesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putLicensesWithHttpInfo( options).toPromise();
    }

    /**
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     * Validate License Order
     * @param param the request object
     */
    public putLicenses(param: LicensesApiPutLicensesRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putLicenses( options).toPromise();
    }

    /**
     * Updates settings on a license service such as its assigned IP.
     * Update License
     * @param param the request object
     */
    public updateLicenseInfoWithHttpInfo(param: LicensesApiUpdateLicenseInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateLicenseInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates settings on a license service such as its assigned IP.
     * Update License
     * @param param the request object
     */
    public updateLicenseInfo(param: LicensesApiUpdateLicenseInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateLicenseInfo(param.id,  options).toPromise();
    }

}

import { ObservableMailApi } from "./ObservableAPI";
import { MailApiRequestFactory, MailApiResponseProcessor} from "../apis/MailApi";

export interface MailApiAddMailRequest {
}

export interface MailApiAddRuleRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApiaddRule
     */
    id: number
    /**
     * These are the fields needed to create a new email deny rule.
     * @type DenyRuleNew
     * @memberof MailApiaddRule
     */
    denyRuleNew: DenyRuleNew
}

export interface MailApiCreateMailAlertRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApicreateMailAlert
     */
    id: number
    /**
     * 
     * @type MailAlertRequest
     * @memberof MailApicreateMailAlert
     */
    mailAlertRequest: MailAlertRequest
}

export interface MailApiDeleteMailAlertRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApideleteMailAlert
     */
    id: number
    /**
     * Alert ID to delete.
     * Defaults to: undefined
     * @type number
     * @memberof MailApideleteMailAlert
     */
    alertId: number
}

export interface MailApiDeleteRuleRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApideleteRule
     */
    id: number
    /**
     * The ID of the Rules entry.
     * Defaults to: undefined
     * @type string
     * @memberof MailApideleteRule
     */
    rule: string
}

export interface MailApiDelistBlockRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApidelistBlock
     */
    id: number
    /**
     * an email address
     * Defaults to: undefined
     * @type string
     * @memberof MailApidelistBlock
     */
    email?: string
}

export interface MailApiGetMailAlertsRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetMailAlerts
     */
    id: number
}

export interface MailApiGetMailBlocksRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetMailBlocks
     */
    id: number
}

export interface MailApiGetMailDelistRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetMailDelist
     */
    id: number
}

export interface MailApiGetMailDeliverabilityRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetMailDeliverability
     */
    id: number
}

export interface MailApiGetMailInfoRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetMailInfo
     */
    id: number
}

export interface MailApiGetMailInvoicesRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetMailInvoices
     */
    id: number
}

export interface MailApiGetMailListRequest {
}

export interface MailApiGetMailWelcomeEmailRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetMailWelcomeEmail
     */
    id: number
}

export interface MailApiGetNewMailRequest {
}

export interface MailApiGetRulesRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetRules
     */
    id: number
}

export interface MailApiGetStatsRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApigetStats
     */
    id: number
    /**
     * The timeframe for the statistics.
     * Defaults to: undefined
     * @type &#39;all&#39; | &#39;billing&#39; | &#39;month&#39; | &#39;7d&#39; | &#39;24h&#39; | &#39;1d&#39; | &#39;1h&#39;
     * @memberof MailApigetStats
     */
    time?: 'all' | 'billing' | 'month' | '7d' | '24h' | '1d' | '1h'
}

export interface MailApiMailCancelRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApimailCancel
     */
    id: number
}

export interface MailApiPostMailDelistRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApipostMailDelist
     */
    id: number
    /**
     * 
     * @type MailDelistRequest
     * @memberof MailApipostMailDelist
     */
    mailDelistRequest: MailDelistRequest
}

export interface MailApiPutMailRequest {
}

export interface MailApiResetMailPasswordRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApiresetMailPassword
     */
    id: number
}

export interface MailApiSendAdvMailRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApisendAdvMail
     */
    id: number
    /**
     * 
     * @type SendMailAdv
     * @memberof MailApisendAdvMail
     */
    sendMailAdv: SendMailAdv
}

export interface MailApiSendMailRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApisendMail
     */
    id: number
    /**
     * 
     * @type SendMail
     * @memberof MailApisendMail
     */
    sendMail: SendMail
}

export interface MailApiUpdateMailAlertRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApiupdateMailAlert
     */
    id: number
    /**
     * 
     * @type MailAlertUpdateRequest
     * @memberof MailApiupdateMailAlert
     */
    mailAlertUpdateRequest: MailAlertUpdateRequest
}

export interface MailApiUpdateMailInfoRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiupdateMailInfo
     */
    id: string
}

export interface MailApiViewMailLogRequest {
    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApiviewMailLog
     */
    id: number
    /**
     * The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof MailApiviewMailLog
     */
    id2?: number
    /**
     * Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    origin?: string
    /**
     * Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    mx?: string
    /**
     * Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    _from?: string
    /**
     * Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    to?: string
    /**
     * Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    subject?: string
    /**
     * Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    mailid?: string
    /**
     * Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match. The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    messageId?: string
    /**
     * Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    replyto?: string
    /**
     * Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address.
     * Defaults to: undefined
     * @type string
     * @memberof MailApiviewMailLog
     */
    headerfrom?: string
    /**
     * Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status.
     * Defaults to: undefined
     * @type 0 | 1
     * @memberof MailApiviewMailLog
     */
    delivered?: 0 | 1
    /**
     * Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip).
     * Minimum: 0
     * Defaults to: 0
     * @type number
     * @memberof MailApiviewMailLog
     */
    skip?: number
    /**
     * Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages.
     * Minimum: 1
     * Maximum: 10000
     * Defaults to: 100
     * @type number
     * @memberof MailApiviewMailLog
     */
    limit?: number
    /**
     * Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included.
     * Defaults to: undefined
     * @type ViewMailLogStartDateParameter
     * @memberof MailApiviewMailLog
     */
    startDate?: ViewMailLogStartDateParameter
    /**
     * Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;. Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included.
     * Defaults to: undefined
     * @type ViewMailLogStartDateParameter
     * @memberof MailApiviewMailLog
     */
    endDate?: ViewMailLogStartDateParameter
    /**
     * Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order).
     * Defaults to: &#39;time&#39;
     * @type &#39;time&#39;
     * @memberof MailApiviewMailLog
     */
    sort?: 'time'
    /**
     * Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first.
     * Defaults to: &#39;desc&#39;
     * @type &#39;asc&#39; | &#39;desc&#39;
     * @memberof MailApiviewMailLog
     */
    dir?: 'asc' | 'desc'
    /**
     * Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode.
     * Defaults to: &#39;recipient&#39;
     * @type &#39;message&#39; | &#39;recipient&#39;
     * @memberof MailApiviewMailLog
     */
    groupby?: 'message' | 'recipient'
}

export class ObjectMailApi {
    private api: ObservableMailApi

    public constructor(configuration: Configuration, requestFactory?: MailApiRequestFactory, responseProcessor?: MailApiResponseProcessor) {
        this.api = new ObservableMailApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place Mail Order
     * @param param the request object
     */
    public addMailWithHttpInfo(param: MailApiAddMailRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addMailWithHttpInfo( options).toPromise();
    }

    /**
     * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place Mail Order
     * @param param the request object
     */
    public addMail(param: MailApiAddMailRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addMail( options).toPromise();
    }

    /**
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     * Create Deny Rule
     * @param param the request object
     */
    public addRuleWithHttpInfo(param: MailApiAddRuleRequest, options?: ConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        return this.api.addRuleWithHttpInfo(param.id, param.denyRuleNew,  options).toPromise();
    }

    /**
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     * Create Deny Rule
     * @param param the request object
     */
    public addRule(param: MailApiAddRuleRequest, options?: ConfigurationOptions): Promise<GenericResponse> {
        return this.api.addRule(param.id, param.denyRuleNew,  options).toPromise();
    }

    /**
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     * Create Mail Alert
     * @param param the request object
     */
    public createMailAlertWithHttpInfo(param: MailApiCreateMailAlertRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.createMailAlertWithHttpInfo(param.id, param.mailAlertRequest,  options).toPromise();
    }

    /**
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     * Create Mail Alert
     * @param param the request object
     */
    public createMailAlert(param: MailApiCreateMailAlertRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.createMailAlert(param.id, param.mailAlertRequest,  options).toPromise();
    }

    /**
     * Deletes an existing alert definition for the mail service.
     * Delete Mail Alert
     * @param param the request object
     */
    public deleteMailAlertWithHttpInfo(param: MailApiDeleteMailAlertRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteMailAlertWithHttpInfo(param.id, param.alertId,  options).toPromise();
    }

    /**
     * Deletes an existing alert definition for the mail service.
     * Delete Mail Alert
     * @param param the request object
     */
    public deleteMailAlert(param: MailApiDeleteMailAlertRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteMailAlert(param.id, param.alertId,  options).toPromise();
    }

    /**
     * Removes a deny rule from the mail service.
     * Delete Deny Rule
     * @param param the request object
     */
    public deleteRuleWithHttpInfo(param: MailApiDeleteRuleRequest, options?: ConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        return this.api.deleteRuleWithHttpInfo(param.id, param.rule,  options).toPromise();
    }

    /**
     * Removes a deny rule from the mail service.
     * Delete Deny Rule
     * @param param the request object
     */
    public deleteRule(param: MailApiDeleteRuleRequest, options?: ConfigurationOptions): Promise<GenericResponse> {
        return this.api.deleteRule(param.id, param.rule,  options).toPromise();
    }

    /**
     * Removes an email address from the mail service\'s block lists.
     * Remove Email Address from Block List
     * @param param the request object
     */
    public delistBlockWithHttpInfo(param: MailApiDelistBlockRequest, options?: ConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        return this.api.delistBlockWithHttpInfo(param.id, param.email,  options).toPromise();
    }

    /**
     * Removes an email address from the mail service\'s block lists.
     * Remove Email Address from Block List
     * @param param the request object
     */
    public delistBlock(param: MailApiDelistBlockRequest, options?: ConfigurationOptions): Promise<GenericResponse> {
        return this.api.delistBlock(param.id, param.email,  options).toPromise();
    }

    /**
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     * List Mail Alerts
     * @param param the request object
     */
    public getMailAlertsWithHttpInfo(param: MailApiGetMailAlertsRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailAlertsResponse>> {
        return this.api.getMailAlertsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     * List Mail Alerts
     * @param param the request object
     */
    public getMailAlerts(param: MailApiGetMailAlertsRequest, options?: ConfigurationOptions): Promise<MailAlertsResponse> {
        return this.api.getMailAlerts(param.id,  options).toPromise();
    }

    /**
     * Displays a listing of the blocked email addresses
     * List Blocked Email Addresses
     * @param param the request object
     */
    public getMailBlocksWithHttpInfo(param: MailApiGetMailBlocksRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailBlocks>> {
        return this.api.getMailBlocksWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Displays a listing of the blocked email addresses
     * List Blocked Email Addresses
     * @param param the request object
     */
    public getMailBlocks(param: MailApiGetMailBlocksRequest, options?: ConfigurationOptions): Promise<MailBlocks> {
        return this.api.getMailBlocks(param.id,  options).toPromise();
    }

    /**
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     * Get Delist Status
     * @param param the request object
     */
    public getMailDelistWithHttpInfo(param: MailApiGetMailDelistRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailDelistResponse>> {
        return this.api.getMailDelistWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     * Get Delist Status
     * @param param the request object
     */
    public getMailDelist(param: MailApiGetMailDelistRequest, options?: ConfigurationOptions): Promise<MailDelistResponse> {
        return this.api.getMailDelist(param.id,  options).toPromise();
    }

    /**
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     * Get Deliverability Metrics
     * @param param the request object
     */
    public getMailDeliverabilityWithHttpInfo(param: MailApiGetMailDeliverabilityRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailDeliverabilityResponse>> {
        return this.api.getMailDeliverabilityWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     * Get Deliverability Metrics
     * @param param the request object
     */
    public getMailDeliverability(param: MailApiGetMailDeliverabilityRequest, options?: ConfigurationOptions): Promise<MailDeliverabilityResponse> {
        return this.api.getMailDeliverability(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     * Get Mail Order
     * @param param the request object
     */
    public getMailInfoWithHttpInfo(param: MailApiGetMailInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailSchema>> {
        return this.api.getMailInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     * Get Mail Order
     * @param param the request object
     */
    public getMailInfo(param: MailApiGetMailInfoRequest, options?: ConfigurationOptions): Promise<MailSchema> {
        return this.api.getMailInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     * Get Mail Invoices
     * @param param the request object
     */
    public getMailInvoicesWithHttpInfo(param: MailApiGetMailInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getMailInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     * Get Mail Invoices
     * @param param the request object
     */
    public getMailInvoices(param: MailApiGetMailInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getMailInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
     * List Mail Orders
     * @param param the request object
     */
    public getMailListWithHttpInfo(param: MailApiGetMailListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<MailRow>>> {
        return this.api.getMailListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
     * List Mail Orders
     * @param param the request object
     */
    public getMailList(param: MailApiGetMailListRequest = {}, options?: ConfigurationOptions): Promise<Array<MailRow>> {
        return this.api.getMailList( options).toPromise();
    }

    /**
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     * Resend Mail Welcome Email
     * @param param the request object
     */
    public getMailWelcomeEmailWithHttpInfo(param: MailApiGetMailWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getMailWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     * Resend Mail Welcome Email
     * @param param the request object
     */
    public getMailWelcomeEmail(param: MailApiGetMailWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getMailWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     * Get Mail Ordering Information
     * @param param the request object
     */
    public getNewMailWithHttpInfo(param: MailApiGetNewMailRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<MailOrder>> {
        return this.api.getNewMailWithHttpInfo( options).toPromise();
    }

    /**
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     * Get Mail Ordering Information
     * @param param the request object
     */
    public getNewMail(param: MailApiGetNewMailRequest = {}, options?: ConfigurationOptions): Promise<MailOrder> {
        return this.api.getNewMail( options).toPromise();
    }

    /**
     * Returns a listing of all the deny block rules configured for this mail service.
     * List Deny Rules
     * @param param the request object
     */
    public getRulesWithHttpInfo(param: MailApiGetRulesRequest, options?: ConfigurationOptions): Promise<HttpInfo<Array<DenyRuleRecord>>> {
        return this.api.getRulesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns a listing of all the deny block rules configured for this mail service.
     * List Deny Rules
     * @param param the request object
     */
    public getRules(param: MailApiGetRulesRequest, options?: ConfigurationOptions): Promise<Array<DenyRuleRecord>> {
        return this.api.getRules(param.id,  options).toPromise();
    }

    /**
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     * Get Mail Usage Statistics
     * @param param the request object
     */
    public getStatsWithHttpInfo(param: MailApiGetStatsRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailStatsType>> {
        return this.api.getStatsWithHttpInfo(param.id, param.time,  options).toPromise();
    }

    /**
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     * Get Mail Usage Statistics
     * @param param the request object
     */
    public getStats(param: MailApiGetStatsRequest, options?: ConfigurationOptions): Promise<MailStatsType> {
        return this.api.getStats(param.id, param.time,  options).toPromise();
    }

    /**
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Mail
     * @param param the request object
     */
    public mailCancelWithHttpInfo(param: MailApiMailCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailCancel200Response>> {
        return this.api.mailCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Mail
     * @param param the request object
     */
    public mailCancel(param: MailApiMailCancelRequest, options?: ConfigurationOptions): Promise<MailCancel200Response> {
        return this.api.mailCancel(param.id,  options).toPromise();
    }

    /**
     * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
     * Delist a Blocked Sender
     * @param param the request object
     */
    public postMailDelistWithHttpInfo(param: MailApiPostMailDelistRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.postMailDelistWithHttpInfo(param.id, param.mailDelistRequest,  options).toPromise();
    }

    /**
     * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
     * Delist a Blocked Sender
     * @param param the request object
     */
    public postMailDelist(param: MailApiPostMailDelistRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.postMailDelist(param.id, param.mailDelistRequest,  options).toPromise();
    }

    /**
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     * Validate Mail Order
     * @param param the request object
     */
    public putMailWithHttpInfo(param: MailApiPutMailRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putMailWithHttpInfo( options).toPromise();
    }

    /**
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     * Validate Mail Order
     * @param param the request object
     */
    public putMail(param: MailApiPutMailRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putMail( options).toPromise();
    }

    /**
     * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
     * Reset Mail Password
     * @param param the request object
     */
    public resetMailPasswordWithHttpInfo(param: MailApiResetMailPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.resetMailPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
     * Reset Mail Password
     * @param param the request object
     */
    public resetMailPassword(param: MailApiResetMailPasswordRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.resetMailPassword(param.id,  options).toPromise();
    }

    /**
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
     * Send Email with Advanced Options
     * @param param the request object
     */
    public sendAdvMailWithHttpInfo(param: MailApiSendAdvMailRequest, options?: ConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        return this.api.sendAdvMailWithHttpInfo(param.id, param.sendMailAdv,  options).toPromise();
    }

    /**
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
     * Send Email with Advanced Options
     * @param param the request object
     */
    public sendAdvMail(param: MailApiSendAdvMailRequest, options?: ConfigurationOptions): Promise<GenericResponse> {
        return this.api.sendAdvMail(param.id, param.sendMailAdv,  options).toPromise();
    }

    /**
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
     * Send Email
     * @param param the request object
     */
    public sendMailWithHttpInfo(param: MailApiSendMailRequest, options?: ConfigurationOptions): Promise<HttpInfo<GenericResponse>> {
        return this.api.sendMailWithHttpInfo(param.id, param.sendMail,  options).toPromise();
    }

    /**
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
     * Send Email
     * @param param the request object
     */
    public sendMail(param: MailApiSendMailRequest, options?: ConfigurationOptions): Promise<GenericResponse> {
        return this.api.sendMail(param.id, param.sendMail,  options).toPromise();
    }

    /**
     * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
     * Update Mail Alert
     * @param param the request object
     */
    public updateMailAlertWithHttpInfo(param: MailApiUpdateMailAlertRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateMailAlertWithHttpInfo(param.id, param.mailAlertUpdateRequest,  options).toPromise();
    }

    /**
     * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
     * Update Mail Alert
     * @param param the request object
     */
    public updateMailAlert(param: MailApiUpdateMailAlertRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateMailAlert(param.id, param.mailAlertUpdateRequest,  options).toPromise();
    }

    /**
     * Updates mail service metadata for the order, such as stored settings or account details.
     * Update Mail Order
     * @param param the request object
     */
    public updateMailInfoWithHttpInfo(param: MailApiUpdateMailInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateMailInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates mail service metadata for the order, such as stored settings or account details.
     * Update Mail Order
     * @param param the request object
     */
    public updateMailInfo(param: MailApiUpdateMailInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateMailInfo(param.id,  options).toPromise();
    }

    /**
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
     * View Mail Log
     * @param param the request object
     */
    public viewMailLogWithHttpInfo(param: MailApiViewMailLogRequest, options?: ConfigurationOptions): Promise<HttpInfo<MailLog>> {
        return this.api.viewMailLogWithHttpInfo(param.id, param.id2, param.origin, param.mx, param._from, param.to, param.subject, param.mailid, param.messageId, param.replyto, param.headerfrom, param.delivered, param.skip, param.limit, param.startDate, param.endDate, param.sort, param.dir, param.groupby,  options).toPromise();
    }

    /**
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
     * View Mail Log
     * @param param the request object
     */
    public viewMailLog(param: MailApiViewMailLogRequest, options?: ConfigurationOptions): Promise<MailLog> {
        return this.api.viewMailLog(param.id, param.id2, param.origin, param.mx, param._from, param.to, param.subject, param.mailid, param.messageId, param.replyto, param.headerfrom, param.delivered, param.skip, param.limit, param.startDate, param.endDate, param.sort, param.dir, param.groupby,  options).toPromise();
    }

}

import { ObservablePublicApi } from "./ObservableAPI";
import { PublicApiRequestFactory, PublicApiResponseProcessor} from "../apis/PublicApi";

export interface PublicApiGetCaptchaRequest {
}

export interface PublicApiGetCountriesRequest {
    /**
     * Get countries by iso2 or iso3 or numcode
     * Defaults to: undefined
     * @type &#39;iso2&#39; | &#39;iso3&#39; | &#39;numcode&#39;
     * @memberof PublicApigetCountries
     */
    fetchBy?: 'iso2' | 'iso3' | 'numcode'
}

export interface PublicApiGetInfoRequest {
}

export interface PublicApiGetLoginInfoRequest {
}

export interface PublicApiGetMPServersRequest {
}

export interface PublicApiGetOauthRedirectRequest {
    /**
     * The OAuth provider name (e.g. &#x60;Google&#x60;).
     * Defaults to: undefined
     * @type string
     * @memberof PublicApigetOauthRedirect
     */
    provider: string
}

export interface PublicApiGetTimezonesRequest {
}

export interface PublicApiPatchOauthTwoFactorRequest {
    /**
     * 
     * @type PatchOauthTwoFactorRequest
     * @memberof PublicApipatchOauthTwoFactor
     */
    patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest
}

export interface PublicApiPingServerRequest {
}

export interface PublicApiPostOauthCallbackRequest {
    /**
     * The OAuth provider name (e.g. &#x60;Google&#x60;).
     * Defaults to: undefined
     * @type string
     * @memberof PublicApipostOauthCallback
     */
    provider: string
    /**
     * 
     * @type PostOauthCallbackRequest
     * @memberof PublicApipostOauthCallback
     */
    postOauthCallbackRequest?: PostOauthCallbackRequest
}

export interface PublicApiSubmitLoginRequest {
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof PublicApisubmitLogin
     */
    login: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof PublicApisubmitLogin
     */
    passwd: string
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof PublicApisubmitLogin
     */
    remember?: string
    /**
     * 
     * Defaults to: undefined
     * @type LoginSubmissionExampleGRecaptchaResponse
     * @memberof PublicApisubmitLogin
     */
    gRecaptchaResponse?: LoginSubmissionExampleGRecaptchaResponse
    /**
     * Two Factor Authentication Response.
     * Defaults to: undefined
     * @type string
     * @memberof PublicApisubmitLogin
     */
    tfa?: string
}

export interface PublicApiSubmitSignupRequest {
    /**
     * 
     * @type LoginSubmissionExample
     * @memberof PublicApisubmitSignup
     */
    loginSubmissionExample?: LoginSubmissionExample
}

export class ObjectPublicApi {
    private api: ObservablePublicApi

    public constructor(configuration: Configuration, requestFactory?: PublicApiRequestFactory, responseProcessor?: PublicApiResponseProcessor) {
        this.api = new ObservablePublicApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     * Get Captcha Challenge
     * @param param the request object
     */
    public getCaptchaWithHttpInfo(param: PublicApiGetCaptchaRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<CaptchaResponse>> {
        return this.api.getCaptchaWithHttpInfo( options).toPromise();
    }

    /**
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     * Get Captcha Challenge
     * @param param the request object
     */
    public getCaptcha(param: PublicApiGetCaptchaRequest = {}, options?: ConfigurationOptions): Promise<CaptchaResponse> {
        return this.api.getCaptcha( options).toPromise();
    }

    /**
     * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     * Get Countries
     * @param param the request object
     */
    public getCountriesWithHttpInfo(param: PublicApiGetCountriesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<any>> {
        return this.api.getCountriesWithHttpInfo(param.fetchBy,  options).toPromise();
    }

    /**
     * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     * Get Countries
     * @param param the request object
     */
    public getCountries(param: PublicApiGetCountriesRequest = {}, options?: ConfigurationOptions): Promise<any> {
        return this.api.getCountries(param.fetchBy,  options).toPromise();
    }

    /**
     * Returns metadata about the API server\'s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     * Get Server Info
     * @param param the request object
     */
    public getInfoWithHttpInfo(param: PublicApiGetInfoRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServicesInfo>> {
        return this.api.getInfoWithHttpInfo( options).toPromise();
    }

    /**
     * Returns metadata about the API server\'s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     * Get Server Info
     * @param param the request object
     */
    public getInfo(param: PublicApiGetInfoRequest = {}, options?: ConfigurationOptions): Promise<ServicesInfo> {
        return this.api.getInfo( options).toPromise();
    }

    /**
     * Gets the various pieces of information useful for generating a login page.
     * Get Login Info
     * @param param the request object
     */
    public getLoginInfoWithHttpInfo(param: PublicApiGetLoginInfoRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<LoginInfo>> {
        return this.api.getLoginInfoWithHttpInfo( options).toPromise();
    }

    /**
     * Gets the various pieces of information useful for generating a login page.
     * Get Login Info
     * @param param the request object
     */
    public getLoginInfo(param: PublicApiGetLoginInfoRequest = {}, options?: ConfigurationOptions): Promise<LoginInfo> {
        return this.api.getLoginInfo( options).toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     * @param param the request object
     */
    public getMPServersWithHttpInfo(param: PublicApiGetMPServersRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<BuyItNowList>> {
        return this.api.getMPServersWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     * @param param the request object
     */
    public getMPServers(param: PublicApiGetMPServersRequest = {}, options?: ConfigurationOptions): Promise<BuyItNowList> {
        return this.api.getMPServers( options).toPromise();
    }

    /**
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
     * Get OAuth Redirect URL
     * @param param the request object
     */
    public getOauthRedirectWithHttpInfo(param: PublicApiGetOauthRedirectRequest, options?: ConfigurationOptions): Promise<HttpInfo<GetOauthRedirect200Response>> {
        return this.api.getOauthRedirectWithHttpInfo(param.provider,  options).toPromise();
    }

    /**
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
     * Get OAuth Redirect URL
     * @param param the request object
     */
    public getOauthRedirect(param: PublicApiGetOauthRedirectRequest, options?: ConfigurationOptions): Promise<GetOauthRedirect200Response> {
        return this.api.getOauthRedirect(param.provider,  options).toPromise();
    }

    /**
     * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
     * Get Available Timezones
     * @param param the request object
     */
    public getTimezonesWithHttpInfo(param: PublicApiGetTimezonesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<string>>> {
        return this.api.getTimezonesWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
     * Get Available Timezones
     * @param param the request object
     */
    public getTimezones(param: PublicApiGetTimezonesRequest = {}, options?: ConfigurationOptions): Promise<Array<string>> {
        return this.api.getTimezones( options).toPromise();
    }

    /**
     * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
     * Complete OAuth Two-Factor Verification
     * @param param the request object
     */
    public patchOauthTwoFactorWithHttpInfo(param: PublicApiPatchOauthTwoFactorRequest, options?: ConfigurationOptions): Promise<HttpInfo<PatchOauthTwoFactor200Response>> {
        return this.api.patchOauthTwoFactorWithHttpInfo(param.patchOauthTwoFactorRequest,  options).toPromise();
    }

    /**
     * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
     * Complete OAuth Two-Factor Verification
     * @param param the request object
     */
    public patchOauthTwoFactor(param: PublicApiPatchOauthTwoFactorRequest, options?: ConfigurationOptions): Promise<PatchOauthTwoFactor200Response> {
        return this.api.patchOauthTwoFactor(param.patchOauthTwoFactorRequest,  options).toPromise();
    }

    /**
     * Performs a single ping/pong request to let you know if the server is up.
     * Ping Server
     * @param param the request object
     */
    public pingServerWithHttpInfo(param: PublicApiPingServerRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<string>> {
        return this.api.pingServerWithHttpInfo( options).toPromise();
    }

    /**
     * Performs a single ping/pong request to let you know if the server is up.
     * Ping Server
     * @param param the request object
     */
    public pingServer(param: PublicApiPingServerRequest = {}, options?: ConfigurationOptions): Promise<string> {
        return this.api.pingServer( options).toPromise();
    }

    /**
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
     * OAuth Callback
     * @param param the request object
     */
    public postOauthCallbackWithHttpInfo(param: PublicApiPostOauthCallbackRequest, options?: ConfigurationOptions): Promise<HttpInfo<PostOauthCallback200Response>> {
        return this.api.postOauthCallbackWithHttpInfo(param.provider, param.postOauthCallbackRequest,  options).toPromise();
    }

    /**
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
     * OAuth Callback
     * @param param the request object
     */
    public postOauthCallback(param: PublicApiPostOauthCallbackRequest, options?: ConfigurationOptions): Promise<PostOauthCallback200Response> {
        return this.api.postOauthCallback(param.provider, param.postOauthCallbackRequest,  options).toPromise();
    }

    /**
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
     * Submit Login Information
     * @param param the request object
     */
    public submitLoginWithHttpInfo(param: PublicApiSubmitLoginRequest, options?: ConfigurationOptions): Promise<HttpInfo<LoginSuccessResponse>> {
        return this.api.submitLoginWithHttpInfo(param.login, param.passwd, param.remember, param.gRecaptchaResponse, param.tfa,  options).toPromise();
    }

    /**
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
     * Submit Login Information
     * @param param the request object
     */
    public submitLogin(param: PublicApiSubmitLoginRequest, options?: ConfigurationOptions): Promise<LoginSuccessResponse> {
        return this.api.submitLogin(param.login, param.passwd, param.remember, param.gRecaptchaResponse, param.tfa,  options).toPromise();
    }

    /**
     * Creates a new account in our system using the provided information.
     * Submit Signup Information
     * @param param the request object
     */
    public submitSignupWithHttpInfo(param: PublicApiSubmitSignupRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.submitSignupWithHttpInfo(param.loginSubmissionExample,  options).toPromise();
    }

    /**
     * Creates a new account in our system using the provided information.
     * Submit Signup Information
     * @param param the request object
     */
    public submitSignup(param: PublicApiSubmitSignupRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.submitSignup(param.loginSubmissionExample,  options).toPromise();
    }

}

import { ObservableQuickServersApi } from "./ObservableAPI";
import { QuickServersApiRequestFactory, QuickServersApiResponseProcessor} from "../apis/QuickServersApi";

export interface QuickServersApiAddQsRequest {
}

export interface QuickServersApiDeleteQsBackupRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApideleteQsBackup
     */
    id: number
    /**
     * The backup filename to delete.
     * Defaults to: undefined
     * @type string
     * @memberof QuickServersApideleteQsBackup
     */
    file: string
    /**
     * Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     * Defaults to: undefined
     * @type &#39;0&#39; | &#39;1&#39;
     * @memberof QuickServersApideleteQsBackup
     */
    all?: '0' | '1'
}

export interface QuickServersApiDoQsBlockSmtpRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsBlockSmtp
     */
    id: number
}

export interface QuickServersApiDoQsDisableCdRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsDisableCd
     */
    id: number
}

export interface QuickServersApiDoQsDisableQuotaRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsDisableQuota
     */
    id: number
}

export interface QuickServersApiDoQsEjectCdRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsEjectCd
     */
    id: number
}

export interface QuickServersApiDoQsEnableQuotaRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsEnableQuota
     */
    id: number
}

export interface QuickServersApiDoQsRestartRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsRestart
     */
    id: number
}

export interface QuickServersApiDoQsStartRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsStart
     */
    id: number
}

export interface QuickServersApiDoQsStopRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidoQsStop
     */
    id: number
}

export interface QuickServersApiDownloadQsBackupRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApidownloadQsBackup
     */
    id: number
    /**
     * 
     * @type DownloadQsBackupRequest
     * @memberof QuickServersApidownloadQsBackup
     */
    downloadQsBackupRequest: DownloadQsBackupRequest
    /**
     * Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     * Defaults to: undefined
     * @type &#39;0&#39; | &#39;1&#39;
     * @memberof QuickServersApidownloadQsBackup
     */
    all?: '0' | '1'
}

export interface QuickServersApiGetNewQsRequest {
}

export interface QuickServersApiGetQsBackupsRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsBackups
     */
    id: number
    /**
     * Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     * Defaults to: undefined
     * @type &#39;0&#39; | &#39;1&#39;
     * @memberof QuickServersApigetQsBackups
     */
    all?: '0' | '1'
}

export interface QuickServersApiGetQsChangeHostnameRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsChangeHostname
     */
    id: number
}

export interface QuickServersApiGetQsChangeRootPasswordRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsChangeRootPassword
     */
    id: number
}

export interface QuickServersApiGetQsChangeTimezoneRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsChangeTimezone
     */
    id: number
}

export interface QuickServersApiGetQsChangeWebuzoPasswordRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsChangeWebuzoPassword
     */
    id: number
}

export interface QuickServersApiGetQsInfoRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsInfo
     */
    id: number
}

export interface QuickServersApiGetQsInsertCdRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsInsertCd
     */
    id: number
}

export interface QuickServersApiGetQsInvoicesRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsInvoices
     */
    id: number
}

export interface QuickServersApiGetQsListRequest {
}

export interface QuickServersApiGetQsReinstallOsRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsReinstallOs
     */
    id: number
}

export interface QuickServersApiGetQsResetPasswordRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsResetPassword
     */
    id: number
}

export interface QuickServersApiGetQsReverseDnsRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsReverseDns
     */
    id: number
}

export interface QuickServersApiGetQsSetupVncRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsSetupVnc
     */
    id: number
}

export interface QuickServersApiGetQsTrafficUsageRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsTrafficUsage
     */
    id: number
}

export interface QuickServersApiGetQsViewDesktopRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApigetQsViewDesktop
     */
    id: number
}

export interface QuickServersApiGetQsWelcomeEmailRequest {
    /**
     * Quickserver ID
     * Defaults to: undefined
     * @type string
     * @memberof QuickServersApigetQsWelcomeEmail
     */
    id: string
}

export interface QuickServersApiPostQsBackupRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsBackup
     */
    id: number
}

export interface QuickServersApiPostQsChangeHostnameRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsChangeHostname
     */
    id: number
}

export interface QuickServersApiPostQsChangeRootPasswordRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsChangeRootPassword
     */
    id: number
}

export interface QuickServersApiPostQsChangeTimezoneRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsChangeTimezone
     */
    id: number
    /**
     * The time zone
     * Defaults to: undefined
     * @type string
     * @memberof QuickServersApipostQsChangeTimezone
     */
    timezone: string
}

export interface QuickServersApiPostQsChangeWebuzoPasswordRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsChangeWebuzoPassword
     */
    id: number
}

export interface QuickServersApiPostQsInsertCdRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsInsertCd
     */
    id: number
}

export interface QuickServersApiPostQsReinstallOsRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsReinstallOs
     */
    id: number
}

export interface QuickServersApiPostQsResetPasswordRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsResetPassword
     */
    id: number
}

export interface QuickServersApiPostQsReverseDnsRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsReverseDns
     */
    id: number
    /**
     * 
     * @type ReverseDnsEntries
     * @memberof QuickServersApipostQsReverseDns
     */
    reverseDnsEntries: ReverseDnsEntries
}

export interface QuickServersApiPostQsSetupVncRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsSetupVnc
     */
    id: number
}

export interface QuickServersApiPostQsTrafficUsageRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsTrafficUsage
     */
    id: number
}

export interface QuickServersApiPostQsViewDesktopRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQsViewDesktop
     */
    id: number
}

export interface QuickServersApiPostQuickServerRestoreRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApipostQuickServerRestore
     */
    id: number
    /**
     * QuickServer Restore request
     * @type RestoreRequest
     * @memberof QuickServersApipostQuickServerRestore
     */
    restoreRequest: RestoreRequest
}

export interface QuickServersApiPutQsRequest {
}

export interface QuickServersApiQuickserversCancelRequest {
    /**
     * QuickServer ID number
     * Defaults to: undefined
     * @type number
     * @memberof QuickServersApiquickserversCancel
     */
    id: number
}

export interface QuickServersApiUpdateQsInfoRequest {
    /**
     * QuickServer ID number.
     * Defaults to: undefined
     * @type string
     * @memberof QuickServersApiupdateQsInfo
     */
    id: string
}

export class ObjectQuickServersApi {
    private api: ObservableQuickServersApi

    public constructor(configuration: Configuration, requestFactory?: QuickServersApiRequestFactory, responseProcessor?: QuickServersApiResponseProcessor) {
        this.api = new ObservableQuickServersApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place QuickServer Order
     * @param param the request object
     */
    public addQsWithHttpInfo(param: QuickServersApiAddQsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addQsWithHttpInfo( options).toPromise();
    }

    /**
     * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place QuickServer Order
     * @param param the request object
     */
    public addQs(param: QuickServersApiAddQsRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addQs( options).toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
     * Delete QuickServer Backup
     * @param param the request object
     */
    public deleteQsBackupWithHttpInfo(param: QuickServersApiDeleteQsBackupRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteQsBackupWithHttpInfo(param.id, param.file, param.all,  options).toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
     * Delete QuickServer Backup
     * @param param the request object
     */
    public deleteQsBackup(param: QuickServersApiDeleteQsBackupRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteQsBackup(param.id, param.file, param.all,  options).toPromise();
    }

    /**
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     * Block QuickServer SMTP
     * @param param the request object
     */
    public doQsBlockSmtpWithHttpInfo(param: QuickServersApiDoQsBlockSmtpRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsBlockSmtpWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     * Block QuickServer SMTP
     * @param param the request object
     */
    public doQsBlockSmtp(param: QuickServersApiDoQsBlockSmtpRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsBlockSmtp(param.id,  options).toPromise();
    }

    /**
     * Disables the virtual CD drive for the QuickServer.
     * Disable CD Drive
     * @param param the request object
     */
    public doQsDisableCdWithHttpInfo(param: QuickServersApiDoQsDisableCdRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsDisableCdWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Disables the virtual CD drive for the QuickServer.
     * Disable CD Drive
     * @param param the request object
     */
    public doQsDisableCd(param: QuickServersApiDoQsDisableCdRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsDisableCd(param.id,  options).toPromise();
    }

    /**
     * Disables disk quota enforcement for the QuickServer.
     * Disable Quotas
     * @param param the request object
     */
    public doQsDisableQuotaWithHttpInfo(param: QuickServersApiDoQsDisableQuotaRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsDisableQuotaWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Disables disk quota enforcement for the QuickServer.
     * Disable Quotas
     * @param param the request object
     */
    public doQsDisableQuota(param: QuickServersApiDoQsDisableQuotaRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsDisableQuota(param.id,  options).toPromise();
    }

    /**
     * Ejects the virtual CD from the QuickServer\'s CD drive.
     * Eject CD Drive
     * @param param the request object
     */
    public doQsEjectCdWithHttpInfo(param: QuickServersApiDoQsEjectCdRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsEjectCdWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Ejects the virtual CD from the QuickServer\'s CD drive.
     * Eject CD Drive
     * @param param the request object
     */
    public doQsEjectCd(param: QuickServersApiDoQsEjectCdRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsEjectCd(param.id,  options).toPromise();
    }

    /**
     * Enables disk quota enforcement for the QuickServer.
     * Enable Quotas
     * @param param the request object
     */
    public doQsEnableQuotaWithHttpInfo(param: QuickServersApiDoQsEnableQuotaRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsEnableQuotaWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Enables disk quota enforcement for the QuickServer.
     * Enable Quotas
     * @param param the request object
     */
    public doQsEnableQuota(param: QuickServersApiDoQsEnableQuotaRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsEnableQuota(param.id,  options).toPromise();
    }

    /**
     * Restarts the QuickServer. The server will be shut down and started again.
     * Restart QuickServer
     * @param param the request object
     */
    public doQsRestartWithHttpInfo(param: QuickServersApiDoQsRestartRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsRestartWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Restarts the QuickServer. The server will be shut down and started again.
     * Restart QuickServer
     * @param param the request object
     */
    public doQsRestart(param: QuickServersApiDoQsRestartRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsRestart(param.id,  options).toPromise();
    }

    /**
     * Powers on the QuickServer.
     * Start QuickServer
     * @param param the request object
     */
    public doQsStartWithHttpInfo(param: QuickServersApiDoQsStartRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsStartWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Powers on the QuickServer.
     * Start QuickServer
     * @param param the request object
     */
    public doQsStart(param: QuickServersApiDoQsStartRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsStart(param.id,  options).toPromise();
    }

    /**
     * Powers off the QuickServer.
     * Stop QuickServer
     * @param param the request object
     */
    public doQsStopWithHttpInfo(param: QuickServersApiDoQsStopRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doQsStopWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Powers off the QuickServer.
     * Stop QuickServer
     * @param param the request object
     */
    public doQsStop(param: QuickServersApiDoQsStopRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doQsStop(param.id,  options).toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
     * Download QuickServer Backup
     * @param param the request object
     */
    public downloadQsBackupWithHttpInfo(param: QuickServersApiDownloadQsBackupRequest, options?: ConfigurationOptions): Promise<HttpInfo<DownloadQsBackup200Response>> {
        return this.api.downloadQsBackupWithHttpInfo(param.id, param.downloadQsBackupRequest, param.all,  options).toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
     * Download QuickServer Backup
     * @param param the request object
     */
    public downloadQsBackup(param: QuickServersApiDownloadQsBackupRequest, options?: ConfigurationOptions): Promise<DownloadQsBackup200Response> {
        return this.api.downloadQsBackup(param.id, param.downloadQsBackupRequest, param.all,  options).toPromise();
    }

    /**
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     * Get QuickServer Ordering Information
     * @param param the request object
     */
    public getNewQsWithHttpInfo(param: QuickServersApiGetNewQsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<QuickserverOrder>> {
        return this.api.getNewQsWithHttpInfo( options).toPromise();
    }

    /**
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     * Get QuickServer Ordering Information
     * @param param the request object
     */
    public getNewQs(param: QuickServersApiGetNewQsRequest = {}, options?: ConfigurationOptions): Promise<QuickserverOrder> {
        return this.api.getNewQs( options).toPromise();
    }

    /**
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
     * List QuickServer Backups
     * @param param the request object
     */
    public getQsBackupsWithHttpInfo(param: QuickServersApiGetQsBackupsRequest, options?: ConfigurationOptions): Promise<HttpInfo<VpsBackupRows>> {
        return this.api.getQsBackupsWithHttpInfo(param.id, param.all,  options).toPromise();
    }

    /**
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
     * List QuickServer Backups
     * @param param the request object
     */
    public getQsBackups(param: QuickServersApiGetQsBackupsRequest, options?: ConfigurationOptions): Promise<VpsBackupRows> {
        return this.api.getQsBackups(param.id, param.all,  options).toPromise();
    }

    /**
     * Retrieves the current hostname and any validation requirements for changing it.
     * Get QuickServer Hostname
     * @param param the request object
     */
    public getQsChangeHostnameWithHttpInfo(param: QuickServersApiGetQsChangeHostnameRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsChangeHostnameWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves the current hostname and any validation requirements for changing it.
     * Get QuickServer Hostname
     * @param param the request object
     */
    public getQsChangeHostname(param: QuickServersApiGetQsChangeHostnameRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsChangeHostname(param.id,  options).toPromise();
    }

    /**
     * Retrieves instructions or metadata needed to reset the root password.
     * Get Change Root Password Info
     * @param param the request object
     */
    public getQsChangeRootPasswordWithHttpInfo(param: QuickServersApiGetQsChangeRootPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsChangeRootPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves instructions or metadata needed to reset the root password.
     * Get Change Root Password Info
     * @param param the request object
     */
    public getQsChangeRootPassword(param: QuickServersApiGetQsChangeRootPasswordRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsChangeRootPassword(param.id,  options).toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the QuickServer.
     * Get Timezone Info
     * @param param the request object
     */
    public getQsChangeTimezoneWithHttpInfo(param: QuickServersApiGetQsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<HttpInfo<Array<string>>> {
        return this.api.getQsChangeTimezoneWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the QuickServer.
     * Get Timezone Info
     * @param param the request object
     */
    public getQsChangeTimezone(param: QuickServersApiGetQsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<Array<string>> {
        return this.api.getQsChangeTimezone(param.id,  options).toPromise();
    }

    /**
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     * Webuzo Change Pass Info
     * @param param the request object
     */
    public getQsChangeWebuzoPasswordWithHttpInfo(param: QuickServersApiGetQsChangeWebuzoPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsChangeWebuzoPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     * Webuzo Change Pass Info
     * @param param the request object
     */
    public getQsChangeWebuzoPassword(param: QuickServersApiGetQsChangeWebuzoPasswordRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsChangeWebuzoPassword(param.id,  options).toPromise();
    }

    /**
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     * Get QuickServer Order
     * @param param the request object
     */
    public getQsInfoWithHttpInfo(param: QuickServersApiGetQsInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<Quickserver>> {
        return this.api.getQsInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     * Get QuickServer Order
     * @param param the request object
     */
    public getQsInfo(param: QuickServersApiGetQsInfoRequest, options?: ConfigurationOptions): Promise<Quickserver> {
        return this.api.getQsInfo(param.id,  options).toPromise();
    }

    /**
     * Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.
     * Insert CD Information
     * @param param the request object
     */
    public getQsInsertCdWithHttpInfo(param: QuickServersApiGetQsInsertCdRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsInsertCdWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.
     * Insert CD Information
     * @param param the request object
     */
    public getQsInsertCd(param: QuickServersApiGetQsInsertCdRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsInsertCd(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this QuickServer.
     * Get QuickServer Invoices
     * @param param the request object
     */
    public getQsInvoicesWithHttpInfo(param: QuickServersApiGetQsInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getQsInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this QuickServer.
     * Get QuickServer Invoices
     * @param param the request object
     */
    public getQsInvoices(param: QuickServersApiGetQsInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getQsInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
     * List QuickServers
     * @param param the request object
     */
    public getQsListWithHttpInfo(param: QuickServersApiGetQsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<QuickserverRow>>> {
        return this.api.getQsListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
     * List QuickServers
     * @param param the request object
     */
    public getQsList(param: QuickServersApiGetQsListRequest = {}, options?: ConfigurationOptions): Promise<Array<QuickserverRow>> {
        return this.api.getQsList( options).toPromise();
    }

    /**
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     * QuickServer Reinstall OS Options
     * @param param the request object
     */
    public getQsReinstallOsWithHttpInfo(param: QuickServersApiGetQsReinstallOsRequest, options?: ConfigurationOptions): Promise<HttpInfo<VpsTemplatesList>> {
        return this.api.getQsReinstallOsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     * QuickServer Reinstall OS Options
     * @param param the request object
     */
    public getQsReinstallOs(param: QuickServersApiGetQsReinstallOsRequest, options?: ConfigurationOptions): Promise<VpsTemplatesList> {
        return this.api.getQsReinstallOs(param.id,  options).toPromise();
    }

    /**
     * Returns information needed before resetting the QuickServer\'s root password.
     * Reset QuickServer Password Info
     * @param param the request object
     */
    public getQsResetPasswordWithHttpInfo(param: QuickServersApiGetQsResetPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsResetPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns information needed before resetting the QuickServer\'s root password.
     * Reset QuickServer Password Info
     * @param param the request object
     */
    public getQsResetPassword(param: QuickServersApiGetQsResetPasswordRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsResetPassword(param.id,  options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Reverse DNS Info
     * @param param the request object
     */
    public getQsReverseDnsWithHttpInfo(param: QuickServersApiGetQsReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        return this.api.getQsReverseDnsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Reverse DNS Info
     * @param param the request object
     */
    public getQsReverseDns(param: QuickServersApiGetQsReverseDnsRequest, options?: ConfigurationOptions): Promise<ReverseDnsEntries> {
        return this.api.getQsReverseDns(param.id,  options).toPromise();
    }

    /**
     * Returns the current VNC connection information for the QuickServer.
     * VNC Setup Info
     * @param param the request object
     */
    public getQsSetupVncWithHttpInfo(param: QuickServersApiGetQsSetupVncRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsSetupVncWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current VNC connection information for the QuickServer.
     * VNC Setup Info
     * @param param the request object
     */
    public getQsSetupVnc(param: QuickServersApiGetQsSetupVncRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsSetupVnc(param.id,  options).toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the QuickServer.
     * Get Traffic Usage
     * @param param the request object
     */
    public getQsTrafficUsageWithHttpInfo(param: QuickServersApiGetQsTrafficUsageRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsTrafficUsageWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the QuickServer.
     * Get Traffic Usage
     * @param param the request object
     */
    public getQsTrafficUsage(param: QuickServersApiGetQsTrafficUsageRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsTrafficUsage(param.id,  options).toPromise();
    }

    /**
     * Returns remote desktop connection information for the QuickServer.
     * Get View Desktop Info
     * @param param the request object
     */
    public getQsViewDesktopWithHttpInfo(param: QuickServersApiGetQsViewDesktopRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getQsViewDesktopWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns remote desktop connection information for the QuickServer.
     * Get View Desktop Info
     * @param param the request object
     */
    public getQsViewDesktop(param: QuickServersApiGetQsViewDesktopRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getQsViewDesktop(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     * Resend QuickServer Welcome Email
     * @param param the request object
     */
    public getQsWelcomeEmailWithHttpInfo(param: QuickServersApiGetQsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.getQsWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     * Resend QuickServer Welcome Email
     * @param param the request object
     */
    public getQsWelcomeEmail(param: QuickServersApiGetQsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.getQsWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     * Create QuickServer Backup
     * @param param the request object
     */
    public postQsBackupWithHttpInfo(param: QuickServersApiPostQsBackupRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsBackupWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     * Create QuickServer Backup
     * @param param the request object
     */
    public postQsBackup(param: QuickServersApiPostQsBackupRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsBackup(param.id,  options).toPromise();
    }

    /**
     * Submits a hostname change request for the QuickServer.
     * Update QuickServer Hostname
     * @param param the request object
     */
    public postQsChangeHostnameWithHttpInfo(param: QuickServersApiPostQsChangeHostnameRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsChangeHostnameWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Submits a hostname change request for the QuickServer.
     * Update QuickServer Hostname
     * @param param the request object
     */
    public postQsChangeHostname(param: QuickServersApiPostQsChangeHostnameRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsChangeHostname(param.id,  options).toPromise();
    }

    /**
     * Triggers a root password reset for the QuickServer.
     * Change Root Password
     * @param param the request object
     */
    public postQsChangeRootPasswordWithHttpInfo(param: QuickServersApiPostQsChangeRootPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsChangeRootPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Triggers a root password reset for the QuickServer.
     * Change Root Password
     * @param param the request object
     */
    public postQsChangeRootPassword(param: QuickServersApiPostQsChangeRootPasswordRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsChangeRootPassword(param.id,  options).toPromise();
    }

    /**
     * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
     * Change QuickServer Timezone
     * @param param the request object
     */
    public postQsChangeTimezoneWithHttpInfo(param: QuickServersApiPostQsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsChangeTimezoneWithHttpInfo(param.id, param.timezone,  options).toPromise();
    }

    /**
     * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
     * Change QuickServer Timezone
     * @param param the request object
     */
    public postQsChangeTimezone(param: QuickServersApiPostQsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsChangeTimezone(param.id, param.timezone,  options).toPromise();
    }

    /**
     * Resets the Webuzo control panel password for the QuickServer.
     * Change Webuzo Password
     * @param param the request object
     */
    public postQsChangeWebuzoPasswordWithHttpInfo(param: QuickServersApiPostQsChangeWebuzoPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsChangeWebuzoPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resets the Webuzo control panel password for the QuickServer.
     * Change Webuzo Password
     * @param param the request object
     */
    public postQsChangeWebuzoPassword(param: QuickServersApiPostQsChangeWebuzoPasswordRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsChangeWebuzoPassword(param.id,  options).toPromise();
    }

    /**
     * Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
     * Insert CD in QuickServer
     * @param param the request object
     */
    public postQsInsertCdWithHttpInfo(param: QuickServersApiPostQsInsertCdRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsInsertCdWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
     * Insert CD in QuickServer
     * @param param the request object
     */
    public postQsInsertCd(param: QuickServersApiPostQsInsertCdRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsInsertCd(param.id,  options).toPromise();
    }

    /**
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     * Reinstall QuickServer OS
     * @param param the request object
     */
    public postQsReinstallOsWithHttpInfo(param: QuickServersApiPostQsReinstallOsRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsReinstallOsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     * Reinstall QuickServer OS
     * @param param the request object
     */
    public postQsReinstallOs(param: QuickServersApiPostQsReinstallOsRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsReinstallOs(param.id,  options).toPromise();
    }

    /**
     * Resets the root password on the QuickServer to a new randomly generated password.
     * Reset QuickServer Password
     * @param param the request object
     */
    public postQsResetPasswordWithHttpInfo(param: QuickServersApiPostQsResetPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsResetPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resets the root password on the QuickServer to a new randomly generated password.
     * Reset QuickServer Password
     * @param param the request object
     */
    public postQsResetPassword(param: QuickServersApiPostQsResetPasswordRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsResetPassword(param.id,  options).toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Update Reverse DNS
     * @param param the request object
     */
    public postQsReverseDnsWithHttpInfo(param: QuickServersApiPostQsReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.postQsReverseDnsWithHttpInfo(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Update Reverse DNS
     * @param param the request object
     */
    public postQsReverseDns(param: QuickServersApiPostQsReverseDnsRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.postQsReverseDns(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the QuickServer.
     * Setup VNC
     * @param param the request object
     */
    public postQsSetupVncWithHttpInfo(param: QuickServersApiPostQsSetupVncRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQsSetupVncWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the QuickServer.
     * Setup VNC
     * @param param the request object
     */
    public postQsSetupVnc(param: QuickServersApiPostQsSetupVncRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQsSetupVnc(param.id,  options).toPromise();
    }

    /**
     * Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.
     * Search Traffic Usage
     * @param param the request object
     */
    public postQsTrafficUsageWithHttpInfo(param: QuickServersApiPostQsTrafficUsageRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.postQsTrafficUsageWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.
     * Search Traffic Usage
     * @param param the request object
     */
    public postQsTrafficUsage(param: QuickServersApiPostQsTrafficUsageRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.postQsTrafficUsage(param.id,  options).toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the QuickServer.
     * Update View Desktop
     * @param param the request object
     */
    public postQsViewDesktopWithHttpInfo(param: QuickServersApiPostQsViewDesktopRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.postQsViewDesktopWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the QuickServer.
     * Update View Desktop
     * @param param the request object
     */
    public postQsViewDesktop(param: QuickServersApiPostQsViewDesktopRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.postQsViewDesktop(param.id,  options).toPromise();
    }

    /**
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
     * Restore QuickServer from Backup
     * @param param the request object
     */
    public postQuickServerRestoreWithHttpInfo(param: QuickServersApiPostQuickServerRestoreRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postQuickServerRestoreWithHttpInfo(param.id, param.restoreRequest,  options).toPromise();
    }

    /**
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
     * Restore QuickServer from Backup
     * @param param the request object
     */
    public postQuickServerRestore(param: QuickServersApiPostQuickServerRestoreRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postQuickServerRestore(param.id, param.restoreRequest,  options).toPromise();
    }

    /**
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     * Validate QuickServer Order
     * @param param the request object
     */
    public putQsWithHttpInfo(param: QuickServersApiPutQsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putQsWithHttpInfo( options).toPromise();
    }

    /**
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     * Validate QuickServer Order
     * @param param the request object
     */
    public putQs(param: QuickServersApiPutQsRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putQs( options).toPromise();
    }

    /**
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel QuickServer Order
     * @param param the request object
     */
    public quickserversCancelWithHttpInfo(param: QuickServersApiQuickserversCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<QuickserversCancel200Response>> {
        return this.api.quickserversCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel QuickServer Order
     * @param param the request object
     */
    public quickserversCancel(param: QuickServersApiQuickserversCancelRequest, options?: ConfigurationOptions): Promise<QuickserversCancel200Response> {
        return this.api.quickserversCancel(param.id,  options).toPromise();
    }

    /**
     * Updates QuickServer metadata or stored settings associated with the order.
     * Update QuickServer Order
     * @param param the request object
     */
    public updateQsInfoWithHttpInfo(param: QuickServersApiUpdateQsInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateQsInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates QuickServer metadata or stored settings associated with the order.
     * Update QuickServer Order
     * @param param the request object
     */
    public updateQsInfo(param: QuickServersApiUpdateQsInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateQsInfo(param.id,  options).toPromise();
    }

}

import { ObservableSSLCertificatesApi } from "./ObservableAPI";
import { SSLCertificatesApiRequestFactory, SSLCertificatesApiResponseProcessor} from "../apis/SSLCertificatesApi";

export interface SSLCertificatesApiAddSslRequest {
}

export interface SSLCertificatesApiGetNewSslRequest {
}

export interface SSLCertificatesApiGetSslInfoRequest {
    /**
     * SSL certificate ID number.
     * Defaults to: undefined
     * @type number
     * @memberof SSLCertificatesApigetSslInfo
     */
    id: number
}

export interface SSLCertificatesApiGetSslInvoicesRequest {
    /**
     * SSL Cert ID number
     * Defaults to: undefined
     * @type number
     * @memberof SSLCertificatesApigetSslInvoices
     */
    id: number
}

export interface SSLCertificatesApiGetSslListRequest {
}

export interface SSLCertificatesApiGetSslWelcomeEmailRequest {
    /**
     * SSL Cert ID number
     * Defaults to: undefined
     * @type number
     * @memberof SSLCertificatesApigetSslWelcomeEmail
     */
    id: number
}

export interface SSLCertificatesApiPutSslRequest {
}

export interface SSLCertificatesApiSslCancelRequest {
    /**
     * SSL Cert ID number
     * Defaults to: undefined
     * @type number
     * @memberof SSLCertificatesApisslCancel
     */
    id: number
}

export interface SSLCertificatesApiUpdateSslInfoRequest {
    /**
     * SSL certificate ID number.
     * Defaults to: undefined
     * @type string
     * @memberof SSLCertificatesApiupdateSslInfo
     */
    id: string
}

export class ObjectSSLCertificatesApi {
    private api: ObservableSSLCertificatesApi

    public constructor(configuration: Configuration, requestFactory?: SSLCertificatesApiRequestFactory, responseProcessor?: SSLCertificatesApiResponseProcessor) {
        this.api = new ObservableSSLCertificatesApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
     * Place SSL Cert Order
     * @param param the request object
     */
    public addSslWithHttpInfo(param: SSLCertificatesApiAddSslRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addSslWithHttpInfo( options).toPromise();
    }

    /**
     * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
     * Place SSL Cert Order
     * @param param the request object
     */
    public addSsl(param: SSLCertificatesApiAddSslRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addSsl( options).toPromise();
    }

    /**
     * Retrieves available SSL certificate types and pricing for ordering.
     * SSL Cert Ordering Information
     * @param param the request object
     */
    public getNewSslWithHttpInfo(param: SSLCertificatesApiGetNewSslRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<any>> {
        return this.api.getNewSslWithHttpInfo( options).toPromise();
    }

    /**
     * Retrieves available SSL certificate types and pricing for ordering.
     * SSL Cert Ordering Information
     * @param param the request object
     */
    public getNewSsl(param: SSLCertificatesApiGetNewSslRequest = {}, options?: ConfigurationOptions): Promise<any> {
        return this.api.getNewSsl( options).toPromise();
    }

    /**
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     * Get SSL Cert Info
     * @param param the request object
     */
    public getSslInfoWithHttpInfo(param: SSLCertificatesApiGetSslInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<any>> {
        return this.api.getSslInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     * Get SSL Cert Info
     * @param param the request object
     */
    public getSslInfo(param: SSLCertificatesApiGetSslInfoRequest, options?: ConfigurationOptions): Promise<any> {
        return this.api.getSslInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this SSL certificate.
     * Get SSL Cert Invoices
     * @param param the request object
     */
    public getSslInvoicesWithHttpInfo(param: SSLCertificatesApiGetSslInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getSslInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this SSL certificate.
     * Get SSL Cert Invoices
     * @param param the request object
     */
    public getSslInvoices(param: SSLCertificatesApiGetSslInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getSslInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns all SSL certificate services on the account with their current status.
     * List SSL Certs
     * @param param the request object
     */
    public getSslListWithHttpInfo(param: SSLCertificatesApiGetSslListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getSslListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns all SSL certificate services on the account with their current status.
     * List SSL Certs
     * @param param the request object
     */
    public getSslList(param: SSLCertificatesApiGetSslListRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.getSslList( options).toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend SSL Welcome Email
     * @param param the request object
     */
    public getSslWelcomeEmailWithHttpInfo(param: SSLCertificatesApiGetSslWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getSslWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend SSL Welcome Email
     * @param param the request object
     */
    public getSslWelcomeEmail(param: SSLCertificatesApiGetSslWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getSslWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Validates an SSL certificate order before placing it.
     * Validate SSL Cert Order
     * @param param the request object
     */
    public putSslWithHttpInfo(param: SSLCertificatesApiPutSslRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putSslWithHttpInfo( options).toPromise();
    }

    /**
     * Validates an SSL certificate order before placing it.
     * Validate SSL Cert Order
     * @param param the request object
     */
    public putSsl(param: SSLCertificatesApiPutSslRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putSsl( options).toPromise();
    }

    /**
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     * Cancel SSL Certificate Service
     * @param param the request object
     */
    public sslCancelWithHttpInfo(param: SSLCertificatesApiSslCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<SslCancel200Response>> {
        return this.api.sslCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     * Cancel SSL Certificate Service
     * @param param the request object
     */
    public sslCancel(param: SSLCertificatesApiSslCancelRequest, options?: ConfigurationOptions): Promise<SslCancel200Response> {
        return this.api.sslCancel(param.id,  options).toPromise();
    }

    /**
     * Updates settings on an SSL certificate order.
     * Update SSL Cert Order
     * @param param the request object
     */
    public updateSslInfoWithHttpInfo(param: SSLCertificatesApiUpdateSslInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateSslInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates settings on an SSL certificate order.
     * Update SSL Cert Order
     * @param param the request object
     */
    public updateSslInfo(param: SSLCertificatesApiUpdateSslInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateSslInfo(param.id,  options).toPromise();
    }

}

import { ObservableScrubIpsApi } from "./ObservableAPI";
import { ScrubIpsApiRequestFactory, ScrubIpsApiResponseProcessor} from "../apis/ScrubIpsApi";

export interface ScrubIpsApiCancelScrubIpRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApicancelScrubIp
     */
    id: number
}

export interface ScrubIpsApiCreateFilterRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApicreateFilter
     */
    id: number
    /**
     * 
     * @type CreateFilter
     * @memberof ScrubIpsApicreateFilter
     */
    createFilter: CreateFilter
}

export interface ScrubIpsApiCreateGeoRuleRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApicreateGeoRule
     */
    id: number
    /**
     * 
     * @type CreateGeoFirewallRule
     * @memberof ScrubIpsApicreateGeoRule
     */
    createGeoFirewallRule: CreateGeoFirewallRule
}

export interface ScrubIpsApiCreateRuleRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApicreateRule
     */
    id: number
    /**
     * 
     * @type CreateFirewallRule
     * @memberof ScrubIpsApicreateRule
     */
    createFirewallRule: CreateFirewallRule
}

export interface ScrubIpsApiDeleteFilterRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApideleteFilter
     */
    id: number
    /**
     * 
     * @type CreateFilter
     * @memberof ScrubIpsApideleteFilter
     */
    createFilter: CreateFilter
}

export interface ScrubIpsApiDisableScrubRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApidisableScrub
     */
    id: number
}

export interface ScrubIpsApiEnableScrubRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApienableScrub
     */
    id: number
}

export interface ScrubIpsApiGetOrderDetailRequest {
}

export interface ScrubIpsApiGetScrubIpDetailsRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApigetScrubIpDetails
     */
    id: number
}

export interface ScrubIpsApiGetScrubIpFilterTypesRequest {
}

export interface ScrubIpsApiGetScrubIpInvoicesRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApigetScrubIpInvoices
     */
    id: number
}

export interface ScrubIpsApiGetScrubIpLogsRequest {
    /**
     * Scrub Order ID
     * Defaults to: undefined
     * @type string
     * @memberof ScrubIpsApigetScrubIpLogs
     */
    id: string
}

export interface ScrubIpsApiGetScrubIpsListRequest {
}

export interface ScrubIpsApiPlaceScrubOrderRequest {
    /**
     * 
     * @type ScrubIpPlaceOrder
     * @memberof ScrubIpsApiplaceScrubOrder
     */
    scrubIpPlaceOrder: ScrubIpPlaceOrder
}

export interface ScrubIpsApiScrubIpsDeleteGeoRuleRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApiscrubIpsDeleteGeoRule
     */
    id: number
    /**
     * 
     * @type DeleteGeoFirewallRule
     * @memberof ScrubIpsApiscrubIpsDeleteGeoRule
     */
    deleteGeoFirewallRule: DeleteGeoFirewallRule
}

export interface ScrubIpsApiScrubIpsDeleteRuleRequest {
    /**
     * ScrubIp ID number
     * Defaults to: undefined
     * @type number
     * @memberof ScrubIpsApiscrubIpsDeleteRule
     */
    id: number
    /**
     * 
     * @type DeleteFirewallRule
     * @memberof ScrubIpsApiscrubIpsDeleteRule
     */
    deleteFirewallRule: DeleteFirewallRule
}

export class ObjectScrubIpsApi {
    private api: ObservableScrubIpsApi

    public constructor(configuration: Configuration, requestFactory?: ScrubIpsApiRequestFactory, responseProcessor?: ScrubIpsApiResponseProcessor) {
        this.api = new ObservableScrubIpsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     * Cancel Scrub IP Service
     * @param param the request object
     */
    public cancelScrubIpWithHttpInfo(param: ScrubIpsApiCancelScrubIpRequest, options?: ConfigurationOptions): Promise<HttpInfo<CancelScrubIp200Response>> {
        return this.api.cancelScrubIpWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     * Cancel Scrub IP Service
     * @param param the request object
     */
    public cancelScrubIp(param: ScrubIpsApiCancelScrubIpRequest, options?: ConfigurationOptions): Promise<CancelScrubIp200Response> {
        return this.api.cancelScrubIp(param.id,  options).toPromise();
    }

    /**
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
     * Create Traffic Filter
     * @param param the request object
     */
    public createFilterWithHttpInfo(param: ScrubIpsApiCreateFilterRequest, options?: ConfigurationOptions): Promise<HttpInfo<CreateFilter201Response>> {
        return this.api.createFilterWithHttpInfo(param.id, param.createFilter,  options).toPromise();
    }

    /**
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
     * Create Traffic Filter
     * @param param the request object
     */
    public createFilter(param: ScrubIpsApiCreateFilterRequest, options?: ConfigurationOptions): Promise<CreateFilter201Response> {
        return this.api.createFilter(param.id, param.createFilter,  options).toPromise();
    }

    /**
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     * Create Geo Firewall Rule
     * @param param the request object
     */
    public createGeoRuleWithHttpInfo(param: ScrubIpsApiCreateGeoRuleRequest, options?: ConfigurationOptions): Promise<HttpInfo<CreateRule201Response>> {
        return this.api.createGeoRuleWithHttpInfo(param.id, param.createGeoFirewallRule,  options).toPromise();
    }

    /**
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     * Create Geo Firewall Rule
     * @param param the request object
     */
    public createGeoRule(param: ScrubIpsApiCreateGeoRuleRequest, options?: ConfigurationOptions): Promise<CreateRule201Response> {
        return this.api.createGeoRule(param.id, param.createGeoFirewallRule,  options).toPromise();
    }

    /**
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     * Create Firewall Rule
     * @param param the request object
     */
    public createRuleWithHttpInfo(param: ScrubIpsApiCreateRuleRequest, options?: ConfigurationOptions): Promise<HttpInfo<CreateRule201Response>> {
        return this.api.createRuleWithHttpInfo(param.id, param.createFirewallRule,  options).toPromise();
    }

    /**
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     * Create Firewall Rule
     * @param param the request object
     */
    public createRule(param: ScrubIpsApiCreateRuleRequest, options?: ConfigurationOptions): Promise<CreateRule201Response> {
        return this.api.createRule(param.id, param.createFirewallRule,  options).toPromise();
    }

    /**
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     * Delete Traffic Filter
     * @param param the request object
     */
    public deleteFilterWithHttpInfo(param: ScrubIpsApiDeleteFilterRequest, options?: ConfigurationOptions): Promise<HttpInfo<DeleteFilter200Response>> {
        return this.api.deleteFilterWithHttpInfo(param.id, param.createFilter,  options).toPromise();
    }

    /**
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     * Delete Traffic Filter
     * @param param the request object
     */
    public deleteFilter(param: ScrubIpsApiDeleteFilterRequest, options?: ConfigurationOptions): Promise<DeleteFilter200Response> {
        return this.api.deleteFilter(param.id, param.createFilter,  options).toPromise();
    }

    /**
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     * Disable Scrub Protection
     * @param param the request object
     */
    public disableScrubWithHttpInfo(param: ScrubIpsApiDisableScrubRequest, options?: ConfigurationOptions): Promise<HttpInfo<DisableScrub200Response>> {
        return this.api.disableScrubWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     * Disable Scrub Protection
     * @param param the request object
     */
    public disableScrub(param: ScrubIpsApiDisableScrubRequest, options?: ConfigurationOptions): Promise<DisableScrub200Response> {
        return this.api.disableScrub(param.id,  options).toPromise();
    }

    /**
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     * Enable Scrub Protection
     * @param param the request object
     */
    public enableScrubWithHttpInfo(param: ScrubIpsApiEnableScrubRequest, options?: ConfigurationOptions): Promise<HttpInfo<EnableScrub200Response>> {
        return this.api.enableScrubWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     * Enable Scrub Protection
     * @param param the request object
     */
    public enableScrub(param: ScrubIpsApiEnableScrubRequest, options?: ConfigurationOptions): Promise<EnableScrub200Response> {
        return this.api.enableScrub(param.id,  options).toPromise();
    }

    /**
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     * Get Scrub IP Ordering Information
     * @param param the request object
     */
    public getOrderDetailWithHttpInfo(param: ScrubIpsApiGetOrderDetailRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<GetOrderDetail200Response>> {
        return this.api.getOrderDetailWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     * Get Scrub IP Ordering Information
     * @param param the request object
     */
    public getOrderDetail(param: ScrubIpsApiGetOrderDetailRequest = {}, options?: ConfigurationOptions): Promise<GetOrderDetail200Response> {
        return this.api.getOrderDetail( options).toPromise();
    }

    /**
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     * Get Scrub IP Details
     * @param param the request object
     */
    public getScrubIpDetailsWithHttpInfo(param: ScrubIpsApiGetScrubIpDetailsRequest, options?: ConfigurationOptions): Promise<HttpInfo<GetScrubIpDetails200Response>> {
        return this.api.getScrubIpDetailsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     * Get Scrub IP Details
     * @param param the request object
     */
    public getScrubIpDetails(param: ScrubIpsApiGetScrubIpDetailsRequest, options?: ConfigurationOptions): Promise<GetScrubIpDetails200Response> {
        return this.api.getScrubIpDetails(param.id,  options).toPromise();
    }

    /**
     * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
     * List Scrub Filter Types
     * @param param the request object
     */
    public getScrubIpFilterTypesWithHttpInfo(param: ScrubIpsApiGetScrubIpFilterTypesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ScrubIpFilterTypes>> {
        return this.api.getScrubIpFilterTypesWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
     * List Scrub Filter Types
     * @param param the request object
     */
    public getScrubIpFilterTypes(param: ScrubIpsApiGetScrubIpFilterTypesRequest = {}, options?: ConfigurationOptions): Promise<ScrubIpFilterTypes> {
        return this.api.getScrubIpFilterTypes( options).toPromise();
    }

    /**
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     * Get ScrubIp Invoices
     * @param param the request object
     */
    public getScrubIpInvoicesWithHttpInfo(param: ScrubIpsApiGetScrubIpInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getScrubIpInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     * Get ScrubIp Invoices
     * @param param the request object
     */
    public getScrubIpInvoices(param: ScrubIpsApiGetScrubIpInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getScrubIpInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     * Get Scrub IP Logs
     * @param param the request object
     */
    public getScrubIpLogsWithHttpInfo(param: ScrubIpsApiGetScrubIpLogsRequest, options?: ConfigurationOptions): Promise<HttpInfo<Array<ScrubIpsLogRowSchema>>> {
        return this.api.getScrubIpLogsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     * Get Scrub IP Logs
     * @param param the request object
     */
    public getScrubIpLogs(param: ScrubIpsApiGetScrubIpLogsRequest, options?: ConfigurationOptions): Promise<Array<ScrubIpsLogRowSchema>> {
        return this.api.getScrubIpLogs(param.id,  options).toPromise();
    }

    /**
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     * List Scrub IP Services
     * @param param the request object
     */
    public getScrubIpsListWithHttpInfo(param: ScrubIpsApiGetScrubIpsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<ScrubIpsRowSchema>>> {
        return this.api.getScrubIpsListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     * List Scrub IP Services
     * @param param the request object
     */
    public getScrubIpsList(param: ScrubIpsApiGetScrubIpsListRequest = {}, options?: ConfigurationOptions): Promise<Array<ScrubIpsRowSchema>> {
        return this.api.getScrubIpsList( options).toPromise();
    }

    /**
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     * Place Scrub IP Order
     * @param param the request object
     */
    public placeScrubOrderWithHttpInfo(param: ScrubIpsApiPlaceScrubOrderRequest, options?: ConfigurationOptions): Promise<HttpInfo<PlaceScrubOrder201Response>> {
        return this.api.placeScrubOrderWithHttpInfo(param.scrubIpPlaceOrder,  options).toPromise();
    }

    /**
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     * Place Scrub IP Order
     * @param param the request object
     */
    public placeScrubOrder(param: ScrubIpsApiPlaceScrubOrderRequest, options?: ConfigurationOptions): Promise<PlaceScrubOrder201Response> {
        return this.api.placeScrubOrder(param.scrubIpPlaceOrder,  options).toPromise();
    }

    /**
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Geo Firewall Rule
     * @param param the request object
     */
    public scrubIpsDeleteGeoRuleWithHttpInfo(param: ScrubIpsApiScrubIpsDeleteGeoRuleRequest, options?: ConfigurationOptions): Promise<HttpInfo<ScrubIpsDeleteRule200Response>> {
        return this.api.scrubIpsDeleteGeoRuleWithHttpInfo(param.id, param.deleteGeoFirewallRule,  options).toPromise();
    }

    /**
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Geo Firewall Rule
     * @param param the request object
     */
    public scrubIpsDeleteGeoRule(param: ScrubIpsApiScrubIpsDeleteGeoRuleRequest, options?: ConfigurationOptions): Promise<ScrubIpsDeleteRule200Response> {
        return this.api.scrubIpsDeleteGeoRule(param.id, param.deleteGeoFirewallRule,  options).toPromise();
    }

    /**
     * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Firewall Rule
     * @param param the request object
     */
    public scrubIpsDeleteRuleWithHttpInfo(param: ScrubIpsApiScrubIpsDeleteRuleRequest, options?: ConfigurationOptions): Promise<HttpInfo<ScrubIpsDeleteRule200Response>> {
        return this.api.scrubIpsDeleteRuleWithHttpInfo(param.id, param.deleteFirewallRule,  options).toPromise();
    }

    /**
     * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Firewall Rule
     * @param param the request object
     */
    public scrubIpsDeleteRule(param: ScrubIpsApiScrubIpsDeleteRuleRequest, options?: ConfigurationOptions): Promise<ScrubIpsDeleteRule200Response> {
        return this.api.scrubIpsDeleteRule(param.id, param.deleteFirewallRule,  options).toPromise();
    }

}

import { ObservableServersApi } from "./ObservableAPI";
import { ServersApiRequestFactory, ServersApiResponseProcessor} from "../apis/ServersApi";

export interface ServersApiAddServerRequest {
}

export interface ServersApiBuyItNowServerOrderRequest {
}

export interface ServersApiGetMPServersRequest {
}

export interface ServersApiGetNewServerRequest {
}

export interface ServersApiGetServerInfoRequest {
    /**
     * Server ID number.
     * Defaults to: undefined
     * @type number
     * @memberof ServersApigetServerInfo
     */
    id: number
}

export interface ServersApiGetServerInvoicesRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApigetServerInvoices
     */
    id: number
}

export interface ServersApiGetServerListRequest {
}

export interface ServersApiGetServerReverseDnsRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApigetServerReverseDns
     */
    id: number
}

export interface ServersApiGetServersWelcomeEmailRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApigetServersWelcomeEmail
     */
    id: number
}

export interface ServersApiPlaceBuyNowServerRequest {
    /**
     * 
     * @type PlaceBuyNowServerRequest
     * @memberof ServersApiplaceBuyNowServer
     */
    placeBuyNowServerRequest?: PlaceBuyNowServerRequest
}

export interface ServersApiPostServerReverseDnsRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApipostServerReverseDns
     */
    id: number
    /**
     * 
     * @type ReverseDnsEntries
     * @memberof ServersApipostServerReverseDns
     */
    reverseDnsEntries: ReverseDnsEntries
}

export interface ServersApiPutServersRequest {
}

export interface ServersApiServerIpmiLiveGetRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApiserverIpmiLiveGet
     */
    id: number
}

export interface ServersApiServerIpmiLivePostRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApiserverIpmiLivePost
     */
    id: number
    /**
     * Your IP Address you wish to connect to the IPMI system from.
     * Defaults to: undefined
     * @type string
     * @memberof ServersApiserverIpmiLivePost
     */
    ip: string
    /**
     * Asset ID
     * Defaults to: undefined
     * @type number
     * @memberof ServersApiserverIpmiLivePost
     */
    asset?: number
}

export interface ServersApiServerIpmiPowerGetRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApiserverIpmiPowerGet
     */
    id: number
}

export interface ServersApiServerIpmiPowerPostRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApiserverIpmiPowerPost
     */
    id: number
    /**
     * The power action to send to the ipmi controller.
     * Defaults to: undefined
     * @type string
     * @memberof ServersApiserverIpmiPowerPost
     */
    action: string
    /**
     * The Asset ID
     * Defaults to: undefined
     * @type number
     * @memberof ServersApiserverIpmiPowerPost
     */
    asset?: number
}

export interface ServersApiServersCancelRequest {
    /**
     * Server ID number
     * Defaults to: undefined
     * @type number
     * @memberof ServersApiserversCancel
     */
    id: number
}

export interface ServersApiUpdateServerInfoRequest {
    /**
     * Server ID number.
     * Defaults to: undefined
     * @type string
     * @memberof ServersApiupdateServerInfo
     */
    id: string
}

export class ObjectServersApi {
    private api: ObservableServersApi

    public constructor(configuration: Configuration, requestFactory?: ServersApiRequestFactory, responseProcessor?: ServersApiResponseProcessor) {
        this.api = new ObservableServersApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
     * Place Server Order
     * @param param the request object
     */
    public addServerWithHttpInfo(param: ServersApiAddServerRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<AddServer200Response>> {
        return this.api.addServerWithHttpInfo( options).toPromise();
    }

    /**
     * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
     * Place Server Order
     * @param param the request object
     */
    public addServer(param: ServersApiAddServerRequest = {}, options?: ConfigurationOptions): Promise<AddServer200Response> {
        return this.api.addServer( options).toPromise();
    }

    /**
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
     * Get Buy Now Server Options
     * @param param the request object
     */
    public buyItNowServerOrderWithHttpInfo(param: ServersApiBuyItNowServerOrderRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<BuyItNowServerOrder200Response>> {
        return this.api.buyItNowServerOrderWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
     * Get Buy Now Server Options
     * @param param the request object
     */
    public buyItNowServerOrder(param: ServersApiBuyItNowServerOrderRequest = {}, options?: ConfigurationOptions): Promise<BuyItNowServerOrder200Response> {
        return this.api.buyItNowServerOrder( options).toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     * @param param the request object
     */
    public getMPServersWithHttpInfo(param: ServersApiGetMPServersRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<BuyItNowList>> {
        return this.api.getMPServersWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     * @param param the request object
     */
    public getMPServers(param: ServersApiGetMPServersRequest = {}, options?: ConfigurationOptions): Promise<BuyItNowList> {
        return this.api.getMPServers( options).toPromise();
    }

    /**
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     * Server Ordering Information
     * @param param the request object
     */
    public getNewServerWithHttpInfo(param: ServersApiGetNewServerRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServerOrder>> {
        return this.api.getNewServerWithHttpInfo( options).toPromise();
    }

    /**
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     * Server Ordering Information
     * @param param the request object
     */
    public getNewServer(param: ServersApiGetNewServerRequest = {}, options?: ConfigurationOptions): Promise<ServerOrder> {
        return this.api.getNewServer( options).toPromise();
    }

    /**
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     * Get Server Order
     * @param param the request object
     */
    public getServerInfoWithHttpInfo(param: ServersApiGetServerInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<Server>> {
        return this.api.getServerInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     * Get Server Order
     * @param param the request object
     */
    public getServerInfo(param: ServersApiGetServerInfoRequest, options?: ConfigurationOptions): Promise<Server> {
        return this.api.getServerInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this dedicated server.
     * Get Server Invoices
     * @param param the request object
     */
    public getServerInvoicesWithHttpInfo(param: ServersApiGetServerInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getServerInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this dedicated server.
     * Get Server Invoices
     * @param param the request object
     */
    public getServerInvoices(param: ServersApiGetServerInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getServerInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns all dedicated server services on the account with their current status and configuration.
     * List Servers
     * @param param the request object
     */
    public getServerListWithHttpInfo(param: ServersApiGetServerListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<ServerRow>>> {
        return this.api.getServerListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns all dedicated server services on the account with their current status and configuration.
     * List Servers
     * @param param the request object
     */
    public getServerList(param: ServersApiGetServerListRequest = {}, options?: ConfigurationOptions): Promise<Array<ServerRow>> {
        return this.api.getServerList( options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Reverse DNS Info
     * @param param the request object
     */
    public getServerReverseDnsWithHttpInfo(param: ServersApiGetServerReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        return this.api.getServerReverseDnsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Reverse DNS Info
     * @param param the request object
     */
    public getServerReverseDns(param: ServersApiGetServerReverseDnsRequest, options?: ConfigurationOptions): Promise<ReverseDnsEntries> {
        return this.api.getServerReverseDns(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend Server Welcome Email
     * @param param the request object
     */
    public getServersWelcomeEmailWithHttpInfo(param: ServersApiGetServersWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getServersWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email for the order.
     * Resend Server Welcome Email
     * @param param the request object
     */
    public getServersWelcomeEmail(param: ServersApiGetServersWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getServersWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
     * Place Buy Now Server Order
     * @param param the request object
     */
    public placeBuyNowServerWithHttpInfo(param: ServersApiPlaceBuyNowServerRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServersBuyNowResponse>> {
        return this.api.placeBuyNowServerWithHttpInfo(param.placeBuyNowServerRequest,  options).toPromise();
    }

    /**
     * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
     * Place Buy Now Server Order
     * @param param the request object
     */
    public placeBuyNowServer(param: ServersApiPlaceBuyNowServerRequest = {}, options?: ConfigurationOptions): Promise<ServersBuyNowResponse> {
        return this.api.placeBuyNowServer(param.placeBuyNowServerRequest,  options).toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Update Reverse DNS
     * @param param the request object
     */
    public postServerReverseDnsWithHttpInfo(param: ServersApiPostServerReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.postServerReverseDnsWithHttpInfo(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Update Reverse DNS
     * @param param the request object
     */
    public postServerReverseDns(param: ServersApiPostServerReverseDnsRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.postServerReverseDns(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Server Order
     * @param param the request object
     */
    public putServersWithHttpInfo(param: ServersApiPutServersRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putServersWithHttpInfo( options).toPromise();
    }

    /**
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Server Order
     * @param param the request object
     */
    public putServers(param: ServersApiPutServersRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putServers( options).toPromise();
    }

    /**
     * Returns the current IPMI live connection information for the server.
     * Server IPMI Live Information
     * @param param the request object
     */
    public serverIpmiLiveGetWithHttpInfo(param: ServersApiServerIpmiLiveGetRequest, options?: ConfigurationOptions): Promise<HttpInfo<ServerIpmiLiveInfo>> {
        return this.api.serverIpmiLiveGetWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current IPMI live connection information for the server.
     * Server IPMI Live Information
     * @param param the request object
     */
    public serverIpmiLiveGet(param: ServersApiServerIpmiLiveGetRequest, options?: ConfigurationOptions): Promise<ServerIpmiLiveInfo> {
        return this.api.serverIpmiLiveGet(param.id,  options).toPromise();
    }

    /**
     * Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.
     * Server IPMI Live Setup
     * @param param the request object
     */
    public serverIpmiLivePostWithHttpInfo(param: ServersApiServerIpmiLivePostRequest, options?: ConfigurationOptions): Promise<HttpInfo<ServerIpmiLiveInfo>> {
        return this.api.serverIpmiLivePostWithHttpInfo(param.id, param.ip, param.asset,  options).toPromise();
    }

    /**
     * Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.
     * Server IPMI Live Setup
     * @param param the request object
     */
    public serverIpmiLivePost(param: ServersApiServerIpmiLivePostRequest, options?: ConfigurationOptions): Promise<ServerIpmiLiveInfo> {
        return this.api.serverIpmiLivePost(param.id, param.ip, param.asset,  options).toPromise();
    }

    /**
     * Returns the chassis power status from ipmi.
     * Get IPMI Power Status
     * @param param the request object
     */
    public serverIpmiPowerGetWithHttpInfo(param: ServersApiServerIpmiPowerGetRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.serverIpmiPowerGetWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the chassis power status from ipmi.
     * Get IPMI Power Status
     * @param param the request object
     */
    public serverIpmiPowerGet(param: ServersApiServerIpmiPowerGetRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.serverIpmiPowerGet(param.id,  options).toPromise();
    }

    /**
     * Uses the IPMI interface to set the Power status on the server.
     * Server IPMI Power
     * @param param the request object
     */
    public serverIpmiPowerPostWithHttpInfo(param: ServersApiServerIpmiPowerPostRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.serverIpmiPowerPostWithHttpInfo(param.id, param.action, param.asset,  options).toPromise();
    }

    /**
     * Uses the IPMI interface to set the Power status on the server.
     * Server IPMI Power
     * @param param the request object
     */
    public serverIpmiPowerPost(param: ServersApiServerIpmiPowerPostRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.serverIpmiPowerPost(param.id, param.action, param.asset,  options).toPromise();
    }

    /**
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel Server Service
     * @param param the request object
     */
    public serversCancelWithHttpInfo(param: ServersApiServersCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<ServersCancel200Response>> {
        return this.api.serversCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel Server Service
     * @param param the request object
     */
    public serversCancel(param: ServersApiServersCancelRequest, options?: ConfigurationOptions): Promise<ServersCancel200Response> {
        return this.api.serversCancel(param.id,  options).toPromise();
    }

    /**
     * Updates settings on a dedicated server order.
     * Update Server Order
     * @param param the request object
     */
    public updateServerInfoWithHttpInfo(param: ServersApiUpdateServerInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateServerInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates settings on a dedicated server order.
     * Update Server Order
     * @param param the request object
     */
    public updateServerInfo(param: ServersApiUpdateServerInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateServerInfo(param.id,  options).toPromise();
    }

}

import { ObservableTicketsApi } from "./ObservableAPI";
import { TicketsApiRequestFactory, TicketsApiResponseProcessor} from "../apis/TicketsApi";

export interface TicketsApiAddNewTicketRequest {
    /**
     * 
     * @type TicketNew
     * @memberof TicketsApiaddNewTicket
     */
    ticketNew: TicketNew
}

export interface TicketsApiCloseTicketRequest {
    /**
     * Ticket ID
     * Defaults to: undefined
     * @type string
     * @memberof TicketsApicloseTicket
     */
    id: string
}

export interface TicketsApiDeleteTicketInfoRequest {
    /**
     * Ticket ID number.
     * Defaults to: undefined
     * @type number
     * @memberof TicketsApideleteTicketInfo
     */
    id: number
}

export interface TicketsApiGetNewTicketRequest {
}

export interface TicketsApiGetTicketInfoRequest {
    /**
     * Ticket ID number.
     * Defaults to: undefined
     * @type number
     * @memberof TicketsApigetTicketInfo
     */
    id: number
}

export interface TicketsApiGetTicketsListRequest {
    /**
     * Page number for paginated results.
     * Defaults to: 1
     * @type number
     * @memberof TicketsApigetTicketsList
     */
    page?: number
    /**
     * How far back to show tickets from. Value is in days.
     * Defaults to: &#39;30&#39;
     * @type &#39;30&#39; | &#39;90&#39; | &#39;365&#39; | &#39;1825&#39; | &#39;all&#39;
     * @memberof TicketsApigetTicketsList
     */
    period?: '30' | '90' | '365' | '1825' | 'all'
    /**
     * The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
     * Defaults to: undefined
     * @type &#39;Open&#39; | &#39;Closed&#39; | &#39;On Hold&#39; | &#39;In Progress&#39;
     * @memberof TicketsApigetTicketsList
     */
    view?: 'Open' | 'Closed' | 'On Hold' | 'In Progress'
}

export interface TicketsApiPostTicketInfoRequest {
    /**
     * Ticket ID number.
     * Defaults to: undefined
     * @type number
     * @memberof TicketsApipostTicketInfo
     */
    id: number
}

export interface TicketsApiPostTicketsListRequest {
}

export interface TicketsApiPutTicketInfoRequest {
    /**
     * Ticket ID number.
     * Defaults to: undefined
     * @type number
     * @memberof TicketsApiputTicketInfo
     */
    id: number
}

export interface TicketsApiReplyTicketRequest {
    /**
     * The ticket ID number.
     * Defaults to: undefined
     * @type number
     * @memberof TicketsApireplyTicket
     */
    id: number
    /**
     * 
     * @type ReplyTicketRequest
     * @memberof TicketsApireplyTicket
     */
    replyTicketRequest?: ReplyTicketRequest
}

export interface TicketsApiUpdateTicketInfoRequest {
    /**
     * The ticket ID number.
     * Defaults to: undefined
     * @type number
     * @memberof TicketsApiupdateTicketInfo
     */
    id: number
    /**
     * 
     * @type UpdateTicket
     * @memberof TicketsApiupdateTicketInfo
     */
    updateTicket?: UpdateTicket
}

export class ObjectTicketsApi {
    private api: ObservableTicketsApi

    public constructor(configuration: Configuration, requestFactory?: TicketsApiRequestFactory, responseProcessor?: TicketsApiResponseProcessor) {
        this.api = new ObservableTicketsApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     * Create New Ticket
     * @param param the request object
     */
    public addNewTicketWithHttpInfo(param: TicketsApiAddNewTicketRequest, options?: ConfigurationOptions): Promise<HttpInfo<TicketNewResponse>> {
        return this.api.addNewTicketWithHttpInfo(param.ticketNew,  options).toPromise();
    }

    /**
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     * Create New Ticket
     * @param param the request object
     */
    public addNewTicket(param: TicketsApiAddNewTicketRequest, options?: ConfigurationOptions): Promise<TicketNewResponse> {
        return this.api.addNewTicket(param.ticketNew,  options).toPromise();
    }

    /**
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     * Close Ticket
     * @param param the request object
     */
    public closeTicketWithHttpInfo(param: TicketsApiCloseTicketRequest, options?: ConfigurationOptions): Promise<HttpInfo<CloseTicketResponseSchema>> {
        return this.api.closeTicketWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     * Close Ticket
     * @param param the request object
     */
    public closeTicket(param: TicketsApiCloseTicketRequest, options?: ConfigurationOptions): Promise<CloseTicketResponseSchema> {
        return this.api.closeTicket(param.id,  options).toPromise();
    }

    /**
     * Closes the support ticket.
     * Close Ticket
     * @param param the request object
     */
    public deleteTicketInfoWithHttpInfo(param: TicketsApiDeleteTicketInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        return this.api.deleteTicketInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Closes the support ticket.
     * Close Ticket
     * @param param the request object
     */
    public deleteTicketInfo(param: TicketsApiDeleteTicketInfoRequest, options?: ConfigurationOptions): Promise<ViewTicketResponse> {
        return this.api.deleteTicketInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     * Gets Information for creating a new ticket.
     * @param param the request object
     */
    public getNewTicketWithHttpInfo(param: TicketsApiGetNewTicketRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getNewTicketWithHttpInfo( options).toPromise();
    }

    /**
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     * Gets Information for creating a new ticket.
     * @param param the request object
     */
    public getNewTicket(param: TicketsApiGetNewTicketRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.getNewTicket( options).toPromise();
    }

    /**
     * Returns the full details of a support ticket including its history of replies.
     * Get Ticket Information
     * @param param the request object
     */
    public getTicketInfoWithHttpInfo(param: TicketsApiGetTicketInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        return this.api.getTicketInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the full details of a support ticket including its history of replies.
     * Get Ticket Information
     * @param param the request object
     */
    public getTicketInfo(param: TicketsApiGetTicketInfoRequest, options?: ConfigurationOptions): Promise<ViewTicketResponse> {
        return this.api.getTicketInfo(param.id,  options).toPromise();
    }

    /**
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     * List Support Tickets
     * @param param the request object
     */
    public getTicketsListWithHttpInfo(param: TicketsApiGetTicketsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Tickets>> {
        return this.api.getTicketsListWithHttpInfo(param.page, param.period, param.view,  options).toPromise();
    }

    /**
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     * List Support Tickets
     * @param param the request object
     */
    public getTicketsList(param: TicketsApiGetTicketsListRequest = {}, options?: ConfigurationOptions): Promise<Tickets> {
        return this.api.getTicketsList(param.page, param.period, param.view,  options).toPromise();
    }

    /**
     * Adds a reply to an existing support ticket.
     * Reply To Ticket
     * @param param the request object
     */
    public postTicketInfoWithHttpInfo(param: TicketsApiPostTicketInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        return this.api.postTicketInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Adds a reply to an existing support ticket.
     * Reply To Ticket
     * @param param the request object
     */
    public postTicketInfo(param: TicketsApiPostTicketInfoRequest, options?: ConfigurationOptions): Promise<ViewTicketResponse> {
        return this.api.postTicketInfo(param.id,  options).toPromise();
    }

    /**
     * Searches support tickets by email, subject, or ticket mask ID.
     * Search Support Tickets
     * @param param the request object
     */
    public postTicketsListWithHttpInfo(param: TicketsApiPostTicketsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Tickets>> {
        return this.api.postTicketsListWithHttpInfo( options).toPromise();
    }

    /**
     * Searches support tickets by email, subject, or ticket mask ID.
     * Search Support Tickets
     * @param param the request object
     */
    public postTicketsList(param: TicketsApiPostTicketsListRequest = {}, options?: ConfigurationOptions): Promise<Tickets> {
        return this.api.postTicketsList( options).toPromise();
    }

    /**
     * Updates a support ticket\'s properties such as subject or status.
     * Update Ticket
     * @param param the request object
     */
    public putTicketInfoWithHttpInfo(param: TicketsApiPutTicketInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<ViewTicketResponse>> {
        return this.api.putTicketInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates a support ticket\'s properties such as subject or status.
     * Update Ticket
     * @param param the request object
     */
    public putTicketInfo(param: TicketsApiPutTicketInfoRequest, options?: ConfigurationOptions): Promise<ViewTicketResponse> {
        return this.api.putTicketInfo(param.id,  options).toPromise();
    }

    /**
     * Posts a reply to an existing support ticket thread.
     * Reply Ticket
     * @param param the request object
     */
    public replyTicketWithHttpInfo(param: TicketsApiReplyTicketRequest, options?: ConfigurationOptions): Promise<HttpInfo<ReplyTicketResponseSchema>> {
        return this.api.replyTicketWithHttpInfo(param.id, param.replyTicketRequest,  options).toPromise();
    }

    /**
     * Posts a reply to an existing support ticket thread.
     * Reply Ticket
     * @param param the request object
     */
    public replyTicket(param: TicketsApiReplyTicketRequest, options?: ConfigurationOptions): Promise<ReplyTicketResponseSchema> {
        return this.api.replyTicket(param.id, param.replyTicketRequest,  options).toPromise();
    }

    /**
     * Updates a support ticket\'s subject or body content.
     * Update Ticket
     * @param param the request object
     */
    public updateTicketInfoWithHttpInfo(param: TicketsApiUpdateTicketInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<UpdateTicketResponseSchema>> {
        return this.api.updateTicketInfoWithHttpInfo(param.id, param.updateTicket,  options).toPromise();
    }

    /**
     * Updates a support ticket\'s subject or body content.
     * Update Ticket
     * @param param the request object
     */
    public updateTicketInfo(param: TicketsApiUpdateTicketInfoRequest, options?: ConfigurationOptions): Promise<UpdateTicketResponseSchema> {
        return this.api.updateTicketInfo(param.id, param.updateTicket,  options).toPromise();
    }

}

import { ObservableVPSApi } from "./ObservableAPI";
import { VPSApiRequestFactory, VPSApiResponseProcessor} from "../apis/VPSApi";

export interface VPSApiAddVpsRequest {
    /**
     * 
     * @type VpsOrderPostRequest
     * @memberof VPSApiaddVps
     */
    vpsOrderPostRequest?: VpsOrderPostRequest
}

export interface VPSApiDeleteVpsBackupRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApideleteVpsBackup
     */
    id: number
    /**
     * The backup filename to delete.
     * Defaults to: undefined
     * @type string
     * @memberof VPSApideleteVpsBackup
     */
    file: string
    /**
     * Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     * Defaults to: undefined
     * @type &#39;0&#39; | &#39;1&#39;
     * @memberof VPSApideleteVpsBackup
     */
    all?: '0' | '1'
}

export interface VPSApiDoVpsBlockSmtpRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsBlockSmtp
     */
    id: number
}

export interface VPSApiDoVpsDisableCdRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsDisableCd
     */
    id: number
}

export interface VPSApiDoVpsDisableQuotaRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsDisableQuota
     */
    id: number
}

export interface VPSApiDoVpsEjectCdRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsEjectCd
     */
    id: number
}

export interface VPSApiDoVpsEnableQuotaRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsEnableQuota
     */
    id: number
}

export interface VPSApiDoVpsRestartRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsRestart
     */
    id: number
}

export interface VPSApiDoVpsStartRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsStart
     */
    id: number
}

export interface VPSApiDoVpsStopRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidoVpsStop
     */
    id: number
}

export interface VPSApiDownloadVpsBackupRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApidownloadVpsBackup
     */
    id: number
    /**
     * 
     * @type DownloadQsBackupRequest
     * @memberof VPSApidownloadVpsBackup
     */
    downloadQsBackupRequest: DownloadQsBackupRequest
    /**
     * Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     * Defaults to: undefined
     * @type &#39;0&#39; | &#39;1&#39;
     * @memberof VPSApidownloadVpsBackup
     */
    all?: '0' | '1'
}

export interface VPSApiGetNewVpsRequest {
}

export interface VPSApiGetVpsBackupsRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsBackups
     */
    id: number
    /**
     * Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     * Defaults to: undefined
     * @type &#39;0&#39; | &#39;1&#39;
     * @memberof VPSApigetVpsBackups
     */
    all?: '0' | '1'
}

export interface VPSApiGetVpsBuyHdSpaceRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsBuyHdSpace
     */
    id: number
}

export interface VPSApiGetVpsBuyIpRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsBuyIp
     */
    id: number
}

export interface VPSApiGetVpsChangeTimezoneRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsChangeTimezone
     */
    id: number
}

export interface VPSApiGetVpsInfoRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsInfo
     */
    id: number
}

export interface VPSApiGetVpsInvoicesRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsInvoices
     */
    id: number
}

export interface VPSApiGetVpsListRequest {
}

export interface VPSApiGetVpsReinstallOsRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsReinstallOs
     */
    id: number
}

export interface VPSApiGetVpsReverseDnsRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsReverseDns
     */
    id: number
}

export interface VPSApiGetVpsSetupVncRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsSetupVnc
     */
    id: number
}

export interface VPSApiGetVpsSlicesRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsSlices
     */
    id: number
}

export interface VPSApiGetVpsTrafficUsageRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsTrafficUsage
     */
    id: number
}

export interface VPSApiGetVpsViewDesktopRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApigetVpsViewDesktop
     */
    id: number
}

export interface VPSApiGetVpsWelcomeEmailRequest {
    /**
     * VPS ID
     * Defaults to: undefined
     * @type string
     * @memberof VPSApigetVpsWelcomeEmail
     */
    id: string
}

export interface VPSApiPostVpsBackupRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsBackup
     */
    id: number
}

export interface VPSApiPostVpsBuyHdSpaceRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsBuyHdSpace
     */
    id: number
}

export interface VPSApiPostVpsBuyIpRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsBuyIp
     */
    id: number
}

export interface VPSApiPostVpsChangeHostnameRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsChangeHostname
     */
    id: number
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsChangeHostname
     */
    hostname?: string
}

export interface VPSApiPostVpsChangeRootPasswordRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsChangeRootPassword
     */
    id: number
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsChangeRootPassword
     */
    password: string
}

export interface VPSApiPostVpsChangeTimezoneRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsChangeTimezone
     */
    id: number
    /**
     * The time zone
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsChangeTimezone
     */
    timezone: string
}

export interface VPSApiPostVpsChangeWebuzoPasswordRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsChangeWebuzoPassword
     */
    id: number
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsChangeWebuzoPassword
     */
    password: string
}

export interface VPSApiPostVpsInsertCdRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsInsertCd
     */
    id: number
    /**
     * 
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsInsertCd
     */
    url?: string
}

export interface VPSApiPostVpsReinstallOsRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsReinstallOs
     */
    id: number
    /**
     * OS Template Filename
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsReinstallOs
     */
    template: string
    /**
     * Password for this account.
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsReinstallOs
     */
    localPassword: string
    /**
     * Password for Root / Administrator Account.
     * Defaults to: undefined
     * @type string
     * @memberof VPSApipostVpsReinstallOs
     */
    password?: string
}

export interface VPSApiPostVpsResetPasswordRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsResetPassword
     */
    id: number
}

export interface VPSApiPostVpsRestoreRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsRestore
     */
    id: number
    /**
     * VPS Restore request
     * @type RestoreRequest
     * @memberof VPSApipostVpsRestore
     */
    restoreRequest: RestoreRequest
}

export interface VPSApiPostVpsReverseDnsRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsReverseDns
     */
    id: number
    /**
     * 
     * @type ReverseDnsEntries
     * @memberof VPSApipostVpsReverseDns
     */
    reverseDnsEntries: ReverseDnsEntries
}

export interface VPSApiPostVpsSetupVncRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsSetupVnc
     */
    id: number
}

export interface VPSApiPostVpsSlicesRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsSlices
     */
    id: number
}

export interface VPSApiPostVpsViewDesktopRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApipostVpsViewDesktop
     */
    id: number
}

export interface VPSApiPutVpsRequest {
    /**
     * 
     * @type VpsOrderPutRequest
     * @memberof VPSApiputVps
     */
    vpsOrderPutRequest?: VpsOrderPutRequest
}

export interface VPSApiUpdateVpsInfoRequest {
    /**
     * VPS ID number.
     * Defaults to: undefined
     * @type string
     * @memberof VPSApiupdateVpsInfo
     */
    id: string
}

export interface VPSApiVPSCancelRequest {
    /**
     * VPS ID number
     * Defaults to: undefined
     * @type number
     * @memberof VPSApivPSCancel
     */
    id: number
}

export class ObjectVPSApi {
    private api: ObservableVPSApi

    public constructor(configuration: Configuration, requestFactory?: VPSApiRequestFactory, responseProcessor?: VPSApiResponseProcessor) {
        this.api = new ObservableVPSApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
     * Place VPS Order
     * @param param the request object
     */
    public addVpsWithHttpInfo(param: VPSApiAddVpsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addVpsWithHttpInfo(param.vpsOrderPostRequest,  options).toPromise();
    }

    /**
     * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
     * Place VPS Order
     * @param param the request object
     */
    public addVps(param: VPSApiAddVpsRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addVps(param.vpsOrderPostRequest,  options).toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
     * Delete VPS Backup
     * @param param the request object
     */
    public deleteVpsBackupWithHttpInfo(param: VPSApiDeleteVpsBackupRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.deleteVpsBackupWithHttpInfo(param.id, param.file, param.all,  options).toPromise();
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
     * Delete VPS Backup
     * @param param the request object
     */
    public deleteVpsBackup(param: VPSApiDeleteVpsBackupRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.deleteVpsBackup(param.id, param.file, param.all,  options).toPromise();
    }

    /**
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     * Blocks SMTP
     * @param param the request object
     */
    public doVpsBlockSmtpWithHttpInfo(param: VPSApiDoVpsBlockSmtpRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsBlockSmtpWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     * Blocks SMTP
     * @param param the request object
     */
    public doVpsBlockSmtp(param: VPSApiDoVpsBlockSmtpRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsBlockSmtp(param.id,  options).toPromise();
    }

    /**
     * Disables the virtual CD drive on the VPS.
     * Disable CD Drive
     * @param param the request object
     */
    public doVpsDisableCdWithHttpInfo(param: VPSApiDoVpsDisableCdRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsDisableCdWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Disables the virtual CD drive on the VPS.
     * Disable CD Drive
     * @param param the request object
     */
    public doVpsDisableCd(param: VPSApiDoVpsDisableCdRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsDisableCd(param.id,  options).toPromise();
    }

    /**
     * Disables disk quota enforcement on the VPS.
     * Disable Quotas
     * @param param the request object
     */
    public doVpsDisableQuotaWithHttpInfo(param: VPSApiDoVpsDisableQuotaRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsDisableQuotaWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Disables disk quota enforcement on the VPS.
     * Disable Quotas
     * @param param the request object
     */
    public doVpsDisableQuota(param: VPSApiDoVpsDisableQuotaRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsDisableQuota(param.id,  options).toPromise();
    }

    /**
     * Ejects the virtual CD from the VPS CD drive.
     * Eject CD Drive
     * @param param the request object
     */
    public doVpsEjectCdWithHttpInfo(param: VPSApiDoVpsEjectCdRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsEjectCdWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Ejects the virtual CD from the VPS CD drive.
     * Eject CD Drive
     * @param param the request object
     */
    public doVpsEjectCd(param: VPSApiDoVpsEjectCdRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsEjectCd(param.id,  options).toPromise();
    }

    /**
     * Enables disk quota enforcement on the VPS.
     * Enable Quotas
     * @param param the request object
     */
    public doVpsEnableQuotaWithHttpInfo(param: VPSApiDoVpsEnableQuotaRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsEnableQuotaWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Enables disk quota enforcement on the VPS.
     * Enable Quotas
     * @param param the request object
     */
    public doVpsEnableQuota(param: VPSApiDoVpsEnableQuotaRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsEnableQuota(param.id,  options).toPromise();
    }

    /**
     * Restarts the VPS.
     * Restart VPS
     * @param param the request object
     */
    public doVpsRestartWithHttpInfo(param: VPSApiDoVpsRestartRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsRestartWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Restarts the VPS.
     * Restart VPS
     * @param param the request object
     */
    public doVpsRestart(param: VPSApiDoVpsRestartRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsRestart(param.id,  options).toPromise();
    }

    /**
     * Powers on the VPS.
     * Start VPS
     * @param param the request object
     */
    public doVpsStartWithHttpInfo(param: VPSApiDoVpsStartRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsStartWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Powers on the VPS.
     * Start VPS
     * @param param the request object
     */
    public doVpsStart(param: VPSApiDoVpsStartRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsStart(param.id,  options).toPromise();
    }

    /**
     * Powers off the VPS.
     * Stop VPS
     * @param param the request object
     */
    public doVpsStopWithHttpInfo(param: VPSApiDoVpsStopRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.doVpsStopWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Powers off the VPS.
     * Stop VPS
     * @param param the request object
     */
    public doVpsStop(param: VPSApiDoVpsStopRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.doVpsStop(param.id,  options).toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
     * Download VPS Backup
     * @param param the request object
     */
    public downloadVpsBackupWithHttpInfo(param: VPSApiDownloadVpsBackupRequest, options?: ConfigurationOptions): Promise<HttpInfo<DownloadQsBackup200Response>> {
        return this.api.downloadVpsBackupWithHttpInfo(param.id, param.downloadQsBackupRequest, param.all,  options).toPromise();
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
     * Download VPS Backup
     * @param param the request object
     */
    public downloadVpsBackup(param: VPSApiDownloadVpsBackupRequest, options?: ConfigurationOptions): Promise<DownloadQsBackup200Response> {
        return this.api.downloadVpsBackup(param.id, param.downloadQsBackupRequest, param.all,  options).toPromise();
    }

    /**
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     * VPS Ordering Information
     * @param param the request object
     */
    public getNewVpsWithHttpInfo(param: VPSApiGetNewVpsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<VpsOrder>> {
        return this.api.getNewVpsWithHttpInfo( options).toPromise();
    }

    /**
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     * VPS Ordering Information
     * @param param the request object
     */
    public getNewVps(param: VPSApiGetNewVpsRequest = {}, options?: ConfigurationOptions): Promise<VpsOrder> {
        return this.api.getNewVps( options).toPromise();
    }

    /**
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
     * Get VPS Backups List
     * @param param the request object
     */
    public getVpsBackupsWithHttpInfo(param: VPSApiGetVpsBackupsRequest, options?: ConfigurationOptions): Promise<HttpInfo<VpsBackupRows>> {
        return this.api.getVpsBackupsWithHttpInfo(param.id, param.all,  options).toPromise();
    }

    /**
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
     * Get VPS Backups List
     * @param param the request object
     */
    public getVpsBackups(param: VPSApiGetVpsBackupsRequest, options?: ConfigurationOptions): Promise<VpsBackupRows> {
        return this.api.getVpsBackups(param.id, param.all,  options).toPromise();
    }

    /**
     * Returns available hard drive space addon options and pricing for the VPS.
     * HD Space Addon Info
     * @param param the request object
     */
    public getVpsBuyHdSpaceWithHttpInfo(param: VPSApiGetVpsBuyHdSpaceRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getVpsBuyHdSpaceWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns available hard drive space addon options and pricing for the VPS.
     * HD Space Addon Info
     * @param param the request object
     */
    public getVpsBuyHdSpace(param: VPSApiGetVpsBuyHdSpaceRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getVpsBuyHdSpace(param.id,  options).toPromise();
    }

    /**
     * Returns available additional IP address options and pricing for the VPS.
     * Additional IP Addon Info
     * @param param the request object
     */
    public getVpsBuyIpWithHttpInfo(param: VPSApiGetVpsBuyIpRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getVpsBuyIpWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns available additional IP address options and pricing for the VPS.
     * Additional IP Addon Info
     * @param param the request object
     */
    public getVpsBuyIp(param: VPSApiGetVpsBuyIpRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getVpsBuyIp(param.id,  options).toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the VPS.
     * Get Timezone Info
     * @param param the request object
     */
    public getVpsChangeTimezoneWithHttpInfo(param: VPSApiGetVpsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<HttpInfo<Array<string>>> {
        return this.api.getVpsChangeTimezoneWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the list of available timezones that can be set on the VPS.
     * Get Timezone Info
     * @param param the request object
     */
    public getVpsChangeTimezone(param: VPSApiGetVpsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<Array<string>> {
        return this.api.getVpsChangeTimezone(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     * Get VPS Order
     * @param param the request object
     */
    public getVpsInfoWithHttpInfo(param: VPSApiGetVpsInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<Vps>> {
        return this.api.getVpsInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     * Get VPS Order
     * @param param the request object
     */
    public getVpsInfo(param: VPSApiGetVpsInfoRequest, options?: ConfigurationOptions): Promise<Vps> {
        return this.api.getVpsInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this VPS.
     * Get VPS Invoices
     * @param param the request object
     */
    public getVpsInvoicesWithHttpInfo(param: VPSApiGetVpsInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getVpsInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this VPS.
     * Get VPS Invoices
     * @param param the request object
     */
    public getVpsInvoices(param: VPSApiGetVpsInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getVpsInvoices(param.id,  options).toPromise();
    }

    /**
     * Returns all VPS services on the account with their current status and configuration.
     * List VPS Orders
     * @param param the request object
     */
    public getVpsListWithHttpInfo(param: VPSApiGetVpsListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<VpsRow>>> {
        return this.api.getVpsListWithHttpInfo( options).toPromise();
    }

    /**
     * Returns all VPS services on the account with their current status and configuration.
     * List VPS Orders
     * @param param the request object
     */
    public getVpsList(param: VPSApiGetVpsListRequest = {}, options?: ConfigurationOptions): Promise<Array<VpsRow>> {
        return this.api.getVpsList( options).toPromise();
    }

    /**
     * Returns the list of available OS templates for reinstalling the VPS.
     * VPS Reinstall OS Options
     * @param param the request object
     */
    public getVpsReinstallOsWithHttpInfo(param: VPSApiGetVpsReinstallOsRequest, options?: ConfigurationOptions): Promise<HttpInfo<VpsTemplatesList>> {
        return this.api.getVpsReinstallOsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the list of available OS templates for reinstalling the VPS.
     * VPS Reinstall OS Options
     * @param param the request object
     */
    public getVpsReinstallOs(param: VPSApiGetVpsReinstallOsRequest, options?: ConfigurationOptions): Promise<VpsTemplatesList> {
        return this.api.getVpsReinstallOs(param.id,  options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     * Reverse DNS Info
     * @param param the request object
     */
    public getVpsReverseDnsWithHttpInfo(param: VPSApiGetVpsReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        return this.api.getVpsReverseDnsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     * Reverse DNS Info
     * @param param the request object
     */
    public getVpsReverseDns(param: VPSApiGetVpsReverseDnsRequest, options?: ConfigurationOptions): Promise<ReverseDnsEntries> {
        return this.api.getVpsReverseDns(param.id,  options).toPromise();
    }

    /**
     * Returns the current VNC connection information for the VPS.
     * VNC Setup Info
     * @param param the request object
     */
    public getVpsSetupVncWithHttpInfo(param: VPSApiGetVpsSetupVncRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getVpsSetupVncWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current VNC connection information for the VPS.
     * VNC Setup Info
     * @param param the request object
     */
    public getVpsSetupVnc(param: VPSApiGetVpsSetupVncRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getVpsSetupVnc(param.id,  options).toPromise();
    }

    /**
     * Returns available slice upgrade options and pricing for the VPS.
     * Slice Upgrade Info
     * @param param the request object
     */
    public getVpsSlicesWithHttpInfo(param: VPSApiGetVpsSlicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getVpsSlicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns available slice upgrade options and pricing for the VPS.
     * Slice Upgrade Info
     * @param param the request object
     */
    public getVpsSlices(param: VPSApiGetVpsSlicesRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getVpsSlices(param.id,  options).toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the VPS.
     * Get Traffic Usage
     * @param param the request object
     */
    public getVpsTrafficUsageWithHttpInfo(param: VPSApiGetVpsTrafficUsageRequest, options?: ConfigurationOptions): Promise<HttpInfo<VpsTrafficResponse>> {
        return this.api.getVpsTrafficUsageWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns bandwidth traffic usage data for the VPS.
     * Get Traffic Usage
     * @param param the request object
     */
    public getVpsTrafficUsage(param: VPSApiGetVpsTrafficUsageRequest, options?: ConfigurationOptions): Promise<VpsTrafficResponse> {
        return this.api.getVpsTrafficUsage(param.id,  options).toPromise();
    }

    /**
     * Returns remote desktop connection information for the VPS.
     * Get View Desktop Info
     * @param param the request object
     */
    public getVpsViewDesktopWithHttpInfo(param: VPSApiGetVpsViewDesktopRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.getVpsViewDesktopWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns remote desktop connection information for the VPS.
     * Get View Desktop Info
     * @param param the request object
     */
    public getVpsViewDesktop(param: VPSApiGetVpsViewDesktopRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.getVpsViewDesktop(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the VPS order.
     * Resend VPS Welcome Email
     * @param param the request object
     */
    public getVpsWelcomeEmailWithHttpInfo(param: VPSApiGetVpsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getVpsWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email containing connection details and credentials for the VPS order.
     * Resend VPS Welcome Email
     * @param param the request object
     */
    public getVpsWelcomeEmail(param: VPSApiGetVpsWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getVpsWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     * Start a VPS Backup
     * @param param the request object
     */
    public postVpsBackupWithHttpInfo(param: VPSApiPostVpsBackupRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsBackupWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     * Start a VPS Backup
     * @param param the request object
     */
    public postVpsBackup(param: VPSApiPostVpsBackupRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsBackup(param.id,  options).toPromise();
    }

    /**
     * Purchases additional hard drive space for the VPS.
     * Purchase HD Space Addon
     * @param param the request object
     */
    public postVpsBuyHdSpaceWithHttpInfo(param: VPSApiPostVpsBuyHdSpaceRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.postVpsBuyHdSpaceWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Purchases additional hard drive space for the VPS.
     * Purchase HD Space Addon
     * @param param the request object
     */
    public postVpsBuyHdSpace(param: VPSApiPostVpsBuyHdSpaceRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.postVpsBuyHdSpace(param.id,  options).toPromise();
    }

    /**
     * Purchases an additional IP address for the VPS.
     * Purchase Additional IP
     * @param param the request object
     */
    public postVpsBuyIpWithHttpInfo(param: VPSApiPostVpsBuyIpRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.postVpsBuyIpWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Purchases an additional IP address for the VPS.
     * Purchase Additional IP
     * @param param the request object
     */
    public postVpsBuyIp(param: VPSApiPostVpsBuyIpRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.postVpsBuyIp(param.id,  options).toPromise();
    }

    /**
     * Changes the hostname of the VPS. This queues a background task to update the server.
     * Update VPS Hostname
     * @param param the request object
     */
    public postVpsChangeHostnameWithHttpInfo(param: VPSApiPostVpsChangeHostnameRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsChangeHostnameWithHttpInfo(param.id, param.hostname,  options).toPromise();
    }

    /**
     * Changes the hostname of the VPS. This queues a background task to update the server.
     * Update VPS Hostname
     * @param param the request object
     */
    public postVpsChangeHostname(param: VPSApiPostVpsChangeHostnameRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsChangeHostname(param.id, param.hostname,  options).toPromise();
    }

    /**
     * Changes the root password of the VPS.
     * Change VPS Root Password
     * @param param the request object
     */
    public postVpsChangeRootPasswordWithHttpInfo(param: VPSApiPostVpsChangeRootPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsChangeRootPasswordWithHttpInfo(param.id, param.password,  options).toPromise();
    }

    /**
     * Changes the root password of the VPS.
     * Change VPS Root Password
     * @param param the request object
     */
    public postVpsChangeRootPassword(param: VPSApiPostVpsChangeRootPasswordRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsChangeRootPassword(param.id, param.password,  options).toPromise();
    }

    /**
     * Changes the system timezone on the VPS.
     * Change VPS Timezone
     * @param param the request object
     */
    public postVpsChangeTimezoneWithHttpInfo(param: VPSApiPostVpsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsChangeTimezoneWithHttpInfo(param.id, param.timezone,  options).toPromise();
    }

    /**
     * Changes the system timezone on the VPS.
     * Change VPS Timezone
     * @param param the request object
     */
    public postVpsChangeTimezone(param: VPSApiPostVpsChangeTimezoneRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsChangeTimezone(param.id, param.timezone,  options).toPromise();
    }

    /**
     * Changes the Webuzo control panel password on the VPS.
     * Change Webuzo Password
     * @param param the request object
     */
    public postVpsChangeWebuzoPasswordWithHttpInfo(param: VPSApiPostVpsChangeWebuzoPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsChangeWebuzoPasswordWithHttpInfo(param.id, param.password,  options).toPromise();
    }

    /**
     * Changes the Webuzo control panel password on the VPS.
     * Change Webuzo Password
     * @param param the request object
     */
    public postVpsChangeWebuzoPassword(param: VPSApiPostVpsChangeWebuzoPasswordRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsChangeWebuzoPassword(param.id, param.password,  options).toPromise();
    }

    /**
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     * Insert CD in VPS
     * @param param the request object
     */
    public postVpsInsertCdWithHttpInfo(param: VPSApiPostVpsInsertCdRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsInsertCdWithHttpInfo(param.id, param.url,  options).toPromise();
    }

    /**
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     * Insert CD in VPS
     * @param param the request object
     */
    public postVpsInsertCd(param: VPSApiPostVpsInsertCdRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsInsertCd(param.id, param.url,  options).toPromise();
    }

    /**
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     * Reinstall VPS OS
     * @param param the request object
     */
    public postVpsReinstallOsWithHttpInfo(param: VPSApiPostVpsReinstallOsRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsReinstallOsWithHttpInfo(param.id, param.template, param.localPassword, param.password,  options).toPromise();
    }

    /**
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     * Reinstall VPS OS
     * @param param the request object
     */
    public postVpsReinstallOs(param: VPSApiPostVpsReinstallOsRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsReinstallOs(param.id, param.template, param.localPassword, param.password,  options).toPromise();
    }

    /**
     * Resets the root password on the VPS to a new randomly generated password.
     * Reset VPS Password
     * @param param the request object
     */
    public postVpsResetPasswordWithHttpInfo(param: VPSApiPostVpsResetPasswordRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsResetPasswordWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resets the root password on the VPS to a new randomly generated password.
     * Reset VPS Password
     * @param param the request object
     */
    public postVpsResetPassword(param: VPSApiPostVpsResetPasswordRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsResetPassword(param.id,  options).toPromise();
    }

    /**
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
     * Restore VPS from Backup
     * @param param the request object
     */
    public postVpsRestoreWithHttpInfo(param: VPSApiPostVpsRestoreRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsRestoreWithHttpInfo(param.id, param.restoreRequest,  options).toPromise();
    }

    /**
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
     * Restore VPS from Backup
     * @param param the request object
     */
    public postVpsRestore(param: VPSApiPostVpsRestoreRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsRestore(param.id, param.restoreRequest,  options).toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     * Update Reverse DNS
     * @param param the request object
     */
    public postVpsReverseDnsWithHttpInfo(param: VPSApiPostVpsReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.postVpsReverseDnsWithHttpInfo(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     * Update Reverse DNS
     * @param param the request object
     */
    public postVpsReverseDns(param: VPSApiPostVpsReverseDnsRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.postVpsReverseDns(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the VPS.
     * Setup VNC
     * @param param the request object
     */
    public postVpsSetupVncWithHttpInfo(param: VPSApiPostVpsSetupVncRequest, options?: ConfigurationOptions): Promise<HttpInfo<QueueResponse>> {
        return this.api.postVpsSetupVncWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Sets up or refreshes the VNC console connection for the VPS.
     * Setup VNC
     * @param param the request object
     */
    public postVpsSetupVnc(param: VPSApiPostVpsSetupVncRequest, options?: ConfigurationOptions): Promise<QueueResponse> {
        return this.api.postVpsSetupVnc(param.id,  options).toPromise();
    }

    /**
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     * Purchase Slice Upgrade
     * @param param the request object
     */
    public postVpsSlicesWithHttpInfo(param: VPSApiPostVpsSlicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.postVpsSlicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     * Purchase Slice Upgrade
     * @param param the request object
     */
    public postVpsSlices(param: VPSApiPostVpsSlicesRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.postVpsSlices(param.id,  options).toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the VPS.
     * Update View Desktop
     * @param param the request object
     */
    public postVpsViewDesktopWithHttpInfo(param: VPSApiPostVpsViewDesktopRequest, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.postVpsViewDesktopWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates or refreshes the remote desktop session for the VPS.
     * Update View Desktop
     * @param param the request object
     */
    public postVpsViewDesktop(param: VPSApiPostVpsViewDesktopRequest, options?: ConfigurationOptions): Promise<void> {
        return this.api.postVpsViewDesktop(param.id,  options).toPromise();
    }

    /**
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     * Validate VPS Order
     * @param param the request object
     */
    public putVpsWithHttpInfo(param: VPSApiPutVpsRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<VpsOrderPutResponse>> {
        return this.api.putVpsWithHttpInfo(param.vpsOrderPutRequest,  options).toPromise();
    }

    /**
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     * Validate VPS Order
     * @param param the request object
     */
    public putVps(param: VPSApiPutVpsRequest = {}, options?: ConfigurationOptions): Promise<VpsOrderPutResponse> {
        return this.api.putVps(param.vpsOrderPutRequest,  options).toPromise();
    }

    /**
     * Updates settings on a VPS order.
     * Update VPS Order
     * @param param the request object
     */
    public updateVpsInfoWithHttpInfo(param: VPSApiUpdateVpsInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateVpsInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates settings on a VPS order.
     * Update VPS Order
     * @param param the request object
     */
    public updateVpsInfo(param: VPSApiUpdateVpsInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateVpsInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel VPS Service
     * @param param the request object
     */
    public vPSCancelWithHttpInfo(param: VPSApiVPSCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<VPSCancel200Response>> {
        return this.api.vPSCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel VPS Service
     * @param param the request object
     */
    public vPSCancel(param: VPSApiVPSCancelRequest, options?: ConfigurationOptions): Promise<VPSCancel200Response> {
        return this.api.vPSCancel(param.id,  options).toPromise();
    }

}

import { ObservableWebhostingApi } from "./ObservableAPI";
import { WebhostingApiRequestFactory, WebhostingApiResponseProcessor} from "../apis/WebhostingApi";

export interface WebhostingApiAddWebsiteRequest {
}

export interface WebhostingApiGetNewWebsiteRequest {
}

export interface WebhostingApiGetWebsiteBuyIpRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApigetWebsiteBuyIp
     */
    id: number
}

export interface WebhostingApiGetWebsiteInfoRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApigetWebsiteInfo
     */
    id: number
}

export interface WebhostingApiGetWebsiteInvoicesRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApigetWebsiteInvoices
     */
    id: number
}

export interface WebhostingApiGetWebsiteListRequest {
}

export interface WebhostingApiGetWebsitesBackupsRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApigetWebsitesBackups
     */
    id: number
}

export interface WebhostingApiGetWebsitesLoginRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApigetWebsitesLogin
     */
    id: number
}

export interface WebhostingApiGetWebsitesWelcomeEmailRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApigetWebsitesWelcomeEmail
     */
    id: number
}

export interface WebhostingApiGettWebsiteReverseDnsRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApigettWebsiteReverseDns
     */
    id: number
}

export interface WebhostingApiPostWebsiteBuyIpRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApipostWebsiteBuyIp
     */
    id: number
    /**
     * 
     * @type PostWebsiteBuyIpRequest
     * @memberof WebhostingApipostWebsiteBuyIp
     */
    postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest
}

export interface WebhostingApiPostWebsiteMigrationRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApipostWebsiteMigration
     */
    id: number
    /**
     * 
     * @type PostWebsiteMigrationRequest
     * @memberof WebhostingApipostWebsiteMigration
     */
    postWebsiteMigrationRequest: PostWebsiteMigrationRequest
}

export interface WebhostingApiPostWebsitesReverseDnsRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type number
     * @memberof WebhostingApipostWebsitesReverseDns
     */
    id: number
    /**
     * 
     * @type ReverseDnsEntries
     * @memberof WebhostingApipostWebsitesReverseDns
     */
    reverseDnsEntries: ReverseDnsEntries
}

export interface WebhostingApiPutWebsitesRequest {
}

export interface WebhostingApiUpdateWebsiteInfoRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof WebhostingApiupdateWebsiteInfo
     */
    id: string
}

export interface WebhostingApiWebhostingCancelRequest {
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * Defaults to: undefined
     * @type string
     * @memberof WebhostingApiwebhostingCancel
     */
    id: string
}

export class ObjectWebhostingApi {
    private api: ObservableWebhostingApi

    public constructor(configuration: Configuration, requestFactory?: WebhostingApiRequestFactory, responseProcessor?: WebhostingApiResponseProcessor) {
        this.api = new ObservableWebhostingApi(configuration, requestFactory, responseProcessor);
    }

    /**
     * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
     * Place Website Order
     * @param param the request object
     */
    public addWebsiteWithHttpInfo(param: WebhostingApiAddWebsiteRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<ServiceOrderPostResponse>> {
        return this.api.addWebsiteWithHttpInfo( options).toPromise();
    }

    /**
     * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
     * Place Website Order
     * @param param the request object
     */
    public addWebsite(param: WebhostingApiAddWebsiteRequest = {}, options?: ConfigurationOptions): Promise<ServiceOrderPostResponse> {
        return this.api.addWebsite( options).toPromise();
    }

    /**
     * Retrieves available webhosting plans and pricing for ordering.
     * Website Ordering Information
     * @param param the request object
     */
    public getNewWebsiteWithHttpInfo(param: WebhostingApiGetNewWebsiteRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<WebsitesOrder>> {
        return this.api.getNewWebsiteWithHttpInfo( options).toPromise();
    }

    /**
     * Retrieves available webhosting plans and pricing for ordering.
     * Website Ordering Information
     * @param param the request object
     */
    public getNewWebsite(param: WebhostingApiGetNewWebsiteRequest = {}, options?: ConfigurationOptions): Promise<WebsitesOrder> {
        return this.api.getNewWebsite( options).toPromise();
    }

    /**
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
     * Get Website IP Information
     * @param param the request object
     */
    public getWebsiteBuyIpWithHttpInfo(param: WebhostingApiGetWebsiteBuyIpRequest, options?: ConfigurationOptions): Promise<HttpInfo<GetWebsiteBuyIp200Response>> {
        return this.api.getWebsiteBuyIpWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
     * Get Website IP Information
     * @param param the request object
     */
    public getWebsiteBuyIp(param: WebhostingApiGetWebsiteBuyIpRequest, options?: ConfigurationOptions): Promise<GetWebsiteBuyIp200Response> {
        return this.api.getWebsiteBuyIp(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     * Get Website Order
     * @param param the request object
     */
    public getWebsiteInfoWithHttpInfo(param: WebhostingApiGetWebsiteInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<Website>> {
        return this.api.getWebsiteInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     * Get Website Order
     * @param param the request object
     */
    public getWebsiteInfo(param: WebhostingApiGetWebsiteInfoRequest, options?: ConfigurationOptions): Promise<Website> {
        return this.api.getWebsiteInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this webhosting service.
     * Get Website Invoices
     * @param param the request object
     */
    public getWebsiteInvoicesWithHttpInfo(param: WebhostingApiGetWebsiteInvoicesRequest, options?: ConfigurationOptions): Promise<HttpInfo<ChargeInvoiceRows>> {
        return this.api.getWebsiteInvoicesWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the billing invoices associated with this webhosting service.
     * Get Website Invoices
     * @param param the request object
     */
    public getWebsiteInvoices(param: WebhostingApiGetWebsiteInvoicesRequest, options?: ConfigurationOptions): Promise<ChargeInvoiceRows> {
        return this.api.getWebsiteInvoices(param.id,  options).toPromise();
    }

    /**
     * Gets a listing of your webhosting orders and service details.
     * Get Website Listing
     * @param param the request object
     */
    public getWebsiteListWithHttpInfo(param: WebhostingApiGetWebsiteListRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<Array<WebsiteRow>>> {
        return this.api.getWebsiteListWithHttpInfo( options).toPromise();
    }

    /**
     * Gets a listing of your webhosting orders and service details.
     * Get Website Listing
     * @param param the request object
     */
    public getWebsiteList(param: WebhostingApiGetWebsiteListRequest = {}, options?: ConfigurationOptions): Promise<Array<WebsiteRow>> {
        return this.api.getWebsiteList( options).toPromise();
    }

    /**
     * Gets a list of the backups that exist for a website and their sizes.
     * Get Website Backups
     * @param param the request object
     */
    public getWebsitesBackupsWithHttpInfo(param: WebhostingApiGetWebsitesBackupsRequest, options?: ConfigurationOptions): Promise<HttpInfo<WebsiteBackups>> {
        return this.api.getWebsitesBackupsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Gets a list of the backups that exist for a website and their sizes.
     * Get Website Backups
     * @param param the request object
     */
    public getWebsitesBackups(param: WebhostingApiGetWebsitesBackupsRequest, options?: ConfigurationOptions): Promise<WebsiteBackups> {
        return this.api.getWebsitesBackups(param.id,  options).toPromise();
    }

    /**
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     * Hosting Panel Auto Login
     * @param param the request object
     */
    public getWebsitesLoginWithHttpInfo(param: WebhostingApiGetWebsitesLoginRequest, options?: ConfigurationOptions): Promise<HttpInfo<WebsiteLoginResponse>> {
        return this.api.getWebsitesLoginWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     * Hosting Panel Auto Login
     * @param param the request object
     */
    public getWebsitesLogin(param: WebhostingApiGetWebsitesLoginRequest, options?: ConfigurationOptions): Promise<WebsiteLoginResponse> {
        return this.api.getWebsitesLogin(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     * Resend Website Welcome Email
     * @param param the request object
     */
    public getWebsitesWelcomeEmailWithHttpInfo(param: WebhostingApiGetWebsitesWelcomeEmailRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.getWebsitesWelcomeEmailWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     * Resend Website Welcome Email
     * @param param the request object
     */
    public getWebsitesWelcomeEmail(param: WebhostingApiGetWebsitesWelcomeEmailRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.getWebsitesWelcomeEmail(param.id,  options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.
     * Get Website Reverse DNS
     * @param param the request object
     */
    public gettWebsiteReverseDnsWithHttpInfo(param: WebhostingApiGettWebsiteReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<ReverseDnsEntries>> {
        return this.api.gettWebsiteReverseDnsWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.
     * Get Website Reverse DNS
     * @param param the request object
     */
    public gettWebsiteReverseDns(param: WebhostingApiGettWebsiteReverseDnsRequest, options?: ConfigurationOptions): Promise<ReverseDnsEntries> {
        return this.api.gettWebsiteReverseDns(param.id,  options).toPromise();
    }

    /**
     * Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
     * Update Website IP DNS
     * @param param the request object
     */
    public postWebsiteBuyIpWithHttpInfo(param: WebhostingApiPostWebsiteBuyIpRequest, options?: ConfigurationOptions): Promise<HttpInfo<PostWebsiteBuyIp200Response>> {
        return this.api.postWebsiteBuyIpWithHttpInfo(param.id, param.postWebsiteBuyIpRequest,  options).toPromise();
    }

    /**
     * Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
     * Update Website IP DNS
     * @param param the request object
     */
    public postWebsiteBuyIp(param: WebhostingApiPostWebsiteBuyIpRequest, options?: ConfigurationOptions): Promise<PostWebsiteBuyIp200Response> {
        return this.api.postWebsiteBuyIp(param.id, param.postWebsiteBuyIpRequest,  options).toPromise();
    }

    /**
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
     * Request Website Migration
     * @param param the request object
     */
    public postWebsiteMigrationWithHttpInfo(param: WebhostingApiPostWebsiteMigrationRequest, options?: ConfigurationOptions): Promise<HttpInfo<PostWebsiteMigration200Response>> {
        return this.api.postWebsiteMigrationWithHttpInfo(param.id, param.postWebsiteMigrationRequest,  options).toPromise();
    }

    /**
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
     * Request Website Migration
     * @param param the request object
     */
    public postWebsiteMigration(param: WebhostingApiPostWebsiteMigrationRequest, options?: ConfigurationOptions): Promise<PostWebsiteMigration200Response> {
        return this.api.postWebsiteMigration(param.id, param.postWebsiteMigrationRequest,  options).toPromise();
    }

    /**
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     * Update Website Reverse DNS
     * @param param the request object
     */
    public postWebsitesReverseDnsWithHttpInfo(param: WebhostingApiPostWebsitesReverseDnsRequest, options?: ConfigurationOptions): Promise<HttpInfo<TextResponse>> {
        return this.api.postWebsitesReverseDnsWithHttpInfo(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     * Update Website Reverse DNS
     * @param param the request object
     */
    public postWebsitesReverseDns(param: WebhostingApiPostWebsitesReverseDnsRequest, options?: ConfigurationOptions): Promise<TextResponse> {
        return this.api.postWebsitesReverseDns(param.id, param.reverseDnsEntries,  options).toPromise();
    }

    /**
     * Validates a webhosting order before placing it.
     * Validate Webhosting Order
     * @param param the request object
     */
    public putWebsitesWithHttpInfo(param: WebhostingApiPutWebsitesRequest = {}, options?: ConfigurationOptions): Promise<HttpInfo<void>> {
        return this.api.putWebsitesWithHttpInfo( options).toPromise();
    }

    /**
     * Validates a webhosting order before placing it.
     * Validate Webhosting Order
     * @param param the request object
     */
    public putWebsites(param: WebhostingApiPutWebsitesRequest = {}, options?: ConfigurationOptions): Promise<void> {
        return this.api.putWebsites( options).toPromise();
    }

    /**
     * Updates settings on a webhosting order.
     * Update Website Order
     * @param param the request object
     */
    public updateWebsiteInfoWithHttpInfo(param: WebhostingApiUpdateWebsiteInfoRequest, options?: ConfigurationOptions): Promise<HttpInfo<SuccessTextResponse>> {
        return this.api.updateWebsiteInfoWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Updates settings on a webhosting order.
     * Update Website Order
     * @param param the request object
     */
    public updateWebsiteInfo(param: WebhostingApiUpdateWebsiteInfoRequest, options?: ConfigurationOptions): Promise<SuccessTextResponse> {
        return this.api.updateWebsiteInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     * Cancel Website
     * @param param the request object
     */
    public webhostingCancelWithHttpInfo(param: WebhostingApiWebhostingCancelRequest, options?: ConfigurationOptions): Promise<HttpInfo<WebhostingCancel200Response>> {
        return this.api.webhostingCancelWithHttpInfo(param.id,  options).toPromise();
    }

    /**
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     * Cancel Website
     * @param param the request object
     */
    public webhostingCancel(param: WebhostingApiWebhostingCancelRequest, options?: ConfigurationOptions): Promise<WebhostingCancel200Response> {
        return this.api.webhostingCancel(param.id,  options).toPromise();
    }

}
