import { ResponseContext, RequestContext, HttpFile, HttpInfo } from '../http/http';
import { Configuration, ConfigurationOptions, mergeConfiguration } from '../configuration'
import type { Middleware } from '../middleware';
import { Observable, of, from } from '../rxjsStub';
import {mergeMap, map} from  '../rxjsStub';
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

import { AccountApiRequestFactory, AccountApiResponseProcessor} from "../apis/AccountApi";
export class ObservableAccountApi {
    private requestFactory: AccountApiRequestFactory;
    private responseProcessor: AccountApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: AccountApiRequestFactory,
        responseProcessor?: AccountApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new AccountApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new AccountApiResponseProcessor();
    }

    /**
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     * Change Account Username
     */
    public changeAccountUsernameWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.changeAccountUsername(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.changeAccountUsernameWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     * Change Account Username
     */
    public changeAccountUsername(_options?: ConfigurationOptions): Observable<TextResponse> {
        return this.changeAccountUsernameWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     * Unlink OAuth Account
     * @param name
     */
    public deleteAccountOauthNameWithHttpInfo(name: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteAccountOauthName(name, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteAccountOauthNameWithHttpInfo(rsp)));
            }));
    }

    /**
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     * Unlink OAuth Account
     * @param name
     */
    public deleteAccountOauthName(name: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteAccountOauthNameWithHttpInfo(name, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     * Disable Two-Factor Authentication
     */
    public deleteAccountTfaWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteAccountTfa(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteAccountTfaWithHttpInfo(rsp)));
            }));
    }

    /**
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     * Disable Two-Factor Authentication
     */
    public deleteAccountTfa(_options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteAccountTfaWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Removes an IP address range from the account\'s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     * Remove IP Access Restriction
     */
    public deleteIpLimitWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<GenericResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteIpLimit(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteIpLimitWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes an IP address range from the account\'s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     * Remove IP Access Restriction
     */
    public deleteIpLimit(_options?: ConfigurationOptions): Observable<GenericResponse> {
        return this.deleteIpLimitWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<GenericResponse>) => apiResponse.data));
    }

    /**
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
     * Retrieve Account Details
     */
    public getAccountInfoWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<AccountInfo>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAccountInfo(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAccountInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
     * Retrieve Account Details
     */
    public getAccountInfo(_options?: ConfigurationOptions): Observable<AccountInfo> {
        return this.getAccountInfoWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<AccountInfo>) => apiResponse.data));
    }

    /**
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
     * Get Two-Factor Setup Data
     */
    public getAccountTfaSetupWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<GetAccountTfaSetup200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAccountTfaSetup(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAccountTfaSetupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
     * Get Two-Factor Setup Data
     */
    public getAccountTfaSetup(_options?: ConfigurationOptions): Observable<GetAccountTfaSetup200Response> {
        return this.getAccountTfaSetupWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<GetAccountTfaSetup200Response>) => apiResponse.data));
    }

    /**
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     * Get Home Data
     */
    public getHomeWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Home>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getHome(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getHomeWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     * Get Home Data
     */
    public getHome(_options?: ConfigurationOptions): Observable<Home> {
        return this.getHomeWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Home>) => apiResponse.data));
    }

    /**
     * Returns autocomplete results for the account\'s services and records. Use this endpoint to power global search experiences in the client portal.
     * Search Autocomplete
     */
    public getSearchWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<SearchAutocompleteResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getSearch(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getSearchWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns autocomplete results for the account\'s services and records. Use this endpoint to power global search experiences in the client portal.
     * Search Autocomplete
     */
    public getSearch(_options?: ConfigurationOptions): Observable<SearchAutocompleteResponse> {
        return this.getSearchWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<SearchAutocompleteResponse>) => apiResponse.data));
    }

    /**
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     * Log Out
     */
    public logoutWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.logout(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.logoutWithHttpInfo(rsp)));
            }));
    }

    /**
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     * Log Out
     */
    public logout(_options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.logoutWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Logs out of the specified OAuth provider session.
     * Logout of OAuth
     * @param name
     */
    public logoutAccountOauthWithHttpInfo(name: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.logoutAccountOauth(name, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.logoutAccountOauthWithHttpInfo(rsp)));
            }));
    }

    /**
     * Logs out of the specified OAuth provider session.
     * Logout of OAuth
     * @param name
     */
    public logoutAccountOauth(name: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.logoutAccountOauthWithHttpInfo(name, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     * Generate New API Key
     */
    public updateAccountApiKeyWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountApiKey(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountApiKeyWithHttpInfo(rsp)));
            }));
    }

    /**
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     * Generate New API Key
     */
    public updateAccountApiKey(_options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateAccountApiKeyWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     * Update Account Feature Flags
     * @param [disableReset]
     * @param [disableReinstall]
     */
    public updateAccountFeaturesWithHttpInfo(disableReset?: number, disableReinstall?: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountFeatures(disableReset, disableReinstall, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountFeaturesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     * Update Account Feature Flags
     * @param [disableReset]
     * @param [disableReinstall]
     */
    public updateAccountFeatures(disableReset?: number, disableReinstall?: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateAccountFeaturesWithHttpInfo(disableReset, disableReinstall, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
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
    public updateAccountInfoWithHttpInfo(name: string, address: string, city: string, state: string, zip: string, country: string, phone: string, company?: string, address2?: string, locale?: string, emailInvoices?: string, emailAbuse?: string, disableReset?: boolean, disableReinstall?: boolean, disableServerNotifications?: boolean, disableEmailNotifications?: boolean, gstin?: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountInfoWithHttpInfo(rsp)));
            }));
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
    public updateAccountInfo(name: string, address: string, city: string, state: string, zip: string, country: string, phone: string, company?: string, address2?: string, locale?: string, emailInvoices?: string, emailAbuse?: string, disableReset?: boolean, disableReinstall?: boolean, disableServerNotifications?: boolean, disableEmailNotifications?: boolean, gstin?: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateAccountInfoWithHttpInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Adds an IP address range to the account\'s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     * Add IP Access Restriction
     * @param start The begining (or first) IP address in the range.
     * @param end The ending (or last) IP address in the range.
     */
    public updateAccountIpLimitsWithHttpInfo(start: string, end: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountIpLimits(start, end, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountIpLimitsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Adds an IP address range to the account\'s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     * Add IP Access Restriction
     * @param start The begining (or first) IP address in the range.
     * @param end The ending (or last) IP address in the range.
     */
    public updateAccountIpLimits(start: string, end: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateAccountIpLimitsWithHttpInfo(start, end, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     * Change Account Password
     * @param password
     */
    public updateAccountPasswordWithHttpInfo(password: string, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountPassword(password, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     * Change Account Password
     * @param password
     */
    public updateAccountPassword(password: string, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.updateAccountPasswordWithHttpInfo(password, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     * Update SSH Keys
     * @param [sshKey]
     */
    public updateAccountSshKeyWithHttpInfo(sshKey?: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountSshKey(sshKey, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountSshKeyWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     * Update SSH Keys
     * @param [sshKey]
     */
    public updateAccountSshKey(sshKey?: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateAccountSshKeyWithHttpInfo(sshKey, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
     * Enable Two-Factor Authentication
     * @param _2faGoogleCode The 6-digit verification code from your authenticator app.
     */
    public updateAccountTfaWithHttpInfo(_2faGoogleCode: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountTfa(_2faGoogleCode, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountTfaWithHttpInfo(rsp)));
            }));
    }

    /**
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
     * Enable Two-Factor Authentication
     * @param _2faGoogleCode The 6-digit verification code from your authenticator app.
     */
    public updateAccountTfa(_2faGoogleCode: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateAccountTfaWithHttpInfo(_2faGoogleCode, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { BackupsApiRequestFactory, BackupsApiResponseProcessor} from "../apis/BackupsApi";
export class ObservableBackupsApi {
    private requestFactory: BackupsApiRequestFactory;
    private responseProcessor: BackupsApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: BackupsApiRequestFactory,
        responseProcessor?: BackupsApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new BackupsApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new BackupsApiResponseProcessor();
    }

    /**
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
     * Place Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public addBackupWithHttpInfo(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: ConfigurationOptions): Observable<HttpInfo<BackupOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addBackup(validateOnly, serviceType, coupon, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
     * Place Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public addBackup(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: ConfigurationOptions): Observable<BackupOrderPostResponse> {
        return this.addBackupWithHttpInfo(validateOnly, serviceType, coupon, _options).pipe(map((apiResponse: HttpInfo<BackupOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     * Cancel Backup Service
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public cancelBackupWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<CancelBackup200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.cancelBackup(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.cancelBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     * Cancel Backup Service
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public cancelBackup(id: number, _options?: ConfigurationOptions): Observable<CancelBackup200Response> {
        return this.cancelBackupWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<CancelBackup200Response>) => apiResponse.data));
    }

    /**
     * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
     * Get Backup Service Details
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Backup>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBackupInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBackupInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
     * Get Backup Service Details
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInfo(id: number, _options?: ConfigurationOptions): Observable<Backup> {
        return this.getBackupInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Backup>) => apiResponse.data));
    }

    /**
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     * Get Backup Order Invoices
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBackupInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBackupInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     * Get Backup Order Invoices
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getBackupInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     * Get Backup Storage Panel Login
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupLoginWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<BackupLoginResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBackupLogin(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBackupLoginWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     * Get Backup Storage Panel Login
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupLogin(id: number, _options?: ConfigurationOptions): Observable<BackupLoginResponse> {
        return this.getBackupLoginWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<BackupLoginResponse>) => apiResponse.data));
    }

    /**
     * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
     * List Backup Services
     */
    public getBackupsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<BackupRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBackupsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBackupsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
     * List Backup Services
     */
    public getBackupsList(_options?: ConfigurationOptions): Observable<Array<BackupRow>> {
        return this.getBackupsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<BackupRow>>) => apiResponse.data));
    }

    /**
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     * Resend Backup Welcome Email
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupsWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBackupsWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBackupsWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     * Resend Backup Welcome Email
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public getBackupsWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getBackupsWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
     * Get Backup Order Form Data
     */
    public getNewBackupWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<BackupsOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewBackup(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
     * Get Backup Order Form Data
     */
    public getNewBackup(_options?: ConfigurationOptions): Observable<BackupsOrder> {
        return this.getNewBackupWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<BackupsOrder>) => apiResponse.data));
    }

    /**
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     * Update Backup Information
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public updateBackupInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateBackupInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateBackupInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     * Update Backup Information
     * @param id The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    public updateBackupInfo(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateBackupInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
     * Validate Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public validateBackupOrderWithHttpInfo(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: ConfigurationOptions): Observable<HttpInfo<BackupOrderPutResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.validateBackupOrder(validateOnly, serviceType, coupon, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.validateBackupOrderWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
     * Validate Backup Order
     * @param [validateOnly]
     * @param [serviceType]
     * @param [coupon]
     */
    public validateBackupOrder(validateOnly?: boolean, serviceType?: number, coupon?: string, _options?: ConfigurationOptions): Observable<BackupOrderPutResponse> {
        return this.validateBackupOrderWithHttpInfo(validateOnly, serviceType, coupon, _options).pipe(map((apiResponse: HttpInfo<BackupOrderPutResponse>) => apiResponse.data));
    }

}

import { BillingApiRequestFactory, BillingApiResponseProcessor} from "../apis/BillingApi";
export class ObservableBillingApi {
    private requestFactory: BillingApiRequestFactory;
    private responseProcessor: BillingApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: BillingApiRequestFactory,
        responseProcessor?: BillingApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new BillingApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new BillingApiResponseProcessor();
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
    public addAccountCreditCardWithHttpInfo(name?: string, address?: string, city?: string, state?: string, country?: string, zip?: string, cc?: string, ccExp?: string, ccCcv2?: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addAccountCreditCardWithHttpInfo(rsp)));
            }));
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
    public addAccountCreditCard(name?: string, address?: string, city?: string, state?: string, country?: string, zip?: string, cc?: string, ccExp?: string, ccCcv2?: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.addAccountCreditCardWithHttpInfo(name, address, city, state, country, zip, cc, ccExp, ccCcv2, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
     * Add Credit Card for Billing
     * @param billingAddCcRequest
     */
    public addBillingCreditCardWithHttpInfo(billingAddCcRequest: BillingAddCcRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addBillingCreditCard(billingAddCcRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addBillingCreditCardWithHttpInfo(rsp)));
            }));
    }

    /**
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
     * Add Credit Card for Billing
     * @param billingAddCcRequest
     */
    public addBillingCreditCard(billingAddCcRequest: BillingAddCcRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.addBillingCreditCardWithHttpInfo(billingAddCcRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
     * Create Prepay Deposit
     * @param billingPrepayRequest
     */
    public addBillingPrepayWithHttpInfo(billingPrepayRequest: BillingPrepayRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addBillingPrepay(billingPrepayRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addBillingPrepayWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
     * Create Prepay Deposit
     * @param billingPrepayRequest
     */
    public addBillingPrepay(billingPrepayRequest: BillingPrepayRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.addBillingPrepayWithHttpInfo(billingPrepayRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
     * Remove Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public deleteAccountCreditCardWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<string>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteAccountCreditCard(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteAccountCreditCardWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
     * Remove Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public deleteAccountCreditCard(id: string, _options?: ConfigurationOptions): Observable<string> {
        return this.deleteAccountCreditCardWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<string>) => apiResponse.data));
    }

    /**
     * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
     * Delete Credit Card
     * @param id The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.
     */
    public deleteBillingCreditCardWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteBillingCreditCard(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteBillingCreditCardWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
     * Delete Credit Card
     * @param id The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.
     */
    public deleteBillingCreditCard(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteBillingCreditCardWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     * Delete Invoice
     * @param id The invoice ID to delete. Only unpaid invoices can be deleted.
     */
    public deleteBillingInvoiceWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteBillingInvoice(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteBillingInvoiceWithHttpInfo(rsp)));
            }));
    }

    /**
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     * Delete Invoice
     * @param id The invoice ID to delete. Only unpaid invoices can be deleted.
     */
    public deleteBillingInvoice(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteBillingInvoiceWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
     * Delete Prepay Balance
     * @param id The prepay balance ID to delete.
     */
    public deleteBillingPrepayWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteBillingPrepay(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteBillingPrepayWithHttpInfo(rsp)));
            }));
    }

    /**
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
     * Delete Prepay Balance
     * @param id The prepay balance ID to delete.
     */
    public deleteBillingPrepay(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteBillingPrepayWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     * List Affiliate Banner Assets
     */
    public getAffiliateBannersWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<AffiliateBannerRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAffiliateBanners(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAffiliateBannersWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     * List Affiliate Banner Assets
     */
    public getAffiliateBanners(_options?: ConfigurationOptions): Observable<Array<AffiliateBannerRow>> {
        return this.getAffiliateBannersWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<AffiliateBannerRow>>) => apiResponse.data));
    }

    /**
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     * Get Affiliate Performance Report
     */
    public getAffiliateRichReportWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAffiliateRichReport(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAffiliateRichReportWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     * Get Affiliate Performance Report
     */
    public getAffiliateRichReport(_options?: ConfigurationOptions): Observable<TextResponse> {
        return this.getAffiliateRichReportWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     * Get Affiliate Sales Graph Data
     * @param [days] Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateSalesGraphWithHttpInfo(days?: number, _options?: ConfigurationOptions): Observable<HttpInfo<StatusMonthlyBreakdown>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAffiliateSalesGraph(days, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAffiliateSalesGraphWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     * Get Affiliate Sales Graph Data
     * @param [days] Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateSalesGraph(days?: number, _options?: ConfigurationOptions): Observable<StatusMonthlyBreakdown> {
        return this.getAffiliateSalesGraphWithHttpInfo(days, _options).pipe(map((apiResponse: HttpInfo<StatusMonthlyBreakdown>) => apiResponse.data));
    }

    /**
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     * Get Affiliate Sales Report
     */
    public getAffiliateSalesReportWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAffiliateSalesReport(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAffiliateSalesReportWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     * Get Affiliate Sales Report
     */
    public getAffiliateSalesReport(_options?: ConfigurationOptions): Observable<TextResponse> {
        return this.getAffiliateSalesReportWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     * Get Affiliate Traffic Graph Data
     * @param [days] Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateTrafficGraphWithHttpInfo(days?: number, _options?: ConfigurationOptions): Observable<HttpInfo<MonthlyCounts>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAffiliateTrafficGraph(days, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAffiliateTrafficGraphWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     * Get Affiliate Traffic Graph Data
     * @param [days] Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
     */
    public getAffiliateTrafficGraph(days?: number, _options?: ConfigurationOptions): Observable<MonthlyCounts> {
        return this.getAffiliateTrafficGraphWithHttpInfo(days, _options).pipe(map((apiResponse: HttpInfo<MonthlyCounts>) => apiResponse.data));
    }

    /**
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     * List Affiliate Web Traffic Entries
     */
    public getAffiliateWebTrafficWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<AffiliateTrafficRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getAffiliateWebTraffic(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getAffiliateWebTrafficWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     * List Affiliate Web Traffic Entries
     */
    public getAffiliateWebTraffic(_options?: ConfigurationOptions): Observable<Array<AffiliateTrafficRow>> {
        return this.getAffiliateWebTrafficWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<AffiliateTrafficRow>>) => apiResponse.data));
    }

    /**
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
     * Get Shopping Cart Contents
     */
    public getBillingCartWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<any>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBillingCart(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBillingCartWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
     * Get Shopping Cart Contents
     */
    public getBillingCart(_options?: ConfigurationOptions): Observable<any> {
        return this.getBillingCartWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     * Get Credit Card Verification Requirements
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     */
    public getBillingCreditCardVerifyWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBillingCreditCardVerify(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBillingCreditCardVerifyWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     * Get Credit Card Verification Requirements
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     */
    public getBillingCreditCardVerify(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getBillingCreditCardVerifyWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
     * Get Invoice Details
     * @param id The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.
     */
    public getBillingInvoiceWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<BillingInvoiceDetail>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBillingInvoice(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBillingInvoiceWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
     * Get Invoice Details
     * @param id The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.
     */
    public getBillingInvoice(id: number, _options?: ConfigurationOptions): Observable<BillingInvoiceDetail> {
        return this.getBillingInvoiceWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<BillingInvoiceDetail>) => apiResponse.data));
    }

    /**
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
     * List Account Invoices
     */
    public getBillingInvoicesWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<BillingInvoiceList>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBillingInvoices(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBillingInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
     * List Account Invoices
     */
    public getBillingInvoices(_options?: ConfigurationOptions): Observable<BillingInvoiceList> {
        return this.getBillingInvoicesWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<BillingInvoiceList>) => apiResponse.data));
    }

    /**
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
     * List Prepay Balances
     */
    public getBillingPrePaysWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<any>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getBillingPrePays(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getBillingPrePaysWithHttpInfo(rsp)));
            }));
    }

    /**
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
     * List Prepay Balances
     */
    public getBillingPrePays(_options?: ConfigurationOptions): Observable<any> {
        return this.getBillingPrePaysWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
     * Get Invoices
     * @param [searchString] pass an optional search string for looking up inventory
     * @param [skip] number of records to skip for pagination
     * @param [limit] maximum number of records to return
     */
    public getInvoicesWithHttpInfo(searchString?: string, skip?: number, limit?: number, _options?: ConfigurationOptions): Observable<HttpInfo<Array<Invoice>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getInvoices(searchString, skip, limit, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
     * Get Invoices
     * @param [searchString] pass an optional search string for looking up inventory
     * @param [skip] number of records to skip for pagination
     * @param [limit] maximum number of records to return
     */
    public getInvoices(searchString?: string, skip?: number, limit?: number, _options?: ConfigurationOptions): Observable<Array<Invoice>> {
        return this.getInvoicesWithHttpInfo(searchString, skip, limit, _options).pipe(map((apiResponse: HttpInfo<Array<Invoice>>) => apiResponse.data));
    }

    /**
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
     * Initiate Payment
     * @param method The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.
     * @param invoices A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.
     */
    public initiatePaymentWithHttpInfo(method: 'cc' | 'paypal' | 'prepay' | 'payssion' | 'payu' | 'ccavenue' | 'cashfree' | 'coinbase' | 'btcpay', invoices: string, _options?: ConfigurationOptions): Observable<HttpInfo<InitiatePayment200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.initiatePayment(method, invoices, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.initiatePaymentWithHttpInfo(rsp)));
            }));
    }

    /**
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
     * Initiate Payment
     * @param method The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.
     * @param invoices A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.
     */
    public initiatePayment(method: 'cc' | 'paypal' | 'prepay' | 'payssion' | 'payu' | 'ccavenue' | 'cashfree' | 'coinbase' | 'btcpay', invoices: string, _options?: ConfigurationOptions): Observable<InitiatePayment200Response> {
        return this.initiatePaymentWithHttpInfo(method, invoices, _options).pipe(map((apiResponse: HttpInfo<InitiatePayment200Response>) => apiResponse.data));
    }

    /**
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
     * Submit Credit Card Verification
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     * @param billingVerifyCcRequest
     */
    public postBillingCreditCardVerifyWithHttpInfo(id: number, billingVerifyCcRequest: BillingVerifyCcRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postBillingCreditCardVerify(id, billingVerifyCcRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postBillingCreditCardVerifyWithHttpInfo(rsp)));
            }));
    }

    /**
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
     * Submit Credit Card Verification
     * @param id The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
     * @param billingVerifyCcRequest
     */
    public postBillingCreditCardVerify(id: number, billingVerifyCcRequest: BillingVerifyCcRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.postBillingCreditCardVerifyWithHttpInfo(id, billingVerifyCcRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     * Update Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public updateAccountCreditCardWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<string>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAccountCreditCard(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAccountCreditCardWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     * Update Credit Card
     * @param id The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
     */
    public updateAccountCreditCard(id: number, _options?: ConfigurationOptions): Observable<string> {
        return this.updateAccountCreditCardWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<string>) => apiResponse.data));
    }

    /**
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     * Configure Affiliate Dock Settings
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateDockSetupWithHttpInfo(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAffiliateDockSetup(affiliateDockTitle, affiliateDockDescription, referrerCoupon, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAffiliateDockSetupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     * Configure Affiliate Dock Settings
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateDockSetup(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.updateAffiliateDockSetupWithHttpInfo(affiliateDockTitle, affiliateDockDescription, referrerCoupon, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     * Configure Affiliate Landing Page
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateLandingPageWithHttpInfo(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAffiliateLandingPage(affiliateDockTitle, affiliateDockDescription, referrerCoupon, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAffiliateLandingPageWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     * Configure Affiliate Landing Page
     * @param [affiliateDockTitle]
     * @param [affiliateDockDescription]
     * @param [referrerCoupon]
     */
    public updateAffiliateLandingPage(affiliateDockTitle?: string, affiliateDockDescription?: string, referrerCoupon?: string, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.updateAffiliateLandingPageWithHttpInfo(affiliateDockTitle, affiliateDockDescription, referrerCoupon, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     * Configure Affiliate Payout Preferences
     * @param [affiliatePaypal]
     * @param [affiliatePaymentMethod]
     */
    public updateAffiliatePaymentSetupWithHttpInfo(affiliatePaypal?: string, affiliatePaymentMethod?: string, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateAffiliatePaymentSetup(affiliatePaypal, affiliatePaymentMethod, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateAffiliatePaymentSetupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     * Configure Affiliate Payout Preferences
     * @param [affiliatePaypal]
     * @param [affiliatePaymentMethod]
     */
    public updateAffiliatePaymentSetup(affiliatePaypal?: string, affiliatePaymentMethod?: string, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.updateAffiliatePaymentSetupWithHttpInfo(affiliatePaypal, affiliatePaymentMethod, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     * Update Credit Card Details
     * @param id The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.
     */
    public updateBillingCreditCardWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateBillingCreditCard(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateBillingCreditCardWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     * Update Credit Card Details
     * @param id The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.
     */
    public updateBillingCreditCard(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateBillingCreditCardWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     * Update Default Payment Method
     * @param billingPaymentMethodRequest
     */
    public updateBillingPaymentMethodWithHttpInfo(billingPaymentMethodRequest: BillingPaymentMethodRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateBillingPaymentMethod(billingPaymentMethodRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateBillingPaymentMethodWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the account\'s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     * Update Default Payment Method
     * @param billingPaymentMethodRequest
     */
    public updateBillingPaymentMethod(billingPaymentMethodRequest: BillingPaymentMethodRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateBillingPaymentMethodWithHttpInfo(billingPaymentMethodRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { DNSApiRequestFactory, DNSApiResponseProcessor} from "../apis/DNSApi";
export class ObservableDNSApi {
    private requestFactory: DNSApiRequestFactory;
    private responseProcessor: DNSApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: DNSApiRequestFactory,
        responseProcessor?: DNSApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new DNSApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new DNSApiResponseProcessor();
    }

    /**
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.
     * Create DNS Domain
     * @param domain The domain name.
     * @param ip IP Address to point the domain to.
     */
    public addDnsDomainWithHttpInfo(domain: string, ip: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addDnsDomain(domain, ip, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addDnsDomainWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer\'s DNS servers. Use `/dns/{id}` to manage records after creation.
     * Create DNS Domain
     * @param domain The domain name.
     * @param ip IP Address to point the domain to.
     */
    public addDnsDomain(domain: string, ip: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.addDnsDomainWithHttpInfo(domain, ip, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
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
    public addDnsRecordWithHttpInfo(id: string, name: string, type: DnsRecordType, content: string, ttl?: number, prio?: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addDnsRecord(id, name, type, content, ttl, prio, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addDnsRecordWithHttpInfo(rsp)));
            }));
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
    public addDnsRecord(id: string, name: string, type: DnsRecordType, content: string, ttl?: number, prio?: number, _options?: ConfigurationOptions): Observable<void> {
        return this.addDnsRecordWithHttpInfo(id, name, type, content, ttl, prio, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     * Delete DNS Domain
     * @param id The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public deleteDnsDomainWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteDnsDomain(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteDnsDomainWithHttpInfo(rsp)));
            }));
    }

    /**
     * Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
     * Delete DNS Domain
     * @param id The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public deleteDnsDomain(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteDnsDomainWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
     * Delete DNS Record
     * @param domainId The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * @param recordId The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     */
    public deleteDnsRecordWithHttpInfo(domainId: number, recordId: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteDnsRecord(domainId, recordId, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteDnsRecordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
     * Delete DNS Record
     * @param domainId The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     * @param recordId The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.
     */
    public deleteDnsRecord(domainId: number, recordId: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteDnsRecordWithHttpInfo(domainId, recordId, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
     * List Domain DNS Records
     * @param id The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public getDnsDomainWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Array<DnsRecord>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDnsDomain(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDnsDomainWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
     * List Domain DNS Records
     * @param id The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.
     */
    public getDnsDomain(id: number, _options?: ConfigurationOptions): Observable<Array<DnsRecord>> {
        return this.getDnsDomainWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Array<DnsRecord>>) => apiResponse.data));
    }

    /**
     * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
     * List DNS Domains
     */
    public getDnsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<DnsListItem>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDnsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDnsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
     * List DNS Domains
     */
    public getDnsList(_options?: ConfigurationOptions): Observable<Array<DnsListItem>> {
        return this.getDnsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<DnsListItem>>) => apiResponse.data));
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
    public updateDnsRecordWithHttpInfo(domainId: number, recordId: number, name?: string, type?: DnsRecordType, content?: string, ttl?: string, prio?: string, disabled?: string, ordername?: string, auth?: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateDnsRecord(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateDnsRecordWithHttpInfo(rsp)));
            }));
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
    public updateDnsRecord(domainId: number, recordId: number, name?: string, type?: DnsRecordType, content?: string, ttl?: string, prio?: string, disabled?: string, ordername?: string, auth?: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateDnsRecordWithHttpInfo(domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { DomainsApiRequestFactory, DomainsApiResponseProcessor} from "../apis/DomainsApi";
export class ObservableDomainsApi {
    private requestFactory: DomainsApiRequestFactory;
    private responseProcessor: DomainsApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: DomainsApiRequestFactory,
        responseProcessor?: DomainsApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new DomainsApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new DomainsApiResponseProcessor();
    }

    /**
     * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
     * Place Domain Order
     */
    public addDomainWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addDomain(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addDomainWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
     * Place Domain Order
     */
    public addDomain(_options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addDomainWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     * Add Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainDnssecRequest
     */
    public addDomainDnssecWithHttpInfo(id: number, domainDnssecRequest: DomainDnssecRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addDomainDnssec(id, domainDnssecRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addDomainDnssecWithHttpInfo(rsp)));
            }));
    }

    /**
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     * Add Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainDnssecRequest
     */
    public addDomainDnssec(id: number, domainDnssecRequest: DomainDnssecRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.addDomainDnssecWithHttpInfo(id, domainDnssecRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
     * Add Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPostRequest
     */
    public addDomainNameserverWithHttpInfo(id: number, domainNameserverPostRequest: DomainNameserverPostRequest, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addDomainNameserver(id, domainNameserverPostRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addDomainNameserverWithHttpInfo(rsp)));
            }));
    }

    /**
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
     * Add Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPostRequest
     */
    public addDomainNameserver(id: number, domainNameserverPostRequest: DomainNameserverPostRequest, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.addDomainNameserverWithHttpInfo(id, domainNameserverPostRequest, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     * Cancel Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public cancelDomainWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<CancelDomain200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.cancelDomain(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.cancelDomainWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     * Cancel Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public cancelDomain(id: number, _options?: ConfigurationOptions): Observable<CancelDomain200Response> {
        return this.cancelDomainWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<CancelDomain200Response>) => apiResponse.data));
    }

    /**
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     * Remove Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param action Set to &#x60;delete&#x60; to remove all DNSSEC records.
     */
    public deleteDomainDnssecWithHttpInfo(id: number, action: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteDomainDnssec(id, action, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteDomainDnssecWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     * Remove Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param action Set to &#x60;delete&#x60; to remove all DNSSEC records.
     */
    public deleteDomainDnssec(id: number, action: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteDomainDnssecWithHttpInfo(id, action, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
     * Delete Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param index The index of the registered nameserver from the registered nameservers list to delete.  
     */
    public deleteDomainNameserverWithHttpInfo(id: number, index: number, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteDomainNameserver(id, index, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteDomainNameserverWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
     * Delete Registered Nameserver
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param index The index of the registered nameserver from the registered nameservers list to delete.  
     */
    public deleteDomainNameserver(id: number, index: number, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.deleteDomainNameserverWithHttpInfo(id, index, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     * Get Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainContactWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<DomainContactDetails>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainContact(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainContactWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     * Get Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainContact(id: number, _options?: ConfigurationOptions): Observable<DomainContactDetails> {
        return this.getDomainContactWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<DomainContactDetails>) => apiResponse.data));
    }

    /**
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     * Get Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainDnssecWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<DomainDnssecRecords>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainDnssec(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainDnssecWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     * Get Domain DNSSEC Records
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainDnssec(id: number, _options?: ConfigurationOptions): Observable<DomainDnssecRecords> {
        return this.getDomainDnssecWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<DomainDnssecRecords>) => apiResponse.data));
    }

    /**
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
     * Get Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Domain>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
     * Get Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInfo(id: number, _options?: ConfigurationOptions): Observable<Domain> {
        return this.getDomainInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Domain>) => apiResponse.data));
    }

    /**
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     * Get Domain Invoices
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     * Get Domain Invoices
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getDomainInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
     * Lookup Domain Availability and Pricing
     * @param name The full domain name to look up (for example &#x60;example.com&#x60;).
     */
    public getDomainLookupWithHttpInfo(name: string, _options?: ConfigurationOptions): Observable<HttpInfo<DomainLookupResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainLookup(name, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainLookupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
     * Lookup Domain Availability and Pricing
     * @param name The full domain name to look up (for example &#x60;example.com&#x60;).
     */
    public getDomainLookup(name: string, _options?: ConfigurationOptions): Observable<DomainLookupResponse> {
        return this.getDomainLookupWithHttpInfo(name, _options).pipe(map((apiResponse: HttpInfo<DomainLookupResponse>) => apiResponse.data));
    }

    /**
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     * List Registered Nameservers
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainNameserversWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<DomainNameserverGetResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainNameservers(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainNameserversWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     * List Registered Nameservers
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainNameservers(id: number, _options?: ConfigurationOptions): Observable<DomainNameserverGetResponse> {
        return this.getDomainNameserversWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<DomainNameserverGetResponse>) => apiResponse.data));
    }

    /**
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
     * Get Domain Order Fields
     * @param domain The fully qualified domain name (e.g. &#x60;example.com&#x60;).
     * @param regType The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.
     */
    public getDomainOrderFieldsWithHttpInfo(domain: string, regType: string, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainOrderFields(domain, regType, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainOrderFieldsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
     * Get Domain Order Fields
     * @param domain The fully qualified domain name (e.g. &#x60;example.com&#x60;).
     * @param regType The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.
     */
    public getDomainOrderFields(domain: string, regType: string, _options?: ConfigurationOptions): Observable<void> {
        return this.getDomainOrderFieldsWithHttpInfo(domain, regType, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     * Get Domain Order Search Results
     * @param domain The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).
     */
    public getDomainOrderSearchResultsWithHttpInfo(domain: string, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainOrderSearchResults(domain, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainOrderSearchResultsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     * Get Domain Order Search Results
     * @param domain The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).
     */
    public getDomainOrderSearchResults(domain: string, _options?: ConfigurationOptions): Observable<void> {
        return this.getDomainOrderSearchResultsWithHttpInfo(domain, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     * Start Domain Renewal Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainRenewalWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainRenewal(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainRenewalWithHttpInfo(rsp)));
            }));
    }

    /**
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     * Start Domain Renewal Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainRenewal(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getDomainRenewalWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
     * Search Domain Suggestions
     * @param name The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).
     */
    public getDomainSearchWithHttpInfo(name: string, _options?: ConfigurationOptions): Observable<HttpInfo<DomainSearchResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainSearch(name, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainSearchWithHttpInfo(rsp)));
            }));
    }

    /**
     * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
     * Search Domain Suggestions
     * @param name The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).
     */
    public getDomainSearch(name: string, _options?: ConfigurationOptions): Observable<DomainSearchResponse> {
        return this.getDomainSearchWithHttpInfo(name, _options).pipe(map((apiResponse: HttpInfo<DomainSearchResponse>) => apiResponse.data));
    }

    /**
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
     * Start Domain Transfer Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainTransferWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainTransfer(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainTransferWithHttpInfo(rsp)));
            }));
    }

    /**
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
     * Start Domain Transfer Flow
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainTransfer(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getDomainTransferWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     * Get Whois Privacy Status
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainWhoisPrivacyWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainWhoisPrivacy(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainWhoisPrivacyWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     * Get Whois Privacy Status
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainWhoisPrivacy(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getDomainWhoisPrivacyWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
     * List Domain Orders
     */
    public getDomainsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<DomainRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
     * List Domain Orders
     */
    public getDomainsList(_options?: ConfigurationOptions): Observable<Array<DomainRow>> {
        return this.getDomainsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<DomainRow>>) => apiResponse.data));
    }

    /**
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     * Resend Domain Welcome Email
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainsWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getDomainsWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getDomainsWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     * Resend Domain Welcome Email
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public getDomainsWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getDomainsWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
     * Get Domain Ordering Information
     */
    public getNewDomainWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<DomainOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewDomain(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewDomainWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
     * Get Domain Ordering Information
     */
    public getNewDomain(_options?: ConfigurationOptions): Observable<DomainOrder> {
        return this.getNewDomainWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<DomainOrder>) => apiResponse.data));
    }

    /**
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
     * Validate Domain Order
     */
    public patchDomainsWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.patchDomains(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.patchDomainsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
     * Validate Domain Order
     */
    public patchDomains(_options?: ConfigurationOptions): Observable<void> {
        return this.patchDomainsWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
     * Request Domain Renewal
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainRenewalWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postDomainRenewal(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postDomainRenewalWithHttpInfo(rsp)));
            }));
    }

    /**
     * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
     * Request Domain Renewal
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainRenewal(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.postDomainRenewalWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
     * Request Domain Transfer
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainTransferWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postDomainTransfer(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postDomainTransferWithHttpInfo(rsp)));
            }));
    }

    /**
     * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
     * Request Domain Transfer
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public postDomainTransfer(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.postDomainTransferWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     * Domain Order Search
     */
    public putDomainsWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putDomains(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putDomainsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     * Domain Order Search
     */
    public putDomains(_options?: ConfigurationOptions): Observable<void> {
        return this.putDomainsWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     * Update Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainContactDetails
     */
    public updateDomainContactWithHttpInfo(id: number, domainContactDetails: DomainContactDetails, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateDomainContact(id, domainContactDetails, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateDomainContactWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     * Update Domain Contact Details
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainContactDetails
     */
    public updateDomainContact(id: number, domainContactDetails: DomainContactDetails, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateDomainContactWithHttpInfo(id, domainContactDetails, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     * Update Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public updateDomainInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateDomainInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateDomainInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     * Update Domain Order
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    public updateDomainInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateDomainInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     * Replace Nameserver Set
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPutRequest
     */
    public updateDomainNameserversWithHttpInfo(id: number, domainNameserverPutRequest: DomainNameserverPutRequest, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateDomainNameservers(id, domainNameserverPutRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateDomainNameserversWithHttpInfo(rsp)));
            }));
    }

    /**
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     * Replace Nameserver Set
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainNameserverPutRequest
     */
    public updateDomainNameservers(id: number, domainNameserverPutRequest: DomainNameserverPutRequest, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.updateDomainNameserversWithHttpInfo(id, domainNameserverPutRequest, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
     * Update Whois Privacy
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainWhoisPrivacyRequest
     */
    public updateDomainWhoisPrivacyWithHttpInfo(id: number, domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateDomainWhoisPrivacy(id, domainWhoisPrivacyRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateDomainWhoisPrivacyWithHttpInfo(rsp)));
            }));
    }

    /**
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
     * Update Whois Privacy
     * @param id The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     * @param domainWhoisPrivacyRequest
     */
    public updateDomainWhoisPrivacy(id: number, domainWhoisPrivacyRequest: DomainWhoisPrivacyRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateDomainWhoisPrivacyWithHttpInfo(id, domainWhoisPrivacyRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { FloatingIPsApiRequestFactory, FloatingIPsApiResponseProcessor} from "../apis/FloatingIPsApi";
export class ObservableFloatingIPsApi {
    private requestFactory: FloatingIPsApiRequestFactory;
    private responseProcessor: FloatingIPsApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: FloatingIPsApiRequestFactory,
        responseProcessor?: FloatingIPsApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new FloatingIPsApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new FloatingIPsApiResponseProcessor();
    }

    /**
     * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
     * Place Floating IP Order
     */
    public addFloatingIpWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addFloatingIp(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addFloatingIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
     * Place Floating IP Order
     */
    public addFloatingIp(_options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addFloatingIpWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public floatingIpsCancelWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<FloatingIpsCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.floatingIpsCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.floatingIpsCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public floatingIpsCancel(id: number, _options?: ConfigurationOptions): Observable<FloatingIpsCancel200Response> {
        return this.floatingIpsCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<FloatingIpsCancel200Response>) => apiResponse.data));
    }

    /**
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     * View Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<any>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getFloatingIpInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getFloatingIpInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     * View Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInfo(id: number, _options?: ConfigurationOptions): Observable<any> {
        return this.getFloatingIpInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Returns the billing invoices associated with this Floating IP service.
     * Get Floating IP Invoices
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getFloatingIpInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getFloatingIpInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the billing invoices associated with this Floating IP service.
     * Get Floating IP Invoices
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getFloatingIpInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns all Floating IP services on the account with their current status and assignment details.
     * List Floating IPs
     */
    public getFloatingIpsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getFloatingIpsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getFloatingIpsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns all Floating IP services on the account with their current status and assignment details.
     * List Floating IPs
     */
    public getFloatingIpsList(_options?: ConfigurationOptions): Observable<void> {
        return this.getFloatingIpsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     * Resend Floating IPs Welcome Email
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpsWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getFloatingIpsWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getFloatingIpsWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     * Resend Floating IPs Welcome Email
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public getFloatingIpsWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getFloatingIpsWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Retrieves available options and pricing for ordering a new Floating IP.
     * Get Floating IP Ordering Information
     */
    public getNewFloatingIpWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<any>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewFloatingIp(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewFloatingIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves available options and pricing for ordering a new Floating IP.
     * Get Floating IP Ordering Information
     */
    public getNewFloatingIp(_options?: ConfigurationOptions): Observable<any> {
        return this.getNewFloatingIpWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
     * Change Floating IP Target
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * @param ip IP Address
     */
    public postFloatingIpsChangeIpWithHttpInfo(id: number, ip: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postFloatingIpsChangeIp(id, ip, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postFloatingIpsChangeIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
     * Change Floating IP Target
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     * @param ip IP Address
     */
    public postFloatingIpsChangeIp(id: number, ip: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.postFloatingIpsChangeIpWithHttpInfo(id, ip, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Floating IP Order
     */
    public putFloatingIpsWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putFloatingIps(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putFloatingIpsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Floating IP Order
     */
    public putFloatingIps(_options?: ConfigurationOptions): Observable<void> {
        return this.putFloatingIpsWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     * Update Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public updateFloatingIpInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateFloatingIpInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateFloatingIpInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     * Update Floating IP
     * @param id The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    public updateFloatingIpInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateFloatingIpInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { LicensesApiRequestFactory, LicensesApiResponseProcessor} from "../apis/LicensesApi";
export class ObservableLicensesApi {
    private requestFactory: LicensesApiRequestFactory;
    private responseProcessor: LicensesApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: LicensesApiRequestFactory,
        responseProcessor?: LicensesApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new LicensesApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new LicensesApiResponseProcessor();
    }

    /**
     * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
     * Place License Order
     */
    public addLicenseWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addLicense(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addLicenseWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
     * Place License Order
     */
    public addLicense(_options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addLicenseWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     * Get License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<License>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getLicenseInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getLicenseInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     * Get License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInfo(id: number, _options?: ConfigurationOptions): Observable<License> {
        return this.getLicenseInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<License>) => apiResponse.data));
    }

    /**
     * Returns the billing invoices associated with this license service.
     * Get License Invoices
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getLicenseInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getLicenseInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the billing invoices associated with this license service.
     * Get License Invoices
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicenseInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getLicenseInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns all software license services on the account with their current status and IP assignments.
     * List Licenses
     */
    public getLicenseListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<LicenseRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getLicenseList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getLicenseListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns all software license services on the account with their current status and IP assignments.
     * List Licenses
     */
    public getLicenseList(_options?: ConfigurationOptions): Observable<Array<LicenseRow>> {
        return this.getLicenseListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<LicenseRow>>) => apiResponse.data));
    }

    /**
     * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
     * Get License Order Information for Category
     * @param catTag The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.
     */
    public getLicenseOrderCatTagInfoWithHttpInfo(catTag: string, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getLicenseOrderCatTagInfo(catTag, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getLicenseOrderCatTagInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
     * Get License Order Information for Category
     * @param catTag The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.
     */
    public getLicenseOrderCatTagInfo(catTag: string, _options?: ConfigurationOptions): Observable<void> {
        return this.getLicenseOrderCatTagInfoWithHttpInfo(catTag, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     * Resend License Welcome Email
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicensesWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getLicensesWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getLicensesWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     * Resend License Welcome Email
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public getLicensesWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getLicensesWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Retrieves available license types, categories, and pricing for ordering a new license.
     * Get License Order Information
     */
    public getNewLicenseWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<LicensesOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewLicense(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewLicenseWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves available license types, categories, and pricing for ordering a new license.
     * Get License Order Information
     */
    public getNewLicense(_options?: ConfigurationOptions): Observable<LicensesOrder> {
        return this.getNewLicenseWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<LicensesOrder>) => apiResponse.data));
    }

    /**
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public licensesCancelWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<LicensesCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.licensesCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.licensesCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public licensesCancel(id: number, _options?: ConfigurationOptions): Observable<LicensesCancel200Response> {
        return this.licensesCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<LicensesCancel200Response>) => apiResponse.data));
    }

    /**
     * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
     * Change License IP
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * @param ipObject
     */
    public postLicenseChangeIpWithHttpInfo(id: number, ipObject: IpObject, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postLicenseChangeIp(id, ipObject, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postLicenseChangeIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
     * Change License IP
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     * @param ipObject
     */
    public postLicenseChangeIp(id: number, ipObject: IpObject, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.postLicenseChangeIpWithHttpInfo(id, ipObject, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     * Validate License Order
     */
    public putLicensesWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putLicenses(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putLicensesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     * Validate License Order
     */
    public putLicenses(_options?: ConfigurationOptions): Observable<void> {
        return this.putLicensesWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Updates settings on a license service such as its assigned IP.
     * Update License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public updateLicenseInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateLicenseInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateLicenseInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates settings on a license service such as its assigned IP.
     * Update License
     * @param id The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
     */
    public updateLicenseInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateLicenseInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { MailApiRequestFactory, MailApiResponseProcessor} from "../apis/MailApi";
export class ObservableMailApi {
    private requestFactory: MailApiRequestFactory;
    private responseProcessor: MailApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: MailApiRequestFactory,
        responseProcessor?: MailApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new MailApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new MailApiResponseProcessor();
    }

    /**
     * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place Mail Order
     */
    public addMailWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addMail(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addMailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place Mail Order
     */
    public addMail(_options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addMailWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     * Create Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param denyRuleNew These are the fields needed to create a new email deny rule.
     */
    public addRuleWithHttpInfo(id: number, denyRuleNew: DenyRuleNew, _options?: ConfigurationOptions): Observable<HttpInfo<GenericResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addRule(id, denyRuleNew, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addRuleWithHttpInfo(rsp)));
            }));
    }

    /**
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     * Create Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param denyRuleNew These are the fields needed to create a new email deny rule.
     */
    public addRule(id: number, denyRuleNew: DenyRuleNew, _options?: ConfigurationOptions): Observable<GenericResponse> {
        return this.addRuleWithHttpInfo(id, denyRuleNew, _options).pipe(map((apiResponse: HttpInfo<GenericResponse>) => apiResponse.data));
    }

    /**
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     * Create Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertRequest
     */
    public createMailAlertWithHttpInfo(id: number, mailAlertRequest: MailAlertRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.createMailAlert(id, mailAlertRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.createMailAlertWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     * Create Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertRequest
     */
    public createMailAlert(id: number, mailAlertRequest: MailAlertRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.createMailAlertWithHttpInfo(id, mailAlertRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Deletes an existing alert definition for the mail service.
     * Delete Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param alertId Alert ID to delete.
     */
    public deleteMailAlertWithHttpInfo(id: number, alertId: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteMailAlert(id, alertId, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteMailAlertWithHttpInfo(rsp)));
            }));
    }

    /**
     * Deletes an existing alert definition for the mail service.
     * Delete Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param alertId Alert ID to delete.
     */
    public deleteMailAlert(id: number, alertId: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteMailAlertWithHttpInfo(id, alertId, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Removes a deny rule from the mail service.
     * Delete Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param rule The ID of the Rules entry.
     */
    public deleteRuleWithHttpInfo(id: number, rule: string, _options?: ConfigurationOptions): Observable<HttpInfo<GenericResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteRule(id, rule, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteRuleWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes a deny rule from the mail service.
     * Delete Deny Rule
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param rule The ID of the Rules entry.
     */
    public deleteRule(id: number, rule: string, _options?: ConfigurationOptions): Observable<GenericResponse> {
        return this.deleteRuleWithHttpInfo(id, rule, _options).pipe(map((apiResponse: HttpInfo<GenericResponse>) => apiResponse.data));
    }

    /**
     * Removes an email address from the mail service\'s block lists.
     * Remove Email Address from Block List
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [email] an email address
     */
    public delistBlockWithHttpInfo(id: number, email?: string, _options?: ConfigurationOptions): Observable<HttpInfo<GenericResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.delistBlock(id, email, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.delistBlockWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes an email address from the mail service\'s block lists.
     * Remove Email Address from Block List
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [email] an email address
     */
    public delistBlock(id: number, email?: string, _options?: ConfigurationOptions): Observable<GenericResponse> {
        return this.delistBlockWithHttpInfo(id, email, _options).pipe(map((apiResponse: HttpInfo<GenericResponse>) => apiResponse.data));
    }

    /**
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     * List Mail Alerts
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailAlertsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<MailAlertsResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailAlerts(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailAlertsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     * List Mail Alerts
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailAlerts(id: number, _options?: ConfigurationOptions): Observable<MailAlertsResponse> {
        return this.getMailAlertsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<MailAlertsResponse>) => apiResponse.data));
    }

    /**
     * Displays a listing of the blocked email addresses
     * List Blocked Email Addresses
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailBlocksWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<MailBlocks>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailBlocks(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailBlocksWithHttpInfo(rsp)));
            }));
    }

    /**
     * Displays a listing of the blocked email addresses
     * List Blocked Email Addresses
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailBlocks(id: number, _options?: ConfigurationOptions): Observable<MailBlocks> {
        return this.getMailBlocksWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<MailBlocks>) => apiResponse.data));
    }

    /**
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     * Get Delist Status
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDelistWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<MailDelistResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailDelist(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailDelistWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     * Get Delist Status
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDelist(id: number, _options?: ConfigurationOptions): Observable<MailDelistResponse> {
        return this.getMailDelistWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<MailDelistResponse>) => apiResponse.data));
    }

    /**
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     * Get Deliverability Metrics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDeliverabilityWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<MailDeliverabilityResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailDeliverability(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailDeliverabilityWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     * Get Deliverability Metrics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailDeliverability(id: number, _options?: ConfigurationOptions): Observable<MailDeliverabilityResponse> {
        return this.getMailDeliverabilityWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<MailDeliverabilityResponse>) => apiResponse.data));
    }

    /**
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     * Get Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<MailSchema>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     * Get Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInfo(id: number, _options?: ConfigurationOptions): Observable<MailSchema> {
        return this.getMailInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<MailSchema>) => apiResponse.data));
    }

    /**
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     * Get Mail Invoices
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     * Get Mail Invoices
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getMailInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
     * List Mail Orders
     */
    public getMailListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<MailRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
     * List Mail Orders
     */
    public getMailList(_options?: ConfigurationOptions): Observable<Array<MailRow>> {
        return this.getMailListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<MailRow>>) => apiResponse.data));
    }

    /**
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     * Resend Mail Welcome Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMailWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMailWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     * Resend Mail Welcome Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getMailWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getMailWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     * Get Mail Ordering Information
     */
    public getNewMailWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<MailOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewMail(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewMailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     * Get Mail Ordering Information
     */
    public getNewMail(_options?: ConfigurationOptions): Observable<MailOrder> {
        return this.getNewMailWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<MailOrder>) => apiResponse.data));
    }

    /**
     * Returns a listing of all the deny block rules configured for this mail service.
     * List Deny Rules
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getRulesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Array<DenyRuleRecord>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getRules(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getRulesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns a listing of all the deny block rules configured for this mail service.
     * List Deny Rules
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public getRules(id: number, _options?: ConfigurationOptions): Observable<Array<DenyRuleRecord>> {
        return this.getRulesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Array<DenyRuleRecord>>) => apiResponse.data));
    }

    /**
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     * Get Mail Usage Statistics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [time] The timeframe for the statistics.
     */
    public getStatsWithHttpInfo(id: number, time?: 'all' | 'billing' | 'month' | '7d' | '24h' | '1d' | '1h', _options?: ConfigurationOptions): Observable<HttpInfo<MailStatsType>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getStats(id, time, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getStatsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     * Get Mail Usage Statistics
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param [time] The timeframe for the statistics.
     */
    public getStats(id: number, time?: 'all' | 'billing' | 'month' | '7d' | '24h' | '1d' | '1h', _options?: ConfigurationOptions): Observable<MailStatsType> {
        return this.getStatsWithHttpInfo(id, time, _options).pipe(map((apiResponse: HttpInfo<MailStatsType>) => apiResponse.data));
    }

    /**
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Mail
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public mailCancelWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<MailCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.mailCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.mailCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     * Cancel Mail
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public mailCancel(id: number, _options?: ConfigurationOptions): Observable<MailCancel200Response> {
        return this.mailCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<MailCancel200Response>) => apiResponse.data));
    }

    /**
     * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
     * Delist a Blocked Sender
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailDelistRequest
     */
    public postMailDelistWithHttpInfo(id: number, mailDelistRequest: MailDelistRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postMailDelist(id, mailDelistRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postMailDelistWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
     * Delist a Blocked Sender
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailDelistRequest
     */
    public postMailDelist(id: number, mailDelistRequest: MailDelistRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.postMailDelistWithHttpInfo(id, mailDelistRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     * Validate Mail Order
     */
    public putMailWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putMail(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putMailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     * Validate Mail Order
     */
    public putMail(_options?: ConfigurationOptions): Observable<void> {
        return this.putMailWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
     * Reset Mail Password
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public resetMailPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.resetMailPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.resetMailPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
     * Reset Mail Password
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public resetMailPassword(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.resetMailPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
     * Send Email with Advanced Options
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMailAdv
     */
    public sendAdvMailWithHttpInfo(id: number, sendMailAdv: SendMailAdv, _options?: ConfigurationOptions): Observable<HttpInfo<GenericResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.sendAdvMail(id, sendMailAdv, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.sendAdvMailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
     * Send Email with Advanced Options
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMailAdv
     */
    public sendAdvMail(id: number, sendMailAdv: SendMailAdv, _options?: ConfigurationOptions): Observable<GenericResponse> {
        return this.sendAdvMailWithHttpInfo(id, sendMailAdv, _options).pipe(map((apiResponse: HttpInfo<GenericResponse>) => apiResponse.data));
    }

    /**
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
     * Send Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMail
     */
    public sendMailWithHttpInfo(id: number, sendMail: SendMail, _options?: ConfigurationOptions): Observable<HttpInfo<GenericResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.sendMail(id, sendMail, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.sendMailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
     * Send Email
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param sendMail
     */
    public sendMail(id: number, sendMail: SendMail, _options?: ConfigurationOptions): Observable<GenericResponse> {
        return this.sendMailWithHttpInfo(id, sendMail, _options).pipe(map((apiResponse: HttpInfo<GenericResponse>) => apiResponse.data));
    }

    /**
     * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
     * Update Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertUpdateRequest
     */
    public updateMailAlertWithHttpInfo(id: number, mailAlertUpdateRequest: MailAlertUpdateRequest, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateMailAlert(id, mailAlertUpdateRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateMailAlertWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
     * Update Mail Alert
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     * @param mailAlertUpdateRequest
     */
    public updateMailAlert(id: number, mailAlertUpdateRequest: MailAlertUpdateRequest, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateMailAlertWithHttpInfo(id, mailAlertUpdateRequest, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Updates mail service metadata for the order, such as stored settings or account details.
     * Update Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public updateMailInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateMailInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateMailInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates mail service metadata for the order, such as stored settings or account details.
     * Update Mail Order
     * @param id The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    public updateMailInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateMailInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
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
    public viewMailLogWithHttpInfo(id: number, id2?: number, origin?: string, mx?: string, _from?: string, to?: string, subject?: string, mailid?: string, messageId?: string, replyto?: string, headerfrom?: string, delivered?: 0 | 1, skip?: number, limit?: number, startDate?: ViewMailLogStartDateParameter, endDate?: ViewMailLogStartDateParameter, sort?: 'time', dir?: 'asc' | 'desc', groupby?: 'message' | 'recipient', _options?: ConfigurationOptions): Observable<HttpInfo<MailLog>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.viewMailLog(id, id2, origin, mx, _from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.viewMailLogWithHttpInfo(rsp)));
            }));
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
    public viewMailLog(id: number, id2?: number, origin?: string, mx?: string, _from?: string, to?: string, subject?: string, mailid?: string, messageId?: string, replyto?: string, headerfrom?: string, delivered?: 0 | 1, skip?: number, limit?: number, startDate?: ViewMailLogStartDateParameter, endDate?: ViewMailLogStartDateParameter, sort?: 'time', dir?: 'asc' | 'desc', groupby?: 'message' | 'recipient', _options?: ConfigurationOptions): Observable<MailLog> {
        return this.viewMailLogWithHttpInfo(id, id2, origin, mx, _from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby, _options).pipe(map((apiResponse: HttpInfo<MailLog>) => apiResponse.data));
    }

}

import { PublicApiRequestFactory, PublicApiResponseProcessor} from "../apis/PublicApi";
export class ObservablePublicApi {
    private requestFactory: PublicApiRequestFactory;
    private responseProcessor: PublicApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: PublicApiRequestFactory,
        responseProcessor?: PublicApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new PublicApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new PublicApiResponseProcessor();
    }

    /**
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     * Get Captcha Challenge
     */
    public getCaptchaWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<CaptchaResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getCaptcha(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getCaptchaWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     * Get Captcha Challenge
     */
    public getCaptcha(_options?: ConfigurationOptions): Observable<CaptchaResponse> {
        return this.getCaptchaWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<CaptchaResponse>) => apiResponse.data));
    }

    /**
     * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     * Get Countries
     * @param [fetchBy] Get countries by iso2 or iso3 or numcode
     */
    public getCountriesWithHttpInfo(fetchBy?: 'iso2' | 'iso3' | 'numcode', _options?: ConfigurationOptions): Observable<HttpInfo<any>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getCountries(fetchBy, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getCountriesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     * Get Countries
     * @param [fetchBy] Get countries by iso2 or iso3 or numcode
     */
    public getCountries(fetchBy?: 'iso2' | 'iso3' | 'numcode', _options?: ConfigurationOptions): Observable<any> {
        return this.getCountriesWithHttpInfo(fetchBy, _options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Returns metadata about the API server\'s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     * Get Server Info
     */
    public getInfoWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServicesInfo>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getInfo(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns metadata about the API server\'s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     * Get Server Info
     */
    public getInfo(_options?: ConfigurationOptions): Observable<ServicesInfo> {
        return this.getInfoWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServicesInfo>) => apiResponse.data));
    }

    /**
     * Gets the various pieces of information useful for generating a login page.
     * Get Login Info
     */
    public getLoginInfoWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<LoginInfo>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getLoginInfo(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getLoginInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Gets the various pieces of information useful for generating a login page.
     * Get Login Info
     */
    public getLoginInfo(_options?: ConfigurationOptions): Observable<LoginInfo> {
        return this.getLoginInfoWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<LoginInfo>) => apiResponse.data));
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServersWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<BuyItNowList>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMPServers(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMPServersWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServers(_options?: ConfigurationOptions): Observable<BuyItNowList> {
        return this.getMPServersWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<BuyItNowList>) => apiResponse.data));
    }

    /**
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
     * Get OAuth Redirect URL
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     */
    public getOauthRedirectWithHttpInfo(provider: string, _options?: ConfigurationOptions): Observable<HttpInfo<GetOauthRedirect200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getOauthRedirect(provider, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getOauthRedirectWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
     * Get OAuth Redirect URL
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     */
    public getOauthRedirect(provider: string, _options?: ConfigurationOptions): Observable<GetOauthRedirect200Response> {
        return this.getOauthRedirectWithHttpInfo(provider, _options).pipe(map((apiResponse: HttpInfo<GetOauthRedirect200Response>) => apiResponse.data));
    }

    /**
     * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
     * Get Available Timezones
     */
    public getTimezonesWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<string>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getTimezones(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getTimezonesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
     * Get Available Timezones
     */
    public getTimezones(_options?: ConfigurationOptions): Observable<Array<string>> {
        return this.getTimezonesWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<string>>) => apiResponse.data));
    }

    /**
     * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
     * Complete OAuth Two-Factor Verification
     * @param patchOauthTwoFactorRequest
     */
    public patchOauthTwoFactorWithHttpInfo(patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest, _options?: ConfigurationOptions): Observable<HttpInfo<PatchOauthTwoFactor200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.patchOauthTwoFactor(patchOauthTwoFactorRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.patchOauthTwoFactorWithHttpInfo(rsp)));
            }));
    }

    /**
     * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
     * Complete OAuth Two-Factor Verification
     * @param patchOauthTwoFactorRequest
     */
    public patchOauthTwoFactor(patchOauthTwoFactorRequest: PatchOauthTwoFactorRequest, _options?: ConfigurationOptions): Observable<PatchOauthTwoFactor200Response> {
        return this.patchOauthTwoFactorWithHttpInfo(patchOauthTwoFactorRequest, _options).pipe(map((apiResponse: HttpInfo<PatchOauthTwoFactor200Response>) => apiResponse.data));
    }

    /**
     * Performs a single ping/pong request to let you know if the server is up.
     * Ping Server
     */
    public pingServerWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<string>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.pingServer(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.pingServerWithHttpInfo(rsp)));
            }));
    }

    /**
     * Performs a single ping/pong request to let you know if the server is up.
     * Ping Server
     */
    public pingServer(_options?: ConfigurationOptions): Observable<string> {
        return this.pingServerWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<string>) => apiResponse.data));
    }

    /**
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
     * OAuth Callback
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     * @param [postOauthCallbackRequest]
     */
    public postOauthCallbackWithHttpInfo(provider: string, postOauthCallbackRequest?: PostOauthCallbackRequest, _options?: ConfigurationOptions): Observable<HttpInfo<PostOauthCallback200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postOauthCallback(provider, postOauthCallbackRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postOauthCallbackWithHttpInfo(rsp)));
            }));
    }

    /**
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
     * OAuth Callback
     * @param provider The OAuth provider name (e.g. &#x60;Google&#x60;).
     * @param [postOauthCallbackRequest]
     */
    public postOauthCallback(provider: string, postOauthCallbackRequest?: PostOauthCallbackRequest, _options?: ConfigurationOptions): Observable<PostOauthCallback200Response> {
        return this.postOauthCallbackWithHttpInfo(provider, postOauthCallbackRequest, _options).pipe(map((apiResponse: HttpInfo<PostOauthCallback200Response>) => apiResponse.data));
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
    public submitLoginWithHttpInfo(login: string, passwd: string, remember?: string, gRecaptchaResponse?: LoginSubmissionExampleGRecaptchaResponse, tfa?: string, _options?: ConfigurationOptions): Observable<HttpInfo<LoginSuccessResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.submitLoginWithHttpInfo(rsp)));
            }));
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
    public submitLogin(login: string, passwd: string, remember?: string, gRecaptchaResponse?: LoginSubmissionExampleGRecaptchaResponse, tfa?: string, _options?: ConfigurationOptions): Observable<LoginSuccessResponse> {
        return this.submitLoginWithHttpInfo(login, passwd, remember, gRecaptchaResponse, tfa, _options).pipe(map((apiResponse: HttpInfo<LoginSuccessResponse>) => apiResponse.data));
    }

    /**
     * Creates a new account in our system using the provided information.
     * Submit Signup Information
     * @param [loginSubmissionExample]
     */
    public submitSignupWithHttpInfo(loginSubmissionExample?: LoginSubmissionExample, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.submitSignup(loginSubmissionExample, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.submitSignupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a new account in our system using the provided information.
     * Submit Signup Information
     * @param [loginSubmissionExample]
     */
    public submitSignup(loginSubmissionExample?: LoginSubmissionExample, _options?: ConfigurationOptions): Observable<void> {
        return this.submitSignupWithHttpInfo(loginSubmissionExample, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

}

import { QuickServersApiRequestFactory, QuickServersApiResponseProcessor} from "../apis/QuickServersApi";
export class ObservableQuickServersApi {
    private requestFactory: QuickServersApiRequestFactory;
    private responseProcessor: QuickServersApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: QuickServersApiRequestFactory,
        responseProcessor?: QuickServersApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new QuickServersApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new QuickServersApiResponseProcessor();
    }

    /**
     * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place QuickServer Order
     */
    public addQsWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addQs(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addQsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
     * Place QuickServer Order
     */
    public addQs(_options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addQsWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
     * Delete QuickServer Backup
     * @param id QuickServer ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public deleteQsBackupWithHttpInfo(id: number, file: string, all?: '0' | '1', _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteQsBackup(id, file, all, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteQsBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
     * Delete QuickServer Backup
     * @param id QuickServer ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public deleteQsBackup(id: number, file: string, all?: '0' | '1', _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteQsBackupWithHttpInfo(id, file, all, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     * Block QuickServer SMTP
     * @param id QuickServer ID number.
     */
    public doQsBlockSmtpWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsBlockSmtp(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsBlockSmtpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     * Block QuickServer SMTP
     * @param id QuickServer ID number.
     */
    public doQsBlockSmtp(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsBlockSmtpWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Disables the virtual CD drive for the QuickServer.
     * Disable CD Drive
     * @param id QuickServer ID number.
     */
    public doQsDisableCdWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsDisableCd(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsDisableCdWithHttpInfo(rsp)));
            }));
    }

    /**
     * Disables the virtual CD drive for the QuickServer.
     * Disable CD Drive
     * @param id QuickServer ID number.
     */
    public doQsDisableCd(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsDisableCdWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Disables disk quota enforcement for the QuickServer.
     * Disable Quotas
     * @param id QuickServer ID number.
     */
    public doQsDisableQuotaWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsDisableQuota(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsDisableQuotaWithHttpInfo(rsp)));
            }));
    }

    /**
     * Disables disk quota enforcement for the QuickServer.
     * Disable Quotas
     * @param id QuickServer ID number.
     */
    public doQsDisableQuota(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsDisableQuotaWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Ejects the virtual CD from the QuickServer\'s CD drive.
     * Eject CD Drive
     * @param id QuickServer ID number.
     */
    public doQsEjectCdWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsEjectCd(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsEjectCdWithHttpInfo(rsp)));
            }));
    }

    /**
     * Ejects the virtual CD from the QuickServer\'s CD drive.
     * Eject CD Drive
     * @param id QuickServer ID number.
     */
    public doQsEjectCd(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsEjectCdWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Enables disk quota enforcement for the QuickServer.
     * Enable Quotas
     * @param id QuickServer ID number.
     */
    public doQsEnableQuotaWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsEnableQuota(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsEnableQuotaWithHttpInfo(rsp)));
            }));
    }

    /**
     * Enables disk quota enforcement for the QuickServer.
     * Enable Quotas
     * @param id QuickServer ID number.
     */
    public doQsEnableQuota(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsEnableQuotaWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Restarts the QuickServer. The server will be shut down and started again.
     * Restart QuickServer
     * @param id QuickServer ID number.
     */
    public doQsRestartWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsRestart(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsRestartWithHttpInfo(rsp)));
            }));
    }

    /**
     * Restarts the QuickServer. The server will be shut down and started again.
     * Restart QuickServer
     * @param id QuickServer ID number.
     */
    public doQsRestart(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsRestartWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Powers on the QuickServer.
     * Start QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStartWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsStart(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsStartWithHttpInfo(rsp)));
            }));
    }

    /**
     * Powers on the QuickServer.
     * Start QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStart(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsStartWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Powers off the QuickServer.
     * Stop QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStopWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doQsStop(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doQsStopWithHttpInfo(rsp)));
            }));
    }

    /**
     * Powers off the QuickServer.
     * Stop QuickServer
     * @param id QuickServer ID number.
     */
    public doQsStop(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doQsStopWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
     * Download QuickServer Backup
     * @param id QuickServer ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public downloadQsBackupWithHttpInfo(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: ConfigurationOptions): Observable<HttpInfo<DownloadQsBackup200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.downloadQsBackup(id, downloadQsBackupRequest, all, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.downloadQsBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
     * Download QuickServer Backup
     * @param id QuickServer ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public downloadQsBackup(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: ConfigurationOptions): Observable<DownloadQsBackup200Response> {
        return this.downloadQsBackupWithHttpInfo(id, downloadQsBackupRequest, all, _options).pipe(map((apiResponse: HttpInfo<DownloadQsBackup200Response>) => apiResponse.data));
    }

    /**
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     * Get QuickServer Ordering Information
     */
    public getNewQsWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<QuickserverOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewQs(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewQsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     * Get QuickServer Ordering Information
     */
    public getNewQs(_options?: ConfigurationOptions): Observable<QuickserverOrder> {
        return this.getNewQsWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<QuickserverOrder>) => apiResponse.data));
    }

    /**
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
     * List QuickServer Backups
     * @param id QuickServer ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public getQsBackupsWithHttpInfo(id: number, all?: '0' | '1', _options?: ConfigurationOptions): Observable<HttpInfo<VpsBackupRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsBackups(id, all, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsBackupsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
     * List QuickServer Backups
     * @param id QuickServer ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    public getQsBackups(id: number, all?: '0' | '1', _options?: ConfigurationOptions): Observable<VpsBackupRows> {
        return this.getQsBackupsWithHttpInfo(id, all, _options).pipe(map((apiResponse: HttpInfo<VpsBackupRows>) => apiResponse.data));
    }

    /**
     * Retrieves the current hostname and any validation requirements for changing it.
     * Get QuickServer Hostname
     * @param id QuickServer ID number
     */
    public getQsChangeHostnameWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsChangeHostname(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsChangeHostnameWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves the current hostname and any validation requirements for changing it.
     * Get QuickServer Hostname
     * @param id QuickServer ID number
     */
    public getQsChangeHostname(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsChangeHostnameWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Retrieves instructions or metadata needed to reset the root password.
     * Get Change Root Password Info
     * @param id QuickServer ID number
     */
    public getQsChangeRootPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsChangeRootPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsChangeRootPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves instructions or metadata needed to reset the root password.
     * Get Change Root Password Info
     * @param id QuickServer ID number
     */
    public getQsChangeRootPassword(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsChangeRootPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns the list of available timezones that can be set on the QuickServer.
     * Get Timezone Info
     * @param id QuickServer ID number
     */
    public getQsChangeTimezoneWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Array<string>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsChangeTimezone(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsChangeTimezoneWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the list of available timezones that can be set on the QuickServer.
     * Get Timezone Info
     * @param id QuickServer ID number
     */
    public getQsChangeTimezone(id: number, _options?: ConfigurationOptions): Observable<Array<string>> {
        return this.getQsChangeTimezoneWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Array<string>>) => apiResponse.data));
    }

    /**
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     * Webuzo Change Pass Info
     * @param id QuickServer ID number
     */
    public getQsChangeWebuzoPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsChangeWebuzoPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsChangeWebuzoPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     * Webuzo Change Pass Info
     * @param id QuickServer ID number
     */
    public getQsChangeWebuzoPassword(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsChangeWebuzoPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     * Get QuickServer Order
     * @param id QuickServer ID number.
     */
    public getQsInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Quickserver>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     * Get QuickServer Order
     * @param id QuickServer ID number.
     */
    public getQsInfo(id: number, _options?: ConfigurationOptions): Observable<Quickserver> {
        return this.getQsInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Quickserver>) => apiResponse.data));
    }

    /**
     * Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.
     * Insert CD Information
     * @param id QuickServer ID number
     */
    public getQsInsertCdWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsInsertCd(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsInsertCdWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns available ISO images that can be mounted in the QuickServer\'s virtual CD drive.
     * Insert CD Information
     * @param id QuickServer ID number
     */
    public getQsInsertCd(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsInsertCdWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns the billing invoices associated with this QuickServer.
     * Get QuickServer Invoices
     * @param id QuickServer ID number
     */
    public getQsInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the billing invoices associated with this QuickServer.
     * Get QuickServer Invoices
     * @param id QuickServer ID number
     */
    public getQsInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getQsInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
     * List QuickServers
     */
    public getQsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<QuickserverRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
     * List QuickServers
     */
    public getQsList(_options?: ConfigurationOptions): Observable<Array<QuickserverRow>> {
        return this.getQsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<QuickserverRow>>) => apiResponse.data));
    }

    /**
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     * QuickServer Reinstall OS Options
     * @param id QuickServer ID number
     */
    public getQsReinstallOsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<VpsTemplatesList>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsReinstallOs(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsReinstallOsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     * QuickServer Reinstall OS Options
     * @param id QuickServer ID number
     */
    public getQsReinstallOs(id: number, _options?: ConfigurationOptions): Observable<VpsTemplatesList> {
        return this.getQsReinstallOsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<VpsTemplatesList>) => apiResponse.data));
    }

    /**
     * Returns information needed before resetting the QuickServer\'s root password.
     * Reset QuickServer Password Info
     * @param id QuickServer ID number
     */
    public getQsResetPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsResetPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsResetPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns information needed before resetting the QuickServer\'s root password.
     * Reset QuickServer Password Info
     * @param id QuickServer ID number
     */
    public getQsResetPassword(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsResetPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Reverse DNS Info
     * @param id QuickServer ID number
     */
    public getQsReverseDnsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ReverseDnsEntries>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsReverseDns(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Reverse DNS Info
     * @param id QuickServer ID number
     */
    public getQsReverseDns(id: number, _options?: ConfigurationOptions): Observable<ReverseDnsEntries> {
        return this.getQsReverseDnsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ReverseDnsEntries>) => apiResponse.data));
    }

    /**
     * Returns the current VNC connection information for the QuickServer.
     * VNC Setup Info
     * @param id QuickServer ID number
     */
    public getQsSetupVncWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsSetupVnc(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsSetupVncWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current VNC connection information for the QuickServer.
     * VNC Setup Info
     * @param id QuickServer ID number
     */
    public getQsSetupVnc(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsSetupVncWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns bandwidth traffic usage data for the QuickServer.
     * Get Traffic Usage
     * @param id QuickServer ID number
     */
    public getQsTrafficUsageWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsTrafficUsage(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsTrafficUsageWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns bandwidth traffic usage data for the QuickServer.
     * Get Traffic Usage
     * @param id QuickServer ID number
     */
    public getQsTrafficUsage(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsTrafficUsageWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns remote desktop connection information for the QuickServer.
     * Get View Desktop Info
     * @param id QuickServer ID number
     */
    public getQsViewDesktopWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsViewDesktop(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsViewDesktopWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns remote desktop connection information for the QuickServer.
     * Get View Desktop Info
     * @param id QuickServer ID number
     */
    public getQsViewDesktop(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getQsViewDesktopWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     * Resend QuickServer Welcome Email
     * @param id Quickserver ID
     */
    public getQsWelcomeEmailWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getQsWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getQsWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     * Resend QuickServer Welcome Email
     * @param id Quickserver ID
     */
    public getQsWelcomeEmail(id: string, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.getQsWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     * Create QuickServer Backup
     * @param id QuickServer ID number
     */
    public postQsBackupWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsBackup(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     * Create QuickServer Backup
     * @param id QuickServer ID number
     */
    public postQsBackup(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsBackupWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Submits a hostname change request for the QuickServer.
     * Update QuickServer Hostname
     * @param id QuickServer ID number
     */
    public postQsChangeHostnameWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsChangeHostname(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsChangeHostnameWithHttpInfo(rsp)));
            }));
    }

    /**
     * Submits a hostname change request for the QuickServer.
     * Update QuickServer Hostname
     * @param id QuickServer ID number
     */
    public postQsChangeHostname(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsChangeHostnameWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Triggers a root password reset for the QuickServer.
     * Change Root Password
     * @param id QuickServer ID number
     */
    public postQsChangeRootPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsChangeRootPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsChangeRootPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Triggers a root password reset for the QuickServer.
     * Change Root Password
     * @param id QuickServer ID number
     */
    public postQsChangeRootPassword(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsChangeRootPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
     * Change QuickServer Timezone
     * @param id QuickServer ID number
     * @param timezone The time zone
     */
    public postQsChangeTimezoneWithHttpInfo(id: number, timezone: string, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsChangeTimezone(id, timezone, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsChangeTimezoneWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
     * Change QuickServer Timezone
     * @param id QuickServer ID number
     * @param timezone The time zone
     */
    public postQsChangeTimezone(id: number, timezone: string, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsChangeTimezoneWithHttpInfo(id, timezone, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Resets the Webuzo control panel password for the QuickServer.
     * Change Webuzo Password
     * @param id QuickServer ID number
     */
    public postQsChangeWebuzoPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsChangeWebuzoPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsChangeWebuzoPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resets the Webuzo control panel password for the QuickServer.
     * Change Webuzo Password
     * @param id QuickServer ID number
     */
    public postQsChangeWebuzoPassword(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsChangeWebuzoPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
     * Insert CD in QuickServer
     * @param id QuickServer ID number
     */
    public postQsInsertCdWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsInsertCd(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsInsertCdWithHttpInfo(rsp)));
            }));
    }

    /**
     * Mounts an ISO image in the QuickServer\'s virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
     * Insert CD in QuickServer
     * @param id QuickServer ID number
     */
    public postQsInsertCd(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsInsertCdWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     * Reinstall QuickServer OS
     * @param id QuickServer ID number
     */
    public postQsReinstallOsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsReinstallOs(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsReinstallOsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     * Reinstall QuickServer OS
     * @param id QuickServer ID number
     */
    public postQsReinstallOs(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsReinstallOsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Resets the root password on the QuickServer to a new randomly generated password.
     * Reset QuickServer Password
     * @param id QuickServer ID number
     */
    public postQsResetPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsResetPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsResetPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resets the root password on the QuickServer to a new randomly generated password.
     * Reset QuickServer Password
     * @param id QuickServer ID number
     */
    public postQsResetPassword(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsResetPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Update Reverse DNS
     * @param id QuickServer ID number
     * @param reverseDnsEntries
     */
    public postQsReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsReverseDns(id, reverseDnsEntries, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the QuickServer\'s IP addresses.
     * Update Reverse DNS
     * @param id QuickServer ID number
     * @param reverseDnsEntries
     */
    public postQsReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.postQsReverseDnsWithHttpInfo(id, reverseDnsEntries, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Sets up or refreshes the VNC console connection for the QuickServer.
     * Setup VNC
     * @param id QuickServer ID number
     */
    public postQsSetupVncWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsSetupVnc(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsSetupVncWithHttpInfo(rsp)));
            }));
    }

    /**
     * Sets up or refreshes the VNC console connection for the QuickServer.
     * Setup VNC
     * @param id QuickServer ID number
     */
    public postQsSetupVnc(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQsSetupVncWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.
     * Search Traffic Usage
     * @param id QuickServer ID number
     */
    public postQsTrafficUsageWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsTrafficUsage(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsTrafficUsageWithHttpInfo(rsp)));
            }));
    }

    /**
     * Searches and filters the QuickServer\'s bandwidth traffic usage data by date range.
     * Search Traffic Usage
     * @param id QuickServer ID number
     */
    public postQsTrafficUsage(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.postQsTrafficUsageWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Updates or refreshes the remote desktop session for the QuickServer.
     * Update View Desktop
     * @param id QuickServer ID number
     */
    public postQsViewDesktopWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQsViewDesktop(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQsViewDesktopWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates or refreshes the remote desktop session for the QuickServer.
     * Update View Desktop
     * @param id QuickServer ID number
     */
    public postQsViewDesktop(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.postQsViewDesktopWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
     * Restore QuickServer from Backup
     * @param id QuickServer ID number
     * @param restoreRequest QuickServer Restore request
     */
    public postQuickServerRestoreWithHttpInfo(id: number, restoreRequest: RestoreRequest, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postQuickServerRestore(id, restoreRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postQuickServerRestoreWithHttpInfo(rsp)));
            }));
    }

    /**
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
     * Restore QuickServer from Backup
     * @param id QuickServer ID number
     * @param restoreRequest QuickServer Restore request
     */
    public postQuickServerRestore(id: number, restoreRequest: RestoreRequest, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postQuickServerRestoreWithHttpInfo(id, restoreRequest, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     * Validate QuickServer Order
     */
    public putQsWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putQs(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putQsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     * Validate QuickServer Order
     */
    public putQs(_options?: ConfigurationOptions): Observable<void> {
        return this.putQsWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel QuickServer Order
     * @param id QuickServer ID number
     */
    public quickserversCancelWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QuickserversCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.quickserversCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.quickserversCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel QuickServer Order
     * @param id QuickServer ID number
     */
    public quickserversCancel(id: number, _options?: ConfigurationOptions): Observable<QuickserversCancel200Response> {
        return this.quickserversCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QuickserversCancel200Response>) => apiResponse.data));
    }

    /**
     * Updates QuickServer metadata or stored settings associated with the order.
     * Update QuickServer Order
     * @param id QuickServer ID number.
     */
    public updateQsInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateQsInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateQsInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates QuickServer metadata or stored settings associated with the order.
     * Update QuickServer Order
     * @param id QuickServer ID number.
     */
    public updateQsInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateQsInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { SSLCertificatesApiRequestFactory, SSLCertificatesApiResponseProcessor} from "../apis/SSLCertificatesApi";
export class ObservableSSLCertificatesApi {
    private requestFactory: SSLCertificatesApiRequestFactory;
    private responseProcessor: SSLCertificatesApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: SSLCertificatesApiRequestFactory,
        responseProcessor?: SSLCertificatesApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new SSLCertificatesApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new SSLCertificatesApiResponseProcessor();
    }

    /**
     * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
     * Place SSL Cert Order
     */
    public addSslWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addSsl(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addSslWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
     * Place SSL Cert Order
     */
    public addSsl(_options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addSslWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Retrieves available SSL certificate types and pricing for ordering.
     * SSL Cert Ordering Information
     */
    public getNewSslWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<any>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewSsl(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewSslWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves available SSL certificate types and pricing for ordering.
     * SSL Cert Ordering Information
     */
    public getNewSsl(_options?: ConfigurationOptions): Observable<any> {
        return this.getNewSslWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     * Get SSL Cert Info
     * @param id SSL certificate ID number.
     */
    public getSslInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<any>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getSslInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getSslInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     * Get SSL Cert Info
     * @param id SSL certificate ID number.
     */
    public getSslInfo(id: number, _options?: ConfigurationOptions): Observable<any> {
        return this.getSslInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<any>) => apiResponse.data));
    }

    /**
     * Returns the billing invoices associated with this SSL certificate.
     * Get SSL Cert Invoices
     * @param id SSL Cert ID number
     */
    public getSslInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getSslInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getSslInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the billing invoices associated with this SSL certificate.
     * Get SSL Cert Invoices
     * @param id SSL Cert ID number
     */
    public getSslInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getSslInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns all SSL certificate services on the account with their current status.
     * List SSL Certs
     */
    public getSslListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getSslList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getSslListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns all SSL certificate services on the account with their current status.
     * List SSL Certs
     */
    public getSslList(_options?: ConfigurationOptions): Observable<void> {
        return this.getSslListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Resends the welcome email for the order.
     * Resend SSL Welcome Email
     * @param id SSL Cert ID number
     */
    public getSslWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getSslWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getSslWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email for the order.
     * Resend SSL Welcome Email
     * @param id SSL Cert ID number
     */
    public getSslWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getSslWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Validates an SSL certificate order before placing it.
     * Validate SSL Cert Order
     */
    public putSslWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putSsl(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putSslWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates an SSL certificate order before placing it.
     * Validate SSL Cert Order
     */
    public putSsl(_options?: ConfigurationOptions): Observable<void> {
        return this.putSslWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     * Cancel SSL Certificate Service
     * @param id SSL Cert ID number
     */
    public sslCancelWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SslCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.sslCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.sslCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     * Cancel SSL Certificate Service
     * @param id SSL Cert ID number
     */
    public sslCancel(id: number, _options?: ConfigurationOptions): Observable<SslCancel200Response> {
        return this.sslCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SslCancel200Response>) => apiResponse.data));
    }

    /**
     * Updates settings on an SSL certificate order.
     * Update SSL Cert Order
     * @param id SSL certificate ID number.
     */
    public updateSslInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateSslInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateSslInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates settings on an SSL certificate order.
     * Update SSL Cert Order
     * @param id SSL certificate ID number.
     */
    public updateSslInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateSslInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { ScrubIpsApiRequestFactory, ScrubIpsApiResponseProcessor} from "../apis/ScrubIpsApi";
export class ObservableScrubIpsApi {
    private requestFactory: ScrubIpsApiRequestFactory;
    private responseProcessor: ScrubIpsApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: ScrubIpsApiRequestFactory,
        responseProcessor?: ScrubIpsApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new ScrubIpsApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new ScrubIpsApiResponseProcessor();
    }

    /**
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     * Cancel Scrub IP Service
     * @param id ScrubIp ID number
     */
    public cancelScrubIpWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<CancelScrubIp200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.cancelScrubIp(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.cancelScrubIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     * Cancel Scrub IP Service
     * @param id ScrubIp ID number
     */
    public cancelScrubIp(id: number, _options?: ConfigurationOptions): Observable<CancelScrubIp200Response> {
        return this.cancelScrubIpWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<CancelScrubIp200Response>) => apiResponse.data));
    }

    /**
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
     * Create Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public createFilterWithHttpInfo(id: number, createFilter: CreateFilter, _options?: ConfigurationOptions): Observable<HttpInfo<CreateFilter201Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.createFilter(id, createFilter, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.createFilterWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
     * Create Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public createFilter(id: number, createFilter: CreateFilter, _options?: ConfigurationOptions): Observable<CreateFilter201Response> {
        return this.createFilterWithHttpInfo(id, createFilter, _options).pipe(map((apiResponse: HttpInfo<CreateFilter201Response>) => apiResponse.data));
    }

    /**
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     * Create Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param createGeoFirewallRule
     */
    public createGeoRuleWithHttpInfo(id: number, createGeoFirewallRule: CreateGeoFirewallRule, _options?: ConfigurationOptions): Observable<HttpInfo<CreateRule201Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.createGeoRule(id, createGeoFirewallRule, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.createGeoRuleWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     * Create Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param createGeoFirewallRule
     */
    public createGeoRule(id: number, createGeoFirewallRule: CreateGeoFirewallRule, _options?: ConfigurationOptions): Observable<CreateRule201Response> {
        return this.createGeoRuleWithHttpInfo(id, createGeoFirewallRule, _options).pipe(map((apiResponse: HttpInfo<CreateRule201Response>) => apiResponse.data));
    }

    /**
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     * Create Firewall Rule
     * @param id ScrubIp ID number
     * @param createFirewallRule
     */
    public createRuleWithHttpInfo(id: number, createFirewallRule: CreateFirewallRule, _options?: ConfigurationOptions): Observable<HttpInfo<CreateRule201Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.createRule(id, createFirewallRule, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.createRuleWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     * Create Firewall Rule
     * @param id ScrubIp ID number
     * @param createFirewallRule
     */
    public createRule(id: number, createFirewallRule: CreateFirewallRule, _options?: ConfigurationOptions): Observable<CreateRule201Response> {
        return this.createRuleWithHttpInfo(id, createFirewallRule, _options).pipe(map((apiResponse: HttpInfo<CreateRule201Response>) => apiResponse.data));
    }

    /**
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     * Delete Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public deleteFilterWithHttpInfo(id: number, createFilter: CreateFilter, _options?: ConfigurationOptions): Observable<HttpInfo<DeleteFilter200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteFilter(id, createFilter, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteFilterWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     * Delete Traffic Filter
     * @param id ScrubIp ID number
     * @param createFilter
     */
    public deleteFilter(id: number, createFilter: CreateFilter, _options?: ConfigurationOptions): Observable<DeleteFilter200Response> {
        return this.deleteFilterWithHttpInfo(id, createFilter, _options).pipe(map((apiResponse: HttpInfo<DeleteFilter200Response>) => apiResponse.data));
    }

    /**
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     * Disable Scrub Protection
     * @param id ScrubIp ID number
     */
    public disableScrubWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<DisableScrub200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.disableScrub(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.disableScrubWithHttpInfo(rsp)));
            }));
    }

    /**
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     * Disable Scrub Protection
     * @param id ScrubIp ID number
     */
    public disableScrub(id: number, _options?: ConfigurationOptions): Observable<DisableScrub200Response> {
        return this.disableScrubWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<DisableScrub200Response>) => apiResponse.data));
    }

    /**
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     * Enable Scrub Protection
     * @param id ScrubIp ID number
     */
    public enableScrubWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<EnableScrub200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.enableScrub(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.enableScrubWithHttpInfo(rsp)));
            }));
    }

    /**
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     * Enable Scrub Protection
     * @param id ScrubIp ID number
     */
    public enableScrub(id: number, _options?: ConfigurationOptions): Observable<EnableScrub200Response> {
        return this.enableScrubWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<EnableScrub200Response>) => apiResponse.data));
    }

    /**
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     * Get Scrub IP Ordering Information
     */
    public getOrderDetailWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<GetOrderDetail200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getOrderDetail(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getOrderDetailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     * Get Scrub IP Ordering Information
     */
    public getOrderDetail(_options?: ConfigurationOptions): Observable<GetOrderDetail200Response> {
        return this.getOrderDetailWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<GetOrderDetail200Response>) => apiResponse.data));
    }

    /**
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     * Get Scrub IP Details
     * @param id ScrubIp ID number
     */
    public getScrubIpDetailsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<GetScrubIpDetails200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getScrubIpDetails(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getScrubIpDetailsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     * Get Scrub IP Details
     * @param id ScrubIp ID number
     */
    public getScrubIpDetails(id: number, _options?: ConfigurationOptions): Observable<GetScrubIpDetails200Response> {
        return this.getScrubIpDetailsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<GetScrubIpDetails200Response>) => apiResponse.data));
    }

    /**
     * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
     * List Scrub Filter Types
     */
    public getScrubIpFilterTypesWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ScrubIpFilterTypes>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getScrubIpFilterTypes(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getScrubIpFilterTypesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
     * List Scrub Filter Types
     */
    public getScrubIpFilterTypes(_options?: ConfigurationOptions): Observable<ScrubIpFilterTypes> {
        return this.getScrubIpFilterTypesWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ScrubIpFilterTypes>) => apiResponse.data));
    }

    /**
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     * Get ScrubIp Invoices
     * @param id ScrubIp ID number
     */
    public getScrubIpInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getScrubIpInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getScrubIpInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     * Get ScrubIp Invoices
     * @param id ScrubIp ID number
     */
    public getScrubIpInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getScrubIpInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     * Get Scrub IP Logs
     * @param id Scrub Order ID
     */
    public getScrubIpLogsWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<Array<ScrubIpsLogRowSchema>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getScrubIpLogs(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getScrubIpLogsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     * Get Scrub IP Logs
     * @param id Scrub Order ID
     */
    public getScrubIpLogs(id: string, _options?: ConfigurationOptions): Observable<Array<ScrubIpsLogRowSchema>> {
        return this.getScrubIpLogsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Array<ScrubIpsLogRowSchema>>) => apiResponse.data));
    }

    /**
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     * List Scrub IP Services
     */
    public getScrubIpsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<ScrubIpsRowSchema>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getScrubIpsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getScrubIpsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     * List Scrub IP Services
     */
    public getScrubIpsList(_options?: ConfigurationOptions): Observable<Array<ScrubIpsRowSchema>> {
        return this.getScrubIpsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<ScrubIpsRowSchema>>) => apiResponse.data));
    }

    /**
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     * Place Scrub IP Order
     * @param scrubIpPlaceOrder
     */
    public placeScrubOrderWithHttpInfo(scrubIpPlaceOrder: ScrubIpPlaceOrder, _options?: ConfigurationOptions): Observable<HttpInfo<PlaceScrubOrder201Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.placeScrubOrder(scrubIpPlaceOrder, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.placeScrubOrderWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     * Place Scrub IP Order
     * @param scrubIpPlaceOrder
     */
    public placeScrubOrder(scrubIpPlaceOrder: ScrubIpPlaceOrder, _options?: ConfigurationOptions): Observable<PlaceScrubOrder201Response> {
        return this.placeScrubOrderWithHttpInfo(scrubIpPlaceOrder, _options).pipe(map((apiResponse: HttpInfo<PlaceScrubOrder201Response>) => apiResponse.data));
    }

    /**
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteGeoFirewallRule
     */
    public scrubIpsDeleteGeoRuleWithHttpInfo(id: number, deleteGeoFirewallRule: DeleteGeoFirewallRule, _options?: ConfigurationOptions): Observable<HttpInfo<ScrubIpsDeleteRule200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.scrubIpsDeleteGeoRule(id, deleteGeoFirewallRule, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.scrubIpsDeleteGeoRuleWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Geo Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteGeoFirewallRule
     */
    public scrubIpsDeleteGeoRule(id: number, deleteGeoFirewallRule: DeleteGeoFirewallRule, _options?: ConfigurationOptions): Observable<ScrubIpsDeleteRule200Response> {
        return this.scrubIpsDeleteGeoRuleWithHttpInfo(id, deleteGeoFirewallRule, _options).pipe(map((apiResponse: HttpInfo<ScrubIpsDeleteRule200Response>) => apiResponse.data));
    }

    /**
     * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteFirewallRule
     */
    public scrubIpsDeleteRuleWithHttpInfo(id: number, deleteFirewallRule: DeleteFirewallRule, _options?: ConfigurationOptions): Observable<HttpInfo<ScrubIpsDeleteRule200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.scrubIpsDeleteRule(id, deleteFirewallRule, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.scrubIpsDeleteRuleWithHttpInfo(rsp)));
            }));
    }

    /**
     * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
     * Delete Firewall Rule
     * @param id ScrubIp ID number
     * @param deleteFirewallRule
     */
    public scrubIpsDeleteRule(id: number, deleteFirewallRule: DeleteFirewallRule, _options?: ConfigurationOptions): Observable<ScrubIpsDeleteRule200Response> {
        return this.scrubIpsDeleteRuleWithHttpInfo(id, deleteFirewallRule, _options).pipe(map((apiResponse: HttpInfo<ScrubIpsDeleteRule200Response>) => apiResponse.data));
    }

}

