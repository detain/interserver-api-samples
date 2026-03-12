# ServerOrderRAID

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** | RAID ID. | [optional] 
**Price** | Pointer to **int32** | RAID price. | [optional] 
**Img** | Pointer to **string** | RAID image. | [optional] 
**ShortDesc** | Pointer to **string** | Short description of the RAID. | [optional] 
**LongDesc** | Pointer to **string** | Long description of the RAID. | [optional] 
**MonthlyPrice** | Pointer to **int32** | Monthly price. | [optional] 
**Active** | Pointer to **string** | Active status. | [optional] 
**PriceDisplay** | Pointer to **string** | Display of RAID price. | [optional] 
**MonthlyPriceDisplay** | Pointer to **string** | Display of monthly RAID price. | [optional] 

## Methods

### NewServerOrderRAID

`func NewServerOrderRAID() *ServerOrderRAID`

NewServerOrderRAID instantiates a new ServerOrderRAID object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderRAIDWithDefaults

`func NewServerOrderRAIDWithDefaults() *ServerOrderRAID`

NewServerOrderRAIDWithDefaults instantiates a new ServerOrderRAID object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *ServerOrderRAID) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *ServerOrderRAID) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *ServerOrderRAID) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *ServerOrderRAID) HasId() bool`

HasId returns a boolean if a field has been set.

### GetPrice

`func (o *ServerOrderRAID) GetPrice() int32`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ServerOrderRAID) GetPriceOk() (*int32, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ServerOrderRAID) SetPrice(v int32)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ServerOrderRAID) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetImg

`func (o *ServerOrderRAID) GetImg() string`

GetImg returns the Img field if non-nil, zero value otherwise.

### GetImgOk

`func (o *ServerOrderRAID) GetImgOk() (*string, bool)`

GetImgOk returns a tuple with the Img field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImg

`func (o *ServerOrderRAID) SetImg(v string)`

SetImg sets Img field to given value.

### HasImg

`func (o *ServerOrderRAID) HasImg() bool`

HasImg returns a boolean if a field has been set.

### GetShortDesc

`func (o *ServerOrderRAID) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *ServerOrderRAID) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *ServerOrderRAID) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *ServerOrderRAID) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *ServerOrderRAID) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *ServerOrderRAID) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *ServerOrderRAID) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *ServerOrderRAID) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *ServerOrderRAID) GetMonthlyPrice() int32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *ServerOrderRAID) GetMonthlyPriceOk() (*int32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *ServerOrderRAID) SetMonthlyPrice(v int32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *ServerOrderRAID) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetActive

`func (o *ServerOrderRAID) GetActive() string`

GetActive returns the Active field if non-nil, zero value otherwise.

### GetActiveOk

`func (o *ServerOrderRAID) GetActiveOk() (*string, bool)`

GetActiveOk returns a tuple with the Active field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActive

`func (o *ServerOrderRAID) SetActive(v string)`

SetActive sets Active field to given value.

### HasActive

`func (o *ServerOrderRAID) HasActive() bool`

HasActive returns a boolean if a field has been set.

### GetPriceDisplay

`func (o *ServerOrderRAID) GetPriceDisplay() string`

GetPriceDisplay returns the PriceDisplay field if non-nil, zero value otherwise.

### GetPriceDisplayOk

`func (o *ServerOrderRAID) GetPriceDisplayOk() (*string, bool)`

GetPriceDisplayOk returns a tuple with the PriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceDisplay

`func (o *ServerOrderRAID) SetPriceDisplay(v string)`

SetPriceDisplay sets PriceDisplay field to given value.

### HasPriceDisplay

`func (o *ServerOrderRAID) HasPriceDisplay() bool`

HasPriceDisplay returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *ServerOrderRAID) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *ServerOrderRAID) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *ServerOrderRAID) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *ServerOrderRAID) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


