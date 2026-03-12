# TicketNew

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Subject** | **string** |  | 
**Body** | **string** |  | 
**ServiceId** | Pointer to **int32** |  | [optional] 
**ServiceModule** | Pointer to **string** |  | [optional] 

## Methods

### NewTicketNew

`func NewTicketNew(subject string, body string, ) *TicketNew`

NewTicketNew instantiates a new TicketNew object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTicketNewWithDefaults

`func NewTicketNewWithDefaults() *TicketNew`

NewTicketNewWithDefaults instantiates a new TicketNew object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubject

`func (o *TicketNew) GetSubject() string`

GetSubject returns the Subject field if non-nil, zero value otherwise.

### GetSubjectOk

`func (o *TicketNew) GetSubjectOk() (*string, bool)`

GetSubjectOk returns a tuple with the Subject field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubject

`func (o *TicketNew) SetSubject(v string)`

SetSubject sets Subject field to given value.


### GetBody

`func (o *TicketNew) GetBody() string`

GetBody returns the Body field if non-nil, zero value otherwise.

### GetBodyOk

`func (o *TicketNew) GetBodyOk() (*string, bool)`

GetBodyOk returns a tuple with the Body field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBody

`func (o *TicketNew) SetBody(v string)`

SetBody sets Body field to given value.


### GetServiceId

`func (o *TicketNew) GetServiceId() int32`

GetServiceId returns the ServiceId field if non-nil, zero value otherwise.

### GetServiceIdOk

`func (o *TicketNew) GetServiceIdOk() (*int32, bool)`

GetServiceIdOk returns a tuple with the ServiceId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceId

`func (o *TicketNew) SetServiceId(v int32)`

SetServiceId sets ServiceId field to given value.

### HasServiceId

`func (o *TicketNew) HasServiceId() bool`

HasServiceId returns a boolean if a field has been set.

### GetServiceModule

`func (o *TicketNew) GetServiceModule() string`

GetServiceModule returns the ServiceModule field if non-nil, zero value otherwise.

### GetServiceModuleOk

`func (o *TicketNew) GetServiceModuleOk() (*string, bool)`

GetServiceModuleOk returns a tuple with the ServiceModule field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceModule

`func (o *TicketNew) SetServiceModule(v string)`

SetServiceModule sets ServiceModule field to given value.

### HasServiceModule

`func (o *TicketNew) HasServiceModule() bool`

HasServiceModule returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