import { ServersApiRequestFactory, ServersApiResponseProcessor} from "../apis/ServersApi";
export class ObservableServersApi {
    private requestFactory: ServersApiRequestFactory;
    private responseProcessor: ServersApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: ServersApiRequestFactory,
        responseProcessor?: ServersApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new ServersApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new ServersApiResponseProcessor();
    }

    /**
     * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
     * Place Server Order
     */
    public addServerWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<AddServer200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addServer(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addServerWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
     * Place Server Order
     */
    public addServer(_options?: ConfigurationOptions): Observable<AddServer200Response> {
        return this.addServerWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<AddServer200Response>) => apiResponse.data));
    }

    /**
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
     * Get Buy Now Server Options
     */
    public buyItNowServerOrderWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<BuyItNowServerOrder200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.buyItNowServerOrder(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.buyItNowServerOrderWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
     * Get Buy Now Server Options
     */
    public buyItNowServerOrder(_options?: ConfigurationOptions): Observable<BuyItNowServerOrder200Response> {
        return this.buyItNowServerOrderWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<BuyItNowServerOrder200Response>) => apiResponse.data));
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServersWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<BuyItNowList>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getMPServers(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getMPServersWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     * List Marketplace Servers
     */
    public getMPServers(_options?: ConfigurationOptions): Observable<BuyItNowList> {
        return this.getMPServersWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<BuyItNowList>) => apiResponse.data));
    }

    /**
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     * Server Ordering Information
     */
    public getNewServerWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServerOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewServer(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewServerWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     * Server Ordering Information
     */
    public getNewServer(_options?: ConfigurationOptions): Observable<ServerOrder> {
        return this.getNewServerWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServerOrder>) => apiResponse.data));
    }

    /**
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     * Get Server Order
     * @param id Server ID number.
     */
    public getServerInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Server>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getServerInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getServerInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     * Get Server Order
     * @param id Server ID number.
     */
    public getServerInfo(id: number, _options?: ConfigurationOptions): Observable<Server> {
        return this.getServerInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Server>) => apiResponse.data));
    }

    /**
     * Returns the billing invoices associated with this dedicated server.
     * Get Server Invoices
     * @param id Server ID number
     */
    public getServerInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getServerInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getServerInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the billing invoices associated with this dedicated server.
     * Get Server Invoices
     * @param id Server ID number
     */
    public getServerInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getServerInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns all dedicated server services on the account with their current status and configuration.
     * List Servers
     */
    public getServerListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<ServerRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getServerList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getServerListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns all dedicated server services on the account with their current status and configuration.
     * List Servers
     */
    public getServerList(_options?: ConfigurationOptions): Observable<Array<ServerRow>> {
        return this.getServerListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<ServerRow>>) => apiResponse.data));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Reverse DNS Info
     * @param id Server ID number
     */
    public getServerReverseDnsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ReverseDnsEntries>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getServerReverseDns(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getServerReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Reverse DNS Info
     * @param id Server ID number
     */
    public getServerReverseDns(id: number, _options?: ConfigurationOptions): Observable<ReverseDnsEntries> {
        return this.getServerReverseDnsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ReverseDnsEntries>) => apiResponse.data));
    }

    /**
     * Resends the welcome email for the order.
     * Resend Server Welcome Email
     * @param id Server ID number
     */
    public getServersWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getServersWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getServersWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email for the order.
     * Resend Server Welcome Email
     * @param id Server ID number
     */
    public getServersWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getServersWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
     * Place Buy Now Server Order
     * @param [placeBuyNowServerRequest]
     */
    public placeBuyNowServerWithHttpInfo(placeBuyNowServerRequest?: PlaceBuyNowServerRequest, _options?: ConfigurationOptions): Observable<HttpInfo<ServersBuyNowResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.placeBuyNowServer(placeBuyNowServerRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.placeBuyNowServerWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
     * Place Buy Now Server Order
     * @param [placeBuyNowServerRequest]
     */
    public placeBuyNowServer(placeBuyNowServerRequest?: PlaceBuyNowServerRequest, _options?: ConfigurationOptions): Observable<ServersBuyNowResponse> {
        return this.placeBuyNowServerWithHttpInfo(placeBuyNowServerRequest, _options).pipe(map((apiResponse: HttpInfo<ServersBuyNowResponse>) => apiResponse.data));
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Update Reverse DNS
     * @param id Server ID number
     * @param reverseDnsEntries
     */
    public postServerReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postServerReverseDns(id, reverseDnsEntries, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postServerReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the server\'s IP addresses.
     * Update Reverse DNS
     * @param id Server ID number
     * @param reverseDnsEntries
     */
    public postServerReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.postServerReverseDnsWithHttpInfo(id, reverseDnsEntries, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Server Order
     */
    public putServersWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putServers(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putServersWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     * Validate Server Order
     */
    public putServers(_options?: ConfigurationOptions): Observable<void> {
        return this.putServersWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns the current IPMI live connection information for the server.
     * Server IPMI Live Information
     * @param id Server ID number
     */
    public serverIpmiLiveGetWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ServerIpmiLiveInfo>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.serverIpmiLiveGet(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.serverIpmiLiveGetWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current IPMI live connection information for the server.
     * Server IPMI Live Information
     * @param id Server ID number
     */
    public serverIpmiLiveGet(id: number, _options?: ConfigurationOptions): Observable<ServerIpmiLiveInfo> {
        return this.serverIpmiLiveGetWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ServerIpmiLiveInfo>) => apiResponse.data));
    }

    /**
     * Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.
     * Server IPMI Live Setup
     * @param id Server ID number
     * @param ip Your IP Address you wish to connect to the IPMI system from.
     * @param [asset] Asset ID
     */
    public serverIpmiLivePostWithHttpInfo(id: number, ip: string, asset?: number, _options?: ConfigurationOptions): Observable<HttpInfo<ServerIpmiLiveInfo>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.serverIpmiLivePost(id, ip, asset, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.serverIpmiLivePostWithHttpInfo(rsp)));
            }));
    }

    /**
     * Configures IPMI live access by whitelisting your current IP address for connections to the server\'s IPMI management interface.
     * Server IPMI Live Setup
     * @param id Server ID number
     * @param ip Your IP Address you wish to connect to the IPMI system from.
     * @param [asset] Asset ID
     */
    public serverIpmiLivePost(id: number, ip: string, asset?: number, _options?: ConfigurationOptions): Observable<ServerIpmiLiveInfo> {
        return this.serverIpmiLivePostWithHttpInfo(id, ip, asset, _options).pipe(map((apiResponse: HttpInfo<ServerIpmiLiveInfo>) => apiResponse.data));
    }

    /**
     * Returns the chassis power status from ipmi.
     * Get IPMI Power Status
     * @param id Server ID number
     */
    public serverIpmiPowerGetWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.serverIpmiPowerGet(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.serverIpmiPowerGetWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the chassis power status from ipmi.
     * Get IPMI Power Status
     * @param id Server ID number
     */
    public serverIpmiPowerGet(id: number, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.serverIpmiPowerGetWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Uses the IPMI interface to set the Power status on the server.
     * Server IPMI Power
     * @param id Server ID number
     * @param action The power action to send to the ipmi controller.
     * @param [asset] The Asset ID
     */
    public serverIpmiPowerPostWithHttpInfo(id: number, action: string, asset?: number, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.serverIpmiPowerPost(id, action, asset, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.serverIpmiPowerPostWithHttpInfo(rsp)));
            }));
    }

    /**
     * Uses the IPMI interface to set the Power status on the server.
     * Server IPMI Power
     * @param id Server ID number
     * @param action The power action to send to the ipmi controller.
     * @param [asset] The Asset ID
     */
    public serverIpmiPowerPost(id: number, action: string, asset?: number, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.serverIpmiPowerPostWithHttpInfo(id, action, asset, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel Server Service
     * @param id Server ID number
     */
    public serversCancelWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ServersCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.serversCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.serversCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel Server Service
     * @param id Server ID number
     */
    public serversCancel(id: number, _options?: ConfigurationOptions): Observable<ServersCancel200Response> {
        return this.serversCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ServersCancel200Response>) => apiResponse.data));
    }

    /**
     * Updates settings on a dedicated server order.
     * Update Server Order
     * @param id Server ID number.
     */
    public updateServerInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateServerInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateServerInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates settings on a dedicated server order.
     * Update Server Order
     * @param id Server ID number.
     */
    public updateServerInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateServerInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

}

