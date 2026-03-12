# GetAccountTfaSetup200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Var2faGoogleKey** | Pointer to **string** | Base64-encoded secret key for TOTP setup. | [optional] 
**Var2faGoogleSplit** | Pointer to **string** | Human-readable formatted key (chunks of 4 characters). | [optional] 

## Methods

### NewGetAccountTfaSetup200Response

`func NewGetAccountTfaSetup200Response() *GetAccountTfaSetup200Response`

NewGetAccountTfaSetup200Response instantiates a new GetAccountTfaSetup200Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewGetAccountTfaSetup200ResponseWithDefaults

`func NewGetAccountTfaSetup200ResponseWithDefaults() *GetAccountTfaSetup200Response`

NewGetAccountTfaSetup200ResponseWithDefaults instantiates a new GetAccountTfaSetup200Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVar2faGoogleKey

`func (o *GetAccountTfaSetup200Response) GetVar2faGoogleKey() string`

GetVar2faGoogleKey returns the Var2faGoogleKey field if non-nil, zero value otherwise.

### GetVar2faGoogleKeyOk

`func (o *GetAccountTfaSetup200Response) GetVar2faGoogleKeyOk() (*string, bool)`

GetVar2faGoogleKeyOk returns a tuple with the Var2faGoogleKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogleKey

`func (o *GetAccountTfaSetup200Response) SetVar2faGoogleKey(v string)`

SetVar2faGoogleKey sets Var2faGoogleKey field to given value.

### HasVar2faGoogleKey

`func (o *GetAccountTfaSetup200Response) HasVar2faGoogleKey() bool`

HasVar2faGoogleKey returns a boolean if a field has been set.

### GetVar2faGoogleSplit

`func (o *GetAccountTfaSetup200Response) GetVar2faGoogleSplit() string`

GetVar2faGoogleSplit returns the Var2faGoogleSplit field if non-nil, zero value otherwise.

### GetVar2faGoogleSplitOk

`func (o *GetAccountTfaSetup200Response) GetVar2faGoogleSplitOk() (*string, bool)`

GetVar2faGoogleSplitOk returns a tuple with the Var2faGoogleSplit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar2faGoogleSplit

`func (o *GetAccountTfaSetup200Response) SetVar2faGoogleSplit(v string)`

SetVar2faGoogleSplit sets Var2faGoogleSplit field to given value.

### HasVar2faGoogleSplit

`func (o *GetAccountTfaSetup200Response) HasVar2faGoogleSplit() bool`

HasVar2faGoogleSplit returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


