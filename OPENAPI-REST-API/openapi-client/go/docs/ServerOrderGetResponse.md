# ServerOrderGetResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FormValues** | [**FormValues**](FormValues.md) |  | 
**ConfigIds** | [**ConfigIds**](ConfigIds.md) |  | 
**Cpu** | **int32** |  | 
**CpuLi** | [**map[string]Cpu**](Cpu.md) |  | 
**ConfigLi** | [**ConfigLists**](ConfigLists.md) |  | 
**FieldLabel** | Pointer to [**map[string]FieldLabel**](FieldLabel.md) |  | [optional] 
**CpuCores** | Pointer to [**map[string]map[string]CpuWithDefaults**](map.md) |  | [optional] 
**Frequency** | **int32** |  | 
**Currency** | **string** |  | 
**CurrencySymbol** | Pointer to **string** |  | [optional] 
**Country** | **string** |  | 
**Custid** | Pointer to **int32** |  | [optional] 
**Ima** | Pointer to **string** |  | [optional] 
**Step** | **string** |  | 
**Regions** | Pointer to [**[]Region**](Region.md) |  | [optional] 
**AssetServers** | Pointer to [**[]AssetServer**](AssetServer.md) |  | [optional] 
**BuyItServers** | Pointer to **[]map[string]interface{}** |  | [optional] 
**DisplayShowmore** | Pointer to **string** |  | [optional] 
**CustDiscount** | Pointer to **float32** |  | [optional] 

## Methods

### NewServerOrderGetResponse

`func NewServerOrderGetResponse(formValues FormValues, configIds ConfigIds, cpu int32, cpuLi map[string]Cpu, configLi ConfigLists, frequency int32, currency string, country string, step string, ) *ServerOrderGetResponse`

NewServerOrderGetResponse instantiates a new ServerOrderGetResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderGetResponseWithDefaults

`func NewServerOrderGetResponseWithDefaults() *ServerOrderGetResponse`

NewServerOrderGetResponseWithDefaults instantiates a new ServerOrderGetResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFormValues

`func (o *ServerOrderGetResponse) GetFormValues() FormValues`

GetFormValues returns the FormValues field if non-nil, zero value otherwise.

### GetFormValuesOk

`func (o *ServerOrderGetResponse) GetFormValuesOk() (*FormValues, bool)`

GetFormValuesOk returns a tuple with the FormValues field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormValues

`func (o *ServerOrderGetResponse) SetFormValues(v FormValues)`

SetFormValues sets FormValues field to given value.


### GetConfigIds

`func (o *ServerOrderGetResponse) GetConfigIds() ConfigIds`

GetConfigIds returns the ConfigIds field if non-nil, zero value otherwise.

### GetConfigIdsOk

`func (o *ServerOrderGetResponse) GetConfigIdsOk() (*ConfigIds, bool)`

GetConfigIdsOk returns a tuple with the ConfigIds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConfigIds

`func (o *ServerOrderGetResponse) SetConfigIds(v ConfigIds)`

SetConfigIds sets ConfigIds field to given value.


### GetCpu

`func (o *ServerOrderGetResponse) GetCpu() int32`

GetCpu returns the Cpu field if non-nil, zero value otherwise.

### GetCpuOk

`func (o *ServerOrderGetResponse) GetCpuOk() (*int32, bool)`

GetCpuOk returns a tuple with the Cpu field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpu

`func (o *ServerOrderGetResponse) SetCpu(v int32)`

SetCpu sets Cpu field to given value.


### GetCpuLi

`func (o *ServerOrderGetResponse) GetCpuLi() map[string]Cpu`

GetCpuLi returns the CpuLi field if non-nil, zero value otherwise.

### GetCpuLiOk

`func (o *ServerOrderGetResponse) GetCpuLiOk() (*map[string]Cpu, bool)`

GetCpuLiOk returns a tuple with the CpuLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpuLi

`func (o *ServerOrderGetResponse) SetCpuLi(v map[string]Cpu)`

SetCpuLi sets CpuLi field to given value.


### GetConfigLi

`func (o *ServerOrderGetResponse) GetConfigLi() ConfigLists`

GetConfigLi returns the ConfigLi field if non-nil, zero value otherwise.

### GetConfigLiOk

`func (o *ServerOrderGetResponse) GetConfigLiOk() (*ConfigLists, bool)`

