# ServerOrderControlPanel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** | Control Panel ID. | [optional] 
**Price** | Pointer to **int32** | Control Panel price. | [optional] 
**Img** | Pointer to **string** | Control Panel image. | [optional] 
**ShortDesc** | Pointer to **string** | Short description of the control panel. | [optional] 
**LongDesc** | Pointer to **string** | Long description of the control panel. | [optional] 
**OsType** | Pointer to **string** | OS types compatible with the control panel. | [optional] 
**MonthlyPrice** | Pointer to **int32** | Monthly price. | [optional] 
**Types** | Pointer to **[]string** | List of types. | [optional] 
**PriceDisplay** | Pointer to **string** | Display of control panel price. | [optional] 
**MonthlyPriceDisplay** | Pointer to **string** | Display of monthly control panel price. | [optional] 

## Methods

### NewServerOrderControlPanel

`func NewServerOrderControlPanel() *ServerOrderControlPanel`

NewServerOrderControlPanel instantiates a new ServerOrderControlPanel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerOrderControlPanelWithDefaults

`func NewServerOrderControlPanelWithDefaults() *ServerOrderControlPanel`

NewServerOrderControlPanelWithDefaults instantiates a new ServerOrderControlPanel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *ServerOrderControlPanel) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *ServerOrderControlPanel) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *ServerOrderControlPanel) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *ServerOrderControlPanel) HasId() bool`

HasId returns a boolean if a field has been set.

### GetPrice

`func (o *ServerOrderControlPanel) GetPrice() int32`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ServerOrderControlPanel) GetPriceOk() (*int32, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ServerOrderControlPanel) SetPrice(v int32)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ServerOrderControlPanel) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetImg

`func (o *ServerOrderControlPanel) GetImg() string`

GetImg returns the Img field if non-nil, zero value otherwise.

### GetImgOk

`func (o *ServerOrderControlPanel) GetImgOk() (*string, bool)`

GetImgOk returns a tuple with the Img field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImg

`func (o *ServerOrderControlPanel) SetImg(v string)`

SetImg sets Img field to given value.

### HasImg

`func (o *ServerOrderControlPanel) HasImg() bool`

HasImg returns a boolean if a field has been set.

### GetShortDesc

`func (o *ServerOrderControlPanel) GetShortDesc() string`

GetShortDesc returns the ShortDesc field if non-nil, zero value otherwise.

### GetShortDescOk

`func (o *ServerOrderControlPanel) GetShortDescOk() (*string, bool)`

GetShortDescOk returns a tuple with the ShortDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortDesc

`func (o *ServerOrderControlPanel) SetShortDesc(v string)`

SetShortDesc sets ShortDesc field to given value.

### HasShortDesc

`func (o *ServerOrderControlPanel) HasShortDesc() bool`

HasShortDesc returns a boolean if a field has been set.

### GetLongDesc

`func (o *ServerOrderControlPanel) GetLongDesc() string`

GetLongDesc returns the LongDesc field if non-nil, zero value otherwise.

### GetLongDescOk

`func (o *ServerOrderControlPanel) GetLongDescOk() (*string, bool)`

GetLongDescOk returns a tuple with the LongDesc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLongDesc

`func (o *ServerOrderControlPanel) SetLongDesc(v string)`

SetLongDesc sets LongDesc field to given value.

### HasLongDesc

`func (o *ServerOrderControlPanel) HasLongDesc() bool`

HasLongDesc returns a boolean if a field has been set.

### GetOsType

`func (o *ServerOrderControlPanel) GetOsType() string`

GetOsType returns the OsType field if non-nil, zero value otherwise.

### GetOsTypeOk

`func (o *ServerOrderControlPanel) GetOsTypeOk() (*string, bool)`

GetOsTypeOk returns a tuple with the OsType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOsType

`func (o *ServerOrderControlPanel) SetOsType(v string)`

SetOsType sets OsType field to given value.

### HasOsType

`func (o *ServerOrderControlPanel) HasOsType() bool`

HasOsType returns a boolean if a field has been set.

### GetMonthlyPrice

`func (o *ServerOrderControlPanel) GetMonthlyPrice() int32`

GetMonthlyPrice returns the MonthlyPrice field if non-nil, zero value otherwise.

### GetMonthlyPriceOk

`func (o *ServerOrderControlPanel) GetMonthlyPriceOk() (*int32, bool)`

GetMonthlyPriceOk returns a tuple with the MonthlyPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPrice

`func (o *ServerOrderControlPanel) SetMonthlyPrice(v int32)`

SetMonthlyPrice sets MonthlyPrice field to given value.

### HasMonthlyPrice

`func (o *ServerOrderControlPanel) HasMonthlyPrice() bool`

HasMonthlyPrice returns a boolean if a field has been set.

### GetTypes

`func (o *ServerOrderControlPanel) GetTypes() []string`

GetTypes returns the Types field if non-nil, zero value otherwise.

### GetTypesOk

`func (o *ServerOrderControlPanel) GetTypesOk() (*[]string, bool)`

GetTypesOk returns a tuple with the Types field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTypes

`func (o *ServerOrderControlPanel) SetTypes(v []string)`

SetTypes sets Types field to given value.

### HasTypes

`func (o *ServerOrderControlPanel) HasTypes() bool`

HasTypes returns a boolean if a field has been set.

### GetPriceDisplay

`func (o *ServerOrderControlPanel) GetPriceDisplay() string`

GetPriceDisplay returns the PriceDisplay field if non-nil, zero value otherwise.

### GetPriceDisplayOk

`func (o *ServerOrderControlPanel) GetPriceDisplayOk() (*string, bool)`

GetPriceDisplayOk returns a tuple with the PriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceDisplay

`func (o *ServerOrderControlPanel) SetPriceDisplay(v string)`

SetPriceDisplay sets PriceDisplay field to given value.

### HasPriceDisplay

`func (o *ServerOrderControlPanel) HasPriceDisplay() bool`

HasPriceDisplay returns a boolean if a field has been set.

### GetMonthlyPriceDisplay

`func (o *ServerOrderControlPanel) GetMonthlyPriceDisplay() string`

GetMonthlyPriceDisplay returns the MonthlyPriceDisplay field if non-nil, zero value otherwise.

### GetMonthlyPriceDisplayOk

`func (o *ServerOrderControlPanel) GetMonthlyPriceDisplayOk() (*string, bool)`

GetMonthlyPriceDisplayOk returns a tuple with the MonthlyPriceDisplay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyPriceDisplay

`func (o *ServerOrderControlPanel) SetMonthlyPriceDisplay(v string)`

SetMonthlyPriceDisplay sets MonthlyPriceDisplay field to given value.

### HasMonthlyPriceDisplay

`func (o *ServerOrderControlPanel) HasMonthlyPriceDisplay() bool`

HasMonthlyPriceDisplay returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


