# RestoreRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Backup** | Pointer to **string** |  | [optional] 
**Password** | Pointer to **string** |  | [optional] 

## Methods

### NewRestoreRequest

`func NewRestoreRequest() *RestoreRequest`

NewRestoreRequest instantiates a new RestoreRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRestoreRequestWithDefaults

`func NewRestoreRequestWithDefaults() *RestoreRequest`

NewRestoreRequestWithDefaults instantiates a new RestoreRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetBackup

`func (o *RestoreRequest) GetBackup() string`

GetBackup returns the Backup field if non-nil, zero value otherwise.

### GetBackupOk

`func (o *RestoreRequest) GetBackupOk() (*string, bool)`

GetBackupOk returns a tuple with the Backup field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBackup

`func (o *RestoreRequest) SetBackup(v string)`

SetBackup sets Backup field to given value.

### HasBackup

`func (o *RestoreRequest) HasBackup() bool`

HasBackup returns a boolean if a field has been set.

### GetPassword

`func (o *RestoreRequest) GetPassword() string`

GetPassword returns the Password field if non-nil, zero value otherwise.

### GetPasswordOk

`func (o *RestoreRequest) GetPasswordOk() (*string, bool)`

GetPasswordOk returns a tuple with the Password field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPassword

`func (o *RestoreRequest) SetPassword(v string)`

SetPassword sets Password field to given value.

### HasPassword

`func (o *RestoreRequest) HasPassword() bool`

HasPassword returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


