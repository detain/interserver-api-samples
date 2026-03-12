# ServerOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FormValues** | Pointer to [**ServerOrderFormValues**](ServerOrderFormValues.md) |  | [optional] 
**ConfigIds** | Pointer to [**ServerOrderConfigIds**](ServerOrderConfigIds.md) |  | [optional] 
**Cpu** | Pointer to **int32** | Number of CPUs for the server order. | [optional] 
**FieldLabel** | Pointer to [**ServerOrderFieldLabels**](ServerOrderFieldLabels.md) |  | [optional] 
**CpuLi** | Pointer to [**ServerOrderCpuLi**](ServerOrderCpuLi.md) |  | [optional] 
**MemoryLi** | Pointer to [**ServerOrderMemoryLi**](ServerOrderMemoryLi.md) |  | [optional] 
**BandwidthLi** | Pointer to [**ServerOrderBandwidthLi**](ServerOrderBandwidthLi.md) |  | [optional] 
**IpsLi** | Pointer to [**ServerOrderIpsLi**](ServerOrderIpsLi.md) |  | [optional] 
**OsLi** | Pointer to [**ServerOrderOsLi**](ServerOrderOsLi.md) |  | [optional] 
**CpLi** | Pointer to [**ServerOrderCpLi**](ServerOrderCpLi.md) |  | [optional] 
**RaidLi** | Pointer to [**[]ServerOrderRAID**](ServerOrderRAID.md) | RAID options for the server order. | [optional] 

## Methods

### NewServerOrder

`func NewServerOrder() *ServerOrder`

NewServerOrder instantiates a new ServerOrder object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderWithDefaults

`func NewServerOrderWithDefaults() *ServerOrder`

NewServerOrderWithDefaults instantiates a new ServerOrder object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFormValues

`func (o *ServerOrder) GetFormValues() ServerOrderFormValues`

GetFormValues returns the FormValues field if non-nil, zero value otherwise.

### GetFormValuesOk

`func (o *ServerOrder) GetFormValuesOk() (*ServerOrderFormValues, bool)`

GetFormValuesOk returns a tuple with the FormValues field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormValues

`func (o *ServerOrder) SetFormValues(v ServerOrderFormValues)`

SetFormValues sets FormValues field to given value.

### HasFormValues

`func (o *ServerOrder) HasFormValues() bool`

HasFormValues returns a boolean if a field has been set.

### GetConfigIds

`func (o *ServerOrder) GetConfigIds() ServerOrderConfigIds`

GetConfigIds returns the ConfigIds field if non-nil, zero value otherwise.

### GetConfigIdsOk

`func (o *ServerOrder) GetConfigIdsOk() (*ServerOrderConfigIds, bool)`

GetConfigIdsOk returns a tuple with the ConfigIds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConfigIds

`func (o *ServerOrder) SetConfigIds(v ServerOrderConfigIds)`

SetConfigIds sets ConfigIds field to given value.

### HasConfigIds

`func (o *ServerOrder) HasConfigIds() bool`

HasConfigIds returns a boolean if a field has been set.

### GetCpu

`func (o *ServerOrder) GetCpu() int32`

GetCpu returns the Cpu field if non-nil, zero value otherwise.

### GetCpuOk

`func (o *ServerOrder) GetCpuOk() (*int32, bool)`

GetCpuOk returns a tuple with the Cpu field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpu

`func (o *ServerOrder) SetCpu(v int32)`

SetCpu sets Cpu field to given value.

### HasCpu

`func (o *ServerOrder) HasCpu() bool`

HasCpu returns a boolean if a field has been set.

### GetFieldLabel

`func (o *ServerOrder) GetFieldLabel() ServerOrderFieldLabels`

GetFieldLabel returns the FieldLabel field if non-nil, zero value otherwise.

### GetFieldLabelOk

`func (o *ServerOrder) GetFieldLabelOk() (*ServerOrderFieldLabels, bool)`

GetFieldLabelOk returns a tuple with the FieldLabel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFieldLabel

`func (o *ServerOrder) SetFieldLabel(v ServerOrderFieldLabels)`

SetFieldLabel sets FieldLabel field to given value.

### HasFieldLabel

`func (o *ServerOrder) HasFieldLabel() bool`

HasFieldLabel returns a boolean if a field has been set.

### GetCpuLi

`func (o *ServerOrder) GetCpuLi() ServerOrderCpuLi`

GetCpuLi returns the CpuLi field if non-nil, zero value otherwise.

