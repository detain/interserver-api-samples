# VpsServiceMaster

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**VpsId** | Pointer to **string** | VPS ID | [optional] 
**VpsName** | Pointer to **string** | VPS name | [optional] 
**VpsIp** | Pointer to **string** | IP address of the VPS | [optional] 
**VpsType** | Pointer to **string** | VPS type | [optional] 
**VpsHdsize** | Pointer to **string** | Hard drive size | [optional] 
**VpsHdfree** | Pointer to **string** | Free hard drive space | [optional] 
**VpsBits** | Pointer to **string** | Bits | [optional] 
**VpsLoad** | Pointer to **string** | CPU load | [optional] 
**VpsRam** | Pointer to **string** | RAM | [optional] 
**VpsCpuModel** | Pointer to **string** | CPU model | [optional] 
**VpsCpuMhz** | Pointer to **string** | CPU frequency in MHz | [optional] 
**VpsLocation** | Pointer to **string** | Location of the VPS | [optional] 
**VpsLastUpdate** | Pointer to **string** | Last update date | [optional] 
**VpsRaidBuilding** | Pointer to **string** | RAID building status | [optional] 
**VpsKernel** | Pointer to **string** | Kernel version | [optional] 
**VpsAvailable** | Pointer to **string** | Available | [optional] 
**VpsCores** | Pointer to **string** | Number of CPU cores | [optional] 
**VpsIowait** | Pointer to **string** | I/O wait | [optional] 
**VpsRaidStatus** | Pointer to **string** | RAID status | [optional] 
**VpsMounts** | Pointer to **string** | Mounts | [optional] 
**VpsServerMax** | Pointer to **string** | Maximum number of servers | [optional] 
**VpsServerMaxSlices** | Pointer to **string** | Maximum number of server slices | [optional] 
**VpsDriveType** | Pointer to **string** | Drive type | [optional] 
**VpsOrder** | Pointer to **string** | Order number | [optional] 

## Methods

### NewVpsServiceMaster

`func NewVpsServiceMaster() *VpsServiceMaster`

NewVpsServiceMaster instantiates a new VpsServiceMaster object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsServiceMasterWithDefaults

`func NewVpsServiceMasterWithDefaults() *VpsServiceMaster`

NewVpsServiceMasterWithDefaults instantiates a new VpsServiceMaster object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVpsId

`func (o *VpsServiceMaster) GetVpsId() string`

GetVpsId returns the VpsId field if non-nil, zero value otherwise.

### GetVpsIdOk

`func (o *VpsServiceMaster) GetVpsIdOk() (*string, bool)`

GetVpsIdOk returns a tuple with the VpsId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsId

`func (o *VpsServiceMaster) SetVpsId(v string)`

SetVpsId sets VpsId field to given value.

### HasVpsId

`func (o *VpsServiceMaster) HasVpsId() bool`

HasVpsId returns a boolean if a field has been set.

### GetVpsName

`func (o *VpsServiceMaster) GetVpsName() string`

GetVpsName returns the VpsName field if non-nil, zero value otherwise.

### GetVpsNameOk

`func (o *VpsServiceMaster) GetVpsNameOk() (*string, bool)`

GetVpsNameOk returns a tuple with the VpsName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsName

`func (o *VpsServiceMaster) SetVpsName(v string)`

SetVpsName sets VpsName field to given value.

### HasVpsName

`func (o *VpsServiceMaster) HasVpsName() bool`

HasVpsName returns a boolean if a field has been set.

### GetVpsIp

`func (o *VpsServiceMaster) GetVpsIp() string`

GetVpsIp returns the VpsIp field if non-nil, zero value otherwise.

### GetVpsIpOk

`func (o *VpsServiceMaster) GetVpsIpOk() (*string, bool)`

GetVpsIpOk returns a tuple with the VpsIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsIp

`func (o *VpsServiceMaster) SetVpsIp(v string)`

SetVpsIp sets VpsIp field to given value.

### HasVpsIp

`func (o *VpsServiceMaster) HasVpsIp() bool`

HasVpsIp returns a boolean if a field has been set.

### GetVpsType

`func (o *VpsServiceMaster) GetVpsType() string`

GetVpsType returns the VpsType field if non-nil, zero value otherwise.

### GetVpsTypeOk

`func (o *VpsServiceMaster) GetVpsTypeOk() (*string, bool)`

GetVpsTypeOk returns a tuple with the VpsType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsType

`func (o *VpsServiceMaster) SetVpsType(v string)`

SetVpsType sets VpsType field to given value.

### HasVpsType

`func (o *VpsServiceMaster) HasVpsType() bool`

