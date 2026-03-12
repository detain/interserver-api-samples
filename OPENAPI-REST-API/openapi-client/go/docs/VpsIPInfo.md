# VpsIPInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Title** | Pointer to **string** | Title of the table | [optional] 
**Rows** | Pointer to [**[]VpsIPInfoRow**](VpsIPInfoRow.md) |  | [optional] 

## Methods

### NewVpsIPInfo

`func NewVpsIPInfo() *VpsIPInfo`

NewVpsIPInfo instantiates a new VpsIPInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsIPInfoWithDefaults

`func NewVpsIPInfoWithDefaults() *VpsIPInfo`

NewVpsIPInfoWithDefaults instantiates a new VpsIPInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTitle

`func (o *VpsIPInfo) GetTitle() string`

GetTitle returns the Title field if non-nil, zero value otherwise.

### GetTitleOk

`func (o *VpsIPInfo) GetTitleOk() (*string, bool)`

GetTitleOk returns a tuple with the Title field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTitle

`func (o *VpsIPInfo) SetTitle(v string)`

SetTitle sets Title field to given value.

### HasTitle

`func (o *VpsIPInfo) HasTitle() bool`

HasTitle returns a boolean if a field has been set.

### GetRows

`func (o *VpsIPInfo) GetRows() []VpsIPInfoRow`

GetRows returns the Rows field if non-nil, zero value otherwise.

### GetRowsOk

`func (o *VpsIPInfo) GetRowsOk() (*[]VpsIPInfoRow, bool)`

GetRowsOk returns a tuple with the Rows field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRows

`func (o *VpsIPInfo) SetRows(v []VpsIPInfoRow)`

SetRows sets Rows field to given value.

### HasRows

`func (o *VpsIPInfo) HasRows() bool`

HasRows returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


