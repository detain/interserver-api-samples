# MailLog

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Total** | **int32** | total number of mail log entries | 
**Skip** | **int32** | number of emails skipped in listing | 
**Limit** | **int32** | number of emails to return | 
**Emails** | [**[]MailLogEntry**](MailLogEntry.md) |  | 

## Methods

### NewMailLog

`func NewMailLog(total int32, skip int32, limit int32, emails []MailLogEntry, ) *MailLog`

NewMailLog instantiates a new MailLog object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailLogWithDefaults

`func NewMailLogWithDefaults() *MailLog`

NewMailLogWithDefaults instantiates a new MailLog object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTotal

`func (o *MailLog) GetTotal() int32`

GetTotal returns the Total field if non-nil, zero value otherwise.

### GetTotalOk

`func (o *MailLog) GetTotalOk() (*int32, bool)`

GetTotalOk returns a tuple with the Total field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotal

`func (o *MailLog) SetTotal(v int32)`

SetTotal sets Total field to given value.


### GetSkip

`func (o *MailLog) GetSkip() int32`

GetSkip returns the Skip field if non-nil, zero value otherwise.

### GetSkipOk

`func (o *MailLog) GetSkipOk() (*int32, bool)`

GetSkipOk returns a tuple with the Skip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSkip

`func (o *MailLog) SetSkip(v int32)`

SetSkip sets Skip field to given value.


### GetLimit

`func (o *MailLog) GetLimit() int32`

GetLimit returns the Limit field if non-nil, zero value otherwise.

### GetLimitOk

`func (o *MailLog) GetLimitOk() (*int32, bool)`

GetLimitOk returns a tuple with the Limit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLimit

`func (o *MailLog) SetLimit(v int32)`

SetLimit sets Limit field to given value.


### GetEmails

`func (o *MailLog) GetEmails() []MailLogEntry`

GetEmails returns the Emails field if non-nil, zero value otherwise.

### GetEmailsOk

`func (o *MailLog) GetEmailsOk() (*[]MailLogEntry, bool)`

GetEmailsOk returns a tuple with the Emails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmails

`func (o *MailLog) SetEmails(v []MailLogEntry)`

SetEmails sets Emails field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


