# Backup

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceInfo** | Pointer to [**BackupServiceInfo**](BackupServiceInfo.md) |  | [optional] 
**ClientLinks** | Pointer to [**[]BackupClientLink**](BackupClientLink.md) |  | [optional] 
**BillingDetails** | Pointer to [**BackupBillingDetails**](BackupBillingDetails.md) |  | [optional] 
**CustCurrency** | Pointer to **string** | Customer&#39;s currency. | [optional] 
**CustCurrencySymbol** | Pointer to **string** | Customer&#39;s currency symbol. | [optional] 
**ServiceMaster** | Pointer to [**BackupServiceMaster**](BackupServiceMaster.md) |  | [optional] 
**Package** | Pointer to **string** | Package information. | [optional] 
**ServiceExtra** | Pointer to **string** |  | [optional] 
**ExtraInfoTables** | Pointer to [**BackupExtraInfoTables**](BackupExtraInfoTables.md) |  | [optional] 

## Methods

### NewBackup

`func NewBackup() *Backup`

NewBackup instantiates a new Backup object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBackupWithDefaults

`func NewBackupWithDefaults() *Backup`

NewBackupWithDefaults instantiates a new Backup object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceInfo

`func (o *Backup) GetServiceInfo() BackupServiceInfo`

GetServiceInfo returns the ServiceInfo field if non-nil, zero value otherwise.

### GetServiceInfoOk

`func (o *Backup) GetServiceInfoOk() (*BackupServiceInfo, bool)`

GetServiceInfoOk returns a tuple with the ServiceInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceInfo

`func (o *Backup) SetServiceInfo(v BackupServiceInfo)`

SetServiceInfo sets ServiceInfo field to given value.

### HasServiceInfo

`func (o *Backup) HasServiceInfo() bool`

HasServiceInfo returns a boolean if a field has been set.

### GetClientLinks

`func (o *Backup) GetClientLinks() []BackupClientLink`

GetClientLinks returns the ClientLinks field if non-nil, zero value otherwise.

### GetClientLinksOk

`func (o *Backup) GetClientLinksOk() (*[]BackupClientLink, bool)`

GetClientLinksOk returns a tuple with the ClientLinks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientLinks

`func (o *Backup) SetClientLinks(v []BackupClientLink)`

SetClientLinks sets ClientLinks field to given value.

### HasClientLinks

`func (o *Backup) HasClientLinks() bool`

HasClientLinks returns a boolean if a field has been set.

### GetBillingDetails

`func (o *Backup) GetBillingDetails() BackupBillingDetails`

GetBillingDetails returns the BillingDetails field if non-nil, zero value otherwise.

### GetBillingDetailsOk

`func (o *Backup) GetBillingDetailsOk() (*BackupBillingDetails, bool)`

GetBillingDetailsOk returns a tuple with the BillingDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingDetails

`func (o *Backup) SetBillingDetails(v BackupBillingDetails)`

SetBillingDetails sets BillingDetails field to given value.

### HasBillingDetails

`func (o *Backup) HasBillingDetails() bool`

HasBillingDetails returns a boolean if a field has been set.

### GetCustCurrency

`func (o *Backup) GetCustCurrency() string`

GetCustCurrency returns the CustCurrency field if non-nil, zero value otherwise.

### GetCustCurrencyOk

`func (o *Backup) GetCustCurrencyOk() (*string, bool)`

GetCustCurrencyOk returns a tuple with the CustCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrency

`func (o *Backup) SetCustCurrency(v string)`

SetCustCurrency sets CustCurrency field to given value.

### HasCustCurrency

`func (o *Backup) HasCustCurrency() bool`

HasCustCurrency returns a boolean if a field has been set.

### GetCustCurrencySymbol

`func (o *Backup) GetCustCurrencySymbol() string`

GetCustCurrencySymbol returns the CustCurrencySymbol field if non-nil, zero value otherwise.

### GetCustCurrencySymbolOk

`func (o *Backup) GetCustCurrencySymbolOk() (*string, bool)`

GetCustCurrencySymbolOk returns a tuple with the CustCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrencySymbol

`func (o *Backup) SetCustCurrencySymbol(v string)`

SetCustCurrencySymbol sets CustCurrencySymbol field to given value.

### HasCustCurrencySymbol

`func (o *Backup) HasCustCurrencySymbol() bool`

HasCustCurrencySymbol returns a boolean if a field has been set.

### GetServiceMaster

`func (o *Backup) GetServiceMaster() BackupServiceMaster`

GetServiceMaster returns the ServiceMaster field if non-nil, zero value otherwise.

### GetServiceMasterOk

`func (o *Backup) GetServiceMasterOk() (*BackupServiceMaster, bool)`

GetServiceMasterOk returns a tuple with the ServiceMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceMaster

`func (o *Backup) SetServiceMaster(v BackupServiceMaster)`

SetServiceMaster sets ServiceMaster field to given value.

### HasServiceMaster

`func (o *Backup) HasServiceMaster() bool`

HasServiceMaster returns a boolean if a field has been set.

### GetPackage

`func (o *Backup) GetPackage() string`

GetPackage returns the Package field if non-nil, zero value otherwise.

### GetPackageOk

`func (o *Backup) GetPackageOk() (*string, bool)`

GetPackageOk returns a tuple with the Package field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackage

`func (o *Backup) SetPackage(v string)`

SetPackage sets Package field to given value.

### HasPackage

`func (o *Backup) HasPackage() bool`

HasPackage returns a boolean if a field has been set.

### GetServiceExtra

`func (o *Backup) GetServiceExtra() string`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *Backup) GetServiceExtraOk() (*string, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *Backup) SetServiceExtra(v string)`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *Backup) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetExtraInfoTables

`func (o *Backup) GetExtraInfoTables() BackupExtraInfoTables`

GetExtraInfoTables returns the ExtraInfoTables field if non-nil, zero value otherwise.

### GetExtraInfoTablesOk

`func (o *Backup) GetExtraInfoTablesOk() (*BackupExtraInfoTables, bool)`

GetExtraInfoTablesOk returns a tuple with the ExtraInfoTables field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraInfoTables

`func (o *Backup) SetExtraInfoTables(v BackupExtraInfoTables)`

SetExtraInfoTables sets ExtraInfoTables field to given value.

### HasExtraInfoTables

`func (o *Backup) HasExtraInfoTables() bool`

HasExtraInfoTables returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


