# BackupServiceMaster

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**BackupId** | Pointer to **int32** | Backup ID of the service master. | [optional] 
**BackupName** | Pointer to **string** | Name of the backup service. | [optional] 
**BackupIp** | Pointer to **string** | IP address of the backup service. | [optional] 
**BackupType** | Pointer to **int32** | Type of the backup service. | [optional] 
**BackupHdsize** | Pointer to **int32** | Size of the backup service&#39;s hard drive. | [optional] 
**BackupHdfree** | Pointer to **int32** | Amount of free space on the backup service&#39;s hard drive. | [optional] 
**BackupLastUpdate** | Pointer to **string** | Last update timestamp of the backup service. | [optional] 
**BackupAvailable** | Pointer to **int32** | Availability status of the backup service. | [optional] 
**BackupIowait** | Pointer to **int32** | I/O wait status of the backup service. | [optional] 
**BackupOrder** | Pointer to **int32** | Order associated with the backup service. | [optional] 

## Methods

### NewBackupServiceMaster

`func NewBackupServiceMaster() *BackupServiceMaster`

NewBackupServiceMaster instantiates a new BackupServiceMaster object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBackupServiceMasterWithDefaults

`func NewBackupServiceMasterWithDefaults() *BackupServiceMaster`

NewBackupServiceMasterWithDefaults instantiates a new BackupServiceMaster object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetBackupId

`func (o *BackupServiceMaster) GetBackupId() int32`

GetBackupId returns the BackupId field if non-nil, zero value otherwise.

### GetBackupIdOk

`func (o *BackupServiceMaster) GetBackupIdOk() (*int32, bool)`

GetBackupIdOk returns a tuple with the BackupId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupId

`func (o *BackupServiceMaster) SetBackupId(v int32)`

SetBackupId sets BackupId field to given value.

### HasBackupId

`func (o *BackupServiceMaster) HasBackupId() bool`

HasBackupId returns a boolean if a field has been set.

### GetBackupName

`func (o *BackupServiceMaster) GetBackupName() string`

GetBackupName returns the BackupName field if non-nil, zero value otherwise.

### GetBackupNameOk

`func (o *BackupServiceMaster) GetBackupNameOk() (*string, bool)`

GetBackupNameOk returns a tuple with the BackupName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupName

`func (o *BackupServiceMaster) SetBackupName(v string)`

SetBackupName sets BackupName field to given value.

### HasBackupName

`func (o *BackupServiceMaster) HasBackupName() bool`

HasBackupName returns a boolean if a field has been set.

### GetBackupIp

`func (o *BackupServiceMaster) GetBackupIp() string`

GetBackupIp returns the BackupIp field if non-nil, zero value otherwise.

### GetBackupIpOk

`func (o *BackupServiceMaster) GetBackupIpOk() (*string, bool)`

GetBackupIpOk returns a tuple with the BackupIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupIp

`func (o *BackupServiceMaster) SetBackupIp(v string)`

SetBackupIp sets BackupIp field to given value.

### HasBackupIp

`func (o *BackupServiceMaster) HasBackupIp() bool`

HasBackupIp returns a boolean if a field has been set.

### GetBackupType

`func (o *BackupServiceMaster) GetBackupType() int32`

GetBackupType returns the BackupType field if non-nil, zero value otherwise.

### GetBackupTypeOk

`func (o *BackupServiceMaster) GetBackupTypeOk() (*int32, bool)`

GetBackupTypeOk returns a tuple with the BackupType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupType

`func (o *BackupServiceMaster) SetBackupType(v int32)`

SetBackupType sets BackupType field to given value.

### HasBackupType

`func (o *BackupServiceMaster) HasBackupType() bool`

HasBackupType returns a boolean if a field has been set.

### GetBackupHdsize

`func (o *BackupServiceMaster) GetBackupHdsize() int32`

GetBackupHdsize returns the BackupHdsize field if non-nil, zero value otherwise.

### GetBackupHdsizeOk

