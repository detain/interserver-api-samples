# SendMail

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**To** | **string** | The Contact whom is the primary recipient of this email. | 
**From** | **string** | The contact whom is the this email is from. | 
**Subject** | **string** | The subject or title of the email | 
**Body** | **string** | The main email contents. | 

## Methods

### NewSendMail

`func NewSendMail(to string, from string, subject string, body string, ) *SendMail`

NewSendMail instantiates a new SendMail object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSendMailWithDefaults

`func NewSendMailWithDefaults() *SendMail`

NewSendMailWithDefaults instantiates a new SendMail object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTo

`func (o *SendMail) GetTo() string`

GetTo returns the To field if non-nil, zero value otherwise.

### GetToOk

`func (o *SendMail) GetToOk() (*string, bool)`

GetToOk returns a tuple with the To field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTo

`func (o *SendMail) SetTo(v string)`

SetTo sets To field to given value.


### GetFrom

`func (o *SendMail) GetFrom() string`

GetFrom returns the From field if non-nil, zero value otherwise.

### GetFromOk

`func (o *SendMail) GetFromOk() (*string, bool)`

GetFromOk returns a tuple with the From field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFrom

`func (o *SendMail) SetFrom(v string)`

SetFrom sets From field to given value.


### GetSubject

`func (o *SendMail) GetSubject() string`

GetSubject returns the Subject field if non-nil, zero value otherwise.

### GetSubjectOk

`func (o *SendMail) GetSubjectOk() (*string, bool)`

GetSubjectOk returns a tuple with the Subject field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubject

`func (o *SendMail) SetSubject(v string)`

SetSubject sets Subject field to given value.


### GetBody

`func (o *SendMail) GetBody() string`

GetBody returns the Body field if non-nil, zero value otherwise.

### GetBodyOk

`func (o *SendMail) GetBodyOk() (*string, bool)`

GetBodyOk returns a tuple with the Body field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBody

`func (o *SendMail) SetBody(v string)`

SetBody sets Body field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


