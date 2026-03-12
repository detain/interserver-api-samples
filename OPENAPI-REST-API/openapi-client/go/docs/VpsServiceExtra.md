# VpsServiceExtra

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Spice** | Pointer to **int32** | Spice | [optional] 
**Snapshots** | Pointer to [**[]VpsSnapshot**](VpsSnapshot.md) |  | [optional] 

## Methods

### NewVpsServiceExtra

`func NewVpsServiceExtra() *VpsServiceExtra`

NewVpsServiceExtra instantiates a new VpsServiceExtra object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsServiceExtraWithDefaults

`func NewVpsServiceExtraWithDefaults() *VpsServiceExtra`

NewVpsServiceExtraWithDefaults instantiates a new VpsServiceExtra object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSpice

`func (o *VpsServiceExtra) GetSpice() int32`

GetSpice returns the Spice field if non-nil, zero value otherwise.

### GetSpiceOk

`func (o *VpsServiceExtra) GetSpiceOk() (*int32, bool)`

GetSpiceOk returns a tuple with the Spice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSpice

`func (o *VpsServiceExtra) SetSpice(v int32)`

SetSpice sets Spice field to given value.

### HasSpice

`func (o *VpsServiceExtra) HasSpice() bool`

HasSpice returns a boolean if a field has been set.

### GetSnapshots

`func (o *VpsServiceExtra) GetSnapshots() []VpsSnapshot`

GetSnapshots returns the Snapshots field if non-nil, zero value otherwise.

### GetSnapshotsOk

`func (o *VpsServiceExtra) GetSnapshotsOk() (*[]VpsSnapshot, bool)`

GetSnapshotsOk returns a tuple with the Snapshots field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSnapshots

`func (o *VpsServiceExtra) SetSnapshots(v []VpsSnapshot)`

SetSnapshots sets Snapshots field to given value.

### HasSnapshots

`func (o *VpsServiceExtra) HasSnapshots() bool`

HasSnapshots returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


