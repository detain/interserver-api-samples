# VpsSnapshot

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** | Snapshot name. | [optional] 
**Used** | Pointer to **int32** | Disk space used by this snapshot in bytes. | [optional] 
**Date** | Pointer to **int32** | Unix timestamp of when the snapshot was created. | [optional] 

## Methods

### NewVpsSnapshot

`func NewVpsSnapshot() *VpsSnapshot`

NewVpsSnapshot instantiates a new VpsSnapshot object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsSnapshotWithDefaults

`func NewVpsSnapshotWithDefaults() *VpsSnapshot`

NewVpsSnapshotWithDefaults instantiates a new VpsSnapshot object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *VpsSnapshot) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *VpsSnapshot) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *VpsSnapshot) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *VpsSnapshot) HasName() bool`

HasName returns a boolean if a field has been set.

### GetUsed

`func (o *VpsSnapshot) GetUsed() int32`

GetUsed returns the Used field if non-nil, zero value otherwise.

### GetUsedOk

`func (o *VpsSnapshot) GetUsedOk() (*int32, bool)`

GetUsedOk returns a tuple with the Used field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUsed

`func (o *VpsSnapshot) SetUsed(v int32)`

SetUsed sets Used field to given value.

### HasUsed

`func (o *VpsSnapshot) HasUsed() bool`

HasUsed returns a boolean if a field has been set.

### GetDate

`func (o *VpsSnapshot) GetDate() int32`

GetDate returns the Date field if non-nil, zero value otherwise.

### GetDateOk

`func (o *VpsSnapshot) GetDateOk() (*int32, bool)`

GetDateOk returns a tuple with the Date field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDate

`func (o *VpsSnapshot) SetDate(v int32)`

SetDate sets Date field to given value.

### HasDate

`func (o *VpsSnapshot) HasDate() bool`

HasDate returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


