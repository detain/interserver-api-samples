# PostOauthCallbackRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Provider** | Pointer to **string** | The OAuth provider name (e.g. &#x60;Google&#x60;). | [optional] 

## Methods

### NewPostOauthCallbackRequest

`func NewPostOauthCallbackRequest() *PostOauthCallbackRequest`

NewPostOauthCallbackRequest instantiates a new PostOauthCallbackRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPostOauthCallbackRequestWithDefaults

`func NewPostOauthCallbackRequestWithDefaults() *PostOauthCallbackRequest`

NewPostOauthCallbackRequestWithDefaults instantiates a new PostOauthCallbackRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetProvider

`func (o *PostOauthCallbackRequest) GetProvider() string`

GetProvider returns the Provider field if non-nil, zero value otherwise.

### GetProviderOk

`func (o *PostOauthCallbackRequest) GetProviderOk() (*string, bool)`

GetProviderOk returns a tuple with the Provider field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetProvider

`func (o *PostOauthCallbackRequest) SetProvider(v string)`

SetProvider sets Provider field to given value.

### HasProvider

`func (o *PostOauthCallbackRequest) HasProvider() bool`

HasProvider returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


