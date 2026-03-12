# BackupBillingDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceLastInvoiceDate** | Pointer to **string** | Last invoice date of the service. | [optional] 
**ServicePaymentStatus** | Pointer to **string** | Payment status of the service. | [optional] 
**ServiceFrequency** | Pointer to **string** | Billing frequency of the service. | [optional] 
**NextDate** | Pointer to **string** | Next billing date of the service. | [optional] 
**ServiceNextInvoiceDate** | Pointer to **string** | Next invoice date of the service. | [optional] 
**ServiceCurrency** | Pointer to **string** | Currency of the service. | [optional] 
**ServiceCurrencySymbol** | Pointer to **string** | Currency symbol of the service. | [optional] 
**ServiceCostInfo** | Pointer to **string** | Cost information of the service. | [optional] 
**ServiceExtra** | Pointer to **string** | Service Extra Info | [optional] 
**ServiceExtraJson** | Pointer to **string** | JSON representation of extra service information. | [optional] 

## Methods

### NewBackupBillingDetails

`func NewBackupBillingDetails() *BackupBillingDetails`

NewBackupBillingDetails instantiates a new BackupBillingDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBackupBillingDetailsWithDefaults

`func NewBackupBillingDetailsWithDefaults() *BackupBillingDetails`

NewBackupBillingDetailsWithDefaults instantiates a new BackupBillingDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceLastInvoiceDate

`func (o *BackupBillingDetails) GetServiceLastInvoiceDate() string`

GetServiceLastInvoiceDate returns the ServiceLastInvoiceDate field if non-nil, zero value otherwise.

### GetServiceLastInvoiceDateOk

`func (o *BackupBillingDetails) GetServiceLastInvoiceDateOk() (*string, bool)`

GetServiceLastInvoiceDateOk returns a tuple with the ServiceLastInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceLastInvoiceDate

`func (o *BackupBillingDetails) SetServiceLastInvoiceDate(v string)`

SetServiceLastInvoiceDate sets ServiceLastInvoiceDate field to given value.

### HasServiceLastInvoiceDate

`func (o *BackupBillingDetails) HasServiceLastInvoiceDate() bool`

HasServiceLastInvoiceDate returns a boolean if a field has been set.

### GetServicePaymentStatus

`func (o *BackupBillingDetails) GetServicePaymentStatus() string`

GetServicePaymentStatus returns the ServicePaymentStatus field if non-nil, zero value otherwise.

### GetServicePaymentStatusOk

`func (o *BackupBillingDetails) GetServicePaymentStatusOk() (*string, bool)`

GetServicePaymentStatusOk returns a tuple with the ServicePaymentStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicePaymentStatus

`func (o *BackupBillingDetails) SetServicePaymentStatus(v string)`

SetServicePaymentStatus sets ServicePaymentStatus field to given value.

### HasServicePaymentStatus

`func (o *BackupBillingDetails) HasServicePaymentStatus() bool`

HasServicePaymentStatus returns a boolean if a field has been set.

### GetServiceFrequency

`func (o *BackupBillingDetails) GetServiceFrequency() string`

GetServiceFrequency returns the ServiceFrequency field if non-nil, zero value otherwise.

### GetServiceFrequencyOk

`func (o *BackupBillingDetails) GetServiceFrequencyOk() (*string, bool)`

GetServiceFrequencyOk returns a tuple with the ServiceFrequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceFrequency

`func (o *BackupBillingDetails) SetServiceFrequency(v string)`

SetServiceFrequency sets ServiceFrequency field to given value.

### HasServiceFrequency

`func (o *BackupBillingDetails) HasServiceFrequency() bool`

HasServiceFrequency returns a boolean if a field has been set.

### GetNextDate

`func (o *BackupBillingDetails) GetNextDate() string`

GetNextDate returns the NextDate field if non-nil, zero value otherwise.

### GetNextDateOk

`func (o *BackupBillingDetails) GetNextDateOk() (*string, bool)`

GetNextDateOk returns a tuple with the NextDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNextDate

`func (o *BackupBillingDetails) SetNextDate(v string)`

SetNextDate sets NextDate field to given value.

### HasNextDate