HasVpsType returns a boolean if a field has been set.

### GetVpsHdsize

`func (o *VpsServiceMaster) GetVpsHdsize() string`

GetVpsHdsize returns the VpsHdsize field if non-nil, zero value otherwise.

### GetVpsHdsizeOk

`func (o *VpsServiceMaster) GetVpsHdsizeOk() (*string, bool)`

GetVpsHdsizeOk returns a tuple with the VpsHdsize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsHdsize

`func (o *VpsServiceMaster) SetVpsHdsize(v string)`

SetVpsHdsize sets VpsHdsize field to given value.

### HasVpsHdsize

`func (o *VpsServiceMaster) HasVpsHdsize() bool`

HasVpsHdsize returns a boolean if a field has been set.

### GetVpsHdfree

`func (o *VpsServiceMaster) GetVpsHdfree() string`

GetVpsHdfree returns the VpsHdfree field if non-nil, zero value otherwise.

### GetVpsHdfreeOk

`func (o *VpsServiceMaster) GetVpsHdfreeOk() (*string, bool)`

GetVpsHdfreeOk returns a tuple with the VpsHdfree field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsHdfree

`func (o *VpsServiceMaster) SetVpsHdfree(v string)`

SetVpsHdfree sets VpsHdfree field to given value.

### HasVpsHdfree

`func (o *VpsServiceMaster) HasVpsHdfree() bool`

HasVpsHdfree returns a boolean if a field has been set.

### GetVpsBits

`func (o *VpsServiceMaster) GetVpsBits() string`

GetVpsBits returns the VpsBits field if non-nil, zero value otherwise.

### GetVpsBitsOk

`func (o *VpsServiceMaster) GetVpsBitsOk() (*string, bool)`

GetVpsBitsOk returns a tuple with the VpsBits field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsBits

`func (o *VpsServiceMaster) SetVpsBits(v string)`

SetVpsBits sets VpsBits field to given value.

### HasVpsBits

`func (o *VpsServiceMaster) HasVpsBits() bool`

HasVpsBits returns a boolean if a field has been set.

### GetVpsLoad

`func (o *VpsServiceMaster) GetVpsLoad() string`

GetVpsLoad returns the VpsLoad field if non-nil, zero value otherwise.

### GetVpsLoadOk

`func (o *VpsServiceMaster) GetVpsLoadOk() (*string, bool)`

GetVpsLoadOk returns a tuple with the VpsLoad field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsLoad

`func (o *VpsServiceMaster) SetVpsLoad(v string)`

SetVpsLoad sets VpsLoad field to given value.

### HasVpsLoad

`func (o *VpsServiceMaster) HasVpsLoad() bool`

HasVpsLoad returns a boolean if a field has been set.

### GetVpsRam

`func (o *VpsServiceMaster) GetVpsRam() string`

GetVpsRam returns the VpsRam field if non-nil, zero value otherwise.

### GetVpsRamOk

`func (o *VpsServiceMaster) GetVpsRamOk() (*string, bool)`

GetVpsRamOk returns a tuple with the VpsRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsRam

`func (o *VpsServiceMaster) SetVpsRam(v string)`

SetVpsRam sets VpsRam field to given value.

### HasVpsRam

`func (o *VpsServiceMaster) HasVpsRam() bool`

HasVpsRam returns a boolean if a field has been set.

### GetVpsCpuModel

`func (o *VpsServiceMaster) GetVpsCpuModel() string`

GetVpsCpuModel returns the VpsCpuModel field if non-nil, zero value otherwise.

### GetVpsCpuModelOk

`func (o *VpsServiceMaster) GetVpsCpuModelOk() (*string, bool)`

GetVpsCpuModelOk returns a tuple with the VpsCpuModel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsCpuModel

`func (o *VpsServiceMaster) SetVpsCpuModel(v string)`

SetVpsCpuModel sets VpsCpuModel field to given value.

### HasVpsCpuModel

`func (o *VpsServiceMaster) HasVpsCpuModel() bool`

HasVpsCpuModel returns a boolean if a field has been set.

### GetVpsCpuMhz

`func (o *VpsServiceMaster) GetVpsCpuMhz() string`

GetVpsCpuMhz returns the VpsCpuMhz field if non-nil, zero value otherwise.

### GetVpsCpuMhzOk

`func (o *VpsServiceMaster) GetVpsCpuMhzOk() (*string, bool)`

GetVpsCpuMhzOk returns a tuple with the VpsCpuMhz field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsCpuMhz

`func (o *VpsServiceMaster) SetVpsCpuMhz(v string)`

SetVpsCpuMhz sets VpsCpuMhz field to given value.

