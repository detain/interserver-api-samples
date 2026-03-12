# ScrubIpFilterTypes

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Success** | Pointer to **bool** |  | [optional] 
**Filters** | Pointer to [**map[string]ScrubIpFilterTypesFiltersValue**](ScrubIpFilterTypesFiltersValue.md) |  | [optional] 

## Methods

### NewScrubIpFilterTypes

`func NewScrubIpFilterTypes() *ScrubIpFilterTypes`

NewScrubIpFilterTypes instantiates a new ScrubIpFilterTypes object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewScrubIpFilterTypesWithDefaults

`func NewScrubIpFilterTypesWithDefaults() *ScrubIpFilterTypes`

NewScrubIpFilterTypesWithDefaults instantiates a new ScrubIpFilterTypes object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSuccess

`func (o *ScrubIpFilterTypes) GetSuccess() bool`

GetSuccess returns the Success field if non-nil, zero value otherwise.

### GetSuccessOk

`func (o *ScrubIpFilterTypes) GetSuccessOk() (*bool, bool)`

GetSuccessOk returns a tuple with the Success field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuccess

`func (o *ScrubIpFilterTypes) SetSuccess(v bool)`

SetSuccess sets Success field to given value.

### HasSuccess

`func (o *ScrubIpFilterTypes) HasSuccess() bool`

HasSuccess returns a boolean if a field has been set.

### GetFilters

`func (o *ScrubIpFilterTypes) GetFilters() map[string]ScrubIpFilterTypesFiltersValue`

GetFilters returns the Filters field if non-nil, zero value otherwise.

### GetFiltersOk

`func (o *ScrubIpFilterTypes) GetFiltersOk() (*map[string]ScrubIpFilterTypesFiltersValue, bool)`

GetFiltersOk returns a tuple with the Filters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFilters

`func (o *ScrubIpFilterTypes) SetFilters(v map[string]ScrubIpFilterTypesFiltersValue)`

SetFilters sets Filters field to given value.

### HasFilters

`func (o *ScrubIpFilterTypes) HasFilters() bool`

HasFilters returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


