# QuickserverServiceMaster

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**QsId** | Pointer to **string** | Quickserver ID | [optional] 
**QsName** | Pointer to **string** | Quickserver name | [optional] 
**QsIp** | Pointer to **string** | IP address | [optional] 
**QsType** | Pointer to **string** | Type | [optional] 
**QsHdsize** | Pointer to **string** | HDD size | [optional] 
**QsHdfree** | Pointer to **string** | Free HDD space | [optional] 
**QsBits** | Pointer to **string** | Bits | [optional] 
**QsLoad** | Pointer to **string** | Load | [optional] 
**QsRam** | Pointer to **string** | RAM information | [optional] 
**QsCpuModel** | Pointer to **string** | CPU model | [optional] 
**QsCpuMhz** | Pointer to **string** | CPU frequency | [optional] 
**QsLocation** | Pointer to **string** | Location | [optional] 
**QsAvailable** | Pointer to **string** | Available information | [optional] 
**QsCost** | Pointer to **string** | Cost | [optional] 
**QsLastUpdate** | Pointer to **string** | Last update date | [optional] 
**QsCores** | Pointer to **string** | Number of cores | [optional] 
**QsIowait** | Pointer to **string** | I/O wait | [optional] 
**QsRaidStatus** | Pointer to **string** | RAID status | [optional] 
**QsDriveType** | Pointer to **string** | Drive type | [optional] 
**QsOrder** | Pointer to **string** | Order number | [optional] 
**QsRaidBuilding** | Pointer to **string** | RAID building information | [optional] 
**QsKernel** | Pointer to **string** | Kernel version | [optional] 
**QsIoping** | Pointer to **string** | IOPing information | [optional] 
**QsSpeed** | Pointer to **string** | Speed information | [optional] 
**QsDistro** | Pointer to **string** | Distribution name | [optional] 
**QsDistroVersion** | Pointer to **string** | Distribution version | [optional] 
**QsBytesSecIn** | Pointer to **string** | Bytes/sec in | [optional] 
**QsBytesSecOut** | Pointer to **string** | Bytes/sec out | [optional] 
**QsPacketsSecIn** | Pointer to **string** | Packets/sec in | [optional] 
**QsPacketsSecOut** | Pointer to **string** | Packets/sec out | [optional] 
**QsLastInstallTime** | Pointer to **interface{}** | Last install time (null) | [optional] 
**QsPartitions** | Pointer to **interface{}** | Partitions information (null) | [optional] 
**QsCpuFlags** | Pointer to **string** | CPU flags | [optional] 

## Methods

### NewQuickserverServiceMaster

`func NewQuickserverServiceMaster() *QuickserverServiceMaster`

NewQuickserverServiceMaster instantiates a new QuickserverServiceMaster object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQuickserverServiceMasterWithDefaults

`func NewQuickserverServiceMasterWithDefaults() *QuickserverServiceMaster`

NewQuickserverServiceMasterWithDefaults instantiates a new QuickserverServiceMaster object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetQsId

`func (o *QuickserverServiceMaster) GetQsId() string`

GetQsId returns the QsId field if non-nil, zero value otherwise.

### GetQsIdOk

`func (o *QuickserverServiceMaster) GetQsIdOk() (*string, bool)`

GetQsIdOk returns a tuple with the QsId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsId

`func (o *QuickserverServiceMaster) SetQsId(v string)`

SetQsId sets QsId field to given value.

### HasQsId

`func (o *QuickserverServiceMaster) HasQsId() bool`

HasQsId returns a boolean if a field has been set.

### GetQsName

`func (o *QuickserverServiceMaster) GetQsName() string`

GetQsName returns the QsName field if non-nil, zero value otherwise.

### GetQsNameOk

`func (o *QuickserverServiceMaster) GetQsNameOk() (*string, bool)`

GetQsNameOk returns a tuple with the QsName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsName

`func (o *QuickserverServiceMaster) SetQsName(v string)`

SetQsName sets QsName field to given value.

### HasQsName

`func (o *QuickserverServiceMaster) HasQsName() bool`

HasQsName returns a boolean if a field has been set.

### GetQsIp

`func (o *QuickserverServiceMaster) GetQsIp() string`

GetQsIp returns the QsIp field if non-nil, zero value otherwise.

### GetQsIpOk

`func (o *QuickserverServiceMaster) GetQsIpOk() (*string, bool)`