`func (o *BackupBillingDetails) HasNextDate() bool`

HasNextDate returns a boolean if a field has been set.

### GetServiceNextInvoiceDate

`func (o *BackupBillingDetails) GetServiceNextInvoiceDate() string`

GetServiceNextInvoiceDate returns the ServiceNextInvoiceDate field if non-nil, zero value otherwise.

### GetServiceNextInvoiceDateOk

`func (o *BackupBillingDetails) GetServiceNextInvoiceDateOk() (*string, bool)`

GetServiceNextInvoiceDateOk returns a tuple with the ServiceNextInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceNextInvoiceDate

`func (o *BackupBillingDetails) SetServiceNextInvoiceDate(v string)`

SetServiceNextInvoiceDate sets ServiceNextInvoiceDate field to given value.

### HasServiceNextInvoiceDate

`func (o *BackupBillingDetails) HasServiceNextInvoiceDate() bool`

HasServiceNextInvoiceDate returns a boolean if a field has been set.

### GetServiceCurrency

`func (o *BackupBillingDetails) GetServiceCurrency() string`

GetServiceCurrency returns the ServiceCurrency field if non-nil, zero value otherwise.

### GetServiceCurrencyOk

`func (o *BackupBillingDetails) GetServiceCurrencyOk() (*string, bool)`

GetServiceCurrencyOk returns a tuple with the ServiceCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrency

`func (o *BackupBillingDetails) SetServiceCurrency(v string)`

SetServiceCurrency sets ServiceCurrency field to given value.

### HasServiceCurrency

`func (o *BackupBillingDetails) HasServiceCurrency() bool`

HasServiceCurrency returns a boolean if a field has been set.

### GetServiceCurrencySymbol

`func (o *BackupBillingDetails) GetServiceCurrencySymbol() string`

GetServiceCurrencySymbol returns the ServiceCurrencySymbol field if non-nil, zero value otherwise.

### GetServiceCurrencySymbolOk

`func (o *BackupBillingDetails) GetServiceCurrencySymbolOk() (*string, bool)`

GetServiceCurrencySymbolOk returns a tuple with the ServiceCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrencySymbol

`func (o *BackupBillingDetails) SetServiceCurrencySymbol(v string)`

SetServiceCurrencySymbol sets ServiceCurrencySymbol field to given value.

### HasServiceCurrencySymbol

`func (o *BackupBillingDetails) HasServiceCurrencySymbol() bool`

HasServiceCurrencySymbol returns a boolean if a field has been set.

### GetServiceCostInfo

`func (o *BackupBillingDetails) GetServiceCostInfo() string`

GetServiceCostInfo returns the ServiceCostInfo field if non-nil, zero value otherwise.

### GetServiceCostInfoOk

`func (o *BackupBillingDetails) GetServiceCostInfoOk() (*string, bool)`

GetServiceCostInfoOk returns a tuple with the ServiceCostInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCostInfo

`func (o *BackupBillingDetails) SetServiceCostInfo(v string)`

SetServiceCostInfo sets ServiceCostInfo field to given value.

### HasServiceCostInfo

`func (o *BackupBillingDetails) HasServiceCostInfo() bool`

HasServiceCostInfo returns a boolean if a field has been set.

### GetServiceExtra

`func (o *BackupBillingDetails) GetServiceExtra() string`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *BackupBillingDetails) GetServiceExtraOk() (*string, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *BackupBillingDetails) SetServiceExtra(v string)`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *BackupBillingDetails) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetServiceExtraJson

`func (o *BackupBillingDetails) GetServiceExtraJson() string`

GetServiceExtraJson returns the ServiceExtraJson field if non-nil, zero value otherwise.

### GetServiceExtraJsonOk

`func (o *BackupBillingDetails) GetServiceExtraJsonOk() (*string, bool)`

GetServiceExtraJsonOk returns a tuple with the ServiceExtraJson field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtraJson

`func (o *BackupBillingDetails) SetServiceExtraJson(v string)`

SetServiceExtraJson sets ServiceExtraJson field to given value.

### HasServiceExtraJson

`func (o *BackupBillingDetails) HasServiceExtraJson() bool`

HasServiceExtraJson returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


