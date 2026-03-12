# DomainBillingDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceLastInvoiceDate** | Pointer to **string** | Date of the last invoice for the domain. | [optional] 
**ServicePaymentStatus** | Pointer to **string** | Current payment status (e.g., Paid, Unpaid). | [optional] 
**ServiceFrequency** | Pointer to **string** | Billing frequency (e.g., Yearly, Monthly). | [optional] 
**NextDate** | Pointer to **string** | Next billing date (ISO 8601). | [optional] 
**ServiceNextInvoiceDate** | Pointer to **string** | Human-readable next invoice date. | [optional] 
**ServiceCurrency** | Pointer to **string** | Billing currency code. | [optional] 
**ServiceCurrencySymbol** | Pointer to **string** | Billing currency symbol. | [optional] 
**ServiceCostInfo** | Pointer to **string** | Cost breakdown information. | [optional] 
**ServiceExtra** | Pointer to [**DomainBillingExtra**](DomainBillingExtra.md) |  | [optional] 
**ServiceExtraJson** | Pointer to **string** | Raw JSON string of extra billing data. | [optional] 

## Methods

### NewDomainBillingDetails

`func NewDomainBillingDetails() *DomainBillingDetails`

NewDomainBillingDetails instantiates a new DomainBillingDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainBillingDetailsWithDefaults

`func NewDomainBillingDetailsWithDefaults() *DomainBillingDetails`

NewDomainBillingDetailsWithDefaults instantiates a new DomainBillingDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceLastInvoiceDate

`func (o *DomainBillingDetails) GetServiceLastInvoiceDate() string`

GetServiceLastInvoiceDate returns the ServiceLastInvoiceDate field if non-nil, zero value otherwise.

### GetServiceLastInvoiceDateOk

`func (o *DomainBillingDetails) GetServiceLastInvoiceDateOk() (*string, bool)`

GetServiceLastInvoiceDateOk returns a tuple with the ServiceLastInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceLastInvoiceDate

`func (o *DomainBillingDetails) SetServiceLastInvoiceDate(v string)`

SetServiceLastInvoiceDate sets ServiceLastInvoiceDate field to given value.

### HasServiceLastInvoiceDate

`func (o *DomainBillingDetails) HasServiceLastInvoiceDate() bool`

HasServiceLastInvoiceDate returns a boolean if a field has been set.

### GetServicePaymentStatus

`func (o *DomainBillingDetails) GetServicePaymentStatus() string`

GetServicePaymentStatus returns the ServicePaymentStatus field if non-nil, zero value otherwise.

### GetServicePaymentStatusOk

`func (o *DomainBillingDetails) GetServicePaymentStatusOk() (*string, bool)`

GetServicePaymentStatusOk returns a tuple with the ServicePaymentStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicePaymentStatus

`func (o *DomainBillingDetails) SetServicePaymentStatus(v string)`

SetServicePaymentStatus sets ServicePaymentStatus field to given value.

### HasServicePaymentStatus

`func (o *DomainBillingDetails) HasServicePaymentStatus() bool`

HasServicePaymentStatus returns a boolean if a field has been set.

### GetServiceFrequency

`func (o *DomainBillingDetails) GetServiceFrequency() string`

GetServiceFrequency returns the ServiceFrequency field if non-nil, zero value otherwise.

### GetServiceFrequencyOk

`func (o *DomainBillingDetails) GetServiceFrequencyOk() (*string, bool)`

GetServiceFrequencyOk returns a tuple with the ServiceFrequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceFrequency

`func (o *DomainBillingDetails) SetServiceFrequency(v string)`

SetServiceFrequency sets ServiceFrequency field to given value.

### HasServiceFrequency

`func (o *DomainBillingDetails) HasServiceFrequency() bool`

HasServiceFrequency returns a boolean if a field has been set.

### GetNextDate

`func (o *DomainBillingDetails) GetNextDate() string`

GetNextDate returns the NextDate field if non-nil, zero value otherwise.

### GetNextDateOk

`func (o *DomainBillingDetails) GetNextDateOk() (*string, bool)`

GetNextDateOk returns a tuple with the NextDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNextDate

`func (o *DomainBillingDetails) SetNextDate(v string)`

SetNextDate sets NextDate field to given value.

