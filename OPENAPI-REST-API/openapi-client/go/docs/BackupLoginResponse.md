# BackupLoginResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Success** | Pointer to **bool** | Indicates whether a login session was created. | [optional] 
**Text** | Pointer to **string** | Login URL or error text returned by the storage provider. | [optional] 

## Methods

### NewBackupLoginResponse

`func NewBackupLoginResponse() *BackupLoginResponse`

NewBackupLoginResponse instantiates a new BackupLoginResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBackupLoginResponseWithDefaults

`func NewBackupLoginResponseWithDefaults() *BackupLoginResponse`

NewBackupLoginResponseWithDefaults instantiates a new BackupLoginResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSuccess

`func (o *BackupLoginResponse) GetSuccess() bool`

GetSuccess returns the Success field if non-nil, zero value otherwise.

### GetSuccessOk

`func (o *BackupLoginResponse) GetSuccessOk() (*bool, bool)`

GetSuccessOk returns a tuple with the Success field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuccess

`func (o *BackupLoginResponse) SetSuccess(v bool)`

SetSuccess sets Success field to given value.

### HasSuccess

`func (o *BackupLoginResponse) HasSuccess() bool`

HasSuccess returns a boolean if a field has been set.

### GetText

`func (o *BackupLoginResponse) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *BackupLoginResponse) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *BackupLoginResponse) SetText(v string)`

SetText sets Text field to given value.

### HasText

`func (o *BackupLoginResponse) HasText() bool`

HasText returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


