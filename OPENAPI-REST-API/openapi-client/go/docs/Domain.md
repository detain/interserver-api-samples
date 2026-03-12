# Domain

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceInfo** | Pointer to [**DomainServiceInfo**](DomainServiceInfo.md) |  | [optional] 
**ServiceTypes** | Pointer to [**map[string]DomainServiceType**](DomainServiceType.md) |  | [optional] 
**ClientLinks** | Pointer to [**[]DomainClientLink**](DomainClientLink.md) |  | [optional] 
**BillingDetails** | Pointer to [**DomainBillingDetails**](DomainBillingDetails.md) |  | [optional] 
**CustCurrency** | Pointer to **string** |  | [optional] 
**CustCurrencySymbol** | Pointer to **string** |  | [optional] 
**ServiceExtra** | Pointer to [**DomainBillingExtra**](DomainBillingExtra.md) |  | [optional] 
**ExtraInfoTables** | Pointer to [**BackupExtraInfoTables**](BackupExtraInfoTables.md) |  | [optional] 
**ServiceType** | Pointer to [**DomainServiceType**](DomainServiceType.md) |  | [optional] 
**ContactDetails** | Pointer to [**DomainContactDetails**](DomainContactDetails.md) |  | [optional] 
**Pwarning** | Pointer to **string** |  | [optional] 
**TransferInfo** | Pointer to **string** |  | [optional] 
**Errors** | Pointer to **bool** |  | [optional] 
**DomainLogs** | Pointer to **[]string** |  | [optional] 
**AllInfo** | Pointer to [**DomainAllInfo**](DomainAllInfo.md) |  | [optional] 
**RegistrarStatus** | Pointer to **string** |  | [optional] 
**Locked** | Pointer to **string** |  | [optional] 
**WhoisPrivacy** | Pointer to **string** |  | [optional] 
**AutoRenew** | Pointer to **string** |  | [optional] 

## Methods

### NewDomain

`func NewDomain() *Domain`

NewDomain instantiates a new Domain object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainWithDefaults

`func NewDomainWithDefaults() *Domain`

NewDomainWithDefaults instantiates a new Domain object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceInfo

`func (o *Domain) GetServiceInfo() DomainServiceInfo`

GetServiceInfo returns the ServiceInfo field if non-nil, zero value otherwise.

### GetServiceInfoOk

`func (o *Domain) GetServiceInfoOk() (*DomainServiceInfo, bool)`

GetServiceInfoOk returns a tuple with the ServiceInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceInfo

`func (o *Domain) SetServiceInfo(v DomainServiceInfo)`

SetServiceInfo sets ServiceInfo field to given value.

### HasServiceInfo

`func (o *Domain) HasServiceInfo() bool`

HasServiceInfo returns a boolean if a field has been set.

### GetServiceTypes

`func (o *Domain) GetServiceTypes() map[string]DomainServiceType`

GetServiceTypes returns the ServiceTypes field if non-nil, zero value otherwise.

### GetServiceTypesOk

`func (o *Domain) GetServiceTypesOk() (*map[string]DomainServiceType, bool)`

GetServiceTypesOk returns a tuple with the ServiceTypes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceTypes

`func (o *Domain) SetServiceTypes(v map[string]DomainServiceType)`

SetServiceTypes sets ServiceTypes field to given value.

### HasServiceTypes

`func (o *Domain) HasServiceTypes() bool`

HasServiceTypes returns a boolean if a field has been set.

### GetClientLinks

`func (o *Domain) GetClientLinks() []DomainClientLink`

GetClientLinks returns the ClientLinks field if non-nil, zero value otherwise.

### GetClientLinksOk

`func (o *Domain) GetClientLinksOk() (*[]DomainClientLink, bool)`

GetClientLinksOk returns a tuple with the ClientLinks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientLinks

`func (o *Domain) SetClientLinks(v []DomainClientLink)`

SetClientLinks sets ClientLinks field to given value.

### HasClientLinks

`func (o *Domain) HasClientLinks() bool`

HasClientLinks returns a boolean if a field has been set.

### GetBillingDetails

`func (o *Domain) GetBillingDetails() DomainBillingDetails`

GetBillingDetails returns the BillingDetails field if non-nil, zero value otherwise.

### GetBillingDetailsOk

`func (o *Domain) GetBillingDetailsOk() (*DomainBillingDetails, bool)`

GetBillingDetailsOk returns a tuple with the BillingDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingDetails

`func (o *Domain) SetBillingDetails(v DomainBillingDetails)`

