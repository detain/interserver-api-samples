# MailOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int32** | The ID of the order. | 
**Status** | **string** | The order status. | 
**Username** | **string** | The username to use for this order. | 
**Comment** | Pointer to **string** | Optional order comment. | [optional] 

## Methods

### NewMailOrder

`func NewMailOrder(id int32, status string, username string, ) *MailOrder`

NewMailOrder instantiates a new MailOrder object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailOrderWithDefaults

`func NewMailOrderWithDefaults() *MailOrder`

NewMailOrderWithDefaults instantiates a new MailOrder object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *MailOrder) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *MailOrder) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *MailOrder) SetId(v int32)`

SetId sets Id field to given value.


### GetStatus

`func (o *MailOrder) GetStatus() string`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *MailOrder) GetStatusOk() (*string, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *MailOrder) SetStatus(v string)`

SetStatus sets Status field to given value.


### GetUsername

`func (o *MailOrder) GetUsername() string`

GetUsername returns the Username field if non-nil, zero value otherwise.

### GetUsernameOk

`func (o *MailOrder) GetUsernameOk() (*string, bool)`

GetUsernameOk returns a tuple with the Username field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUsername

`func (o *MailOrder) SetUsername(v string)`

SetUsername sets Username field to given value.


### GetComment

`func (o *MailOrder) GetComment() string`

GetComment returns the Comment field if non-nil, zero value otherwise.

### GetCommentOk

`func (o *MailOrder) GetCommentOk() (*string, bool)`

GetCommentOk returns a tuple with the Comment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetComment

`func (o *MailOrder) SetComment(v string)`

SetComment sets Comment field to given value.

### HasComment

`func (o *MailOrder) HasComment() bool`

HasComment returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