### HasVpsCpuMhz

`func (o *VpsServiceMaster) HasVpsCpuMhz() bool`

HasVpsCpuMhz returns a boolean if a field has been set.

### GetVpsLocation

`func (o *VpsServiceMaster) GetVpsLocation() string`

GetVpsLocation returns the VpsLocation field if non-nil, zero value otherwise.

### GetVpsLocationOk

`func (o *VpsServiceMaster) GetVpsLocationOk() (*string, bool)`

GetVpsLocationOk returns a tuple with the VpsLocation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsLocation

`func (o *VpsServiceMaster) SetVpsLocation(v string)`

SetVpsLocation sets VpsLocation field to given value.

### HasVpsLocation

`func (o *VpsServiceMaster) HasVpsLocation() bool`

HasVpsLocation returns a boolean if a field has been set.

### GetVpsLastUpdate

`func (o *VpsServiceMaster) GetVpsLastUpdate() string`

GetVpsLastUpdate returns the VpsLastUpdate field if non-nil, zero value otherwise.

### GetVpsLastUpdateOk

`func (o *VpsServiceMaster) GetVpsLastUpdateOk() (*string, bool)`

GetVpsLastUpdateOk returns a tuple with the VpsLastUpdate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsLastUpdate

`func (o *VpsServiceMaster) SetVpsLastUpdate(v string)`

SetVpsLastUpdate sets VpsLastUpdate field to given value.

### HasVpsLastUpdate

`func (o *VpsServiceMaster) HasVpsLastUpdate() bool`

HasVpsLastUpdate returns a boolean if a field has been set.

### GetVpsRaidBuilding

`func (o *VpsServiceMaster) GetVpsRaidBuilding() string`

GetVpsRaidBuilding returns the VpsRaidBuilding field if non-nil, zero value otherwise.

### GetVpsRaidBuildingOk

`func (o *VpsServiceMaster) GetVpsRaidBuildingOk() (*string, bool)`

GetVpsRaidBuildingOk returns a tuple with the VpsRaidBuilding field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsRaidBuilding

`func (o *VpsServiceMaster) SetVpsRaidBuilding(v string)`

SetVpsRaidBuilding sets VpsRaidBuilding field to given value.

### HasVpsRaidBuilding

`func (o *VpsServiceMaster) HasVpsRaidBuilding() bool`

HasVpsRaidBuilding returns a boolean if a field has been set.

### GetVpsKernel

`func (o *VpsServiceMaster) GetVpsKernel() string`

GetVpsKernel returns the VpsKernel field if non-nil, zero value otherwise.

### GetVpsKernelOk

`func (o *VpsServiceMaster) GetVpsKernelOk() (*string, bool)`

GetVpsKernelOk returns a tuple with the VpsKernel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsKernel

`func (o *VpsServiceMaster) SetVpsKernel(v string)`

SetVpsKernel sets VpsKernel field to given value.

### HasVpsKernel

`func (o *VpsServiceMaster) HasVpsKernel() bool`

HasVpsKernel returns a boolean if a field has been set.

### GetVpsAvailable

`func (o *VpsServiceMaster) GetVpsAvailable() string`

GetVpsAvailable returns the VpsAvailable field if non-nil, zero value otherwise.

### GetVpsAvailableOk

`func (o *VpsServiceMaster) GetVpsAvailableOk() (*string, bool)`

GetVpsAvailableOk returns a tuple with the VpsAvailable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsAvailable

`func (o *VpsServiceMaster) SetVpsAvailable(v string)`

SetVpsAvailable sets VpsAvailable field to given value.

### HasVpsAvailable

`func (o *VpsServiceMaster) HasVpsAvailable() bool`

HasVpsAvailable returns a boolean if a field has been set.

### GetVpsCores

`func (o *VpsServiceMaster) GetVpsCores() string`

GetVpsCores returns the VpsCores field if non-nil, zero value otherwise.

### GetVpsCoresOk

`func (o *VpsServiceMaster) GetVpsCoresOk() (*string, bool)`

GetVpsCoresOk returns a tuple with the VpsCores field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsCores

`func (o *VpsServiceMaster) SetVpsCores(v string)`

SetVpsCores sets VpsCores field to given value.

### HasVpsCores

`func (o *VpsServiceMaster) HasVpsCores() bool`

HasVpsCores returns a boolean if a field has been set.

### GetVpsIowait

`func (o *VpsServiceMaster) GetVpsIowait() string`

GetVpsIowait returns the VpsIowait field if non-nil, zero value otherwise.

### GetVpsIowaitOk

`func (o *VpsServiceMaster) GetVpsIowaitOk() (*string, bool)`