### HasNextDate

`func (o *DomainBillingDetails) HasNextDate() bool`

HasNextDate returns a boolean if a field has been set.

### GetServiceNextInvoiceDate

`func (o *DomainBillingDetails) GetServiceNextInvoiceDate() string`

GetServiceNextInvoiceDate returns the ServiceNextInvoiceDate field if non-nil, zero value otherwise.

### GetServiceNextInvoiceDateOk

`func (o *DomainBillingDetails) GetServiceNextInvoiceDateOk() (*string, bool)`

GetServiceNextInvoiceDateOk returns a tuple with the ServiceNextInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceNextInvoiceDate

`func (o *DomainBillingDetails) SetServiceNextInvoiceDate(v string)`

SetServiceNextInvoiceDate sets ServiceNextInvoiceDate field to given value.

### HasServiceNextInvoiceDate

`func (o *DomainBillingDetails) HasServiceNextInvoiceDate() bool`

HasServiceNextInvoiceDate returns a boolean if a field has been set.

### GetServiceCurrency

`func (o *DomainBillingDetails) GetServiceCurrency() string`

GetServiceCurrency returns the ServiceCurrency field if non-nil, zero value otherwise.

### GetServiceCurrencyOk

`func (o *DomainBillingDetails) GetServiceCurrencyOk() (*string, bool)`

GetServiceCurrencyOk returns a tuple with the ServiceCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrency

`func (o *DomainBillingDetails) SetServiceCurrency(v string)`

SetServiceCurrency sets ServiceCurrency field to given value.

### HasServiceCurrency

`func (o *DomainBillingDetails) HasServiceCurrency() bool`

HasServiceCurrency returns a boolean if a field has been set.

### GetServiceCurrencySymbol

`func (o *DomainBillingDetails) GetServiceCurrencySymbol() string`

GetServiceCurrencySymbol returns the ServiceCurrencySymbol field if non-nil, zero value otherwise.

### GetServiceCurrencySymbolOk

`func (o *DomainBillingDetails) GetServiceCurrencySymbolOk() (*string, bool)`

GetServiceCurrencySymbolOk returns a tuple with the ServiceCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrencySymbol

`func (o *DomainBillingDetails) SetServiceCurrencySymbol(v string)`

SetServiceCurrencySymbol sets ServiceCurrencySymbol field to given value.

### HasServiceCurrencySymbol

`func (o *DomainBillingDetails) HasServiceCurrencySymbol() bool`

HasServiceCurrencySymbol returns a boolean if a field has been set.

### GetServiceCostInfo

`func (o *DomainBillingDetails) GetServiceCostInfo() string`

GetServiceCostInfo returns the ServiceCostInfo field if non-nil, zero value otherwise.

### GetServiceCostInfoOk

`func (o *DomainBillingDetails) GetServiceCostInfoOk() (*string, bool)`

GetServiceCostInfoOk returns a tuple with the ServiceCostInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCostInfo

`func (o *DomainBillingDetails) SetServiceCostInfo(v string)`

SetServiceCostInfo sets ServiceCostInfo field to given value.

### HasServiceCostInfo

`func (o *DomainBillingDetails) HasServiceCostInfo() bool`

HasServiceCostInfo returns a boolean if a field has been set.

### GetServiceExtra

`func (o *DomainBillingDetails) GetServiceExtra() DomainBillingExtra`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *DomainBillingDetails) GetServiceExtraOk() (*DomainBillingExtra, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *DomainBillingDetails) SetServiceExtra(v DomainBillingExtra)`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *DomainBillingDetails) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetServiceExtraJson

`func (o *DomainBillingDetails) GetServiceExtraJson() string`

GetServiceExtraJson returns the ServiceExtraJson field if non-nil, zero value otherwise.

### GetServiceExtraJsonOk

`func (o *DomainBillingDetails) GetServiceExtraJsonOk() (*string, bool)`

GetServiceExtraJsonOk returns a tuple with the ServiceExtraJson field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtraJson

`func (o *DomainBillingDetails) SetServiceExtraJson(v string)`

SetServiceExtraJson sets ServiceExtraJson field to given value.

### HasServiceExtraJson

`func (o *DomainBillingDetails) HasServiceExtraJson() bool`

HasServiceExtraJson returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