### GetCpuLiOk

`func (o *ServerOrder) GetCpuLiOk() (*ServerOrderCpuLi, bool)`

GetCpuLiOk returns a tuple with the CpuLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpuLi

`func (o *ServerOrder) SetCpuLi(v ServerOrderCpuLi)`

SetCpuLi sets CpuLi field to given value.

### HasCpuLi

`func (o *ServerOrder) HasCpuLi() bool`

HasCpuLi returns a boolean if a field has been set.

### GetMemoryLi

`func (o *ServerOrder) GetMemoryLi() ServerOrderMemoryLi`

GetMemoryLi returns the MemoryLi field if non-nil, zero value otherwise.

### GetMemoryLiOk

`func (o *ServerOrder) GetMemoryLiOk() (*ServerOrderMemoryLi, bool)`

GetMemoryLiOk returns a tuple with the MemoryLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMemoryLi

`func (o *ServerOrder) SetMemoryLi(v ServerOrderMemoryLi)`

SetMemoryLi sets MemoryLi field to given value.

### HasMemoryLi

`func (o *ServerOrder) HasMemoryLi() bool`

HasMemoryLi returns a boolean if a field has been set.

### GetBandwidthLi

`func (o *ServerOrder) GetBandwidthLi() ServerOrderBandwidthLi`

GetBandwidthLi returns the BandwidthLi field if non-nil, zero value otherwise.

### GetBandwidthLiOk

`func (o *ServerOrder) GetBandwidthLiOk() (*ServerOrderBandwidthLi, bool)`

GetBandwidthLiOk returns a tuple with the BandwidthLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBandwidthLi

`func (o *ServerOrder) SetBandwidthLi(v ServerOrderBandwidthLi)`

SetBandwidthLi sets BandwidthLi field to given value.

### HasBandwidthLi

`func (o *ServerOrder) HasBandwidthLi() bool`

HasBandwidthLi returns a boolean if a field has been set.

### GetIpsLi

`func (o *ServerOrder) GetIpsLi() ServerOrderIpsLi`

GetIpsLi returns the IpsLi field if non-nil, zero value otherwise.

### GetIpsLiOk

`func (o *ServerOrder) GetIpsLiOk() (*ServerOrderIpsLi, bool)`

GetIpsLiOk returns a tuple with the IpsLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpsLi

`func (o *ServerOrder) SetIpsLi(v ServerOrderIpsLi)`

SetIpsLi sets IpsLi field to given value.

### HasIpsLi

`func (o *ServerOrder) HasIpsLi() bool`

HasIpsLi returns a boolean if a field has been set.

### GetOsLi

`func (o *ServerOrder) GetOsLi() ServerOrderOsLi`

GetOsLi returns the OsLi field if non-nil, zero value otherwise.

### GetOsLiOk

`func (o *ServerOrder) GetOsLiOk() (*ServerOrderOsLi, bool)`

GetOsLiOk returns a tuple with the OsLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOsLi

`func (o *ServerOrder) SetOsLi(v ServerOrderOsLi)`

SetOsLi sets OsLi field to given value.

### HasOsLi

`func (o *ServerOrder) HasOsLi() bool`

HasOsLi returns a boolean if a field has been set.

### GetCpLi

`func (o *ServerOrder) GetCpLi() ServerOrderCpLi`

GetCpLi returns the CpLi field if non-nil, zero value otherwise.

### GetCpLiOk

`func (o *ServerOrder) GetCpLiOk() (*ServerOrderCpLi, bool)`

GetCpLiOk returns a tuple with the CpLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpLi

`func (o *ServerOrder) SetCpLi(v ServerOrderCpLi)`

SetCpLi sets CpLi field to given value.

### HasCpLi

`func (o *ServerOrder) HasCpLi() bool`

HasCpLi returns a boolean if a field has been set.

### GetRaidLi

`func (o *ServerOrder) GetRaidLi() []ServerOrderRAID`

GetRaidLi returns the RaidLi field if non-nil, zero value otherwise.

### GetRaidLiOk

`func (o *ServerOrder) GetRaidLiOk() (*[]ServerOrderRAID, bool)`

GetRaidLiOk returns a tuple with the RaidLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRaidLi

`func (o *ServerOrder) SetRaidLi(v []ServerOrderRAID)`

SetRaidLi sets RaidLi field to given value.

### HasRaidLi

`func (o *ServerOrder) HasRaidLi() bool`

HasRaidLi returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


