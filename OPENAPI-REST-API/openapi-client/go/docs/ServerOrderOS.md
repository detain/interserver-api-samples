# ServerOrderOS

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** | Operating System ID. | [optional] 
**Price** | Pointer to **int32** | Operating System price. | [optional] 
**Img** | Pointer to **string** | Operating System image. | [optional] 
**ShortDesc** | Pointer to **string** | Short description of the OS. | [optional] 
**LongDesc** | Pointer to **string** | Long description of the OS. | [optional] 
**MonthlyPrice** | Pointer to **int32** | Monthly price. | [optional] 
**Active** | Pointer to **string** | Active status. | [optional] 
**PriceDisplay** | Pointer to **string** | Display of OS price. | [optional] 
**MonthlyPriceDisplay** | Pointer to **string** | Display of monthly OS price. | [optional] 

## Methods

### NewServerOrderOS

`func NewServerOrderOS() *ServerOrderOS`

NewServerOrderOS instantiates a new ServerOrderOS object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderOSWithDefaults

`func NewServerOrderOSWithDefaults() *ServerOrderOS`

NewServerOrderOSWithDefaults instantiates a new ServerOrderOS object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *ServerOrderOS) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *ServerOrderOS) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *ServerOrderOS) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *ServerOrderOS) HasId() bool`

HasId returns a boolean if a field has been set.

### GetPrice

`func (o *ServerOrderOS) GetPrice() int32`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ServerOrderOS) GetPriceOk() (*int32, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ServerOrderOS) SetPrice(v int32)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ServerOrderOS) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetImg

`func (o *ServerOrderOS) GetImg() string`

GetImg returns the Img field if non-nil, zero value otherwise.

### GetImgOk

`func (o *ServerOrderOS) GetImgOk() (*string, bool)`

GetImgOk returns a tuple with the Img field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImg

`func (o *ServerOrderOS) SetImg(v string)`

SetImg sets Img field to given value.

### HasImg

`func (o *ServerOrderOS) HasImg() bool`

HasImg returns a boolean if a field has been set.

### GetShortDesc

`func (o *ServerOrderOS) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *ServerOrderOS) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *ServerOrderOS) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *ServerOrderOS) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *ServerOrderOS) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *ServerOrderOS) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *ServerOrderOS) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *ServerOrderOS) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *ServerOrderOS) GetMonthlyPrice() int32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *ServerOrderOS) GetMonthlyPriceOk() (*int32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *ServerOrderOS) SetMonthlyPrice(v int32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *ServerOrderOS) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetActive

`func (o *ServerOrderOS) GetActive() string`

GetActive returns the Active field if non-nil, zero value otherwise.

### GetActiveOk

`func (o *ServerOrderOS) GetActiveOk() (*string, bool)`

GetActiveOk returns a tuple with the Active field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActive

`func (o *ServerOrderOS) SetActive(v string)`

SetActive sets Active field to given value.

### HasActive

`func (o *ServerOrderOS) HasActive() bool`

HasActive returns a boolean if a field has been set.

### GetPriceDisplay

`func (o *ServerOrderOS) GetPriceDisplay() string`

GetPriceDisplay returns the PriceDisplay field if non-nil, zero value otherwise.

### GetPriceDisplayOk

`func (o *ServerOrderOS) GetPriceDisplayOk() (*string, bool)`

GetPriceDisplayOk returns a tuple with the PriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceDisplay

`func (o *ServerOrderOS) SetPriceDisplay(v string)`

SetPriceDisplay sets PriceDisplay field to given value.

### HasPriceDisplay

`func (o *ServerOrderOS) HasPriceDisplay() bool`

HasPriceDisplay returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *ServerOrderOS) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *ServerOrderOS) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *ServerOrderOS) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *ServerOrderOS) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


