# BillingPaymentMethodRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PaymentMethod** | Pointer to **string** | Payment method identifier (cc, paypal, or cc{index}). | [optional] 
**CcAuto** | Pointer to **string** | Whether automatic credit card payments are enabled. | [optional] 

## Methods

### NewBillingPaymentMethodRequest

`func NewBillingPaymentMethodRequest() *BillingPaymentMethodRequest`

NewBillingPaymentMethodRequest instantiates a new BillingPaymentMethodRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBillingPaymentMethodRequestWithDefaults

`func NewBillingPaymentMethodRequestWithDefaults() *BillingPaymentMethodRequest`

NewBillingPaymentMethodRequestWithDefaults instantiates a new BillingPaymentMethodRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPaymentMethod

`func (o *BillingPaymentMethodRequest) GetPaymentMethod() string`

GetPaymentMethod returns the PaymentMethod field if non-nil, zero value otherwise.

### GetPaymentMethodOk

`func (o *BillingPaymentMethodRequest) GetPaymentMethodOk() (*string, bool)`

GetPaymentMethodOk returns a tuple with the PaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentMethod

`func (o *BillingPaymentMethodRequest) SetPaymentMethod(v string)`

SetPaymentMethod sets PaymentMethod field to given value.

### HasPaymentMethod

`func (o *BillingPaymentMethodRequest) HasPaymentMethod() bool`

HasPaymentMethod returns a boolean if a field has been set.

### GetCcAuto

`func (o *BillingPaymentMethodRequest) GetCcAuto() string`

GetCcAuto returns the CcAuto field if non-nil, zero value otherwise.

### GetCcAutoOk

`func (o *BillingPaymentMethodRequest) GetCcAutoOk() (*string, bool)`

GetCcAutoOk returns a tuple with the CcAuto field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcAuto

`func (o *BillingPaymentMethodRequest) SetCcAuto(v string)`

SetCcAuto sets CcAuto field to given value.

### HasCcAuto

`func (o *BillingPaymentMethodRequest) HasCcAuto() bool`

HasCcAuto returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