GetVpsIowaitOk returns a tuple with the VpsIowait field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsIowait

`func (o *VpsServiceMaster) SetVpsIowait(v string)`

SetVpsIowait sets VpsIowait field to given value.

### HasVpsIowait

`func (o *VpsServiceMaster) HasVpsIowait() bool`

HasVpsIowait returns a boolean if a field has been set.

### GetVpsRaidStatus

`func (o *VpsServiceMaster) GetVpsRaidStatus() string`

GetVpsRaidStatus returns the VpsRaidStatus field if non-nil, zero value otherwise.

### GetVpsRaidStatusOk

`func (o *VpsServiceMaster) GetVpsRaidStatusOk() (*string, bool)`

GetVpsRaidStatusOk returns a tuple with the VpsRaidStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsRaidStatus

`func (o *VpsServiceMaster) SetVpsRaidStatus(v string)`

SetVpsRaidStatus sets VpsRaidStatus field to given value.

### HasVpsRaidStatus

`func (o *VpsServiceMaster) HasVpsRaidStatus() bool`

HasVpsRaidStatus returns a boolean if a field has been set.

### GetVpsMounts

`func (o *VpsServiceMaster) GetVpsMounts() string`

GetVpsMounts returns the VpsMounts field if non-nil, zero value otherwise.

### GetVpsMountsOk

`func (o *VpsServiceMaster) GetVpsMountsOk() (*string, bool)`

GetVpsMountsOk returns a tuple with the VpsMounts field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsMounts

`func (o *VpsServiceMaster) SetVpsMounts(v string)`

SetVpsMounts sets VpsMounts field to given value.

### HasVpsMounts

`func (o *VpsServiceMaster) HasVpsMounts() bool`

HasVpsMounts returns a boolean if a field has been set.

### GetVpsServerMax

`func (o *VpsServiceMaster) GetVpsServerMax() string`

GetVpsServerMax returns the VpsServerMax field if non-nil, zero value otherwise.

### GetVpsServerMaxOk

`func (o *VpsServiceMaster) GetVpsServerMaxOk() (*string, bool)`

GetVpsServerMaxOk returns a tuple with the VpsServerMax field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsServerMax

`func (o *VpsServiceMaster) SetVpsServerMax(v string)`

SetVpsServerMax sets VpsServerMax field to given value.

### HasVpsServerMax

`func (o *VpsServiceMaster) HasVpsServerMax() bool`

HasVpsServerMax returns a boolean if a field has been set.

### GetVpsServerMaxSlices

`func (o *VpsServiceMaster) GetVpsServerMaxSlices() string`

GetVpsServerMaxSlices returns the VpsServerMaxSlices field if non-nil, zero value otherwise.

### GetVpsServerMaxSlicesOk

`func (o *VpsServiceMaster) GetVpsServerMaxSlicesOk() (*string, bool)`

GetVpsServerMaxSlicesOk returns a tuple with the VpsServerMaxSlices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsServerMaxSlices

`func (o *VpsServiceMaster) SetVpsServerMaxSlices(v string)`

SetVpsServerMaxSlices sets VpsServerMaxSlices field to given value.

### HasVpsServerMaxSlices

`func (o *VpsServiceMaster) HasVpsServerMaxSlices() bool`

HasVpsServerMaxSlices returns a boolean if a field has been set.

### GetVpsDriveType

`func (o *VpsServiceMaster) GetVpsDriveType() string`

GetVpsDriveType returns the VpsDriveType field if non-nil, zero value otherwise.

### GetVpsDriveTypeOk

`func (o *VpsServiceMaster) GetVpsDriveTypeOk() (*string, bool)`

GetVpsDriveTypeOk returns a tuple with the VpsDriveType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsDriveType

`func (o *VpsServiceMaster) SetVpsDriveType(v string)`

SetVpsDriveType sets VpsDriveType field to given value.

### HasVpsDriveType

`func (o *VpsServiceMaster) HasVpsDriveType() bool`

HasVpsDriveType returns a boolean if a field has been set.

### GetVpsOrder

`func (o *VpsServiceMaster) GetVpsOrder() string`

GetVpsOrder returns the VpsOrder field if non-nil, zero value otherwise.

### GetVpsOrderOk

`func (o *VpsServiceMaster) GetVpsOrderOk() (*string, bool)`

GetVpsOrderOk returns a tuple with the VpsOrder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsOrder

`func (o *VpsServiceMaster) SetVpsOrder(v string)`

SetVpsOrder sets VpsOrder field to given value.

### HasVpsOrder

`func (o *VpsServiceMaster) HasVpsOrder() bool`

HasVpsOrder returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


