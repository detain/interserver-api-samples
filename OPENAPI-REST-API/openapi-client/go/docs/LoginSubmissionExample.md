# LoginSubmissionExample

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Login** | **string** |  | 
**Passwd** | **string** |  | 
**Remember** | Pointer to **string** |  | [optional] 
**GRecaptchaResponse** | Pointer to [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md) |  | [optional] 
**Tfa** | Pointer to **string** | Two Factor Authentication Response. | [optional] 

## Methods

### NewLoginSubmissionExample

`func NewLoginSubmissionExample(login string, passwd string, ) *LoginSubmissionExample`

NewLoginSubmissionExample instantiates a new LoginSubmissionExample object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLoginSubmissionExampleWithDefaults

`func NewLoginSubmissionExampleWithDefaults() *LoginSubmissionExample`

NewLoginSubmissionExampleWithDefaults instantiates a new LoginSubmissionExample object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLogin

`func (o *LoginSubmissionExample) GetLogin() string`

GetLogin returns the Login field if non-nil, zero value otherwise.

### GetLoginOk

`func (o *LoginSubmissionExample) GetLoginOk() (*string, bool)`

GetLoginOk returns a tuple with the Login field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLogin

`func (o *LoginSubmissionExample) SetLogin(v string)`

SetLogin sets Login field to given value.


### GetPasswd

`func (o *LoginSubmissionExample) GetPasswd() string`

GetPasswd returns the Passwd field if non-nil, zero value otherwise.

### GetPasswdOk

`func (o *LoginSubmissionExample) GetPasswdOk() (*string, bool)`

GetPasswdOk returns a tuple with the Passwd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPasswd

`func (o *LoginSubmissionExample) SetPasswd(v string)`

SetPasswd sets Passwd field to given value.


### GetRemember

`func (o *LoginSubmissionExample) GetRemember() string`

GetRemember returns the Remember field if non-nil, zero value otherwise.

### GetRememberOk

`func (o *LoginSubmissionExample) GetRememberOk() (*string, bool)`

GetRememberOk returns a tuple with the Remember field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRemember

`func (o *LoginSubmissionExample) SetRemember(v string)`

SetRemember sets Remember field to given value.

### HasRemember

`func (o *LoginSubmissionExample) HasRemember() bool`

HasRemember returns a boolean if a field has been set.

### GetGRecaptchaResponse

`func (o *LoginSubmissionExample) GetGRecaptchaResponse() LoginSubmissionExampleGRecaptchaResponse`

GetGRecaptchaResponse returns the GRecaptchaResponse field if non-nil, zero value otherwise.

### GetGRecaptchaResponseOk

`func (o *LoginSubmissionExample) GetGRecaptchaResponseOk() (*LoginSubmissionExampleGRecaptchaResponse, bool)`

GetGRecaptchaResponseOk returns a tuple with the GRecaptchaResponse field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGRecaptchaResponse

`func (o *LoginSubmissionExample) SetGRecaptchaResponse(v LoginSubmissionExampleGRecaptchaResponse)`

SetGRecaptchaResponse sets GRecaptchaResponse field to given value.

### HasGRecaptchaResponse

`func (o *LoginSubmissionExample) HasGRecaptchaResponse() bool`

HasGRecaptchaResponse returns a boolean if a field has been set.

### GetTfa

`func (o *LoginSubmissionExample) GetTfa() string`

GetTfa returns the Tfa field if non-nil, zero value otherwise.

### GetTfaOk

`func (o *LoginSubmissionExample) GetTfaOk() (*string, bool)`

GetTfaOk returns a tuple with the Tfa field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTfa

`func (o *LoginSubmissionExample) SetTfa(v string)`

SetTfa sets Tfa field to given value.

### HasTfa

`func (o *LoginSubmissionExample) HasTfa() bool`

HasTfa returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


