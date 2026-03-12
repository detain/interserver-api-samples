# LoginErrorResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Message** | Pointer to **string** |  | [optional] 
**Field** | Pointer to **string** |  | [optional] 

## Methods

### NewLoginErrorResponse

`func NewLoginErrorResponse() *LoginErrorResponse`

NewLoginErrorResponse instantiates a new LoginErrorResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLoginErrorResponseWithDefaults

`func NewLoginErrorResponseWithDefaults() *LoginErrorResponse`

NewLoginErrorResponseWithDefaults instantiates a new LoginErrorResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMessage

`func (o *LoginErrorResponse) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *LoginErrorResponse) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *LoginErrorResponse) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *LoginErrorResponse) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetField

`func (o *LoginErrorResponse) GetField() string`

GetField returns the Field field if non-nil, zero value otherwise.

### GetFieldOk

`func (o *LoginErrorResponse) GetFieldOk() (*string, bool)`

GetFieldOk returns a tuple with the Field field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetField

`func (o *LoginErrorResponse) SetField(v string)`

SetField sets Field field to given value.

### HasField

`func (o *LoginErrorResponse) HasField() bool`

HasField returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


