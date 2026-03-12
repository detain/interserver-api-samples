# QuickserverAddons

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Title** | Pointer to **string** | Table title | [optional] 
**Rows** | Pointer to [**[]QuickserverAddonsRow**](QuickserverAddonsRow.md) |  | [optional] 

## Methods

### NewQuickserverAddons

`func NewQuickserverAddons() *QuickserverAddons`

NewQuickserverAddons instantiates a new QuickserverAddons object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQuickserverAddonsWithDefaults

`func NewQuickserverAddonsWithDefaults() *QuickserverAddons`

NewQuickserverAddonsWithDefaults instantiates a new QuickserverAddons object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTitle

`func (o *QuickserverAddons) GetTitle() string`

GetTitle returns the Title field if non-nil, zero value otherwise.

### GetTitleOk

`func (o *QuickserverAddons) GetTitleOk() (*string, bool)`

GetTitleOk returns a tuple with the Title field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTitle

`func (o *QuickserverAddons) SetTitle(v string)`

SetTitle sets Title field to given value.

### HasTitle

`func (o *QuickserverAddons) HasTitle() bool`

HasTitle returns a boolean if a field has been set.

### GetRows

`func (o *QuickserverAddons) GetRows() []QuickserverAddonsRow`

GetRows returns the Rows field if non-nil, zero value otherwise.

### GetRowsOk

`func (o *QuickserverAddons) GetRowsOk() (*[]QuickserverAddonsRow, bool)`

GetRowsOk returns a tuple with the Rows field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRows

`func (o *QuickserverAddons) SetRows(v []QuickserverAddonsRow)`

SetRows sets Rows field to given value.

### HasRows

`func (o *QuickserverAddons) HasRows() bool`

HasRows returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


