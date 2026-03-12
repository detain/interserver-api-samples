# QueueResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Text** | **string** | Response text | 
**QueueId** | **int32** | The Queue ID attached to the action. | 

## Methods

### NewQueueResponse

`func NewQueueResponse(text string, queueId int32, ) *QueueResponse`

NewQueueResponse instantiates a new QueueResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQueueResponseWithDefaults

`func NewQueueResponseWithDefaults() *QueueResponse`

NewQueueResponseWithDefaults instantiates a new QueueResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetText

`func (o *QueueResponse) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *QueueResponse) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *QueueResponse) SetText(v string)`

SetText sets Text field to given value.


### GetQueueId

`func (o *QueueResponse) GetQueueId() int32`

GetQueueId returns the QueueId field if non-nil, zero value otherwise.

### GetQueueIdOk

`func (o *QueueResponse) GetQueueIdOk() (*int32, bool)`

GetQueueIdOk returns a tuple with the QueueId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQueueId

`func (o *QueueResponse) SetQueueId(v int32)`

SetQueueId sets QueueId field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


