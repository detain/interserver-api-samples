

# Domain

Full detail view of a domain service including billing, contacts, DNS, and configuration.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**serviceInfo** | [**DomainServiceInfo**](DomainServiceInfo.md) |  |  [optional]
**serviceTypes** | [**Map&lt;String, DomainServiceType&gt;**](DomainServiceType.md) |  |  [optional]
**client_links** | [**Seq&lt;DomainClientLink&gt;**](DomainClientLink.md) |  |  [optional]
**billingDetails** | [**DomainBillingDetails**](DomainBillingDetails.md) |  |  [optional]
**custCurrency** | **String** |  |  [optional]
**custCurrencySymbol** | **String** |  |  [optional]
**serviceExtra** | [**DomainBillingExtra**](DomainBillingExtra.md) |  |  [optional]
**extraInfoTables** | [**BackupExtraInfoTables**](BackupExtraInfoTables.md) |  |  [optional]
**serviceType** | [**DomainServiceType**](DomainServiceType.md) |  |  [optional]
**contact_details** | [**DomainContactDetails**](DomainContactDetails.md) |  |  [optional]
**pwarning** | **String** |  |  [optional]
**transfer_info** | **String** |  |  [optional]
**errors** | **Boolean** |  |  [optional]
**domain_logs** | **Seq&lt;String&gt;** |  |  [optional]
**allInfo** | [**DomainAllInfo**](DomainAllInfo.md) |  |  [optional]
**registrarStatus** | **String** |  |  [optional]
**locked** | **String** |  |  [optional]
**whoisPrivacy** | **String** |  |  [optional]
**autoRenew** | **String** |  |  [optional]



