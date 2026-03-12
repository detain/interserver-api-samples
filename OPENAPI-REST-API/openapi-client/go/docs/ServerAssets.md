# ServerAssets

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Title** | Pointer to **string** | The title of the assets. | [optional] 
**Size** | Pointer to **int32** | The size of the assets. | [optional] 
**Type** | Pointer to **string** | The type of the assets. | [optional] 
**Header** | Pointer to **[]string** | The header of the assets table. | [optional] 
**Rows** | Pointer to **[][]string** | The rows of the assets table. | [optional] 

## Methods

### NewServerAssets

`func NewServerAssets() *ServerAssets`

NewServerAssets instantiates a new ServerAssets object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerAssetsWithDefaults

`func NewServerAssetsWithDefaults() *ServerAssets`

NewServerAssetsWithDefaults instantiates a new ServerAssets object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTitle

`func (o *ServerAssets) GetTitle() string`

GetTitle returns the Title field if non-nil, zero value otherwise.

### GetTitleOk

`func (o *ServerAssets) GetTitleOk() (*string, bool)`

GetTitleOk returns a tuple with the Title field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTitle

`func (o *ServerAssets) SetTitle(v string)`

SetTitle sets Title field to given value.

### HasTitle

`func (o *ServerAssets) HasTitle() bool`

HasTitle returns a boolean if a field has been set.

### GetSize

`func (o *ServerAssets) GetSize() int32`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *ServerAssets) GetSizeOk() (*int32, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *ServerAssets) SetSize(v int32)`

SetSize sets Size field to given value.

### HasSize

`func (o *ServerAssets) HasSize() bool`

HasSize returns a boolean if a field has been set.

### GetType

`func (o *ServerAssets) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ServerAssets) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ServerAssets) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ServerAssets) HasType() bool`

HasType returns a boolean if a field has been set.

### GetHeader

`func (o *ServerAssets) GetHeader() []string`

GetHeader returns the Header field if non-nil, zero value otherwise.

### GetHeaderOk

`func (o *ServerAssets) GetHeaderOk() (*[]string, bool)`

GetHeaderOk returns a tuple with the Header field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHeader

`func (o *ServerAssets) SetHeader(v []string)`

SetHeader sets Header field to given value.

### HasHeader

`func (o *ServerAssets) HasHeader() bool`

HasHeader returns a boolean if a field has been set.

### GetRows

`func (o *ServerAssets) GetRows() [][]string`

GetRows returns the Rows field if non-nil, zero value otherwise.

### GetRowsOk

`func (o *ServerAssets) GetRowsOk() (*[][]string, bool)`

GetRowsOk returns a tuple with the Rows field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRows

`func (o *ServerAssets) SetRows(v [][]string)`

SetRows sets Rows field to given value.

### HasRows

`func (o *ServerAssets) HasRows() bool`

HasRows returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


