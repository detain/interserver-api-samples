# ChargeInvoiceRowsInvoicesValue

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**InvoicesId** | Pointer to **float32** | Unique invoice ID. | [optional] 
**InvoicesDescription** | Pointer to **string** | Description of the invoice charge. | [optional] 
**InvoicesAmount** | Pointer to **float32** | Invoice amount. | [optional] 
**InvoicesDate** | Pointer to **string** | Invoice date. | [optional] 
**InvoicesPaid** | Pointer to **float32** |  | [optional] 
**InvoicesDueDate** | Pointer to **string** |  | [optional] 
**InvoicesCurrency** | Pointer to **string** |  | [optional] 
**CurrencySymbol** | Pointer to **string** |  | [optional] 
**InvoicesDateFormatted** | Pointer to **string** |  | [optional] 
**PaidInvoices** | Pointer to [**map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValue**](ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.md) | This is optional when invoices_paid &#x3D; 1 this array will show | [optional] 

## Methods

### NewChargeInvoiceRowsInvoicesValue

`func NewChargeInvoiceRowsInvoicesValue() *ChargeInvoiceRowsInvoicesValue`

NewChargeInvoiceRowsInvoicesValue instantiates a new ChargeInvoiceRowsInvoicesValue object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewChargeInvoiceRowsInvoicesValueWithDefaults

`func NewChargeInvoiceRowsInvoicesValueWithDefaults() *ChargeInvoiceRowsInvoicesValue`

NewChargeInvoiceRowsInvoicesValueWithDefaults instantiates a new ChargeInvoiceRowsInvoicesValue object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetInvoicesId

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesId() float32`

GetInvoicesId returns the InvoicesId field if non-nil, zero value otherwise.

### GetInvoicesIdOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesIdOk() (*float32, bool)`

GetInvoicesIdOk returns a tuple with the InvoicesId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesId

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesId(v float32)`

SetInvoicesId sets InvoicesId field to given value.

### HasInvoicesId

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesId() bool`

HasInvoicesId returns a boolean if a field has been set.

### GetInvoicesDescription

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDescription() string`

GetInvoicesDescription returns the InvoicesDescription field if non-nil, zero value otherwise.

### GetInvoicesDescriptionOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDescriptionOk() (*string, bool)`

GetInvoicesDescriptionOk returns a tuple with the InvoicesDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDescription

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesDescription(v string)`

SetInvoicesDescription sets InvoicesDescription field to given value.

### HasInvoicesDescription

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesDescription() bool`

HasInvoicesDescription returns a boolean if a field has been set.

### GetInvoicesAmount

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesAmount() float32`

GetInvoicesAmount returns the InvoicesAmount field if non-nil, zero value otherwise.

### GetInvoicesAmountOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesAmountOk() (*float32, bool)`

GetInvoicesAmountOk returns a tuple with the InvoicesAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesAmount

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesAmount(v float32)`

SetInvoicesAmount sets InvoicesAmount field to given value.

### HasInvoicesAmount

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesAmount() bool`

HasInvoicesAmount returns a boolean if a field has been set.

### GetInvoicesDate

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDate() string`

GetInvoicesDate returns the InvoicesDate field if non-nil, zero value otherwise.

### GetInvoicesDateOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDateOk() (*string, bool)`

GetInvoicesDateOk returns a tuple with the InvoicesDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDate

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesDate(v string)`

SetInvoicesDate sets InvoicesDate field to given value.

### HasInvoicesDate

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesDate() bool`

HasInvoicesDate returns a boolean if a field has been set.

### GetInvoicesPaid

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesPaid() float32`

GetInvoicesPaid returns the InvoicesPaid field if non-nil, zero value otherwise.

### GetInvoicesPaidOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesPaidOk() (*float32, bool)`

GetInvoicesPaidOk returns a tuple with the InvoicesPaid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesPaid

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesPaid(v float32)`

SetInvoicesPaid sets InvoicesPaid field to given value.

### HasInvoicesPaid

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesPaid() bool`

HasInvoicesPaid returns a boolean if a field has been set.

### GetInvoicesDueDate

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDueDate() string`

GetInvoicesDueDate returns the InvoicesDueDate field if non-nil, zero value otherwise.

### GetInvoicesDueDateOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDueDateOk() (*string, bool)`

GetInvoicesDueDateOk returns a tuple with the InvoicesDueDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDueDate

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesDueDate(v string)`

SetInvoicesDueDate sets InvoicesDueDate field to given value.

### HasInvoicesDueDate

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesDueDate() bool`

HasInvoicesDueDate returns a boolean if a field has been set.

### GetInvoicesCurrency

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesCurrency() string`

GetInvoicesCurrency returns the InvoicesCurrency field if non-nil, zero value otherwise.

### GetInvoicesCurrencyOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesCurrencyOk() (*string, bool)`

GetInvoicesCurrencyOk returns a tuple with the InvoicesCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesCurrency

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesCurrency(v string)`

SetInvoicesCurrency sets InvoicesCurrency field to given value.

### HasInvoicesCurrency

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesCurrency() bool`

HasInvoicesCurrency returns a boolean if a field has been set.

### GetCurrencySymbol

`func (o *ChargeInvoiceRowsInvoicesValue) GetCurrencySymbol() string`

GetCurrencySymbol returns the CurrencySymbol field if non-nil, zero value otherwise.

### GetCurrencySymbolOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetCurrencySymbolOk() (*string, bool)`

GetCurrencySymbolOk returns a tuple with the CurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrencySymbol

`func (o *ChargeInvoiceRowsInvoicesValue) SetCurrencySymbol(v string)`

SetCurrencySymbol sets CurrencySymbol field to given value.

### HasCurrencySymbol

`func (o *ChargeInvoiceRowsInvoicesValue) HasCurrencySymbol() bool`

HasCurrencySymbol returns a boolean if a field has been set.

### GetInvoicesDateFormatted

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDateFormatted() string`

GetInvoicesDateFormatted returns the InvoicesDateFormatted field if non-nil, zero value otherwise.

### GetInvoicesDateFormattedOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetInvoicesDateFormattedOk() (*string, bool)`

GetInvoicesDateFormattedOk returns a tuple with the InvoicesDateFormatted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDateFormatted

`func (o *ChargeInvoiceRowsInvoicesValue) SetInvoicesDateFormatted(v string)`

SetInvoicesDateFormatted sets InvoicesDateFormatted field to given value.

### HasInvoicesDateFormatted

`func (o *ChargeInvoiceRowsInvoicesValue) HasInvoicesDateFormatted() bool`

HasInvoicesDateFormatted returns a boolean if a field has been set.

### GetPaidInvoices

`func (o *ChargeInvoiceRowsInvoicesValue) GetPaidInvoices() map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValue`

GetPaidInvoices returns the PaidInvoices field if non-nil, zero value otherwise.

### GetPaidInvoicesOk

`func (o *ChargeInvoiceRowsInvoicesValue) GetPaidInvoicesOk() (*map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValue, bool)`

GetPaidInvoicesOk returns a tuple with the PaidInvoices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaidInvoices

`func (o *ChargeInvoiceRowsInvoicesValue) SetPaidInvoices(v map[string]ChargeInvoiceRowsInvoicesValuePaidInvoicesValue)`

SetPaidInvoices sets PaidInvoices field to given value.

### HasPaidInvoices

`func (o *ChargeInvoiceRowsInvoicesValue) HasPaidInvoices() bool`

HasPaidInvoices returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


