# Website

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceInfo** | Pointer to [**WebsiteServiceInfo**](WebsiteServiceInfo.md) |  | [optional] 
**ClientLinks** | Pointer to [**[]WebsiteClientLink**](WebsiteClientLink.md) |  | [optional] 
**BillingDetails** | Pointer to [**WebsiteBillingDetails**](WebsiteBillingDetails.md) |  | [optional] 
**CustCurrency** | Pointer to **string** | Customer&#39;s currency | [optional] 
**CustCurrencySymbol** | Pointer to **string** | Customer currency symbol | [optional] 
**ServiceMaster** | Pointer to [**WebsiteServiceMaster**](WebsiteServiceMaster.md) |  | [optional] 
**Package** | Pointer to **string** | Package information | [optional] 
**ServiceExtra** | Pointer to **[]map[string]interface{}** |  | [optional] 
**ExtraInfoTables** | Pointer to [**WebsiteExtraInfoTables**](WebsiteExtraInfoTables.md) |  | [optional] 

## Methods

### NewWebsite

`func NewWebsite() *Website`

NewWebsite instantiates a new Website object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWebsiteWithDefaults

`func NewWebsiteWithDefaults() *Website`

NewWebsiteWithDefaults instantiates a new Website object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceInfo

`func (o *Website) GetServiceInfo() WebsiteServiceInfo`

GetServiceInfo returns the ServiceInfo field if non-nil, zero value otherwise.

### GetServiceInfoOk

`func (o *Website) GetServiceInfoOk() (*WebsiteServiceInfo, bool)`

GetServiceInfoOk returns a tuple with the ServiceInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceInfo

`func (o *Website) SetServiceInfo(v WebsiteServiceInfo)`

SetServiceInfo sets ServiceInfo field to given value.

### HasServiceInfo

`func (o *Website) HasServiceInfo() bool`

HasServiceInfo returns a boolean if a field has been set.

### GetClientLinks

`func (o *Website) GetClientLinks() []WebsiteClientLink`

GetClientLinks returns the ClientLinks field if non-nil, zero value otherwise.

### GetClientLinksOk

`func (o *Website) GetClientLinksOk() (*[]WebsiteClientLink, bool)`

GetClientLinksOk returns a tuple with the ClientLinks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientLinks

`func (o *Website) SetClientLinks(v []WebsiteClientLink)`

SetClientLinks sets ClientLinks field to given value.

### HasClientLinks

`func (o *Website) HasClientLinks() bool`

HasClientLinks returns a boolean if a field has been set.

### GetBillingDetails

`func (o *Website) GetBillingDetails() WebsiteBillingDetails`

GetBillingDetails returns the BillingDetails field if non-nil, zero value otherwise.

### GetBillingDetailsOk

`func (o *Website) GetBillingDetailsOk() (*WebsiteBillingDetails, bool)`

GetBillingDetailsOk returns a tuple with the BillingDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingDetails

`func (o *Website) SetBillingDetails(v WebsiteBillingDetails)`

SetBillingDetails sets BillingDetails field to given value.

### HasBillingDetails

`func (o *Website) HasBillingDetails() bool`

HasBillingDetails returns a boolean if a field has been set.

### GetCustCurrency

`func (o *Website) GetCustCurrency() string`

GetCustCurrency returns the CustCurrency field if non-nil, zero value otherwise.

### GetCustCurrencyOk

`func (o *Website) GetCustCurrencyOk() (*string, bool)`

GetCustCurrencyOk returns a tuple with the CustCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrency

`func (o *Website) SetCustCurrency(v string)`

SetCustCurrency sets CustCurrency field to given value.

### HasCustCurrency

`func (o *Website) HasCustCurrency() bool`

HasCustCurrency returns a boolean if a field has been set.

### GetCustCurrencySymbol

`func (o *Website) GetCustCurrencySymbol() string`

GetCustCurrencySymbol returns the CustCurrencySymbol field if non-nil, zero value otherwise.

### GetCustCurrencySymbolOk

`func (o *Website) GetCustCurrencySymbolOk() (*string, bool)`

GetCustCurrencySymbolOk returns a tuple with the CustCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrencySymbol

`func (o *Website) SetCustCurrencySymbol(v string)`

SetCustCurrencySymbol sets CustCurrencySymbol field to given value.

### HasCustCurrencySymbol

`func (o *Website) HasCustCurrencySymbol() bool`

HasCustCurrencySymbol returns a boolean if a field has been set.

### GetServiceMaster

`func (o *Website) GetServiceMaster() WebsiteServiceMaster`

GetServiceMaster returns the ServiceMaster field if non-nil, zero value otherwise.

### GetServiceMasterOk

`func (o *Website) GetServiceMasterOk() (*WebsiteServiceMaster, bool)`

GetServiceMasterOk returns a tuple with the ServiceMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceMaster

`func (o *Website) SetServiceMaster(v WebsiteServiceMaster)`

SetServiceMaster sets ServiceMaster field to given value.

### HasServiceMaster

`func (o *Website) HasServiceMaster() bool`

HasServiceMaster returns a boolean if a field has been set.

### GetPackage

`func (o *Website) GetPackage() string`

GetPackage returns the Package field if non-nil, zero value otherwise.

### GetPackageOk

`func (o *Website) GetPackageOk() (*string, bool)`

GetPackageOk returns a tuple with the Package field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackage

`func (o *Website) SetPackage(v string)`

SetPackage sets Package field to given value.

### HasPackage

`func (o *Website) HasPackage() bool`

HasPackage returns a boolean if a field has been set.

### GetServiceExtra

`func (o *Website) GetServiceExtra() []map[string]interface{}`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *Website) GetServiceExtraOk() (*[]map[string]interface{}, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *Website) SetServiceExtra(v []map[string]interface{})`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *Website) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetExtraInfoTables

`func (o *Website) GetExtraInfoTables() WebsiteExtraInfoTables`

GetExtraInfoTables returns the ExtraInfoTables field if non-nil, zero value otherwise.

### GetExtraInfoTablesOk

`func (o *Website) GetExtraInfoTablesOk() (*WebsiteExtraInfoTables, bool)`

GetExtraInfoTablesOk returns a tuple with the ExtraInfoTables field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraInfoTables

`func (o *Website) SetExtraInfoTables(v WebsiteExtraInfoTables)`

SetExtraInfoTables sets ExtraInfoTables field to given value.

### HasExtraInfoTables

`func (o *Website) HasExtraInfoTables() bool`

HasExtraInfoTables returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


