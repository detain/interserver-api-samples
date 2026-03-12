# VpsBackupRow

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Type** | **string** | Backup Type | 
**Service** | **int32** | The service id such as vps  id. | 
**Name** | **string** | The name of the backup. | 
**Size** | **int32** | Size of the file in bytes | 
**Date** | **int32** | The creation date of the backup in a unix timestamp. | 

## Methods

### NewVpsBackupRow

`func NewVpsBackupRow(type_ string, service int32, name string, size int32, date int32, ) *VpsBackupRow`

NewVpsBackupRow instantiates a new VpsBackupRow object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsBackupRowWithDefaults

`func NewVpsBackupRowWithDefaults() *VpsBackupRow`

NewVpsBackupRowWithDefaults instantiates a new VpsBackupRow object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetType

`func (o *VpsBackupRow) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *VpsBackupRow) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *VpsBackupRow) SetType(v string)`

SetType sets Type field to given value.


### GetService

`func (o *VpsBackupRow) GetService() int32`

GetService returns the Service field if non-nil, zero value otherwise.

### GetServiceOk

`func (o *VpsBackupRow) GetServiceOk() (*int32, bool)`

GetServiceOk returns a tuple with the Service field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetService

`func (o *VpsBackupRow) SetService(v int32)`

SetService sets Service field to given value.


### GetName

`func (o *VpsBackupRow) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *VpsBackupRow) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *VpsBackupRow) SetName(v string)`

SetName sets Name field to given value.


### GetSize

`func (o *VpsBackupRow) GetSize() int32`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *VpsBackupRow) GetSizeOk() (*int32, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *VpsBackupRow) SetSize(v int32)`

SetSize sets Size field to given value.


### GetDate

`func (o *VpsBackupRow) GetDate() int32`

GetDate returns the Date field if non-nil, zero value otherwise.

### GetDateOk

`func (o *VpsBackupRow) GetDateOk() (*int32, bool)`

GetDateOk returns a tuple with the Date field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDate

`func (o *VpsBackupRow) SetDate(v int32)`

SetDate sets Date field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


