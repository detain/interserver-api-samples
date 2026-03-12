# MailAlertUpdateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AlertId** | Pointer to **int32** | Alert ID to update. | [optional] 
**Type** | Pointer to **string** | Alert type identifier. | [optional] 
**Value** | Pointer to **string** | Alert value or threshold. | [optional] 
**To** | Pointer to **string** | Email address to notify. | [optional] 
**Enabled** | Pointer to **string** | Whether the alert is enabled. | [optional] 

## Methods

### NewMailAlertUpdateRequest

`func NewMailAlertUpdateRequest() *MailAlertUpdateRequest`

NewMailAlertUpdateRequest instantiates a new MailAlertUpdateRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailAlertUpdateRequestWithDefaults

`func NewMailAlertUpdateRequestWithDefaults() *MailAlertUpdateRequest`

NewMailAlertUpdateRequestWithDefaults instantiates a new MailAlertUpdateRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAlertId

`func (o *MailAlertUpdateRequest) GetAlertId() int32`

GetAlertId returns the AlertId field if non-nil, zero value otherwise.

### GetAlertIdOk

`func (o *MailAlertUpdateRequest) GetAlertIdOk() (*int32, bool)`

GetAlertIdOk returns a tuple with the AlertId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAlertId

`func (o *MailAlertUpdateRequest) SetAlertId(v int32)`

SetAlertId sets AlertId field to given value.

### HasAlertId

`func (o *MailAlertUpdateRequest) HasAlertId() bool`

HasAlertId returns a boolean if a field has been set.

### GetType

`func (o *MailAlertUpdateRequest) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *MailAlertUpdateRequest) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *MailAlertUpdateRequest) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *MailAlertUpdateRequest) HasType() bool`

HasType returns a boolean if a field has been set.

### GetValue

`func (o *MailAlertUpdateRequest) GetValue() string`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *MailAlertUpdateRequest) GetValueOk() (*string, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *MailAlertUpdateRequest) SetValue(v string)`

SetValue sets Value field to given value.

### HasValue

`func (o *MailAlertUpdateRequest) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetTo

`func (o *MailAlertUpdateRequest) GetTo() string`

GetTo returns the To field if non-nil, zero value otherwise.

### GetToOk

`func (o *MailAlertUpdateRequest) GetToOk() (*string, bool)`

GetToOk returns a tuple with the To field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTo

`func (o *MailAlertUpdateRequest) SetTo(v string)`

SetTo sets To field to given value.

### HasTo

`func (o *MailAlertUpdateRequest) HasTo() bool`

HasTo returns a boolean if a field has been set.

### GetEnabled

`func (o *MailAlertUpdateRequest) GetEnabled() string`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *MailAlertUpdateRequest) GetEnabledOk() (*string, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *MailAlertUpdateRequest) SetEnabled(v string)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *MailAlertUpdateRequest) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


