# PostOauthCallback200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Login** | Pointer to **bool** | Whether the user was logged in to an existing account. | [optional] 
**Signup** | Pointer to **bool** | Whether a new account was created. | [optional] 
**Linked** | Pointer to **bool** | Whether the OAuth provider was linked to an existing account. | [optional] 
**AccountId** | Pointer to **int32** | The account ID associated with the OAuth login. | [optional] 
**ErrorCode** | Pointer to **string** | Error code if additional verification is needed (e.g. &#x60;2fa_required&#x60;). | [optional] 

## Methods

### NewPostOauthCallback200Response

`func NewPostOauthCallback200Response() *PostOauthCallback200Response`

NewPostOauthCallback200Response instantiates a new PostOauthCallback200Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPostOauthCallback200ResponseWithDefaults

`func NewPostOauthCallback200ResponseWithDefaults() *PostOauthCallback200Response`

NewPostOauthCallback200ResponseWithDefaults instantiates a new PostOauthCallback200Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLogin

`func (o *PostOauthCallback200Response) GetLogin() bool`

GetLogin returns the Login field if non-nil, zero value otherwise.

### GetLoginOk

`func (o *PostOauthCallback200Response) GetLoginOk() (*bool, bool)`

GetLoginOk returns a tuple with the Login field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLogin

`func (o *PostOauthCallback200Response) SetLogin(v bool)`

SetLogin sets Login field to given value.

### HasLogin

`func (o *PostOauthCallback200Response) HasLogin() bool`

HasLogin returns a boolean if a field has been set.

### GetSignup

`func (o *PostOauthCallback200Response) GetSignup() bool`

GetSignup returns the Signup field if non-nil, zero value otherwise.

### GetSignupOk

`func (o *PostOauthCallback200Response) GetSignupOk() (*bool, bool)`

GetSignupOk returns a tuple with the Signup field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSignup

`func (o *PostOauthCallback200Response) SetSignup(v bool)`

SetSignup sets Signup field to given value.

### HasSignup

`func (o *PostOauthCallback200Response) HasSignup() bool`

HasSignup returns a boolean if a field has been set.

### GetLinked

`func (o *PostOauthCallback200Response) GetLinked() bool`

GetLinked returns the Linked field if non-nil, zero value otherwise.

### GetLinkedOk

`func (o *PostOauthCallback200Response) GetLinkedOk() (*bool, bool)`

GetLinkedOk returns a tuple with the Linked field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLinked

`func (o *PostOauthCallback200Response) SetLinked(v bool)`

SetLinked sets Linked field to given value.

### HasLinked

`func (o *PostOauthCallback200Response) HasLinked() bool`

HasLinked returns a boolean if a field has been set.

### GetAccountId

`func (o *PostOauthCallback200Response) GetAccountId() int32`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *PostOauthCallback200Response) GetAccountIdOk() (*int32, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *PostOauthCallback200Response) SetAccountId(v int32)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *PostOauthCallback200Response) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetErrorCode

`func (o *PostOauthCallback200Response) GetErrorCode() string`

GetErrorCode returns the ErrorCode field if non-nil, zero value otherwise.

### GetErrorCodeOk

`func (o *PostOauthCallback200Response) GetErrorCodeOk() (*string, bool)`

GetErrorCodeOk returns a tuple with the ErrorCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorCode

`func (o *PostOauthCallback200Response) SetErrorCode(v string)`

SetErrorCode sets ErrorCode field to given value.

### HasErrorCode

`func (o *PostOauthCallback200Response) HasErrorCode() bool`

HasErrorCode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


