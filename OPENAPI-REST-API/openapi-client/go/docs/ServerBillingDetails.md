# ServerBillingDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceLastInvoiceDate** | Pointer to **string** |  | [optional] 
**ServicePaymentStatus** | Pointer to **string** |  | [optional] 
**ServiceFrequency** | Pointer to **string** |  | [optional] 
**NextDate** | Pointer to **string** |  | [optional] 
**ServiceNextInvoiceDate** | Pointer to **string** |  | [optional] 
**ServiceCurrency** | Pointer to **string** |  | [optional] 
**ServiceCurrencySymbol** | Pointer to **string** |  | [optional] 
**ServiceCostInfo** | Pointer to **string** |  | [optional] 
**ServiceExtra** | Pointer to **[]string** |  | [optional] 
**ServiceExtraJson** | Pointer to **string** |  | [optional] 

## Methods

### NewServerBillingDetails

`func NewServerBillingDetails() *ServerBillingDetails`

NewServerBillingDetails instantiates a new ServerBillingDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerBillingDetailsWithDefaults

`func NewServerBillingDetailsWithDefaults() *ServerBillingDetails`

NewServerBillingDetailsWithDefaults instantiates a new ServerBillingDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceLastInvoiceDate

`func (o *ServerBillingDetails) GetServiceLastInvoiceDate() string`

GetServiceLastInvoiceDate returns the ServiceLastInvoiceDate field if non-nil, zero value otherwise.

### GetServiceLastInvoiceDateOk

`func (o *ServerBillingDetails) GetServiceLastInvoiceDateOk() (*string, bool)`

GetServiceLastInvoiceDateOk returns a tuple with the ServiceLastInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceLastInvoiceDate

`func (o *ServerBillingDetails) SetServiceLastInvoiceDate(v string)`

SetServiceLastInvoiceDate sets ServiceLastInvoiceDate field to given value.

### HasServiceLastInvoiceDate

`func (o *ServerBillingDetails) HasServiceLastInvoiceDate() bool`

HasServiceLastInvoiceDate returns a boolean if a field has been set.

### GetServicePaymentStatus

`func (o *ServerBillingDetails) GetServicePaymentStatus() string`

GetServicePaymentStatus returns the ServicePaymentStatus field if non-nil, zero value otherwise.

### GetServicePaymentStatusOk

`func (o *ServerBillingDetails) GetServicePaymentStatusOk() (*string, bool)`

GetServicePaymentStatusOk returns a tuple with the ServicePaymentStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicePaymentStatus

`func (o *ServerBillingDetails) SetServicePaymentStatus(v string)`

SetServicePaymentStatus sets ServicePaymentStatus field to given value.

### HasServicePaymentStatus

`func (o *ServerBillingDetails) HasServicePaymentStatus() bool`

HasServicePaymentStatus returns a boolean if a field has been set.

### GetServiceFrequency

`func (o *ServerBillingDetails) GetServiceFrequency() string`

GetServiceFrequency returns the ServiceFrequency field if non-nil, zero value otherwise.

### GetServiceFrequencyOk

`func (o *ServerBillingDetails) GetServiceFrequencyOk() (*string, bool)`

GetServiceFrequencyOk returns a tuple with the ServiceFrequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceFrequency

`func (o *ServerBillingDetails) SetServiceFrequency(v string)`

SetServiceFrequency sets ServiceFrequency field to given value.

### HasServiceFrequency

`func (o *ServerBillingDetails) HasServiceFrequency() bool`

HasServiceFrequency returns a boolean if a field has been set.

### GetNextDate

`func (o *ServerBillingDetails) GetNextDate() string`

GetNextDate returns the NextDate field if non-nil, zero value otherwise.

### GetNextDateOk

`func (o *ServerBillingDetails) GetNextDateOk() (*string, bool)`

GetNextDateOk returns a tuple with the NextDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNextDate

`func (o *ServerBillingDetails) SetNextDate(v string)`

SetNextDate sets NextDate field to given value.

### HasNextDate

`func (o *ServerBillingDetails) HasNextDate() bool`