GetQsIpOk returns a tuple with the QsIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsIp

`func (o *QuickserverServiceMaster) SetQsIp(v string)`

SetQsIp sets QsIp field to given value.

### HasQsIp

`func (o *QuickserverServiceMaster) HasQsIp() bool`

HasQsIp returns a boolean if a field has been set.

### GetQsType

`func (o *QuickserverServiceMaster) GetQsType() string`

GetQsType returns the QsType field if non-nil, zero value otherwise.

### GetQsTypeOk

`func (o *QuickserverServiceMaster) GetQsTypeOk() (*string, bool)`

GetQsTypeOk returns a tuple with the QsType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsType

`func (o *QuickserverServiceMaster) SetQsType(v string)`

SetQsType sets QsType field to given value.

### HasQsType

`func (o *QuickserverServiceMaster) HasQsType() bool`

HasQsType returns a boolean if a field has been set.

### GetQsHdsize

`func (o *QuickserverServiceMaster) GetQsHdsize() string`

GetQsHdsize returns the QsHdsize field if non-nil, zero value otherwise.

### GetQsHdsizeOk

`func (o *QuickserverServiceMaster) GetQsHdsizeOk() (*string, bool)`

GetQsHdsizeOk returns a tuple with the QsHdsize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsHdsize

`func (o *QuickserverServiceMaster) SetQsHdsize(v string)`

SetQsHdsize sets QsHdsize field to given value.

### HasQsHdsize

`func (o *QuickserverServiceMaster) HasQsHdsize() bool`

HasQsHdsize returns a boolean if a field has been set.

### GetQsHdfree

`func (o *QuickserverServiceMaster) GetQsHdfree() string`

GetQsHdfree returns the QsHdfree field if non-nil, zero value otherwise.

### GetQsHdfreeOk

`func (o *QuickserverServiceMaster) GetQsHdfreeOk() (*string, bool)`

GetQsHdfreeOk returns a tuple with the QsHdfree field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsHdfree

`func (o *QuickserverServiceMaster) SetQsHdfree(v string)`

SetQsHdfree sets QsHdfree field to given value.

### HasQsHdfree

`func (o *QuickserverServiceMaster) HasQsHdfree() bool`

HasQsHdfree returns a boolean if a field has been set.

### GetQsBits

`func (o *QuickserverServiceMaster) GetQsBits() string`

GetQsBits returns the QsBits field if non-nil, zero value otherwise.

### GetQsBitsOk

`func (o *QuickserverServiceMaster) GetQsBitsOk() (*string, bool)`

GetQsBitsOk returns a tuple with the QsBits field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsBits

`func (o *QuickserverServiceMaster) SetQsBits(v string)`

SetQsBits sets QsBits field to given value.

### HasQsBits

`func (o *QuickserverServiceMaster) HasQsBits() bool`

HasQsBits returns a boolean if a field has been set.

### GetQsLoad

`func (o *QuickserverServiceMaster) GetQsLoad() string`

GetQsLoad returns the QsLoad field if non-nil, zero value otherwise.

### GetQsLoadOk

`func (o *QuickserverServiceMaster) GetQsLoadOk() (*string, bool)`

GetQsLoadOk returns a tuple with the QsLoad field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsLoad

`func (o *QuickserverServiceMaster) SetQsLoad(v string)`

SetQsLoad sets QsLoad field to given value.

### HasQsLoad

`func (o *QuickserverServiceMaster) HasQsLoad() bool`

HasQsLoad returns a boolean if a field has been set.

### GetQsRam

`func (o *QuickserverServiceMaster) GetQsRam() string`

GetQsRam returns the QsRam field if non-nil, zero value otherwise.

### GetQsRamOk

`func (o *QuickserverServiceMaster) GetQsRamOk() (*string, bool)`

GetQsRamOk returns a tuple with the QsRam field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsRam

`func (o *QuickserverServiceMaster) SetQsRam(v string)`

SetQsRam sets QsRam field to given value.

### HasQsRam

`func (o *QuickserverServiceMaster) HasQsRam() bool`

HasQsRam returns a boolean if a field has been set.

### GetQsCpuModel

`func (o *QuickserverServiceMaster) GetQsCpuModel() string`

GetQsCpuModel returns the QsCpuModel field if non-nil, zero value otherwise.

### GetQsCpuModelOk

`func (o *QuickserverServiceMaster) GetQsCpuModelOk() (*string, bool)`

