# RaidOption

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **int32** |  | [optional] 
**ShortDesc** | Pointer to **string** |  | [optional] 
**MonthlyPrice** | Pointer to **float32** |  | [optional] 

## Methods

### NewRaidOption

`func NewRaidOption() *RaidOption`

NewRaidOption instantiates a new RaidOption object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRaidOptionWithDefaults

`func NewRaidOptionWithDefaults() *RaidOption`

NewRaidOptionWithDefaults instantiates a new RaidOption object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *RaidOption) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *RaidOption) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *RaidOption) SetId(v int32)`

SetId sets Id field to given value.

### HasId

`func (o *RaidOption) HasId() bool`

HasId returns a boolean if a field has been set.

### GetShortDesc

`func (o *RaidOption) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *RaidOption) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *RaidOption) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *RaidOption) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *RaidOption) GetMonthlyPrice() float32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *RaidOption) GetMonthlyPriceOk() (*float32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *RaidOption) SetMonthlyPrice(v float32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *RaidOption) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