`func (o *BackupServiceMaster) GetBackupHdsizeOk() (*int32, bool)`

GetBackupHdsizeOk returns a tuple with the BackupHdsize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupHdsize

`func (o *BackupServiceMaster) SetBackupHdsize(v int32)`

SetBackupHdsize sets BackupHdsize field to given value.

### HasBackupHdsize

`func (o *BackupServiceMaster) HasBackupHdsize() bool`

HasBackupHdsize returns a boolean if a field has been set.

### GetBackupHdfree

`func (o *BackupServiceMaster) GetBackupHdfree() int32`

GetBackupHdfree returns the BackupHdfree field if non-nil, zero value otherwise.

### GetBackupHdfreeOk

`func (o *BackupServiceMaster) GetBackupHdfreeOk() (*int32, bool)`

GetBackupHdfreeOk returns a tuple with the BackupHdfree field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupHdfree

`func (o *BackupServiceMaster) SetBackupHdfree(v int32)`

SetBackupHdfree sets BackupHdfree field to given value.

### HasBackupHdfree

`func (o *BackupServiceMaster) HasBackupHdfree() bool`

HasBackupHdfree returns a boolean if a field has been set.

### GetBackupLastUpdate

`func (o *BackupServiceMaster) GetBackupLastUpdate() string`

GetBackupLastUpdate returns the BackupLastUpdate field if non-nil, zero value otherwise.

### GetBackupLastUpdateOk

`func (o *BackupServiceMaster) GetBackupLastUpdateOk() (*string, bool)`

GetBackupLastUpdateOk returns a tuple with the BackupLastUpdate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupLastUpdate

`func (o *BackupServiceMaster) SetBackupLastUpdate(v string)`

SetBackupLastUpdate sets BackupLastUpdate field to given value.

### HasBackupLastUpdate

`func (o *BackupServiceMaster) HasBackupLastUpdate() bool`

HasBackupLastUpdate returns a boolean if a field has been set.

### GetBackupAvailable

`func (o *BackupServiceMaster) GetBackupAvailable() int32`

GetBackupAvailable returns the BackupAvailable field if non-nil, zero value otherwise.

### GetBackupAvailableOk

`func (o *BackupServiceMaster) GetBackupAvailableOk() (*int32, bool)`

GetBackupAvailableOk returns a tuple with the BackupAvailable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupAvailable

`func (o *BackupServiceMaster) SetBackupAvailable(v int32)`

SetBackupAvailable sets BackupAvailable field to given value.

### HasBackupAvailable

`func (o *BackupServiceMaster) HasBackupAvailable() bool`

HasBackupAvailable returns a boolean if a field has been set.

### GetBackupIowait

`func (o *BackupServiceMaster) GetBackupIowait() int32`

GetBackupIowait returns the BackupIowait field if non-nil, zero value otherwise.

### GetBackupIowaitOk

`func (o *BackupServiceMaster) GetBackupIowaitOk() (*int32, bool)`

GetBackupIowaitOk returns a tuple with the BackupIowait field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupIowait

`func (o *BackupServiceMaster) SetBackupIowait(v int32)`

SetBackupIowait sets BackupIowait field to given value.

### HasBackupIowait

`func (o *BackupServiceMaster) HasBackupIowait() bool`

HasBackupIowait returns a boolean if a field has been set.

### GetBackupOrder

`func (o *BackupServiceMaster) GetBackupOrder() int32`

GetBackupOrder returns the BackupOrder field if non-nil, zero value otherwise.

### GetBackupOrderOk

`func (o *BackupServiceMaster) GetBackupOrderOk() (*int32, bool)`

GetBackupOrderOk returns a tuple with the BackupOrder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackupOrder

`func (o *BackupServiceMaster) SetBackupOrder(v int32)`

SetBackupOrder sets BackupOrder field to given value.

### HasBackupOrder

`func (o *BackupServiceMaster) HasBackupOrder() bool`

HasBackupOrder returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