SetBillingDetails sets BillingDetails field to given value.

### HasBillingDetails

`func (o *Domain) HasBillingDetails() bool`

HasBillingDetails returns a boolean if a field has been set.

### GetCustCurrency

`func (o *Domain) GetCustCurrency() string`

GetCustCurrency returns the CustCurrency field if non-nil, zero value otherwise.

### GetCustCurrencyOk

`func (o *Domain) GetCustCurrencyOk() (*string, bool)`

GetCustCurrencyOk returns a tuple with the CustCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrency

`func (o *Domain) SetCustCurrency(v string)`

SetCustCurrency sets CustCurrency field to given value.

### HasCustCurrency

`func (o *Domain) HasCustCurrency() bool`

HasCustCurrency returns a boolean if a field has been set.

### GetCustCurrencySymbol

`func (o *Domain) GetCustCurrencySymbol() string`

GetCustCurrencySymbol returns the CustCurrencySymbol field if non-nil, zero value otherwise.

### GetCustCurrencySymbolOk

`func (o *Domain) GetCustCurrencySymbolOk() (*string, bool)`

GetCustCurrencySymbolOk returns a tuple with the CustCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrencySymbol

`func (o *Domain) SetCustCurrencySymbol(v string)`

SetCustCurrencySymbol sets CustCurrencySymbol field to given value.

### HasCustCurrencySymbol

`func (o *Domain) HasCustCurrencySymbol() bool`

HasCustCurrencySymbol returns a boolean if a field has been set.

### GetServiceExtra