GetConfigLiOk returns a tuple with the ConfigLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConfigLi

`func (o *ServerOrderGetResponse) SetConfigLi(v ConfigLists)`

SetConfigLi sets ConfigLi field to given value.


### GetFieldLabel

`func (o *ServerOrderGetResponse) GetFieldLabel() map[string]FieldLabel`

GetFieldLabel returns the FieldLabel field if non-nil, zero value otherwise.

### GetFieldLabelOk

`func (o *ServerOrderGetResponse) GetFieldLabelOk() (*map[string]FieldLabel, bool)`

GetFieldLabelOk returns a tuple with the FieldLabel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFieldLabel

`func (o *ServerOrderGetResponse) SetFieldLabel(v map[string]FieldLabel)`

SetFieldLabel sets FieldLabel field to given value.

### HasFieldLabel

`func (o *ServerOrderGetResponse) HasFieldLabel() bool`

HasFieldLabel returns a boolean if a field has been set.

### GetCpuCores

`func (o *ServerOrderGetResponse) GetCpuCores() map[string]map[string]CpuWithDefaults`

GetCpuCores returns the CpuCores field if non-nil, zero value otherwise.

### GetCpuCoresOk

`func (o *ServerOrderGetResponse) GetCpuCoresOk() (*map[string]map[string]CpuWithDefaults, bool)`

GetCpuCoresOk returns a tuple with the CpuCores field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpuCores

`func (o *ServerOrderGetResponse) SetCpuCores(v map[string]map[string]CpuWithDefaults)`

SetCpuCores sets CpuCores field to given value.

### HasCpuCores

`func (o *ServerOrderGetResponse) HasCpuCores() bool`

HasCpuCores returns a boolean if a field has been set.

### GetFrequency

`func (o *ServerOrderGetResponse) GetFrequency() int32`

GetFrequency returns the Frequency field if non-nil, zero value otherwise.

### GetFrequencyOk

`func (o *ServerOrderGetResponse) GetFrequencyOk() (*int32, bool)`

GetFrequencyOk returns a tuple with the Frequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFrequency

`func (o *ServerOrderGetResponse) SetFrequency(v int32)`

SetFrequency sets Frequency field to given value.


### GetCurrency

`func (o *ServerOrderGetResponse) GetCurrency() string`

GetCurrency returns the Currency field if non-nil, zero value otherwise.

### GetCurrencyOk

`func (o *ServerOrderGetResponse) GetCurrencyOk() (*string, bool)`

GetCurrencyOk returns a tuple with the Currency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrency

`func (o *ServerOrderGetResponse) SetCurrency(v string)`

SetCurrency sets Currency field to given value.


### GetCurrencySymbol

`func (o *ServerOrderGetResponse) GetCurrencySymbol() string`

GetCurrencySymbol returns the CurrencySymbol field if non-nil, zero value otherwise.

### GetCurrencySymbolOk

`func (o *ServerOrderGetResponse) GetCurrencySymbolOk() (*string, bool)`

GetCurrencySymbolOk returns a tuple with the CurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrencySymbol

`func (o *ServerOrderGetResponse) SetCurrencySymbol(v string)`

SetCurrencySymbol sets CurrencySymbol field to given value.

### HasCurrencySymbol

`func (o *ServerOrderGetResponse) HasCurrencySymbol() bool`

HasCurrencySymbol returns a boolean if a field has been set.

### GetCountry

`func (o *ServerOrderGetResponse) GetCountry() string`

GetCountry returns the Country field if non-nil, zero value otherwise.

### GetCountryOk

`func (o *ServerOrderGetResponse) GetCountryOk() (*string, bool)`

GetCountryOk returns a tuple with the Country field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountry

`func (o *ServerOrderGetResponse) SetCountry(v string)`

SetCountry sets Country field to given value.


### GetCustid

`func (o *ServerOrderGetResponse) GetCustid() int32`

GetCustid returns the Custid field if non-nil, zero value otherwise.

### GetCustidOk

`func (o *ServerOrderGetResponse) GetCustidOk() (*int32, bool)`

GetCustidOk returns a tuple with the Custid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustid

`func (o *ServerOrderGetResponse) SetCustid(v int32)`

SetCustid sets Custid field to given value.

### HasCustid

`func (o *ServerOrderGetResponse) HasCustid() bool`

HasCustid returns a boolean if a field has been set.

