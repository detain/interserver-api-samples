# AssetServer

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **int32** |  | [optional] 
**Region** | Pointer to **string** |  | [optional] 
**Price** | Pointer to **string** |  | [optional] 
**CPU** | Pointer to [**[]AssetServerCPUInner**](AssetServerCPUInner.md) |  | [optional] 
**Memory** | Pointer to [**[]AssetServerCPUInner**](AssetServerCPUInner.md) |  | [optional] 
**Bandwidth** | Pointer to [**[]AssetServerCPUInner**](AssetServerCPUInner.md) |  | [optional] 
**IPs** | Pointer to [**[]AssetServerCPUInner**](AssetServerCPUInner.md) |  | [optional] 
**HD** | Pointer to **map[string]string** |  | [optional] 

## Methods

### NewAssetServer

`func NewAssetServer() *AssetServer`

NewAssetServer instantiates a new AssetServer object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAssetServerWithDefaults

`func NewAssetServerWithDefaults() *AssetServer`

NewAssetServerWithDefaults instantiates a new AssetServer object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *AssetServer) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *AssetServer) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *AssetServer) SetId(v int32)`

SetId sets Id field to given value.

### HasId

`func (o *AssetServer) HasId() bool`

HasId returns a boolean if a field has been set.

### GetRegion

`func (o *AssetServer) GetRegion() string`

GetRegion returns the Region field if non-nil, zero value otherwise.

### GetRegionOk

`func (o *AssetServer) GetRegionOk() (*string, bool)`

GetRegionOk returns a tuple with the Region field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRegion

`func (o *AssetServer) SetRegion(v string)`

SetRegion sets Region field to given value.

### HasRegion

`func (o *AssetServer) HasRegion() bool`

HasRegion returns a boolean if a field has been set.

### GetPrice

`func (o *AssetServer) GetPrice() string`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *AssetServer) GetPriceOk() (*string, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *AssetServer) SetPrice(v string)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *AssetServer) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetCPU

`func (o *AssetServer) GetCPU() []AssetServerCPUInner`

GetCPU returns the CPU field if non-nil, zero value otherwise.

### GetCPUOk

`func (o *AssetServer) GetCPUOk() (*[]AssetServerCPUInner, bool)`

GetCPUOk returns a tuple with the CPU field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCPU

`func (o *AssetServer) SetCPU(v []AssetServerCPUInner)`

SetCPU sets CPU field to given value.

### HasCPU

`func (o *AssetServer) HasCPU() bool`

HasCPU returns a boolean if a field has been set.

### GetMemory

`func (o *AssetServer) GetMemory() []AssetServerCPUInner`

GetMemory returns the Memory field if non-nil, zero value otherwise.

### GetMemoryOk

`func (o *AssetServer) GetMemoryOk() (*[]AssetServerCPUInner, bool)`

GetMemoryOk returns a tuple with the Memory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMemory

`func (o *AssetServer) SetMemory(v []AssetServerCPUInner)`

SetMemory sets Memory field to given value.

### HasMemory

`func (o *AssetServer) HasMemory() bool`

HasMemory returns a boolean if a field has been set.

### GetBandwidth

`func (o *AssetServer) GetBandwidth() []AssetServerCPUInner`

GetBandwidth returns the Bandwidth field if non-nil, zero value otherwise.

### GetBandwidthOk

`func (o *AssetServer) GetBandwidthOk() (*[]AssetServerCPUInner, bool)`

GetBandwidthOk returns a tuple with the Bandwidth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBandwidth

`func (o *AssetServer) SetBandwidth(v []AssetServerCPUInner)`

SetBandwidth sets Bandwidth field to given value.

### HasBandwidth

`func (o *AssetServer) HasBandwidth() bool`

HasBandwidth returns a boolean if a field has been set.

### GetIPs

`func (o *AssetServer) GetIPs() []AssetServerCPUInner`

GetIPs returns the IPs field if non-nil, zero value otherwise.

### GetIPsOk

`func (o *AssetServer) GetIPsOk() (*[]AssetServerCPUInner, bool)`

GetIPsOk returns a tuple with the IPs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIPs

`func (o *AssetServer) SetIPs(v []AssetServerCPUInner)`

SetIPs sets IPs field to given value.

### HasIPs

`func (o *AssetServer) HasIPs() bool`

HasIPs returns a boolean if a field has been set.

### GetHD

`func (o *AssetServer) GetHD() map[string]string`

GetHD returns the HD field if non-nil, zero value otherwise.

### GetHDOk

`func (o *AssetServer) GetHDOk() (*map[string]string, bool)`

GetHDOk returns a tuple with the HD field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHD

`func (o *AssetServer) SetHD(v map[string]string)`

SetHD sets HD field to given value.

### HasHD

`func (o *AssetServer) HasHD() bool`

HasHD returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