GetQsCpuModelOk returns a tuple with the QsCpuModel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCpuModel

`func (o *QuickserverServiceMaster) SetQsCpuModel(v string)`

SetQsCpuModel sets QsCpuModel field to given value.

### HasQsCpuModel

`func (o *QuickserverServiceMaster) HasQsCpuModel() bool`

HasQsCpuModel returns a boolean if a field has been set.

### GetQsCpuMhz

`func (o *QuickserverServiceMaster) GetQsCpuMhz() string`

GetQsCpuMhz returns the QsCpuMhz field if non-nil, zero value otherwise.

### GetQsCpuMhzOk

`func (o *QuickserverServiceMaster) GetQsCpuMhzOk() (*string, bool)`

GetQsCpuMhzOk returns a tuple with the QsCpuMhz field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCpuMhz

`func (o *QuickserverServiceMaster) SetQsCpuMhz(v string)`

SetQsCpuMhz sets QsCpuMhz field to given value.

### HasQsCpuMhz

`func (o *QuickserverServiceMaster) HasQsCpuMhz() bool`

HasQsCpuMhz returns a boolean if a field has been set.

### GetQsLocation

`func (o *QuickserverServiceMaster) GetQsLocation() string`

GetQsLocation returns the QsLocation field if non-nil, zero value otherwise.

### GetQsLocationOk

`func (o *QuickserverServiceMaster) GetQsLocationOk() (*string, bool)`

GetQsLocationOk returns a tuple with the QsLocation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsLocation

`func (o *QuickserverServiceMaster) SetQsLocation(v string)`

SetQsLocation sets QsLocation field to given value.

### HasQsLocation

`func (o *QuickserverServiceMaster) HasQsLocation() bool`

HasQsLocation returns a boolean if a field has been set.

### GetQsAvailable

`func (o *QuickserverServiceMaster) GetQsAvailable() string`

GetQsAvailable returns the QsAvailable field if non-nil, zero value otherwise.

### GetQsAvailableOk

`func (o *QuickserverServiceMaster) GetQsAvailableOk() (*string, bool)`

GetQsAvailableOk returns a tuple with the QsAvailable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsAvailable

`func (o *QuickserverServiceMaster) SetQsAvailable(v string)`

SetQsAvailable sets QsAvailable field to given value.

### HasQsAvailable

`func (o *QuickserverServiceMaster) HasQsAvailable() bool`

HasQsAvailable returns a boolean if a field has been set.

### GetQsCost

`func (o *QuickserverServiceMaster) GetQsCost() string`

GetQsCost returns the QsCost field if non-nil, zero value otherwise.

### GetQsCostOk

`func (o *QuickserverServiceMaster) GetQsCostOk() (*string, bool)`

GetQsCostOk returns a tuple with the QsCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCost

`func (o *QuickserverServiceMaster) SetQsCost(v string)`

SetQsCost sets QsCost field to given value.

### HasQsCost

`func (o *QuickserverServiceMaster) HasQsCost() bool`

HasQsCost returns a boolean if a field has been set.

### GetQsLastUpdate

`func (o *QuickserverServiceMaster) GetQsLastUpdate() string`

GetQsLastUpdate returns the QsLastUpdate field if non-nil, zero value otherwise.

### GetQsLastUpdateOk

`func (o *QuickserverServiceMaster) GetQsLastUpdateOk() (*string, bool)`

GetQsLastUpdateOk returns a tuple with the QsLastUpdate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsLastUpdate

`func (o *QuickserverServiceMaster) SetQsLastUpdate(v string)`

SetQsLastUpdate sets QsLastUpdate field to given value.

### HasQsLastUpdate

`func (o *QuickserverServiceMaster) HasQsLastUpdate() bool`

HasQsLastUpdate returns a boolean if a field has been set.

### GetQsCores

`func (o *QuickserverServiceMaster) GetQsCores() string`

GetQsCores returns the QsCores field if non-nil, zero value otherwise.

### GetQsCoresOk

`func (o *QuickserverServiceMaster) GetQsCoresOk() (*string, bool)`

GetQsCoresOk returns a tuple with the QsCores field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCores

`func (o *QuickserverServiceMaster) SetQsCores(v string)`

SetQsCores sets QsCores field to given value.

### HasQsCores

`func (o *QuickserverServiceMaster) HasQsCores() bool`

