# BackupsOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PackageCosts** | [**BackupsOrderPackageCosts**](BackupsOrderPackageCosts.md) |  | 
**ServiceTypes** | [**BackupsOrderServiceTypes**](BackupsOrderServiceTypes.md) |  | 

## Methods

### NewBackupsOrder

`func NewBackupsOrder(packageCosts BackupsOrderPackageCosts, serviceTypes BackupsOrderServiceTypes, ) *BackupsOrder`

NewBackupsOrder instantiates a new BackupsOrder object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBackupsOrderWithDefaults

`func NewBackupsOrderWithDefaults() *BackupsOrder`

NewBackupsOrderWithDefaults instantiates a new BackupsOrder object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPackageCosts

`func (o *BackupsOrder) GetPackageCosts() BackupsOrderPackageCosts`

GetPackageCosts returns the PackageCosts field if non-nil, zero value otherwise.

### GetPackageCostsOk

`func (o *BackupsOrder) GetPackageCostsOk() (*BackupsOrderPackageCosts, bool)`

GetPackageCostsOk returns a tuple with the PackageCosts field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackageCosts

`func (o *BackupsOrder) SetPackageCosts(v BackupsOrderPackageCosts)`

SetPackageCosts sets PackageCosts field to given value.


### GetServiceTypes

`func (o *BackupsOrder) GetServiceTypes() BackupsOrderServiceTypes`

GetServiceTypes returns the ServiceTypes field if non-nil, zero value otherwise.

### GetServiceTypesOk

`func (o *BackupsOrder) GetServiceTypesOk() (*BackupsOrderServiceTypes, bool)`

GetServiceTypesOk returns a tuple with the ServiceTypes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceTypes

`func (o *BackupsOrder) SetServiceTypes(v BackupsOrderServiceTypes)`

SetServiceTypes sets ServiceTypes field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


