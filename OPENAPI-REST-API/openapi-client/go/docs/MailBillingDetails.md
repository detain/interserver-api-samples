# MailBillingDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceLastInvoiceDate** | Pointer to **string** | The last invoice date of the service. | [optional] 
**ServicePaymentStatus** | Pointer to **string** | The payment status of the service. | [optional] 
**ServiceFrequency** | Pointer to **string** | The frequency of the service payment. | [optional] 
**NextDate** | Pointer to **string** | The next payment date of the service. | [optional] 
**ServiceNextInvoiceDate** | Pointer to **string** | The next invoice date of the service. | [optional] 
**ServiceCurrency** | Pointer to **string** | The currency of the service. | [optional] 
**ServiceCurrencySymbol** | Pointer to **string** | The currency symbol of the service. | [optional] 
**ServiceCostInfo** | Pointer to **string** | The cost information of the service. | [optional] 
**ServiceExtra** | Pointer to **[]string** | Extra information for the service. | [optional] 
**ServiceExtraJson** | Pointer to **string** | Extra JSON information for the service. | [optional] 

## Methods

### NewMailBillingDetails

`func NewMailBillingDetails() *MailBillingDetails`

NewMailBillingDetails instantiates a new MailBillingDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMailBillingDetailsWithDefaults

`func NewMailBillingDetailsWithDefaults() *MailBillingDetails`

NewMailBillingDetailsWithDefaults instantiates a new MailBillingDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceLastInvoiceDate

`func (o *MailBillingDetails) GetServiceLastInvoiceDate() string`

GetServiceLastInvoiceDate returns the ServiceLastInvoiceDate field if non-nil, zero value otherwise.

### GetServiceLastInvoiceDateOk

`func (o *MailBillingDetails) GetServiceLastInvoiceDateOk() (*string, bool)`

GetServiceLastInvoiceDateOk returns a tuple with the ServiceLastInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceLastInvoiceDate

`func (o *MailBillingDetails) SetServiceLastInvoiceDate(v string)`

SetServiceLastInvoiceDate sets ServiceLastInvoiceDate field to given value.

### HasServiceLastInvoiceDate

`func (o *MailBillingDetails) HasServiceLastInvoiceDate() bool`

HasServiceLastInvoiceDate returns a boolean if a field has been set.

### GetServicePaymentStatus

`func (o *MailBillingDetails) GetServicePaymentStatus() string`

GetServicePaymentStatus returns the ServicePaymentStatus field if non-nil, zero value otherwise.

### GetServicePaymentStatusOk

`func (o *MailBillingDetails) GetServicePaymentStatusOk() (*string, bool)`

GetServicePaymentStatusOk returns a tuple with the ServicePaymentStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicePaymentStatus

`func (o *MailBillingDetails) SetServicePaymentStatus(v string)`

SetServicePaymentStatus sets ServicePaymentStatus field to given value.

### HasServicePaymentStatus

`func (o *MailBillingDetails) HasServicePaymentStatus() bool`

HasServicePaymentStatus returns a boolean if a field has been set.

### GetServiceFrequency

`func (o *MailBillingDetails) GetServiceFrequency() string`

GetServiceFrequency returns the ServiceFrequency field if non-nil, zero value otherwise.

### GetServiceFrequencyOk

`func (o *MailBillingDetails) GetServiceFrequencyOk() (*string, bool)`

GetServiceFrequencyOk returns a tuple with the ServiceFrequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceFrequency

`func (o *MailBillingDetails) SetServiceFrequency(v string)`

SetServiceFrequency sets ServiceFrequency field to given value.

### HasServiceFrequency

`func (o *MailBillingDetails) HasServiceFrequency() bool`

HasServiceFrequency returns a boolean if a field has been set.

### GetNextDate

`func (o *MailBillingDetails) GetNextDate() string`

GetNextDate returns the NextDate field if non-nil, zero value otherwise.

### GetNextDateOk

`func (o *MailBillingDetails) GetNextDateOk() (*string, bool)`

GetNextDateOk returns a tuple with the NextDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNextDate

`func (o *MailBillingDetails) SetNextDate(v string)`

SetNextDate sets NextDate field to given value.

