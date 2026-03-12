# ServerOrderIP

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** | IP ID. | [optional] 
**Price** | Pointer to **int32** | IP price. | [optional] 
**Img** | Pointer to **string** | IP image. | [optional] 
**ShortDesc** | Pointer to **string** | Short description of the IP. | [optional] 
**LongDesc** | Pointer to **string** | Long description of the IP. | [optional] 
**Qty** | Pointer to **string** | Quantity of IPs. | [optional] 
**MonthlyPrice** | Pointer to **int32** | Monthly price. | [optional] 
**PriceDisplay** | Pointer to **string** | Display of IP price. | [optional] 
**MonthlyPriceDisplay** | Pointer to **string** | Display of monthly IP price. | [optional] 

## Methods

### NewServerOrderIP

`func NewServerOrderIP() *ServerOrderIP`

NewServerOrderIP instantiates a new ServerOrderIP object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderIPWithDefaults

`func NewServerOrderIPWithDefaults() *ServerOrderIP`

NewServerOrderIPWithDefaults instantiates a new ServerOrderIP object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *ServerOrderIP) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *ServerOrderIP) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *ServerOrderIP) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *ServerOrderIP) HasId() bool`

HasId returns a boolean if a field has been set.

### GetPrice

`func (o *ServerOrderIP) GetPrice() int32`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ServerOrderIP) GetPriceOk() (*int32, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ServerOrderIP) SetPrice(v int32)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ServerOrderIP) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetImg

`func (o *ServerOrderIP) GetImg() string`

GetImg returns the Img field if non-nil, zero value otherwise.

### GetImgOk

`func (o *ServerOrderIP) GetImgOk() (*string, bool)`

GetImgOk returns a tuple with the Img field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImg

`func (o *ServerOrderIP) SetImg(v string)`

SetImg sets Img field to given value.

### HasImg

`func (o *ServerOrderIP) HasImg() bool`

HasImg returns a boolean if a field has been set.

### GetShortDesc

`func (o *ServerOrderIP) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *ServerOrderIP) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *ServerOrderIP) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *ServerOrderIP) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *ServerOrderIP) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *ServerOrderIP) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *ServerOrderIP) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *ServerOrderIP) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetQty

`func (o *ServerOrderIP) GetQty() string`

GetQty returns the Qty field if non-nil, zero value otherwise.

### GetQtyOk

`func (o *ServerOrderIP) GetQtyOk() (*string, bool)`

GetQtyOk returns a tuple with the Qty field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQty

`func (o *ServerOrderIP) SetQty(v string)`

SetQty sets Qty field to given value.

### HasQty

`func (o *ServerOrderIP) HasQty() bool`

HasQty returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *ServerOrderIP) GetMonthlyPrice() int32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *ServerOrderIP) GetMonthlyPriceOk() (*int32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *ServerOrderIP) SetMonthlyPrice(v int32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *ServerOrderIP) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetPriceDisplay

`func (o *ServerOrderIP) GetPriceDisplay() string`

GetPriceDisplay returns the PriceDisplay field if non-nil, zero value otherwise.

### GetPriceDisplayOk

`func (o *ServerOrderIP) GetPriceDisplayOk() (*string, bool)`

GetPriceDisplayOk returns a tuple with the PriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceDisplay

`func (o *ServerOrderIP) SetPriceDisplay(v string)`

SetPriceDisplay sets PriceDisplay field to given value.

### HasPriceDisplay

`func (o *ServerOrderIP) HasPriceDisplay() bool`

HasPriceDisplay returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *ServerOrderIP) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *ServerOrderIP) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *ServerOrderIP) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *ServerOrderIP) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


