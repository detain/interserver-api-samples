# MailDelistRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Unblock** | Pointer to **string** | Email address to delist. | [optional] 

## Methods

### NewMailDelistRequest

`func NewMailDelistRequest() *MailDelistRequest`

NewMailDelistRequest instantiates a new MailDelistRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailDelistRequestWithDefaults

`func NewMailDelistRequestWithDefaults() *MailDelistRequest`

NewMailDelistRequestWithDefaults instantiates a new MailDelistRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUnblock

`func (o *MailDelistRequest) GetUnblock() string`

GetUnblock returns the Unblock field if non-nil, zero value otherwise.

### GetUnblockOk

`func (o *MailDelistRequest) GetUnblockOk() (*string, bool)`

GetUnblockOk returns a tuple with the Unblock field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnblock

`func (o *MailDelistRequest) SetUnblock(v string)`

SetUnblock sets Unblock field to given value.

### HasUnblock

`func (o *MailDelistRequest) HasUnblock() bool`

HasUnblock returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


