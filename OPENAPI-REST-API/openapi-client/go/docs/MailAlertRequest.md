# MailAlertRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Type** | Pointer to **string** | Alert type identifier. | [optional] 
**Value** | Pointer to **string** | Alert value or threshold. | [optional] 
**To** | Pointer to **string** | Email address to notify. | [optional] 
**Enabled** | Pointer to **string** | Whether the alert is enabled. | [optional] 

## Methods

### NewMailAlertRequest

`func NewMailAlertRequest() *MailAlertRequest`

NewMailAlertRequest instantiates a new MailAlertRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailAlertRequestWithDefaults

`func NewMailAlertRequestWithDefaults() *MailAlertRequest`

NewMailAlertRequestWithDefaults instantiates a new MailAlertRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetType

`func (o *MailAlertRequest) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *MailAlertRequest) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *MailAlertRequest) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *MailAlertRequest) HasType() bool`

HasType returns a boolean if a field has been set.

### GetValue

`func (o *MailAlertRequest) GetValue() string`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *MailAlertRequest) GetValueOk() (*string, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *MailAlertRequest) SetValue(v string)`

SetValue sets Value field to given value.

### HasValue

`func (o *MailAlertRequest) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetTo

`func (o *MailAlertRequest) GetTo() string`

GetTo returns the To field if non-nil, zero value otherwise.

### GetToOk

`func (o *MailAlertRequest) GetToOk() (*string, bool)`

GetToOk returns a tuple with the To field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTo

`func (o *MailAlertRequest) SetTo(v string)`

SetTo sets To field to given value.

### HasTo

`func (o *MailAlertRequest) HasTo() bool`

HasTo returns a boolean if a field has been set.

### GetEnabled

`func (o *MailAlertRequest) GetEnabled() string`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *MailAlertRequest) GetEnabledOk() (*string, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *MailAlertRequest) SetEnabled(v string)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *MailAlertRequest) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


