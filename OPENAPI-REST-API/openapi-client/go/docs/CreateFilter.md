# CreateFilter

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FilterType** | **string** |  | 
**Port** | **int32** |  | 

## Methods

### NewCreateFilter

`func NewCreateFilter(filterType string, port int32, ) *CreateFilter`

NewCreateFilter instantiates a new CreateFilter object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCreateFilterWithDefaults

`func NewCreateFilterWithDefaults() *CreateFilter`

NewCreateFilterWithDefaults instantiates a new CreateFilter object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFilterType

`func (o *CreateFilter) GetFilterType() string`

GetFilterType returns the FilterType field if non-nil, zero value otherwise.

### GetFilterTypeOk

`func (o *CreateFilter) GetFilterTypeOk() (*string, bool)`

GetFilterTypeOk returns a tuple with the FilterType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFilterType

`func (o *CreateFilter) SetFilterType(v string)`

SetFilterType sets FilterType field to given value.


### GetPort

`func (o *CreateFilter) GetPort() int32`

GetPort returns the Port field if non-nil, zero value otherwise.

### GetPortOk

`func (o *CreateFilter) GetPortOk() (*int32, bool)`

GetPortOk returns a tuple with the Port field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPort

`func (o *CreateFilter) SetPort(v int32)`

SetPort sets Port field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


