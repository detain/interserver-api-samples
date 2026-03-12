# SuccessTextResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Success** | **bool** | Indicates whether or not the command was successful or not. | 
**Text** | Pointer to **string** | Text associated with the response. | [optional] 
**Action** | Pointer to **string** | Optional Action relating to the response. | [optional] 

## Methods

### NewSuccessTextResponse

`func NewSuccessTextResponse(success bool, ) *SuccessTextResponse`

NewSuccessTextResponse instantiates a new SuccessTextResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSuccessTextResponseWithDefaults

`func NewSuccessTextResponseWithDefaults() *SuccessTextResponse`

NewSuccessTextResponseWithDefaults instantiates a new SuccessTextResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSuccess

`func (o *SuccessTextResponse) GetSuccess() bool`

GetSuccess returns the Success field if non-nil, zero value otherwise.

### GetSuccessOk

`func (o *SuccessTextResponse) GetSuccessOk() (*bool, bool)`

GetSuccessOk returns a tuple with the Success field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuccess

`func (o *SuccessTextResponse) SetSuccess(v bool)`

SetSuccess sets Success field to given value.


### GetText

`func (o *SuccessTextResponse) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *SuccessTextResponse) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *SuccessTextResponse) SetText(v string)`

SetText sets Text field to given value.

### HasText

`func (o *SuccessTextResponse) HasText() bool`

HasText returns a boolean if a field has been set.

### GetAction

`func (o *SuccessTextResponse) GetAction() string`

GetAction returns the Action field if non-nil, zero value otherwise.

### GetActionOk

`func (o *SuccessTextResponse) GetActionOk() (*string, bool)`

GetActionOk returns a tuple with the Action field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAction

`func (o *SuccessTextResponse) SetAction(v string)`

SetAction sets Action field to given value.

### HasAction

`func (o *SuccessTextResponse) HasAction() bool`

HasAction returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