### GetIma

`func (o *ServerOrderGetResponse) GetIma() string`

GetIma returns the Ima field if non-nil, zero value otherwise.

### GetImaOk

`func (o *ServerOrderGetResponse) GetImaOk() (*string, bool)`

GetImaOk returns a tuple with the Ima field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIma

`func (o *ServerOrderGetResponse) SetIma(v string)`

SetIma sets Ima field to given value.

### HasIma

`func (o *ServerOrderGetResponse) HasIma() bool`

HasIma returns a boolean if a field has been set.

### GetStep

`func (o *ServerOrderGetResponse) GetStep() string`

GetStep returns the Step field if non-nil, zero value otherwise.

### GetStepOk

`func (o *ServerOrderGetResponse) GetStepOk() (*string, bool)`

GetStepOk returns a tuple with the Step field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStep

`func (o *ServerOrderGetResponse) SetStep(v string)`

SetStep sets Step field to given value.


### GetRegions

`func (o *ServerOrderGetResponse) GetRegions() []Region`

GetRegions returns the Regions field if non-nil, zero value otherwise.

### GetRegionsOk

`func (o *ServerOrderGetResponse) GetRegionsOk() (*[]Region, bool)`

GetRegionsOk returns a tuple with the Regions field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRegions

`func (o *ServerOrderGetResponse) SetRegions(v []Region)`

SetRegions sets Regions field to given value.

### HasRegions

`func (o *ServerOrderGetResponse) HasRegions() bool`

HasRegions returns a boolean if a field has been set.

### GetAssetServers

`func (o *ServerOrderGetResponse) GetAssetServers() []AssetServer`

GetAssetServers returns the AssetServers field if non-nil, zero value otherwise.

### GetAssetServersOk

`func (o *ServerOrderGetResponse) GetAssetServersOk() (*[]AssetServer, bool)`

GetAssetServersOk returns a tuple with the AssetServers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetServers

`func (o *ServerOrderGetResponse) SetAssetServers(v []AssetServer)`

SetAssetServers sets AssetServers field to given value.

### HasAssetServers

`func (o *ServerOrderGetResponse) HasAssetServers() bool`

HasAssetServers returns a boolean if a field has been set.

### GetBuyItServers

`func (o *ServerOrderGetResponse) GetBuyItServers() []map[string]interface{}`

GetBuyItServers returns the BuyItServers field if non-nil, zero value otherwise.

### GetBuyItServersOk

`func (o *ServerOrderGetResponse) GetBuyItServersOk() (*[]map[string]interface{}, bool)`

GetBuyItServersOk returns a tuple with the BuyItServers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBuyItServers

`func (o *ServerOrderGetResponse) SetBuyItServers(v []map[string]interface{})`

SetBuyItServers sets BuyItServers field to given value.

### HasBuyItServers

`func (o *ServerOrderGetResponse) HasBuyItServers() bool`

HasBuyItServers returns a boolean if a field has been set.

### GetDisplayShowmore

`func (o *ServerOrderGetResponse) GetDisplayShowmore() string`

GetDisplayShowmore returns the DisplayShowmore field if non-nil, zero value otherwise.

### GetDisplayShowmoreOk

`func (o *ServerOrderGetResponse) GetDisplayShowmoreOk() (*string, bool)`

GetDisplayShowmoreOk returns a tuple with the DisplayShowmore field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisplayShowmore

`func (o *ServerOrderGetResponse) SetDisplayShowmore(v string)`

SetDisplayShowmore sets DisplayShowmore field to given value.

### HasDisplayShowmore

`func (o *ServerOrderGetResponse) HasDisplayShowmore() bool`

HasDisplayShowmore returns a boolean if a field has been set.

### GetCustDiscount

`func (o *ServerOrderGetResponse) GetCustDiscount() float32`

GetCustDiscount returns the CustDiscount field if non-nil, zero value otherwise.

### GetCustDiscountOk

`func (o *ServerOrderGetResponse) GetCustDiscountOk() (*float32, bool)`

GetCustDiscountOk returns a tuple with the CustDiscount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustDiscount

`func (o *ServerOrderGetResponse) SetCustDiscount(v float32)`

SetCustDiscount sets CustDiscount field to given value.

### HasCustDiscount

`func (o *ServerOrderGetResponse) HasCustDiscount() bool`

HasCustDiscount returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


