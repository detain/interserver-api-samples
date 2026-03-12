# ServersBuyNowResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Success** | Pointer to **bool** | Whether the order was placed successfully. | [optional] 
**Text** | Pointer to **string** | Human-readable status message. | [optional] 
**OrderDetails** | Pointer to [**ServersBuyNowResponseOrderDetails**](ServersBuyNowResponseOrderDetails.md) |  | [optional] 

## Methods

### NewServersBuyNowResponse

`func NewServersBuyNowResponse() *ServersBuyNowResponse`

NewServersBuyNowResponse instantiates a new ServersBuyNowResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServersBuyNowResponseWithDefaults

`func NewServersBuyNowResponseWithDefaults() *ServersBuyNowResponse`

NewServersBuyNowResponseWithDefaults instantiates a new ServersBuyNowResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSuccess

`func (o *ServersBuyNowResponse) GetSuccess() bool`

GetSuccess returns the Success field if non-nil, zero value otherwise.

### GetSuccessOk

`func (o *ServersBuyNowResponse) GetSuccessOk() (*bool, bool)`

GetSuccessOk returns a tuple with the Success field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuccess

`func (o *ServersBuyNowResponse) SetSuccess(v bool)`

SetSuccess sets Success field to given value.

### HasSuccess

`func (o *ServersBuyNowResponse) HasSuccess() bool`

HasSuccess returns a boolean if a field has been set.

### GetText

`func (o *ServersBuyNowResponse) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *ServersBuyNowResponse) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *ServersBuyNowResponse) SetText(v string)`

SetText sets Text field to given value.

### HasText

`func (o *ServersBuyNowResponse) HasText() bool`

HasText returns a boolean if a field has been set.

### GetOrderDetails

`func (o *ServersBuyNowResponse) GetOrderDetails() ServersBuyNowResponseOrderDetails`

GetOrderDetails returns the OrderDetails field if non-nil, zero value otherwise.

### GetOrderDetailsOk

`func (o *ServersBuyNowResponse) GetOrderDetailsOk() (*ServersBuyNowResponseOrderDetails, bool)`

GetOrderDetailsOk returns a tuple with the OrderDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrderDetails

`func (o *ServersBuyNowResponse) SetOrderDetails(v ServersBuyNowResponseOrderDetails)`

SetOrderDetails sets OrderDetails field to given value.

### HasOrderDetails

`func (o *ServersBuyNowResponse) HasOrderDetails() bool`

HasOrderDetails returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


