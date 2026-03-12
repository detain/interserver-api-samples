# ChargeInvoiceRowsInvoicesValuePaidInvoicesValue

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**InvoicesId** | Pointer to **string** |  | [optional] 
**InvoicesDescription** | Pointer to **string** |  | [optional] 
**InvoicesAmount** | Pointer to **float32** |  | [optional] 
**InvoicesDate** | Pointer to **string** |  | [optional] 
**InvoicesCurrency** | Pointer to **string** |  | [optional] 
**CurrencySymbol** | Pointer to **string** |  | [optional] 
**InvoicesDateFormatted** | Pointer to **string** |  | [optional] 
**PaymentType** | Pointer to **string** |  | [optional] 
**RefundInvoices** | Pointer to [**map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue**](ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.md) | This is optional when refund is present this will show | [optional] 

## Methods

### NewChargeInvoiceRowsInvoicesValuePaidInvoicesValue

`func NewChargeInvoiceRowsInvoicesValuePaidInvoicesValue() *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue`

NewChargeInvoiceRowsInvoicesValuePaidInvoicesValue instantiates a new ChargeInvoiceRowsInvoicesValuePaidInvoicesValue object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewChargeInvoiceRowsInvoicesValuePaidInvoicesValueWithDefaults

`func NewChargeInvoiceRowsInvoicesValuePaidInvoicesValueWithDefaults() *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue`

NewChargeInvoiceRowsInvoicesValuePaidInvoicesValueWithDefaults instantiates a new ChargeInvoiceRowsInvoicesValuePaidInvoicesValue object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetInvoicesId

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesId() string`

GetInvoicesId returns the InvoicesId field if non-nil, zero value otherwise.

### GetInvoicesIdOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesIdOk() (*string, bool)`

GetInvoicesIdOk returns a tuple with the InvoicesId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesId

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetInvoicesId(v string)`

SetInvoicesId sets InvoicesId field to given value.

### HasInvoicesId

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasInvoicesId() bool`

HasInvoicesId returns a boolean if a field has been set.

### GetInvoicesDescription

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesDescription() string`

GetInvoicesDescription returns the InvoicesDescription field if non-nil, zero value otherwise.

### GetInvoicesDescriptionOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesDescriptionOk() (*string, bool)`

GetInvoicesDescriptionOk returns a tuple with the InvoicesDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDescription

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetInvoicesDescription(v string)`

SetInvoicesDescription sets InvoicesDescription field to given value.

### HasInvoicesDescription

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasInvoicesDescription() bool`

HasInvoicesDescription returns a boolean if a field has been set.

### GetInvoicesAmount

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesAmount() float32`

GetInvoicesAmount returns the InvoicesAmount field if non-nil, zero value otherwise.

### GetInvoicesAmountOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesAmountOk() (*float32, bool)`

GetInvoicesAmountOk returns a tuple with the InvoicesAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesAmount

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetInvoicesAmount(v float32)`

SetInvoicesAmount sets InvoicesAmount field to given value.

### HasInvoicesAmount

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasInvoicesAmount() bool`

HasInvoicesAmount returns a boolean if a field has been set.

### GetInvoicesDate

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesDate() string`

GetInvoicesDate returns the InvoicesDate field if non-nil, zero value otherwise.

### GetInvoicesDateOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesDateOk() (*string, bool)`

GetInvoicesDateOk returns a tuple with the InvoicesDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDate

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetInvoicesDate(v string)`

SetInvoicesDate sets InvoicesDate field to given value.

### HasInvoicesDate

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasInvoicesDate() bool`

HasInvoicesDate returns a boolean if a field has been set.

### GetInvoicesCurrency

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesCurrency() string`

GetInvoicesCurrency returns the InvoicesCurrency field if non-nil, zero value otherwise.

### GetInvoicesCurrencyOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesCurrencyOk() (*string, bool)`

GetInvoicesCurrencyOk returns a tuple with the InvoicesCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesCurrency

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetInvoicesCurrency(v string)`

SetInvoicesCurrency sets InvoicesCurrency field to given value.

### HasInvoicesCurrency

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasInvoicesCurrency() bool`

HasInvoicesCurrency returns a boolean if a field has been set.

### GetCurrencySymbol

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetCurrencySymbol() string`

GetCurrencySymbol returns the CurrencySymbol field if non-nil, zero value otherwise.

### GetCurrencySymbolOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetCurrencySymbolOk() (*string, bool)`

GetCurrencySymbolOk returns a tuple with the CurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrencySymbol

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetCurrencySymbol(v string)`

SetCurrencySymbol sets CurrencySymbol field to given value.

### HasCurrencySymbol

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasCurrencySymbol() bool`

HasCurrencySymbol returns a boolean if a field has been set.

### GetInvoicesDateFormatted

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesDateFormatted() string`

GetInvoicesDateFormatted returns the InvoicesDateFormatted field if non-nil, zero value otherwise.

### GetInvoicesDateFormattedOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetInvoicesDateFormattedOk() (*string, bool)`

GetInvoicesDateFormattedOk returns a tuple with the InvoicesDateFormatted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDateFormatted

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetInvoicesDateFormatted(v string)`

SetInvoicesDateFormatted sets InvoicesDateFormatted field to given value.

### HasInvoicesDateFormatted

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasInvoicesDateFormatted() bool`

HasInvoicesDateFormatted returns a boolean if a field has been set.

### GetPaymentType

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetPaymentType() string`

GetPaymentType returns the PaymentType field if non-nil, zero value otherwise.

### GetPaymentTypeOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetPaymentTypeOk() (*string, bool)`

GetPaymentTypeOk returns a tuple with the PaymentType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentType

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetPaymentType(v string)`

SetPaymentType sets PaymentType field to given value.

### HasPaymentType

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasPaymentType() bool`

HasPaymentType returns a boolean if a field has been set.

### GetRefundInvoices

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetRefundInvoices() map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue`

GetRefundInvoices returns the RefundInvoices field if non-nil, zero value otherwise.

### GetRefundInvoicesOk

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) GetRefundInvoicesOk() (*map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue, bool)`

GetRefundInvoicesOk returns a tuple with the RefundInvoices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRefundInvoices

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) SetRefundInvoices(v map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue)`

SetRefundInvoices sets RefundInvoices field to given value.

### HasRefundInvoices

`func (o *ChargeInvoiceRowsInvoicesValuePaidInvoicesValue) HasRefundInvoices() bool`

HasRefundInvoices returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


