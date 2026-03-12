# UpdateAccountTfaRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Var2faGoogleCode** | **string** | The 6-digit verification code from your authenticator app. | 

## Methods

### NewUpdateAccountTfaRequest

`func NewUpdateAccountTfaRequest(var2faGoogleCode string, ) *UpdateAccountTfaRequest`

NewUpdateAccountTfaRequest instantiates a new UpdateAccountTfaRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewUpdateAccountTfaRequestWithDefaults

`func NewUpdateAccountTfaRequestWithDefaults() *UpdateAccountTfaRequest`

NewUpdateAccountTfaRequestWithDefaults instantiates a new UpdateAccountTfaRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVar2faGoogleCode

`func (o *UpdateAccountTfaRequest) GetVar2faGoogleCode() string`

GetVar2faGoogleCode returns the Var2faGoogleCode field if non-nil, zero value otherwise.

### GetVar2faGoogleCodeOk

`func (o *UpdateAccountTfaRequest) GetVar2faGoogleCodeOk() (*string, bool)`

GetVar2faGoogleCodeOk returns a tuple with the Var2faGoogleCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogleCode

`func (o *UpdateAccountTfaRequest) SetVar2faGoogleCode(v string)`

SetVar2faGoogleCode sets Var2faGoogleCode field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