HasQsCores returns a boolean if a field has been set.

### GetQsIowait

`func (o *QuickserverServiceMaster) GetQsIowait() string`

GetQsIowait returns the QsIowait field if non-nil, zero value otherwise.

### GetQsIowaitOk

`func (o *QuickserverServiceMaster) GetQsIowaitOk() (*string, bool)`

GetQsIowaitOk returns a tuple with the QsIowait field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsIowait

`func (o *QuickserverServiceMaster) SetQsIowait(v string)`

SetQsIowait sets QsIowait field to given value.

### HasQsIowait

`func (o *QuickserverServiceMaster) HasQsIowait() bool`

HasQsIowait returns a boolean if a field has been set.

### GetQsRaidStatus

`func (o *QuickserverServiceMaster) GetQsRaidStatus() string`

GetQsRaidStatus returns the QsRaidStatus field if non-nil, zero value otherwise.

### GetQsRaidStatusOk

`func (o *QuickserverServiceMaster) GetQsRaidStatusOk() (*string, bool)`

GetQsRaidStatusOk returns a tuple with the QsRaidStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsRaidStatus

`func (o *QuickserverServiceMaster) SetQsRaidStatus(v string)`

SetQsRaidStatus sets QsRaidStatus field to given value.

### HasQsRaidStatus

`func (o *QuickserverServiceMaster) HasQsRaidStatus() bool`

HasQsRaidStatus returns a boolean if a field has been set.

### GetQsDriveType

`func (o *QuickserverServiceMaster) GetQsDriveType() string`

GetQsDriveType returns the QsDriveType field if non-nil, zero value otherwise.

### GetQsDriveTypeOk

`func (o *QuickserverServiceMaster) GetQsDriveTypeOk() (*string, bool)`

GetQsDriveTypeOk returns a tuple with the QsDriveType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsDriveType

`func (o *QuickserverServiceMaster) SetQsDriveType(v string)`

SetQsDriveType sets QsDriveType field to given value.

### HasQsDriveType

`func (o *QuickserverServiceMaster) HasQsDriveType() bool`

HasQsDriveType returns a boolean if a field has been set.

### GetQsOrder

`func (o *QuickserverServiceMaster) GetQsOrder() string`

GetQsOrder returns the QsOrder field if non-nil, zero value otherwise.

### GetQsOrderOk

`func (o *QuickserverServiceMaster) GetQsOrderOk() (*string, bool)`

GetQsOrderOk returns a tuple with the QsOrder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsOrder

`func (o *QuickserverServiceMaster) SetQsOrder(v string)`

SetQsOrder sets QsOrder field to given value.

### HasQsOrder

`func (o *QuickserverServiceMaster) HasQsOrder() bool`

HasQsOrder returns a boolean if a field has been set.

### GetQsRaidBuilding

`func (o *QuickserverServiceMaster) GetQsRaidBuilding() string`

GetQsRaidBuilding returns the QsRaidBuilding field if non-nil, zero value otherwise.

### GetQsRaidBuildingOk

`func (o *QuickserverServiceMaster) GetQsRaidBuildingOk() (*string, bool)`

GetQsRaidBuildingOk returns a tuple with the QsRaidBuilding field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsRaidBuilding

`func (o *QuickserverServiceMaster) SetQsRaidBuilding(v string)`

SetQsRaidBuilding sets QsRaidBuilding field to given value.

### HasQsRaidBuilding

`func (o *QuickserverServiceMaster) HasQsRaidBuilding() bool`

HasQsRaidBuilding returns a boolean if a field has been set.

### GetQsKernel

`func (o *QuickserverServiceMaster) GetQsKernel() string`

GetQsKernel returns the QsKernel field if non-nil, zero value otherwise.

### GetQsKernelOk

`func (o *QuickserverServiceMaster) GetQsKernelOk() (*string, bool)`

GetQsKernelOk returns a tuple with the QsKernel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsKernel

`func (o *QuickserverServiceMaster) SetQsKernel(v string)`

SetQsKernel sets QsKernel field to given value.

### HasQsKernel

`func (o *QuickserverServiceMaster) HasQsKernel() bool`

HasQsKernel returns a boolean if a field has been set.

### GetQsIoping

`func (o *QuickserverServiceMaster) GetQsIoping() string`

GetQsIoping returns the QsIoping field if non-nil, zero value otherwise.

### GetQsIopingOk