### HasNextDate

`func (o *MailBillingDetails) HasNextDate() bool`

HasNextDate returns a boolean if a field has been set.

### GetServiceNextInvoiceDate

`func (o *MailBillingDetails) GetServiceNextInvoiceDate() string`

GetServiceNextInvoiceDate returns the ServiceNextInvoiceDate field if non-nil, zero value otherwise.

### GetServiceNextInvoiceDateOk

`func (o *MailBillingDetails) GetServiceNextInvoiceDateOk() (*string, bool)`

GetServiceNextInvoiceDateOk returns a tuple with the ServiceNextInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceNextInvoiceDate

`func (o *MailBillingDetails) SetServiceNextInvoiceDate(v string)`

SetServiceNextInvoiceDate sets ServiceNextInvoiceDate field to given value.

### HasServiceNextInvoiceDate

`func (o *MailBillingDetails) HasServiceNextInvoiceDate() bool`

HasServiceNextInvoiceDate returns a boolean if a field has been set.

### GetServiceCurrency

`func (o *MailBillingDetails) GetServiceCurrency() string`

GetServiceCurrency returns the ServiceCurrency field if non-nil, zero value otherwise.

### GetServiceCurrencyOk

`func (o *MailBillingDetails) GetServiceCurrencyOk() (*string, bool)`

GetServiceCurrencyOk returns a tuple with the ServiceCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrency

`func (o *MailBillingDetails) SetServiceCurrency(v string)`

SetServiceCurrency sets ServiceCurrency field to given value.

### HasServiceCurrency

`func (o *MailBillingDetails) HasServiceCurrency() bool`

HasServiceCurrency returns a boolean if a field has been set.

### GetServiceCurrencySymbol

`func (o *MailBillingDetails) GetServiceCurrencySymbol() string`

GetServiceCurrencySymbol returns the ServiceCurrencySymbol field if non-nil, zero value otherwise.

### GetServiceCurrencySymbolOk

`func (o *MailBillingDetails) GetServiceCurrencySymbolOk() (*string, bool)`

GetServiceCurrencySymbolOk returns a tuple with the ServiceCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrencySymbol

`func (o *MailBillingDetails) SetServiceCurrencySymbol(v string)`

SetServiceCurrencySymbol sets ServiceCurrencySymbol field to given value.

### HasServiceCurrencySymbol

`func (o *MailBillingDetails) HasServiceCurrencySymbol() bool`

HasServiceCurrencySymbol returns a boolean if a field has been set.

### GetServiceCostInfo

`func (o *MailBillingDetails) GetServiceCostInfo() string`

GetServiceCostInfo returns the ServiceCostInfo field if non-nil, zero value otherwise.

### GetServiceCostInfoOk

`func (o *MailBillingDetails) GetServiceCostInfoOk() (*string, bool)`

GetServiceCostInfoOk returns a tuple with the ServiceCostInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCostInfo

`func (o *MailBillingDetails) SetServiceCostInfo(v string)`

SetServiceCostInfo sets ServiceCostInfo field to given value.

### HasServiceCostInfo

`func (o *MailBillingDetails) HasServiceCostInfo() bool`

HasServiceCostInfo returns a boolean if a field has been set.

### GetServiceExtra

`func (o *MailBillingDetails) GetServiceExtra() []string`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *MailBillingDetails) GetServiceExtraOk() (*[]string, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *MailBillingDetails) SetServiceExtra(v []string)`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *MailBillingDetails) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetServiceExtraJson

`func (o *MailBillingDetails) GetServiceExtraJson() string`

GetServiceExtraJson returns the ServiceExtraJson field if non-nil, zero value otherwise.

### GetServiceExtraJsonOk

`func (o *MailBillingDetails) GetServiceExtraJsonOk() (*string, bool)`

GetServiceExtraJsonOk returns a tuple with the ServiceExtraJson field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtraJson

`func (o *MailBillingDetails) SetServiceExtraJson(v string)`

SetServiceExtraJson sets ServiceExtraJson field to given value.

### HasServiceExtraJson

`func (o *MailBillingDetails) HasServiceExtraJson() bool`

HasServiceExtraJson returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