import { TicketsApiRequestFactory, TicketsApiResponseProcessor} from "../apis/TicketsApi";
export class ObservableTicketsApi {
    private requestFactory: TicketsApiRequestFactory;
    private responseProcessor: TicketsApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: TicketsApiRequestFactory,
        responseProcessor?: TicketsApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new TicketsApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new TicketsApiResponseProcessor();
    }

    /**
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     * Create New Ticket
     * @param ticketNew
     */
    public addNewTicketWithHttpInfo(ticketNew: TicketNew, _options?: ConfigurationOptions): Observable<HttpInfo<TicketNewResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addNewTicket(ticketNew, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addNewTicketWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     * Create New Ticket
     * @param ticketNew
     */
    public addNewTicket(ticketNew: TicketNew, _options?: ConfigurationOptions): Observable<TicketNewResponse> {
        return this.addNewTicketWithHttpInfo(ticketNew, _options).pipe(map((apiResponse: HttpInfo<TicketNewResponse>) => apiResponse.data));
    }

    /**
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     * Close Ticket
     * @param id Ticket ID
     */
    public closeTicketWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<CloseTicketResponseSchema>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.closeTicket(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.closeTicketWithHttpInfo(rsp)));
            }));
    }

    /**
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     * Close Ticket
     * @param id Ticket ID
     */
    public closeTicket(id: string, _options?: ConfigurationOptions): Observable<CloseTicketResponseSchema> {
        return this.closeTicketWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<CloseTicketResponseSchema>) => apiResponse.data));
    }

    /**
     * Closes the support ticket.
     * Close Ticket
     * @param id Ticket ID number.
     */
    public deleteTicketInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ViewTicketResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteTicketInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteTicketInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Closes the support ticket.
     * Close Ticket
     * @param id Ticket ID number.
     */
    public deleteTicketInfo(id: number, _options?: ConfigurationOptions): Observable<ViewTicketResponse> {
        return this.deleteTicketInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ViewTicketResponse>) => apiResponse.data));
    }

    /**
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     * Gets Information for creating a new ticket.
     */
    public getNewTicketWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewTicket(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewTicketWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     * Gets Information for creating a new ticket.
     */
    public getNewTicket(_options?: ConfigurationOptions): Observable<void> {
        return this.getNewTicketWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns the full details of a support ticket including its history of replies.
     * Get Ticket Information
     * @param id Ticket ID number.
     */
    public getTicketInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ViewTicketResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getTicketInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getTicketInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the full details of a support ticket including its history of replies.
     * Get Ticket Information
     * @param id Ticket ID number.
     */
    public getTicketInfo(id: number, _options?: ConfigurationOptions): Observable<ViewTicketResponse> {
        return this.getTicketInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ViewTicketResponse>) => apiResponse.data));
    }

    /**
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     * List Support Tickets
     * @param [page] Page number for paginated results.
     * @param [period] How far back to show tickets from. Value is in days.
     * @param [view] The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
     */
    public getTicketsListWithHttpInfo(page?: number, period?: '30' | '90' | '365' | '1825' | 'all', view?: 'Open' | 'Closed' | 'On Hold' | 'In Progress', _options?: ConfigurationOptions): Observable<HttpInfo<Tickets>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getTicketsList(page, period, view, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getTicketsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     * List Support Tickets
     * @param [page] Page number for paginated results.
     * @param [period] How far back to show tickets from. Value is in days.
     * @param [view] The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
     */
    public getTicketsList(page?: number, period?: '30' | '90' | '365' | '1825' | 'all', view?: 'Open' | 'Closed' | 'On Hold' | 'In Progress', _options?: ConfigurationOptions): Observable<Tickets> {
        return this.getTicketsListWithHttpInfo(page, period, view, _options).pipe(map((apiResponse: HttpInfo<Tickets>) => apiResponse.data));
    }

    /**
     * Adds a reply to an existing support ticket.
     * Reply To Ticket
     * @param id Ticket ID number.
     */
    public postTicketInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ViewTicketResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postTicketInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postTicketInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Adds a reply to an existing support ticket.
     * Reply To Ticket
     * @param id Ticket ID number.
     */
    public postTicketInfo(id: number, _options?: ConfigurationOptions): Observable<ViewTicketResponse> {
        return this.postTicketInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ViewTicketResponse>) => apiResponse.data));
    }

    /**
     * Searches support tickets by email, subject, or ticket mask ID.
     * Search Support Tickets
     */
    public postTicketsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Tickets>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postTicketsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postTicketsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Searches support tickets by email, subject, or ticket mask ID.
     * Search Support Tickets
     */
    public postTicketsList(_options?: ConfigurationOptions): Observable<Tickets> {
        return this.postTicketsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Tickets>) => apiResponse.data));
    }

    /**
     * Updates a support ticket\'s properties such as subject or status.
     * Update Ticket
     * @param id Ticket ID number.
     */
    public putTicketInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ViewTicketResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putTicketInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putTicketInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates a support ticket\'s properties such as subject or status.
     * Update Ticket
     * @param id Ticket ID number.
     */
    public putTicketInfo(id: number, _options?: ConfigurationOptions): Observable<ViewTicketResponse> {
        return this.putTicketInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ViewTicketResponse>) => apiResponse.data));
    }

    /**
     * Posts a reply to an existing support ticket thread.
     * Reply Ticket
     * @param id The ticket ID number.
     * @param [replyTicketRequest]
     */
    public replyTicketWithHttpInfo(id: number, replyTicketRequest?: ReplyTicketRequest, _options?: ConfigurationOptions): Observable<HttpInfo<ReplyTicketResponseSchema>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.replyTicket(id, replyTicketRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.replyTicketWithHttpInfo(rsp)));
            }));
    }

    /**
     * Posts a reply to an existing support ticket thread.
     * Reply Ticket
     * @param id The ticket ID number.
     * @param [replyTicketRequest]
     */
    public replyTicket(id: number, replyTicketRequest?: ReplyTicketRequest, _options?: ConfigurationOptions): Observable<ReplyTicketResponseSchema> {
        return this.replyTicketWithHttpInfo(id, replyTicketRequest, _options).pipe(map((apiResponse: HttpInfo<ReplyTicketResponseSchema>) => apiResponse.data));
    }

    /**
     * Updates a support ticket\'s subject or body content.
     * Update Ticket
     * @param id The ticket ID number.
     * @param [updateTicket]
     */
    public updateTicketInfoWithHttpInfo(id: number, updateTicket?: UpdateTicket, _options?: ConfigurationOptions): Observable<HttpInfo<UpdateTicketResponseSchema>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateTicketInfo(id, updateTicket, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateTicketInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates a support ticket\'s subject or body content.
     * Update Ticket
     * @param id The ticket ID number.
     * @param [updateTicket]
     */
    public updateTicketInfo(id: number, updateTicket?: UpdateTicket, _options?: ConfigurationOptions): Observable<UpdateTicketResponseSchema> {
        return this.updateTicketInfoWithHttpInfo(id, updateTicket, _options).pipe(map((apiResponse: HttpInfo<UpdateTicketResponseSchema>) => apiResponse.data));
    }

}