`func (o *QuickserverServiceMaster) GetQsIopingOk() (*string, bool)`

GetQsIopingOk returns a tuple with the QsIoping field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsIoping

`func (o *QuickserverServiceMaster) SetQsIoping(v string)`

SetQsIoping sets QsIoping field to given value.

### HasQsIoping

`func (o *QuickserverServiceMaster) HasQsIoping() bool`

HasQsIoping returns a boolean if a field has been set.

### GetQsSpeed

`func (o *QuickserverServiceMaster) GetQsSpeed() string`

GetQsSpeed returns the QsSpeed field if non-nil, zero value otherwise.

### GetQsSpeedOk

`func (o *QuickserverServiceMaster) GetQsSpeedOk() (*string, bool)`

GetQsSpeedOk returns a tuple with the QsSpeed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsSpeed

`func (o *QuickserverServiceMaster) SetQsSpeed(v string)`

SetQsSpeed sets QsSpeed field to given value.

### HasQsSpeed

`func (o *QuickserverServiceMaster) HasQsSpeed() bool`

HasQsSpeed returns a boolean if a field has been set.

### GetQsDistro

`func (o *QuickserverServiceMaster) GetQsDistro() string`

GetQsDistro returns the QsDistro field if non-nil, zero value otherwise.

### GetQsDistroOk

`func (o *QuickserverServiceMaster) GetQsDistroOk() (*string, bool)`

GetQsDistroOk returns a tuple with the QsDistro field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsDistro

`func (o *QuickserverServiceMaster) SetQsDistro(v string)`

SetQsDistro sets QsDistro field to given value.

### HasQsDistro

`func (o *QuickserverServiceMaster) HasQsDistro() bool`

HasQsDistro returns a boolean if a field has been set.

### GetQsDistroVersion

`func (o *QuickserverServiceMaster) GetQsDistroVersion() string`

GetQsDistroVersion returns the QsDistroVersion field if non-nil, zero value otherwise.

### GetQsDistroVersionOk

`func (o *QuickserverServiceMaster) GetQsDistroVersionOk() (*string, bool)`

GetQsDistroVersionOk returns a tuple with the QsDistroVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsDistroVersion

`func (o *QuickserverServiceMaster) SetQsDistroVersion(v string)`

SetQsDistroVersion sets QsDistroVersion field to given value.

### HasQsDistroVersion

`func (o *QuickserverServiceMaster) HasQsDistroVersion() bool`

HasQsDistroVersion returns a boolean if a field has been set.

### GetQsBytesSecIn

`func (o *QuickserverServiceMaster) GetQsBytesSecIn() string`

GetQsBytesSecIn returns the QsBytesSecIn field if non-nil, zero value otherwise.

### GetQsBytesSecInOk

`func (o *QuickserverServiceMaster) GetQsBytesSecInOk() (*string, bool)`

GetQsBytesSecInOk returns a tuple with the QsBytesSecIn field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsBytesSecIn

`func (o *QuickserverServiceMaster) SetQsBytesSecIn(v string)`

SetQsBytesSecIn sets QsBytesSecIn field to given value.

### HasQsBytesSecIn

`func (o *QuickserverServiceMaster) HasQsBytesSecIn() bool`

HasQsBytesSecIn returns a boolean if a field has been set.

### GetQsBytesSecOut

`func (o *QuickserverServiceMaster) GetQsBytesSecOut() string`

GetQsBytesSecOut returns the QsBytesSecOut field if non-nil, zero value otherwise.

### GetQsBytesSecOutOk

`func (o *QuickserverServiceMaster) GetQsBytesSecOutOk() (*string, bool)`

GetQsBytesSecOutOk returns a tuple with the QsBytesSecOut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsBytesSecOut

`func (o *QuickserverServiceMaster) SetQsBytesSecOut(v string)`

SetQsBytesSecOut sets QsBytesSecOut field to given value.

### HasQsBytesSecOut

`func (o *QuickserverServiceMaster) HasQsBytesSecOut() bool`

HasQsBytesSecOut returns a boolean if a field has been set.

### GetQsPacketsSecIn

`func (o *QuickserverServiceMaster) GetQsPacketsSecIn() string`

GetQsPacketsSecIn returns the QsPacketsSecIn field if non-nil, zero value otherwise.

### GetQsPacketsSecInOk

`func (o *QuickserverServiceMaster) GetQsPacketsSecInOk() (*string, bool)`

