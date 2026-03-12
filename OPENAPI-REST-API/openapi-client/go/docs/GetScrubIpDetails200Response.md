# GetScrubIpDetails200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceInfo** | Pointer to [**GetScrubIpDetails200ResponseServiceInfo**](GetScrubIpDetails200ResponseServiceInfo.md) |  | [optional] 
**ClientLinks** | Pointer to [**[]GetScrubIpDetails200ResponseClientLinksInner**](GetScrubIpDetails200ResponseClientLinksInner.md) |  | [optional] 
**BillingDetails** | Pointer to [**GetScrubIpDetails200ResponseBillingDetails**](GetScrubIpDetails200ResponseBillingDetails.md) |  | [optional] 
**CustCurrency** | Pointer to **string** |  | [optional] 
**CustCurrencySymbol** | Pointer to **string** |  | [optional] 
**Package** | Pointer to **string** |  | [optional] 
**ExtraInfoTables** | Pointer to [**GetScrubIpDetails200ResponseExtraInfoTables**](GetScrubIpDetails200ResponseExtraInfoTables.md) |  | [optional] 
**FilterFirewall** | Pointer to [**GetScrubIpDetails200ResponseFilterFirewall**](GetScrubIpDetails200ResponseFilterFirewall.md) |  | [optional] 

## Methods

### NewGetScrubIpDetails200Response

`func NewGetScrubIpDetails200Response() *GetScrubIpDetails200Response`

NewGetScrubIpDetails200Response instantiates a new GetScrubIpDetails200Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewGetScrubIpDetails200ResponseWithDefaults

`func NewGetScrubIpDetails200ResponseWithDefaults() *GetScrubIpDetails200Response`

NewGetScrubIpDetails200ResponseWithDefaults instantiates a new GetScrubIpDetails200Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceInfo

`func (o *GetScrubIpDetails200Response) GetServiceInfo() GetScrubIpDetails200ResponseServiceInfo`

GetServiceInfo returns the ServiceInfo field if non-nil, zero value otherwise.

### GetServiceInfoOk

`func (o *GetScrubIpDetails200Response) GetServiceInfoOk() (*GetScrubIpDetails200ResponseServiceInfo, bool)`

GetServiceInfoOk returns a tuple with the ServiceInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceInfo

`func (o *GetScrubIpDetails200Response) SetServiceInfo(v GetScrubIpDetails200ResponseServiceInfo)`

SetServiceInfo sets ServiceInfo field to given value.

### HasServiceInfo

`func (o *GetScrubIpDetails200Response) HasServiceInfo() bool`

HasServiceInfo returns a boolean if a field has been set.

### GetClientLinks

`func (o *GetScrubIpDetails200Response) GetClientLinks() []GetScrubIpDetails200ResponseClientLinksInner`

GetClientLinks returns the ClientLinks field if non-nil, zero value otherwise.

### GetClientLinksOk

`func (o *GetScrubIpDetails200Response) GetClientLinksOk() (*[]GetScrubIpDetails200ResponseClientLinksInner, bool)`

GetClientLinksOk returns a tuple with the ClientLinks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientLinks

`func (o *GetScrubIpDetails200Response) SetClientLinks(v []GetScrubIpDetails200ResponseClientLinksInner)`

SetClientLinks sets ClientLinks field to given value.

### HasClientLinks

`func (o *GetScrubIpDetails200Response) HasClientLinks() bool`

HasClientLinks returns a boolean if a field has been set.

### GetBillingDetails

`func (o *GetScrubIpDetails200Response) GetBillingDetails() GetScrubIpDetails200ResponseBillingDetails`

GetBillingDetails returns the BillingDetails field if non-nil, zero value otherwise.

### GetBillingDetailsOk

`func (o *GetScrubIpDetails200Response) GetBillingDetailsOk() (*GetScrubIpDetails200ResponseBillingDetails, bool)`

GetBillingDetailsOk returns a tuple with the BillingDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingDetails

`func (o *GetScrubIpDetails200Response) SetBillingDetails(v GetScrubIpDetails200ResponseBillingDetails)`

