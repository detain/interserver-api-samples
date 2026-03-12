# VpsCPData

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** | Control panel name (e.g., cPanel). | [optional] 
**Cost** | Pointer to **int32** | Monthly cost in cents for the control panel license. | [optional] 

## Methods

### NewVpsCPData

`func NewVpsCPData() *VpsCPData`

NewVpsCPData instantiates a new VpsCPData object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsCPDataWithDefaults

`func NewVpsCPDataWithDefaults() *VpsCPData`

NewVpsCPDataWithDefaults instantiates a new VpsCPData object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *VpsCPData) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *VpsCPData) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *VpsCPData) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *VpsCPData) HasName() bool`

HasName returns a boolean if a field has been set.

### GetCost

`func (o *VpsCPData) GetCost() int32`

GetCost returns the Cost field if non-nil, zero value otherwise.

### GetCostOk

`func (o *VpsCPData) GetCostOk() (*int32, bool)`

GetCostOk returns a tuple with the Cost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCost

`func (o *VpsCPData) SetCost(v int32)`

SetCost sets Cost field to given value.

### HasCost

`func (o *VpsCPData) HasCost() bool`

HasCost returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


