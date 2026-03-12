# BuyItNowRow

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServerId** | Pointer to **string** | Unique server ID. Use this as &#x60;server_id&#x60; in &#x60;POST /servers/order/buy_now_server&#x60;. | [optional] 
**Cpu** | Pointer to [**[]BuyItNowRowCpuInner**](BuyItNowRowCpuInner.md) |  | [optional] 
**Memory** | Pointer to **string** |  | [optional] 
**Disk** | Pointer to **map[string]string** |  | [optional] 
**Bandwidth** | Pointer to **string** |  | [optional] 
**Ips** | Pointer to **string** |  | [optional] 
**Location** | Pointer to **string** |  | [optional] 
**Price** | Pointer to **int32** |  | [optional] 

## Methods

### NewBuyItNowRow

`func NewBuyItNowRow() *BuyItNowRow`

NewBuyItNowRow instantiates a new BuyItNowRow object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBuyItNowRowWithDefaults

`func NewBuyItNowRowWithDefaults() *BuyItNowRow`

NewBuyItNowRowWithDefaults instantiates a new BuyItNowRow object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServerId

`func (o *BuyItNowRow) GetServerId() string`

GetServerId returns the ServerId field if non-nil, zero value otherwise.

### GetServerIdOk

`func (o *BuyItNowRow) GetServerIdOk() (*string, bool)`

GetServerIdOk returns a tuple with the ServerId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerId

`func (o *BuyItNowRow) SetServerId(v string)`

SetServerId sets ServerId field to given value.

### HasServerId

`func (o *BuyItNowRow) HasServerId() bool`

HasServerId returns a boolean if a field has been set.

### GetCpu

`func (o *BuyItNowRow) GetCpu() []BuyItNowRowCpuInner`

GetCpu returns the Cpu field if non-nil, zero value otherwise.

### GetCpuOk

`func (o *BuyItNowRow) GetCpuOk() (*[]BuyItNowRowCpuInner, bool)`

GetCpuOk returns a tuple with the Cpu field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpu

`func (o *BuyItNowRow) SetCpu(v []BuyItNowRowCpuInner)`

SetCpu sets Cpu field to given value.

### HasCpu

`func (o *BuyItNowRow) HasCpu() bool`

HasCpu returns a boolean if a field has been set.

### GetMemory

`func (o *BuyItNowRow) GetMemory() string`

GetMemory returns the Memory field if non-nil, zero value otherwise.

### GetMemoryOk

`func (o *BuyItNowRow) GetMemoryOk() (*string, bool)`

GetMemoryOk returns a tuple with the Memory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMemory

`func (o *BuyItNowRow) SetMemory(v string)`

SetMemory sets Memory field to given value.

### HasMemory

`func (o *BuyItNowRow) HasMemory() bool`

HasMemory returns a boolean if a field has been set.

### GetDisk

`func (o *BuyItNowRow) GetDisk() map[string]string`

GetDisk returns the Disk field if non-nil, zero value otherwise.

### GetDiskOk

`func (o *BuyItNowRow) GetDiskOk() (*map[string]string, bool)`

GetDiskOk returns a tuple with the Disk field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisk

`func (o *BuyItNowRow) SetDisk(v map[string]string)`

SetDisk sets Disk field to given value.

### HasDisk

`func (o *BuyItNowRow) HasDisk() bool`

HasDisk returns a boolean if a field has been set.

### GetBandwidth

`func (o *BuyItNowRow) GetBandwidth() string`

GetBandwidth returns the Bandwidth field if non-nil, zero value otherwise.

### GetBandwidthOk

`func (o *BuyItNowRow) GetBandwidthOk() (*string, bool)`

GetBandwidthOk returns a tuple with the Bandwidth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBandwidth

`func (o *BuyItNowRow) SetBandwidth(v string)`

SetBandwidth sets Bandwidth field to given value.

### HasBandwidth

`func (o *BuyItNowRow) HasBandwidth() bool`

HasBandwidth returns a boolean if a field has been set.

### GetIps

`func (o *BuyItNowRow) GetIps() string`

GetIps returns the Ips field if non-nil, zero value otherwise.

### GetIpsOk

`func (o *BuyItNowRow) GetIpsOk() (*string, bool)`

GetIpsOk returns a tuple with the Ips field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIps

`func (o *BuyItNowRow) SetIps(v string)`

SetIps sets Ips field to given value.

### HasIps

`func (o *BuyItNowRow) HasIps() bool`

HasIps returns a boolean if a field has been set.

### GetLocation

`func (o *BuyItNowRow) GetLocation() string`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *BuyItNowRow) GetLocationOk() (*string, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *BuyItNowRow) SetLocation(v string)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *BuyItNowRow) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetPrice

`func (o *BuyItNowRow) GetPrice() int32`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *BuyItNowRow) GetPriceOk() (*int32, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *BuyItNowRow) SetPrice(v int32)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *BuyItNowRow) HasPrice() bool`

HasPrice returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