SetBillingDetails sets BillingDetails field to given value.

### HasBillingDetails

`func (o *GetScrubIpDetails200Response) HasBillingDetails() bool`

HasBillingDetails returns a boolean if a field has been set.

### GetCustCurrency

`func (o *GetScrubIpDetails200Response) GetCustCurrency() string`

GetCustCurrency returns the CustCurrency field if non-nil, zero value otherwise.

### GetCustCurrencyOk

`func (o *GetScrubIpDetails200Response) GetCustCurrencyOk() (*string, bool)`

GetCustCurrencyOk returns a tuple with the CustCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrency

`func (o *GetScrubIpDetails200Response) SetCustCurrency(v string)`

SetCustCurrency sets CustCurrency field to given value.

### HasCustCurrency

`func (o *GetScrubIpDetails200Response) HasCustCurrency() bool`

HasCustCurrency returns a boolean if a field has been set.

### GetCustCurrencySymbol

`func (o *GetScrubIpDetails200Response) GetCustCurrencySymbol() string`

GetCustCurrencySymbol returns the CustCurrencySymbol field if non-nil, zero value otherwise.

### GetCustCurrencySymbolOk

`func (o *GetScrubIpDetails200Response) GetCustCurrencySymbolOk() (*string, bool)`

GetCustCurrencySymbolOk returns a tuple with the CustCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrencySymbol

`func (o *GetScrubIpDetails200Response) SetCustCurrencySymbol(v string)`

SetCustCurrencySymbol sets CustCurrencySymbol field to given value.

### HasCustCurrencySymbol

`func (o *GetScrubIpDetails200Response) HasCustCurrencySymbol() bool`

HasCustCurrencySymbol returns a boolean if a field has been set.

### GetPackage

`func (o *GetScrubIpDetails200Response) GetPackage() string`

GetPackage returns the Package field if non-nil, zero value otherwise.

### GetPackageOk

`func (o *GetScrubIpDetails200Response) GetPackageOk() (*string, bool)`

GetPackageOk returns a tuple with the Package field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackage

`func (o *GetScrubIpDetails200Response) SetPackage(v string)`

SetPackage sets Package field to given value.

### HasPackage

`func (o *GetScrubIpDetails200Response) HasPackage() bool`

HasPackage returns a boolean if a field has been set.

### GetExtraInfoTables

`func (o *GetScrubIpDetails200Response) GetExtraInfoTables() GetScrubIpDetails200ResponseExtraInfoTables`

GetExtraInfoTables returns the ExtraInfoTables field if non-nil, zero value otherwise.

### GetExtraInfoTablesOk

`func (o *GetScrubIpDetails200Response) GetExtraInfoTablesOk() (*GetScrubIpDetails200ResponseExtraInfoTables, bool)`

GetExtraInfoTablesOk returns a tuple with the ExtraInfoTables field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraInfoTables

`func (o *GetScrubIpDetails200Response) SetExtraInfoTables(v GetScrubIpDetails200ResponseExtraInfoTables)`

SetExtraInfoTables sets ExtraInfoTables field to given value.

### HasExtraInfoTables

`func (o *GetScrubIpDetails200Response) HasExtraInfoTables() bool`

HasExtraInfoTables returns a boolean if a field has been set.

### GetFilterFirewall

`func (o *GetScrubIpDetails200Response) GetFilterFirewall() GetScrubIpDetails200ResponseFilterFirewall`

GetFilterFirewall returns the FilterFirewall field if non-nil, zero value otherwise.

### GetFilterFirewallOk

`func (o *GetScrubIpDetails200Response) GetFilterFirewallOk() (*GetScrubIpDetails200ResponseFilterFirewall, bool)`

GetFilterFirewallOk returns a tuple with the FilterFirewall field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFilterFirewall

`func (o *GetScrubIpDetails200Response) SetFilterFirewall(v GetScrubIpDetails200ResponseFilterFirewall)`

SetFilterFirewall sets FilterFirewall field to given value.

### HasFilterFirewall

`func (o *GetScrubIpDetails200Response) HasFilterFirewall() bool`

HasFilterFirewall returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


