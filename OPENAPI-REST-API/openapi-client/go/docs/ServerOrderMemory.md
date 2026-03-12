# ServerOrderMemory

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** | Memory ID. | [optional] 
**Price** | Pointer to **string** | Memory price. | [optional] 
**Img** | Pointer to **string** | Memory image. | [optional] 
**ShortDesc** | Pointer to **string** | Short description of the memory. | [optional] 
**LongDesc** | Pointer to **string** | Long description of the memory. | [optional] 
**Manu** | Pointer to **string** | Manufacturer information. | [optional] 
**Size** | Pointer to **string** | Memory size. | [optional] 
**Type** | Pointer to **string** | Memory type. | [optional] 
**Hidden** | Pointer to **string** | Hidden status. | [optional] 
**MonthlyPrice** | Pointer to **int32** | Monthly price. | [optional] 
**DriveType** | Pointer to **string** | Drive type. | [optional] 
**MonthlyPriceDisplay** | Pointer to **string** | Display of monthly memory price. | [optional] 

## Methods

### NewServerOrderMemory

`func NewServerOrderMemory() *ServerOrderMemory`

NewServerOrderMemory instantiates a new ServerOrderMemory object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderMemoryWithDefaults

`func NewServerOrderMemoryWithDefaults() *ServerOrderMemory`

NewServerOrderMemoryWithDefaults instantiates a new ServerOrderMemory object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *ServerOrderMemory) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *ServerOrderMemory) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *ServerOrderMemory) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *ServerOrderMemory) HasId() bool`

HasId returns a boolean if a field has been set.

### GetPrice

`func (o *ServerOrderMemory) GetPrice() string`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ServerOrderMemory) GetPriceOk() (*string, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ServerOrderMemory) SetPrice(v string)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ServerOrderMemory) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetImg

`func (o *ServerOrderMemory) GetImg() string`

GetImg returns the Img field if non-nil, zero value otherwise.

### GetImgOk

`func (o *ServerOrderMemory) GetImgOk() (*string, bool)`

GetImgOk returns a tuple with the Img field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImg

`func (o *ServerOrderMemory) SetImg(v string)`

SetImg sets Img field to given value.

### HasImg

`func (o *ServerOrderMemory) HasImg() bool`

HasImg returns a boolean if a field has been set.

### GetShortDesc

`func (o *ServerOrderMemory) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *ServerOrderMemory) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *ServerOrderMemory) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *ServerOrderMemory) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *ServerOrderMemory) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *ServerOrderMemory) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *ServerOrderMemory) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *ServerOrderMemory) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetManu

`func (o *ServerOrderMemory) GetManu() string`

GetManu returns the Manu field if non-nil, zero value otherwise.

### GetManuOk

`func (o *ServerOrderMemory) GetManuOk() (*string, bool)`

GetManuOk returns a tuple with the Manu field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetManu

`func (o *ServerOrderMemory) SetManu(v string)`

SetManu sets Manu field to given value.

### HasManu

`func (o *ServerOrderMemory) HasManu() bool`

HasManu returns a boolean if a field has been set.

### GetSize

`func (o *ServerOrderMemory) GetSize() string`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *ServerOrderMemory) GetSizeOk() (*string, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *ServerOrderMemory) SetSize(v string)`

SetSize sets Size field to given value.

### HasSize

`func (o *ServerOrderMemory) HasSize() bool`

HasSize returns a boolean if a field has been set.

### GetType

`func (o *ServerOrderMemory) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ServerOrderMemory) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ServerOrderMemory) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ServerOrderMemory) HasType() bool`

HasType returns a boolean if a field has been set.

### GetHidden

`func (o *ServerOrderMemory) GetHidden() string`

GetHidden returns the Hidden field if non-nil, zero value otherwise.

### GetHiddenOk

`func (o *ServerOrderMemory) GetHiddenOk() (*string, bool)`

GetHiddenOk returns a tuple with the Hidden field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHidden

`func (o *ServerOrderMemory) SetHidden(v string)`

SetHidden sets Hidden field to given value.

### HasHidden

`func (o *ServerOrderMemory) HasHidden() bool`

HasHidden returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *ServerOrderMemory) GetMonthlyPrice() int32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *ServerOrderMemory) GetMonthlyPriceOk() (*int32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *ServerOrderMemory) SetMonthlyPrice(v int32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *ServerOrderMemory) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetDriveType

`func (o *ServerOrderMemory) GetDriveType() string`

GetDriveType returns the DriveType field if non-nil, zero value otherwise.

### GetDriveTypeOk

`func (o *ServerOrderMemory) GetDriveTypeOk() (*string, bool)`

GetDriveTypeOk returns a tuple with the DriveType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDriveType

`func (o *ServerOrderMemory) SetDriveType(v string)`

SetDriveType sets DriveType field to given value.

### HasDriveType

`func (o *ServerOrderMemory) HasDriveType() bool`

HasDriveType returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *ServerOrderMemory) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *ServerOrderMemory) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *ServerOrderMemory) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *ServerOrderMemory) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


