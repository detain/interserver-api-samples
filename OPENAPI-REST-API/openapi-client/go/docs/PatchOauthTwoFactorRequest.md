# PatchOauthTwoFactorRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AccountId** | **int32** | The account ID returned from the POST callback. | 
**Code** | **string** | The 6-digit two-factor authentication code. | 

## Methods

### NewPatchOauthTwoFactorRequest

`func NewPatchOauthTwoFactorRequest(accountId int32, code string, ) *PatchOauthTwoFactorRequest`

NewPatchOauthTwoFactorRequest instantiates a new PatchOauthTwoFactorRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPatchOauthTwoFactorRequestWithDefaults

`func NewPatchOauthTwoFactorRequestWithDefaults() *PatchOauthTwoFactorRequest`

NewPatchOauthTwoFactorRequestWithDefaults instantiates a new PatchOauthTwoFactorRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAccountId

`func (o *PatchOauthTwoFactorRequest) GetAccountId() int32`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *PatchOauthTwoFactorRequest) GetAccountIdOk() (*int32, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *PatchOauthTwoFactorRequest) SetAccountId(v int32)`

SetAccountId sets AccountId field to given value.


### GetCode

`func (o *PatchOauthTwoFactorRequest) GetCode() string`

GetCode returns the Code field if non-nil, zero value otherwise.

### GetCodeOk

`func (o *PatchOauthTwoFactorRequest) GetCodeOk() (*string, bool)`

GetCodeOk returns a tuple with the Code field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCode

`func (o *PatchOauthTwoFactorRequest) SetCode(v string)`

SetCode sets Code field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


