# AddServer200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Text** | Pointer to **string** | Status message. | [optional] 
**Invoice** | Pointer to **int32** | Invoice ID for payment. | [optional] 
**Order** | Pointer to **int32** | Server order ID. | [optional] 

## Methods

### NewAddServer200Response

`func NewAddServer200Response() *AddServer200Response`

NewAddServer200Response instantiates a new AddServer200Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAddServer200ResponseWithDefaults

`func NewAddServer200ResponseWithDefaults() *AddServer200Response`

NewAddServer200ResponseWithDefaults instantiates a new AddServer200Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetText

`func (o *AddServer200Response) GetText() string`

GetText returns the Text field if non-nil, zero value otherwise.

### GetTextOk

`func (o *AddServer200Response) GetTextOk() (*string, bool)`

GetTextOk returns a tuple with the Text field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetText

`func (o *AddServer200Response) SetText(v string)`

SetText sets Text field to given value.

### HasText

`func (o *AddServer200Response) HasText() bool`

HasText returns a boolean if a field has been set.

### GetInvoice

`func (o *AddServer200Response) GetInvoice() int32`

GetInvoice returns the Invoice field if non-nil, zero value otherwise.

### GetInvoiceOk

`func (o *AddServer200Response) GetInvoiceOk() (*int32, bool)`

GetInvoiceOk returns a tuple with the Invoice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoice

`func (o *AddServer200Response) SetInvoice(v int32)`

SetInvoice sets Invoice field to given value.

### HasInvoice

`func (o *AddServer200Response) HasInvoice() bool`

HasInvoice returns a boolean if a field has been set.

### GetOrder

`func (o *AddServer200Response) GetOrder() int32`

GetOrder returns the Order field if non-nil, zero value otherwise.

### GetOrderOk

`func (o *AddServer200Response) GetOrderOk() (*int32, bool)`

GetOrderOk returns a tuple with the Order field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrder

`func (o *AddServer200Response) SetOrder(v int32)`

SetOrder sets Order field to given value.

### HasOrder

`func (o *AddServer200Response) HasOrder() bool`

HasOrder returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


