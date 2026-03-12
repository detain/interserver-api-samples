# TextResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Text** | Pointer to **string** | Response text | [optional] 
**Message** | Pointer to **string** | Response message | [optional] 

## Methods

### NewTextResponse

`func NewTextResponse() *TextResponse`

NewTextResponse instantiates a new TextResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTextResponseWithDefaults

`func NewTextResponseWithDefaults() *TextResponse`

NewTextResponseWithDefaults instantiates a new TextResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetText

`func (o *TextResponse) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *TextResponse) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *TextResponse) SetText(v string)`

SetText sets Text field to given value.

### HasText

`func (o *TextResponse) HasText() bool`

HasText returns a boolean if a field has been set.

### GetMessage

`func (o *TextResponse) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *TextResponse) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *TextResponse) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *TextResponse) HasMessage() bool`

HasMessage returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