GetQsPacketsSecInOk returns a tuple with the QsPacketsSecIn field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsPacketsSecIn

`func (o *QuickserverServiceMaster) SetQsPacketsSecIn(v string)`

SetQsPacketsSecIn sets QsPacketsSecIn field to given value.

### HasQsPacketsSecIn

`func (o *QuickserverServiceMaster) HasQsPacketsSecIn() bool`

HasQsPacketsSecIn returns a boolean if a field has been set.

### GetQsPacketsSecOut

`func (o *QuickserverServiceMaster) GetQsPacketsSecOut() string`

GetQsPacketsSecOut returns the QsPacketsSecOut field if non-nil, zero value otherwise.

### GetQsPacketsSecOutOk

`func (o *QuickserverServiceMaster) GetQsPacketsSecOutOk() (*string, bool)`

GetQsPacketsSecOutOk returns a tuple with the QsPacketsSecOut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsPacketsSecOut

`func (o *QuickserverServiceMaster) SetQsPacketsSecOut(v string)`

SetQsPacketsSecOut sets QsPacketsSecOut field to given value.

### HasQsPacketsSecOut

`func (o *QuickserverServiceMaster) HasQsPacketsSecOut() bool`

HasQsPacketsSecOut returns a boolean if a field has been set.

### GetQsLastInstallTime

`func (o *QuickserverServiceMaster) GetQsLastInstallTime() interface{}`

GetQsLastInstallTime returns the QsLastInstallTime field if non-nil, zero value otherwise.

### GetQsLastInstallTimeOk

`func (o *QuickserverServiceMaster) GetQsLastInstallTimeOk() (*interface{}, bool)`

GetQsLastInstallTimeOk returns a tuple with the QsLastInstallTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsLastInstallTime

`func (o *QuickserverServiceMaster) SetQsLastInstallTime(v interface{})`

SetQsLastInstallTime sets QsLastInstallTime field to given value.

### HasQsLastInstallTime

`func (o *QuickserverServiceMaster) HasQsLastInstallTime() bool`

HasQsLastInstallTime returns a boolean if a field has been set.

### SetQsLastInstallTimeNil

`func (o *QuickserverServiceMaster) SetQsLastInstallTimeNil(b bool)`

 SetQsLastInstallTimeNil sets the value for QsLastInstallTime to be an explicit nil

### UnsetQsLastInstallTime
`func (o *QuickserverServiceMaster) UnsetQsLastInstallTime()`

UnsetQsLastInstallTime ensures that no value is present for QsLastInstallTime, not even an explicit nil
### GetQsPartitions

`func (o *QuickserverServiceMaster) GetQsPartitions() interface{}`

GetQsPartitions returns the QsPartitions field if non-nil, zero value otherwise.

### GetQsPartitionsOk

`func (o *QuickserverServiceMaster) GetQsPartitionsOk() (*interface{}, bool)`

GetQsPartitionsOk returns a tuple with the QsPartitions field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsPartitions

`func (o *QuickserverServiceMaster) SetQsPartitions(v interface{})`

SetQsPartitions sets QsPartitions field to given value.

### HasQsPartitions

`func (o *QuickserverServiceMaster) HasQsPartitions() bool`

HasQsPartitions returns a boolean if a field has been set.

### SetQsPartitionsNil

`func (o *QuickserverServiceMaster) SetQsPartitionsNil(b bool)`

 SetQsPartitionsNil sets the value for QsPartitions to be an explicit nil

### UnsetQsPartitions
`func (o *QuickserverServiceMaster) UnsetQsPartitions()`

UnsetQsPartitions ensures that no value is present for QsPartitions, not even an explicit nil
### GetQsCpuFlags

`func (o *QuickserverServiceMaster) GetQsCpuFlags() string`

GetQsCpuFlags returns the QsCpuFlags field if non-nil, zero value otherwise.

### GetQsCpuFlagsOk

`func (o *QuickserverServiceMaster) GetQsCpuFlagsOk() (*string, bool)`

GetQsCpuFlagsOk returns a tuple with the QsCpuFlags field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCpuFlags

`func (o *QuickserverServiceMaster) SetQsCpuFlags(v string)`

SetQsCpuFlags sets QsCpuFlags field to given value.

### HasQsCpuFlags

`func (o *QuickserverServiceMaster) HasQsCpuFlags() bool`

HasQsCpuFlags returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


