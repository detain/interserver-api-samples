# ConfigLists

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CpuLi** | Pointer to [**map[string]Cpu**](Cpu.md) |  | [optional] 
**MemoryLi** | Pointer to [**map[string]map[string]MemoryOption**](map.md) |  | [optional] 
**HdLi** | Pointer to [**map[string]map[string]HardDrive**](map.md) |  | [optional] 
**BandwidthLi** | Pointer to [**map[string]Bandwidth**](Bandwidth.md) |  | [optional] 
**IpsLi** | Pointer to [**map[string]IpBlock**](IpBlock.md) |  | [optional] 
**OsLi** | Pointer to [**map[string]OperatingSystem**](OperatingSystem.md) |  | [optional] 
**CpLi** | Pointer to [**map[string]ControlPanel**](ControlPanel.md) |  | [optional] 
**RaidLi** | Pointer to [**[]RaidOption**](RaidOption.md) |  | [optional] 

## Methods

### NewConfigLists

`func NewConfigLists() *ConfigLists`

NewConfigLists instantiates a new ConfigLists object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewConfigListsWithDefaults

`func NewConfigListsWithDefaults() *ConfigLists`

NewConfigListsWithDefaults instantiates a new ConfigLists object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCpuLi

`func (o *ConfigLists) GetCpuLi() map[string]Cpu`

GetCpuLi returns the CpuLi field if non-nil, zero value otherwise.

### GetCpuLiOk

`func (o *ConfigLists) GetCpuLiOk() (*map[string]Cpu, bool)`

GetCpuLiOk returns a tuple with the CpuLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpuLi

`func (o *ConfigLists) SetCpuLi(v map[string]Cpu)`

SetCpuLi sets CpuLi field to given value.

### HasCpuLi

`func (o *ConfigLists) HasCpuLi() bool`

HasCpuLi returns a boolean if a field has been set.

### GetMemoryLi

`func (o *ConfigLists) GetMemoryLi() map[string]map[string]MemoryOption`

GetMemoryLi returns the MemoryLi field if non-nil, zero value otherwise.

### GetMemoryLiOk

`func (o *ConfigLists) GetMemoryLiOk() (*map[string]map[string]MemoryOption, bool)`

GetMemoryLiOk returns a tuple with the MemoryLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMemoryLi

`func (o *ConfigLists) SetMemoryLi(v map[string]map[string]MemoryOption)`

SetMemoryLi sets MemoryLi field to given value.

### HasMemoryLi

`func (o *ConfigLists) HasMemoryLi() bool`

HasMemoryLi returns a boolean if a field has been set.

### GetHdLi

`func (o *ConfigLists) GetHdLi() map[string]map[string]HardDrive`

GetHdLi returns the HdLi field if non-nil, zero value otherwise.

### GetHdLiOk

`func (o *ConfigLists) GetHdLiOk() (*map[string]map[string]HardDrive, bool)`

GetHdLiOk returns a tuple with the HdLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdLi

`func (o *ConfigLists) SetHdLi(v map[string]map[string]HardDrive)`

SetHdLi sets HdLi field to given value.

### HasHdLi

`func (o *ConfigLists) HasHdLi() bool`

HasHdLi returns a boolean if a field has been set.

### GetBandwidthLi

`func (o *ConfigLists) GetBandwidthLi() map[string]Bandwidth`

GetBandwidthLi returns the BandwidthLi field if non-nil, zero value otherwise.

### GetBandwidthLiOk

`func (o *ConfigLists) GetBandwidthLiOk() (*map[string]Bandwidth, bool)`

GetBandwidthLiOk returns a tuple with the BandwidthLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBandwidthLi

`func (o *ConfigLists) SetBandwidthLi(v map[string]Bandwidth)`

SetBandwidthLi sets BandwidthLi field to given value.

### HasBandwidthLi

`func (o *ConfigLists) HasBandwidthLi() bool`

HasBandwidthLi returns a boolean if a field has been set.

### GetIpsLi

`func (o *ConfigLists) GetIpsLi() map[string]IpBlock`

GetIpsLi returns the IpsLi field if non-nil, zero value otherwise.

### GetIpsLiOk

`func (o *ConfigLists) GetIpsLiOk() (*map[string]IpBlock, bool)`

GetIpsLiOk returns a tuple with the IpsLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpsLi

`func (o *ConfigLists) SetIpsLi(v map[string]IpBlock)`

SetIpsLi sets IpsLi field to given value.

### HasIpsLi

`func (o *ConfigLists) HasIpsLi() bool`

HasIpsLi returns a boolean if a field has been set.

### GetOsLi

`func (o *ConfigLists) GetOsLi() map[string]OperatingSystem`

GetOsLi returns the OsLi field if non-nil, zero value otherwise.

### GetOsLiOk

`func (o *ConfigLists) GetOsLiOk() (*map[string]OperatingSystem, bool)`

GetOsLiOk returns a tuple with the OsLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOsLi

`func (o *ConfigLists) SetOsLi(v map[string]OperatingSystem)`

SetOsLi sets OsLi field to given value.

### HasOsLi

`func (o *ConfigLists) HasOsLi() bool`

HasOsLi returns a boolean if a field has been set.

### GetCpLi

`func (o *ConfigLists) GetCpLi() map[string]ControlPanel`

GetCpLi returns the CpLi field if non-nil, zero value otherwise.

### GetCpLiOk

`func (o *ConfigLists) GetCpLiOk() (*map[string]ControlPanel, bool)`

GetCpLiOk returns a tuple with the CpLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpLi

`func (o *ConfigLists) SetCpLi(v map[string]ControlPanel)`

SetCpLi sets CpLi field to given value.

### HasCpLi

`func (o *ConfigLists) HasCpLi() bool`

HasCpLi returns a boolean if a field has been set.

### GetRaidLi

`func (o *ConfigLists) GetRaidLi() []RaidOption`

GetRaidLi returns the RaidLi field if non-nil, zero value otherwise.

### GetRaidLiOk

`func (o *ConfigLists) GetRaidLiOk() (*[]RaidOption, bool)`

GetRaidLiOk returns a tuple with the RaidLi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRaidLi

`func (o *ConfigLists) SetRaidLi(v []RaidOption)`

SetRaidLi sets RaidLi field to given value.

### HasRaidLi

`func (o *ConfigLists) HasRaidLi() bool`

HasRaidLi returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