`func (o *Domain) GetServiceExtra() DomainBillingExtra`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *Domain) GetServiceExtraOk() (*DomainBillingExtra, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *Domain) SetServiceExtra(v DomainBillingExtra)`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *Domain) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetExtraInfoTables

`func (o *Domain) GetExtraInfoTables() BackupExtraInfoTables`

GetExtraInfoTables returns the ExtraInfoTables field if non-nil, zero value otherwise.

### GetExtraInfoTablesOk

`func (o *Domain) GetExtraInfoTablesOk() (*BackupExtraInfoTables, bool)`

GetExtraInfoTablesOk returns a tuple with the ExtraInfoTables field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraInfoTables

`func (o *Domain) SetExtraInfoTables(v BackupExtraInfoTables)`

SetExtraInfoTables sets ExtraInfoTables field to given value.

### HasExtraInfoTables

`func (o *Domain) HasExtraInfoTables() bool`

HasExtraInfoTables returns a boolean if a field has been set.

### GetServiceType

`func (o *Domain) GetServiceType() DomainServiceType`

GetServiceType returns the ServiceType field if non-nil, zero value otherwise.

### GetServiceTypeOk

`func (o *Domain) GetServiceTypeOk() (*DomainServiceType, bool)`

GetServiceTypeOk returns a tuple with the ServiceType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceType

`func (o *Domain) SetServiceType(v DomainServiceType)`

SetServiceType sets ServiceType field to given value.

### HasServiceType

`func (o *Domain) HasServiceType() bool`

HasServiceType returns a boolean if a field has been set.

### GetContactDetails

`func (o *Domain) GetContactDetails() DomainContactDetails`

GetContactDetails returns the ContactDetails field if non-nil, zero value otherwise.

### GetContactDetailsOk

`func (o *Domain) GetContactDetailsOk() (*DomainContactDetails, bool)`

GetContactDetailsOk returns a tuple with the ContactDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContactDetails

`func (o *Domain) SetContactDetails(v DomainContactDetails)`

SetContactDetails sets ContactDetails field to given value.

### HasContactDetails

`func (o *Domain) HasContactDetails() bool`

HasContactDetails returns a boolean if a field has been set.

### GetPwarning

`func (o *Domain) GetPwarning() string`

GetPwarning returns the Pwarning field if non-nil, zero value otherwise.

### GetPwarningOk

`func (o *Domain) GetPwarningOk() (*string, bool)`

GetPwarningOk returns a tuple with the Pwarning field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPwarning

`func (o *Domain) SetPwarning(v string)`

SetPwarning sets Pwarning field to given value.

### HasPwarning

`func (o *Domain) HasPwarning() bool`

HasPwarning returns a boolean if a field has been set.

### GetTransferInfo

`func (o *Domain) GetTransferInfo() string`

GetTransferInfo returns the TransferInfo field if non-nil, zero value otherwise.

### GetTransferInfoOk

`func (o *Domain) GetTransferInfoOk() (*string, bool)`

GetTransferInfoOk returns a tuple with the TransferInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransferInfo

`func (o *Domain) SetTransferInfo(v string)`

SetTransferInfo sets TransferInfo field to given value.

### HasTransferInfo

`func (o *Domain) HasTransferInfo() bool`

HasTransferInfo returns a boolean if a field has been set.

### GetErrors

`func (o *Domain) GetErrors() bool`

GetErrors returns the Errors field if non-nil, zero value otherwise.

### GetErrorsOk

`func (o *Domain) GetErrorsOk() (*bool, bool)`

GetErrorsOk returns a tuple with the Errors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrors

`func (o *Domain) SetErrors(v bool)`

SetErrors sets Errors field to given value.

### HasErrors

`func (o *Domain) HasErrors() bool`

HasErrors returns a boolean if a field has been set.

### GetDomainLogs

`func (o *Domain) GetDomainLogs() []string`

GetDomainLogs returns the DomainLogs field if non-nil, zero value otherwise.

### GetDomainLogsOk

`func (o *Domain) GetDomainLogsOk() (*[]string, bool)`

GetDomainLogsOk returns a tuple with the DomainLogs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomainLogs

`func (o *Domain) SetDomainLogs(v []string)`

SetDomainLogs sets DomainLogs field to given value.

### HasDomainLogs

`func (o *Domain) HasDomainLogs() bool`

HasDomainLogs returns a boolean if a field has been set.

### GetAllInfo

`func (o *Domain) GetAllInfo() DomainAllInfo`

GetAllInfo returns the AllInfo field if non-nil, zero value otherwise.

### GetAllInfoOk

`func (o *Domain) GetAllInfoOk() (*DomainAllInfo, bool)`

GetAllInfoOk returns a tuple with the AllInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAllInfo

`func (o *Domain) SetAllInfo(v DomainAllInfo)`

SetAllInfo sets AllInfo field to given value.

### HasAllInfo

`func (o *Domain) HasAllInfo() bool`

HasAllInfo returns a boolean if a field has been set.

### GetRegistrarStatus

`func (o *Domain) GetRegistrarStatus() string`

GetRegistrarStatus returns the RegistrarStatus field if non-nil, zero value otherwise.

### GetRegistrarStatusOk

`func (o *Domain) GetRegistrarStatusOk() (*string, bool)`

GetRegistrarStatusOk returns a tuple with the RegistrarStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRegistrarStatus

`func (o *Domain) SetRegistrarStatus(v string)`

SetRegistrarStatus sets RegistrarStatus field to given value.

### HasRegistrarStatus

`func (o *Domain) HasRegistrarStatus() bool`

HasRegistrarStatus returns a boolean if a field has been set.

### GetLocked

`func (o *Domain) GetLocked() string`

GetLocked returns the Locked field if non-nil, zero value otherwise.

### GetLockedOk

`func (o *Domain) GetLockedOk() (*string, bool)`

GetLockedOk returns a tuple with the Locked field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocked

`func (o *Domain) SetLocked(v string)`

SetLocked sets Locked field to given value.

### HasLocked

`func (o *Domain) HasLocked() bool`

HasLocked returns a boolean if a field has been set.

### GetWhoisPrivacy

`func (o *Domain) GetWhoisPrivacy() string`

GetWhoisPrivacy returns the WhoisPrivacy field if non-nil, zero value otherwise.

### GetWhoisPrivacyOk

`func (o *Domain) GetWhoisPrivacyOk() (*string, bool)`

GetWhoisPrivacyOk returns a tuple with the WhoisPrivacy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWhoisPrivacy

`func (o *Domain) SetWhoisPrivacy(v string)`

SetWhoisPrivacy sets WhoisPrivacy field to given value.

### HasWhoisPrivacy

`func (o *Domain) HasWhoisPrivacy() bool`

HasWhoisPrivacy returns a boolean if a field has been set.

### GetAutoRenew

`func (o *Domain) GetAutoRenew() string`

GetAutoRenew returns the AutoRenew field if non-nil, zero value otherwise.

### GetAutoRenewOk

`func (o *Domain) GetAutoRenewOk() (*string, bool)`

GetAutoRenewOk returns a tuple with the AutoRenew field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAutoRenew

`func (o *Domain) SetAutoRenew(v string)`

SetAutoRenew sets AutoRenew field to given value.

### HasAutoRenew

`func (o *Domain) HasAutoRenew() bool`

HasAutoRenew returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