import { VPSApiRequestFactory, VPSApiResponseProcessor} from "../apis/VPSApi";
export class ObservableVPSApi {
    private requestFactory: VPSApiRequestFactory;
    private responseProcessor: VPSApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: VPSApiRequestFactory,
        responseProcessor?: VPSApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new VPSApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new VPSApiResponseProcessor();
    }

    /**
     * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
     * Place VPS Order
     * @param [vpsOrderPostRequest]
     */
    public addVpsWithHttpInfo(vpsOrderPostRequest?: VpsOrderPostRequest, _options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addVps(vpsOrderPostRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addVpsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
     * Place VPS Order
     * @param [vpsOrderPostRequest]
     */
    public addVps(vpsOrderPostRequest?: VpsOrderPostRequest, _options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addVpsWithHttpInfo(vpsOrderPostRequest, _options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
     * Delete VPS Backup
     * @param id VPS ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public deleteVpsBackupWithHttpInfo(id: number, file: string, all?: '0' | '1', _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.deleteVpsBackup(id, file, all, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.deleteVpsBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
     * Delete VPS Backup
     * @param id VPS ID number
     * @param file The backup filename to delete.
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public deleteVpsBackup(id: number, file: string, all?: '0' | '1', _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.deleteVpsBackupWithHttpInfo(id, file, all, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     * Blocks SMTP
     * @param id VPS ID number.
     */
    public doVpsBlockSmtpWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsBlockSmtp(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsBlockSmtpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     * Blocks SMTP
     * @param id VPS ID number.
     */
    public doVpsBlockSmtp(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsBlockSmtpWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Disables the virtual CD drive on the VPS.
     * Disable CD Drive
     * @param id VPS ID number.
     */
    public doVpsDisableCdWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsDisableCd(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsDisableCdWithHttpInfo(rsp)));
            }));
    }

    /**
     * Disables the virtual CD drive on the VPS.
     * Disable CD Drive
     * @param id VPS ID number.
     */
    public doVpsDisableCd(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsDisableCdWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Disables disk quota enforcement on the VPS.
     * Disable Quotas
     * @param id VPS ID number.
     */
    public doVpsDisableQuotaWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsDisableQuota(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsDisableQuotaWithHttpInfo(rsp)));
            }));
    }

    /**
     * Disables disk quota enforcement on the VPS.
     * Disable Quotas
     * @param id VPS ID number.
     */
    public doVpsDisableQuota(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsDisableQuotaWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Ejects the virtual CD from the VPS CD drive.
     * Eject CD Drive
     * @param id VPS ID number.
     */
    public doVpsEjectCdWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsEjectCd(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsEjectCdWithHttpInfo(rsp)));
            }));
    }

    /**
     * Ejects the virtual CD from the VPS CD drive.
     * Eject CD Drive
     * @param id VPS ID number.
     */
    public doVpsEjectCd(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsEjectCdWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Enables disk quota enforcement on the VPS.
     * Enable Quotas
     * @param id VPS ID number.
     */
    public doVpsEnableQuotaWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsEnableQuota(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsEnableQuotaWithHttpInfo(rsp)));
            }));
    }

    /**
     * Enables disk quota enforcement on the VPS.
     * Enable Quotas
     * @param id VPS ID number.
     */
    public doVpsEnableQuota(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsEnableQuotaWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Restarts the VPS.
     * Restart VPS
     * @param id VPS ID number.
     */
    public doVpsRestartWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsRestart(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsRestartWithHttpInfo(rsp)));
            }));
    }

    /**
     * Restarts the VPS.
     * Restart VPS
     * @param id VPS ID number.
     */
    public doVpsRestart(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsRestartWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Powers on the VPS.
     * Start VPS
     * @param id VPS ID number.
     */
    public doVpsStartWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsStart(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsStartWithHttpInfo(rsp)));
            }));
    }

    /**
     * Powers on the VPS.
     * Start VPS
     * @param id VPS ID number.
     */
    public doVpsStart(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsStartWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Powers off the VPS.
     * Stop VPS
     * @param id VPS ID number.
     */
    public doVpsStopWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.doVpsStop(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.doVpsStopWithHttpInfo(rsp)));
            }));
    }

    /**
     * Powers off the VPS.
     * Stop VPS
     * @param id VPS ID number.
     */
    public doVpsStop(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.doVpsStopWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
     * Download VPS Backup
     * @param id VPS ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public downloadVpsBackupWithHttpInfo(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: ConfigurationOptions): Observable<HttpInfo<DownloadQsBackup200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.downloadVpsBackup(id, downloadQsBackupRequest, all, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.downloadVpsBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
     * Download VPS Backup
     * @param id VPS ID number
     * @param downloadQsBackupRequest
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public downloadVpsBackup(id: number, downloadQsBackupRequest: DownloadQsBackupRequest, all?: '0' | '1', _options?: ConfigurationOptions): Observable<DownloadQsBackup200Response> {
        return this.downloadVpsBackupWithHttpInfo(id, downloadQsBackupRequest, all, _options).pipe(map((apiResponse: HttpInfo<DownloadQsBackup200Response>) => apiResponse.data));
    }

    /**
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     * VPS Ordering Information
     */
    public getNewVpsWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<VpsOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewVps(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewVpsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     * VPS Ordering Information
     */
    public getNewVps(_options?: ConfigurationOptions): Observable<VpsOrder> {
        return this.getNewVpsWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<VpsOrder>) => apiResponse.data));
    }

    /**
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
     * Get VPS Backups List
     * @param id VPS ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public getVpsBackupsWithHttpInfo(id: number, all?: '0' | '1', _options?: ConfigurationOptions): Observable<HttpInfo<VpsBackupRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsBackups(id, all, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsBackupsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
     * Get VPS Backups List
     * @param id VPS ID number
     * @param [all] Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
     */
    public getVpsBackups(id: number, all?: '0' | '1', _options?: ConfigurationOptions): Observable<VpsBackupRows> {
        return this.getVpsBackupsWithHttpInfo(id, all, _options).pipe(map((apiResponse: HttpInfo<VpsBackupRows>) => apiResponse.data));
    }

    /**
     * Returns available hard drive space addon options and pricing for the VPS.
     * HD Space Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyHdSpaceWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsBuyHdSpace(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsBuyHdSpaceWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns available hard drive space addon options and pricing for the VPS.
     * HD Space Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyHdSpace(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getVpsBuyHdSpaceWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns available additional IP address options and pricing for the VPS.
     * Additional IP Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyIpWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsBuyIp(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsBuyIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns available additional IP address options and pricing for the VPS.
     * Additional IP Addon Info
     * @param id VPS ID number
     */
    public getVpsBuyIp(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getVpsBuyIpWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns the list of available timezones that can be set on the VPS.
     * Get Timezone Info
     * @param id VPS ID number
     */
    public getVpsChangeTimezoneWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Array<string>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsChangeTimezone(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsChangeTimezoneWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the list of available timezones that can be set on the VPS.
     * Get Timezone Info
     * @param id VPS ID number
     */
    public getVpsChangeTimezone(id: number, _options?: ConfigurationOptions): Observable<Array<string>> {
        return this.getVpsChangeTimezoneWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Array<string>>) => apiResponse.data));
    }

    /**
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     * Get VPS Order
     * @param id VPS ID number
     */
    public getVpsInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Vps>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     * Get VPS Order
     * @param id VPS ID number
     */
    public getVpsInfo(id: number, _options?: ConfigurationOptions): Observable<Vps> {
        return this.getVpsInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Vps>) => apiResponse.data));
    }

    /**
     * Returns the billing invoices associated with this VPS.
     * Get VPS Invoices
     * @param id VPS ID number
     */
    public getVpsInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the billing invoices associated with this VPS.
     * Get VPS Invoices
     * @param id VPS ID number
     */
    public getVpsInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getVpsInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Returns all VPS services on the account with their current status and configuration.
     * List VPS Orders
     */
    public getVpsListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<VpsRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns all VPS services on the account with their current status and configuration.
     * List VPS Orders
     */
    public getVpsList(_options?: ConfigurationOptions): Observable<Array<VpsRow>> {
        return this.getVpsListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<VpsRow>>) => apiResponse.data));
    }

    /**
     * Returns the list of available OS templates for reinstalling the VPS.
     * VPS Reinstall OS Options
     * @param id VPS ID number
     */
    public getVpsReinstallOsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<VpsTemplatesList>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsReinstallOs(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsReinstallOsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the list of available OS templates for reinstalling the VPS.
     * VPS Reinstall OS Options
     * @param id VPS ID number
     */
    public getVpsReinstallOs(id: number, _options?: ConfigurationOptions): Observable<VpsTemplatesList> {
        return this.getVpsReinstallOsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<VpsTemplatesList>) => apiResponse.data));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     * Reverse DNS Info
     * @param id VPS ID number
     */
    public getVpsReverseDnsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ReverseDnsEntries>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsReverseDns(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     * Reverse DNS Info
     * @param id VPS ID number
     */
    public getVpsReverseDns(id: number, _options?: ConfigurationOptions): Observable<ReverseDnsEntries> {
        return this.getVpsReverseDnsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ReverseDnsEntries>) => apiResponse.data));
    }

    /**
     * Returns the current VNC connection information for the VPS.
     * VNC Setup Info
     * @param id VPS ID number
     */
    public getVpsSetupVncWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsSetupVnc(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsSetupVncWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current VNC connection information for the VPS.
     * VNC Setup Info
     * @param id VPS ID number
     */
    public getVpsSetupVnc(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getVpsSetupVncWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns available slice upgrade options and pricing for the VPS.
     * Slice Upgrade Info
     * @param id VPS ID number
     */
    public getVpsSlicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsSlices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsSlicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns available slice upgrade options and pricing for the VPS.
     * Slice Upgrade Info
     * @param id VPS ID number
     */
    public getVpsSlices(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getVpsSlicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Returns bandwidth traffic usage data for the VPS.
     * Get Traffic Usage
     * @param id VPS ID number
     */
    public getVpsTrafficUsageWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<VpsTrafficResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsTrafficUsage(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsTrafficUsageWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns bandwidth traffic usage data for the VPS.
     * Get Traffic Usage
     * @param id VPS ID number
     */
    public getVpsTrafficUsage(id: number, _options?: ConfigurationOptions): Observable<VpsTrafficResponse> {
        return this.getVpsTrafficUsageWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<VpsTrafficResponse>) => apiResponse.data));
    }

    /**
     * Returns remote desktop connection information for the VPS.
     * Get View Desktop Info
     * @param id VPS ID number
     */
    public getVpsViewDesktopWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsViewDesktop(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsViewDesktopWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns remote desktop connection information for the VPS.
     * Get View Desktop Info
     * @param id VPS ID number
     */
    public getVpsViewDesktop(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.getVpsViewDesktopWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Resends the welcome email containing connection details and credentials for the VPS order.
     * Resend VPS Welcome Email
     * @param id VPS ID
     */
    public getVpsWelcomeEmailWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getVpsWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getVpsWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email containing connection details and credentials for the VPS order.
     * Resend VPS Welcome Email
     * @param id VPS ID
     */
    public getVpsWelcomeEmail(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getVpsWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     * Start a VPS Backup
     * @param id VPS ID number
     */
    public postVpsBackupWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsBackup(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsBackupWithHttpInfo(rsp)));
            }));
    }

    /**
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     * Start a VPS Backup
     * @param id VPS ID number
     */
    public postVpsBackup(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsBackupWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Purchases additional hard drive space for the VPS.
     * Purchase HD Space Addon
     * @param id VPS ID number
     */
    public postVpsBuyHdSpaceWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsBuyHdSpace(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsBuyHdSpaceWithHttpInfo(rsp)));
            }));
    }

    /**
     * Purchases additional hard drive space for the VPS.
     * Purchase HD Space Addon
     * @param id VPS ID number
     */
    public postVpsBuyHdSpace(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.postVpsBuyHdSpaceWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Purchases an additional IP address for the VPS.
     * Purchase Additional IP
     * @param id VPS ID number
     */
    public postVpsBuyIpWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsBuyIp(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsBuyIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Purchases an additional IP address for the VPS.
     * Purchase Additional IP
     * @param id VPS ID number
     */
    public postVpsBuyIp(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.postVpsBuyIpWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Changes the hostname of the VPS. This queues a background task to update the server.
     * Update VPS Hostname
     * @param id VPS ID number
     * @param [hostname]
     */
    public postVpsChangeHostnameWithHttpInfo(id: number, hostname?: string, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsChangeHostname(id, hostname, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsChangeHostnameWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the hostname of the VPS. This queues a background task to update the server.
     * Update VPS Hostname
     * @param id VPS ID number
     * @param [hostname]
     */
    public postVpsChangeHostname(id: number, hostname?: string, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsChangeHostnameWithHttpInfo(id, hostname, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Changes the root password of the VPS.
     * Change VPS Root Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeRootPasswordWithHttpInfo(id: number, password: string, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsChangeRootPassword(id, password, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsChangeRootPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the root password of the VPS.
     * Change VPS Root Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeRootPassword(id: number, password: string, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsChangeRootPasswordWithHttpInfo(id, password, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Changes the system timezone on the VPS.
     * Change VPS Timezone
     * @param id VPS ID number
     * @param timezone The time zone
     */
    public postVpsChangeTimezoneWithHttpInfo(id: number, timezone: string, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsChangeTimezone(id, timezone, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsChangeTimezoneWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the system timezone on the VPS.
     * Change VPS Timezone
     * @param id VPS ID number
     * @param timezone The time zone
     */
    public postVpsChangeTimezone(id: number, timezone: string, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsChangeTimezoneWithHttpInfo(id, timezone, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Changes the Webuzo control panel password on the VPS.
     * Change Webuzo Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeWebuzoPasswordWithHttpInfo(id: number, password: string, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsChangeWebuzoPassword(id, password, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsChangeWebuzoPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Changes the Webuzo control panel password on the VPS.
     * Change Webuzo Password
     * @param id VPS ID number
     * @param password
     */
    public postVpsChangeWebuzoPassword(id: number, password: string, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsChangeWebuzoPasswordWithHttpInfo(id, password, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     * Insert CD in VPS
     * @param id VPS ID number
     * @param [url]
     */
    public postVpsInsertCdWithHttpInfo(id: number, url?: string, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsInsertCd(id, url, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsInsertCdWithHttpInfo(rsp)));
            }));
    }

    /**
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     * Insert CD in VPS
     * @param id VPS ID number
     * @param [url]
     */
    public postVpsInsertCd(id: number, url?: string, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsInsertCdWithHttpInfo(id, url, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     * Reinstall VPS OS
     * @param id VPS ID number
     * @param template OS Template Filename
     * @param localPassword Password for this account.
     * @param [password] Password for Root / Administrator Account.
     */
    public postVpsReinstallOsWithHttpInfo(id: number, template: string, localPassword: string, password?: string, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsReinstallOs(id, template, localPassword, password, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsReinstallOsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     * Reinstall VPS OS
     * @param id VPS ID number
     * @param template OS Template Filename
     * @param localPassword Password for this account.
     * @param [password] Password for Root / Administrator Account.
     */
    public postVpsReinstallOs(id: number, template: string, localPassword: string, password?: string, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsReinstallOsWithHttpInfo(id, template, localPassword, password, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Resets the root password on the VPS to a new randomly generated password.
     * Reset VPS Password
     * @param id VPS ID number
     */
    public postVpsResetPasswordWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsResetPassword(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsResetPasswordWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resets the root password on the VPS to a new randomly generated password.
     * Reset VPS Password
     * @param id VPS ID number
     */
    public postVpsResetPassword(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsResetPasswordWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
     * Restore VPS from Backup
     * @param id VPS ID number
     * @param restoreRequest VPS Restore request
     */
    public postVpsRestoreWithHttpInfo(id: number, restoreRequest: RestoreRequest, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsRestore(id, restoreRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsRestoreWithHttpInfo(rsp)));
            }));
    }

    /**
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
     * Restore VPS from Backup
     * @param id VPS ID number
     * @param restoreRequest VPS Restore request
     */
    public postVpsRestore(id: number, restoreRequest: RestoreRequest, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsRestoreWithHttpInfo(id, restoreRequest, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     * Update Reverse DNS
     * @param id VPS ID number
     * @param reverseDnsEntries
     */
    public postVpsReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsReverseDns(id, reverseDnsEntries, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     * Update Reverse DNS
     * @param id VPS ID number
     * @param reverseDnsEntries
     */
    public postVpsReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.postVpsReverseDnsWithHttpInfo(id, reverseDnsEntries, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Sets up or refreshes the VNC console connection for the VPS.
     * Setup VNC
     * @param id VPS ID number
     */
    public postVpsSetupVncWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<QueueResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsSetupVnc(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsSetupVncWithHttpInfo(rsp)));
            }));
    }

    /**
     * Sets up or refreshes the VNC console connection for the VPS.
     * Setup VNC
     * @param id VPS ID number
     */
    public postVpsSetupVnc(id: number, _options?: ConfigurationOptions): Observable<QueueResponse> {
        return this.postVpsSetupVncWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<QueueResponse>) => apiResponse.data));
    }

    /**
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     * Purchase Slice Upgrade
     * @param id VPS ID number
     */
    public postVpsSlicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsSlices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsSlicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     * Purchase Slice Upgrade
     * @param id VPS ID number
     */
    public postVpsSlices(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.postVpsSlicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Updates or refreshes the remote desktop session for the VPS.
     * Update View Desktop
     * @param id VPS ID number
     */
    public postVpsViewDesktopWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postVpsViewDesktop(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postVpsViewDesktopWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates or refreshes the remote desktop session for the VPS.
     * Update View Desktop
     * @param id VPS ID number
     */
    public postVpsViewDesktop(id: number, _options?: ConfigurationOptions): Observable<void> {
        return this.postVpsViewDesktopWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     * Validate VPS Order
     * @param [vpsOrderPutRequest]
     */
    public putVpsWithHttpInfo(vpsOrderPutRequest?: VpsOrderPutRequest, _options?: ConfigurationOptions): Observable<HttpInfo<VpsOrderPutResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putVps(vpsOrderPutRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putVpsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     * Validate VPS Order
     * @param [vpsOrderPutRequest]
     */
    public putVps(vpsOrderPutRequest?: VpsOrderPutRequest, _options?: ConfigurationOptions): Observable<VpsOrderPutResponse> {
        return this.putVpsWithHttpInfo(vpsOrderPutRequest, _options).pipe(map((apiResponse: HttpInfo<VpsOrderPutResponse>) => apiResponse.data));
    }

    /**
     * Updates settings on a VPS order.
     * Update VPS Order
     * @param id VPS ID number.
     */
    public updateVpsInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateVpsInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateVpsInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates settings on a VPS order.
     * Update VPS Order
     * @param id VPS ID number.
     */
    public updateVpsInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateVpsInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel VPS Service
     * @param id VPS ID number
     */
    public vPSCancelWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<VPSCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.vPSCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.vPSCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     * Cancel VPS Service
     * @param id VPS ID number
     */
    public vPSCancel(id: number, _options?: ConfigurationOptions): Observable<VPSCancel200Response> {
        return this.vPSCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<VPSCancel200Response>) => apiResponse.data));
    }

}

import { WebhostingApiRequestFactory, WebhostingApiResponseProcessor} from "../apis/WebhostingApi";
export class ObservableWebhostingApi {
    private requestFactory: WebhostingApiRequestFactory;
    private responseProcessor: WebhostingApiResponseProcessor;
    private configuration: Configuration;

    public constructor(
        configuration: Configuration,
        requestFactory?: WebhostingApiRequestFactory,
        responseProcessor?: WebhostingApiResponseProcessor
    ) {
        this.configuration = configuration;
        this.requestFactory = requestFactory || new WebhostingApiRequestFactory(configuration);
        this.responseProcessor = responseProcessor || new WebhostingApiResponseProcessor();
    }

    /**
     * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
     * Place Website Order
     */
    public addWebsiteWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<ServiceOrderPostResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.addWebsite(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.addWebsiteWithHttpInfo(rsp)));
            }));
    }

    /**
     * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
     * Place Website Order
     */
    public addWebsite(_options?: ConfigurationOptions): Observable<ServiceOrderPostResponse> {
        return this.addWebsiteWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<ServiceOrderPostResponse>) => apiResponse.data));
    }

    /**
     * Retrieves available webhosting plans and pricing for ordering.
     * Website Ordering Information
     */
    public getNewWebsiteWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<WebsitesOrder>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getNewWebsite(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getNewWebsiteWithHttpInfo(rsp)));
            }));
    }

    /**
     * Retrieves available webhosting plans and pricing for ordering.
     * Website Ordering Information
     */
    public getNewWebsite(_options?: ConfigurationOptions): Observable<WebsitesOrder> {
        return this.getNewWebsiteWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<WebsitesOrder>) => apiResponse.data));
    }

    /**
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
     * Get Website IP Information
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteBuyIpWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<GetWebsiteBuyIp200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getWebsiteBuyIp(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getWebsiteBuyIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
     * Get Website IP Information
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteBuyIp(id: number, _options?: ConfigurationOptions): Observable<GetWebsiteBuyIp200Response> {
        return this.getWebsiteBuyIpWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<GetWebsiteBuyIp200Response>) => apiResponse.data));
    }

    /**
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     * Get Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInfoWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<Website>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getWebsiteInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getWebsiteInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     * Get Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInfo(id: number, _options?: ConfigurationOptions): Observable<Website> {
        return this.getWebsiteInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<Website>) => apiResponse.data));
    }

    /**
     * Returns the billing invoices associated with this webhosting service.
     * Get Website Invoices
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInvoicesWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ChargeInvoiceRows>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getWebsiteInvoices(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getWebsiteInvoicesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the billing invoices associated with this webhosting service.
     * Get Website Invoices
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsiteInvoices(id: number, _options?: ConfigurationOptions): Observable<ChargeInvoiceRows> {
        return this.getWebsiteInvoicesWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ChargeInvoiceRows>) => apiResponse.data));
    }

    /**
     * Gets a listing of your webhosting orders and service details.
     * Get Website Listing
     */
    public getWebsiteListWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<Array<WebsiteRow>>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getWebsiteList(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getWebsiteListWithHttpInfo(rsp)));
            }));
    }

    /**
     * Gets a listing of your webhosting orders and service details.
     * Get Website Listing
     */
    public getWebsiteList(_options?: ConfigurationOptions): Observable<Array<WebsiteRow>> {
        return this.getWebsiteListWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<Array<WebsiteRow>>) => apiResponse.data));
    }

    /**
     * Gets a list of the backups that exist for a website and their sizes.
     * Get Website Backups
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesBackupsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<WebsiteBackups>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getWebsitesBackups(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getWebsitesBackupsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Gets a list of the backups that exist for a website and their sizes.
     * Get Website Backups
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesBackups(id: number, _options?: ConfigurationOptions): Observable<WebsiteBackups> {
        return this.getWebsitesBackupsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<WebsiteBackups>) => apiResponse.data));
    }

    /**
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     * Hosting Panel Auto Login
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesLoginWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<WebsiteLoginResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getWebsitesLogin(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getWebsitesLoginWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     * Hosting Panel Auto Login
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesLogin(id: number, _options?: ConfigurationOptions): Observable<WebsiteLoginResponse> {
        return this.getWebsitesLoginWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<WebsiteLoginResponse>) => apiResponse.data));
    }

    /**
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     * Resend Website Welcome Email
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesWelcomeEmailWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.getWebsitesWelcomeEmail(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.getWebsitesWelcomeEmailWithHttpInfo(rsp)));
            }));
    }

    /**
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     * Resend Website Welcome Email
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public getWebsitesWelcomeEmail(id: number, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.getWebsitesWelcomeEmailWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.
     * Get Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public gettWebsiteReverseDnsWithHttpInfo(id: number, _options?: ConfigurationOptions): Observable<HttpInfo<ReverseDnsEntries>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.gettWebsiteReverseDns(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.gettWebsiteReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Returns the current reverse DNS (PTR record) entries for the website\'s IP addresses.
     * Get Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public gettWebsiteReverseDns(id: number, _options?: ConfigurationOptions): Observable<ReverseDnsEntries> {
        return this.gettWebsiteReverseDnsWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<ReverseDnsEntries>) => apiResponse.data));
    }

    /**
     * Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
     * Update Website IP DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteBuyIpRequest
     */
    public postWebsiteBuyIpWithHttpInfo(id: number, postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest, _options?: ConfigurationOptions): Observable<HttpInfo<PostWebsiteBuyIp200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postWebsiteBuyIp(id, postWebsiteBuyIpRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postWebsiteBuyIpWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the reverse DNS hostnames for the website\'s IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
     * Update Website IP DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteBuyIpRequest
     */
    public postWebsiteBuyIp(id: number, postWebsiteBuyIpRequest: PostWebsiteBuyIpRequest, _options?: ConfigurationOptions): Observable<PostWebsiteBuyIp200Response> {
        return this.postWebsiteBuyIpWithHttpInfo(id, postWebsiteBuyIpRequest, _options).pipe(map((apiResponse: HttpInfo<PostWebsiteBuyIp200Response>) => apiResponse.data));
    }

    /**
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
     * Request Website Migration
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteMigrationRequest
     */
    public postWebsiteMigrationWithHttpInfo(id: number, postWebsiteMigrationRequest: PostWebsiteMigrationRequest, _options?: ConfigurationOptions): Observable<HttpInfo<PostWebsiteMigration200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postWebsiteMigration(id, postWebsiteMigrationRequest, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postWebsiteMigrationWithHttpInfo(rsp)));
            }));
    }

    /**
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
     * Request Website Migration
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param postWebsiteMigrationRequest
     */
    public postWebsiteMigration(id: number, postWebsiteMigrationRequest: PostWebsiteMigrationRequest, _options?: ConfigurationOptions): Observable<PostWebsiteMigration200Response> {
        return this.postWebsiteMigrationWithHttpInfo(id, postWebsiteMigrationRequest, _options).pipe(map((apiResponse: HttpInfo<PostWebsiteMigration200Response>) => apiResponse.data));
    }

    /**
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     * Update Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param reverseDnsEntries
     */
    public postWebsitesReverseDnsWithHttpInfo(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<HttpInfo<TextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.postWebsitesReverseDns(id, reverseDnsEntries, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.postWebsitesReverseDnsWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     * Update Website Reverse DNS
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     * @param reverseDnsEntries
     */
    public postWebsitesReverseDns(id: number, reverseDnsEntries: ReverseDnsEntries, _options?: ConfigurationOptions): Observable<TextResponse> {
        return this.postWebsitesReverseDnsWithHttpInfo(id, reverseDnsEntries, _options).pipe(map((apiResponse: HttpInfo<TextResponse>) => apiResponse.data));
    }

    /**
     * Validates a webhosting order before placing it.
     * Validate Webhosting Order
     */
    public putWebsitesWithHttpInfo(_options?: ConfigurationOptions): Observable<HttpInfo<void>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.putWebsites(_config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.putWebsitesWithHttpInfo(rsp)));
            }));
    }

    /**
     * Validates a webhosting order before placing it.
     * Validate Webhosting Order
     */
    public putWebsites(_options?: ConfigurationOptions): Observable<void> {
        return this.putWebsitesWithHttpInfo(_options).pipe(map((apiResponse: HttpInfo<void>) => apiResponse.data));
    }

    /**
     * Updates settings on a webhosting order.
     * Update Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public updateWebsiteInfoWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<SuccessTextResponse>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.updateWebsiteInfo(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.updateWebsiteInfoWithHttpInfo(rsp)));
            }));
    }

    /**
     * Updates settings on a webhosting order.
     * Update Website Order
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public updateWebsiteInfo(id: string, _options?: ConfigurationOptions): Observable<SuccessTextResponse> {
        return this.updateWebsiteInfoWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<SuccessTextResponse>) => apiResponse.data));
    }

    /**
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     * Cancel Website
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public webhostingCancelWithHttpInfo(id: string, _options?: ConfigurationOptions): Observable<HttpInfo<WebhostingCancel200Response>> {
        const _config = mergeConfiguration(this.configuration, _options);

        const requestContextPromise = this.requestFactory.webhostingCancel(id, _config);
        // build promise chain
        let middlewarePreObservable = from<RequestContext>(requestContextPromise);
        for (const middleware of _config.middleware) {
            middlewarePreObservable = middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => middleware.pre(ctx)));
        }

        return middlewarePreObservable.pipe(mergeMap((ctx: RequestContext) => _config.httpApi.send(ctx))).
            pipe(mergeMap((response: ResponseContext) => {
                let middlewarePostObservable = of(response);
                for (const middleware of _config.middleware.reverse()) {
                    middlewarePostObservable = middlewarePostObservable.pipe(mergeMap((rsp: ResponseContext) => middleware.post(rsp)));
                }
                return middlewarePostObservable.pipe(map((rsp: ResponseContext) => this.responseProcessor.webhostingCancelWithHttpInfo(rsp)));
            }));
    }

    /**
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     * Cancel Website
     * @param id The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    public webhostingCancel(id: string, _options?: ConfigurationOptions): Observable<WebhostingCancel200Response> {
        return this.webhostingCancelWithHttpInfo(id, _options).pipe(map((apiResponse: HttpInfo<WebhostingCancel200Response>) => apiResponse.data));
    }

}
