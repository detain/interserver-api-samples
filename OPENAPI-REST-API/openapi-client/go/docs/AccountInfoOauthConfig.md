# AccountInfoOauthConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Callback** | **string** |  | 
**Providers** | [**AccountInfoOauthConfigProviders**](AccountInfoOauthConfigProviders.md) |  | 

## Methods

### NewAccountInfoOauthConfig

`func NewAccountInfoOauthConfig(callback string, providers AccountInfoOauthConfigProviders, ) *AccountInfoOauthConfig`

NewAccountInfoOauthConfig instantiates a new AccountInfoOauthConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAccountInfoOauthConfigWithDefaults

`func NewAccountInfoOauthConfigWithDefaults() *AccountInfoOauthConfig`

NewAccountInfoOauthConfigWithDefaults instantiates a new AccountInfoOauthConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCallback

`func (o *AccountInfoOauthConfig) GetCallback() string`

GetCallback returns the Callback field if non-nil, zero value otherwise.

### GetCallbackOk

`func (o *AccountInfoOauthConfig) GetCallbackOk() (*string, bool)`

GetCallbackOk returns a tuple with the Callback field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallback

`func (o *AccountInfoOauthConfig) SetCallback(v string)`

SetCallback sets Callback field to given value.


### GetProviders

`func (o *AccountInfoOauthConfig) GetProviders() AccountInfoOauthConfigProviders`

GetProviders returns the Providers field if non-nil, zero value otherwise.

### GetProvidersOk

`func (o *AccountInfoOauthConfig) GetProvidersOk() (*AccountInfoOauthConfigProviders, bool)`

GetProvidersOk returns a tuple with the Providers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetProviders

`func (o *AccountInfoOauthConfig) SetProviders(v AccountInfoOauthConfigProviders)`

SetProviders sets Providers field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