HasNextDate returns a boolean if a field has been set.

### GetServiceNextInvoiceDate

`func (o *ServerBillingDetails) GetServiceNextInvoiceDate() string`

GetServiceNextInvoiceDate returns the ServiceNextInvoiceDate field if non-nil, zero value otherwise.

### GetServiceNextInvoiceDateOk

`func (o *ServerBillingDetails) GetServiceNextInvoiceDateOk() (*string, bool)`

GetServiceNextInvoiceDateOk returns a tuple with the ServiceNextInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceNextInvoiceDate

`func (o *ServerBillingDetails) SetServiceNextInvoiceDate(v string)`

SetServiceNextInvoiceDate sets ServiceNextInvoiceDate field to given value.

### HasServiceNextInvoiceDate

`func (o *ServerBillingDetails) HasServiceNextInvoiceDate() bool`

HasServiceNextInvoiceDate returns a boolean if a field has been set.

### GetServiceCurrency

`func (o *ServerBillingDetails) GetServiceCurrency() string`

GetServiceCurrency returns the ServiceCurrency field if non-nil, zero value otherwise.

### GetServiceCurrencyOk

`func (o *ServerBillingDetails) GetServiceCurrencyOk() (*string, bool)`

GetServiceCurrencyOk returns a tuple with the ServiceCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrency

`func (o *ServerBillingDetails) SetServiceCurrency(v string)`

SetServiceCurrency sets ServiceCurrency field to given value.

### HasServiceCurrency

`func (o *ServerBillingDetails) HasServiceCurrency() bool`

HasServiceCurrency returns a boolean if a field has been set.

### GetServiceCurrencySymbol

`func (o *ServerBillingDetails) GetServiceCurrencySymbol() string`

GetServiceCurrencySymbol returns the ServiceCurrencySymbol field if non-nil, zero value otherwise.

### GetServiceCurrencySymbolOk

`func (o *ServerBillingDetails) GetServiceCurrencySymbolOk() (*string, bool)`

GetServiceCurrencySymbolOk returns a tuple with the ServiceCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrencySymbol

`func (o *ServerBillingDetails) SetServiceCurrencySymbol(v string)`

SetServiceCurrencySymbol sets ServiceCurrencySymbol field to given value.

### HasServiceCurrencySymbol

`func (o *ServerBillingDetails) HasServiceCurrencySymbol() bool`

HasServiceCurrencySymbol returns a boolean if a field has been set.

### GetServiceCostInfo

`func (o *ServerBillingDetails) GetServiceCostInfo() string`

GetServiceCostInfo returns the ServiceCostInfo field if non-nil, zero value otherwise.

### GetServiceCostInfoOk

`func (o *ServerBillingDetails) GetServiceCostInfoOk() (*string, bool)`

GetServiceCostInfoOk returns a tuple with the ServiceCostInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCostInfo

`func (o *ServerBillingDetails) SetServiceCostInfo(v string)`

SetServiceCostInfo sets ServiceCostInfo field to given value.

### HasServiceCostInfo

`func (o *ServerBillingDetails) HasServiceCostInfo() bool`

HasServiceCostInfo returns a boolean if a field has been set.

### GetServiceExtra

`func (o *ServerBillingDetails) GetServiceExtra() []string`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *ServerBillingDetails) GetServiceExtraOk() (*[]string, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *ServerBillingDetails) SetServiceExtra(v []string)`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *ServerBillingDetails) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetServiceExtraJson

`func (o *ServerBillingDetails) GetServiceExtraJson() string`

GetServiceExtraJson returns the ServiceExtraJson field if non-nil, zero value otherwise.

### GetServiceExtraJsonOk

`func (o *ServerBillingDetails) GetServiceExtraJsonOk() (*string, bool)`

GetServiceExtraJsonOk returns a tuple with the ServiceExtraJson field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtraJson

`func (o *ServerBillingDetails) SetServiceExtraJson(v string)`

SetServiceExtraJson sets ServiceExtraJson field to given value.

### HasServiceExtraJson

`func (o *ServerBillingDetails) HasServiceExtraJson() bool`

HasServiceExtraJson returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


