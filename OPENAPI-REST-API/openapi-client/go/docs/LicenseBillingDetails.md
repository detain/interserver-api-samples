# LicenseBillingDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceLastInvoiceDate** | Pointer to **string** | Last invoice date | [optional] 
**ServicePaymentStatus** | Pointer to **string** | Payment status | [optional] 
**ServiceFrequency** | Pointer to **string** | Service frequency | [optional] 
**NextDate** | Pointer to **time.Time** | Next date | [optional] 
**ServiceNextInvoiceDate** | Pointer to **string** | Next invoice date | [optional] 
**ServiceCurrency** | Pointer to **string** | Service currency | [optional] 
**ServiceCurrencySymbol** | Pointer to **string** | Service currency symbol | [optional] 
**ServiceCoupon** | Pointer to **string** | Service coupon | [optional] 
**ServiceCostInfo** | Pointer to **string** | Service cost information | [optional] 
**ServiceExtra** | Pointer to **[]string** | Additional service information | [optional] 
**ServiceExtraJson** | Pointer to **string** | Additional service information in JSON format | [optional] 

## Methods

### NewLicenseBillingDetails

`func NewLicenseBillingDetails() *LicenseBillingDetails`

NewLicenseBillingDetails instantiates a new LicenseBillingDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLicenseBillingDetailsWithDefaults

`func NewLicenseBillingDetailsWithDefaults() *LicenseBillingDetails`

NewLicenseBillingDetailsWithDefaults instantiates a new LicenseBillingDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceLastInvoiceDate

`func (o *LicenseBillingDetails) GetServiceLastInvoiceDate() string`

GetServiceLastInvoiceDate returns the ServiceLastInvoiceDate field if non-nil, zero value otherwise.

### GetServiceLastInvoiceDateOk

`func (o *LicenseBillingDetails) GetServiceLastInvoiceDateOk() (*string, bool)`

GetServiceLastInvoiceDateOk returns a tuple with the ServiceLastInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceLastInvoiceDate

`func (o *LicenseBillingDetails) SetServiceLastInvoiceDate(v string)`

SetServiceLastInvoiceDate sets ServiceLastInvoiceDate field to given value.

### HasServiceLastInvoiceDate

`func (o *LicenseBillingDetails) HasServiceLastInvoiceDate() bool`

HasServiceLastInvoiceDate returns a boolean if a field has been set.

### GetServicePaymentStatus

`func (o *LicenseBillingDetails) GetServicePaymentStatus() string`

GetServicePaymentStatus returns the ServicePaymentStatus field if non-nil, zero value otherwise.

### GetServicePaymentStatusOk

`func (o *LicenseBillingDetails) GetServicePaymentStatusOk() (*string, bool)`

GetServicePaymentStatusOk returns a tuple with the ServicePaymentStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicePaymentStatus

`func (o *LicenseBillingDetails) SetServicePaymentStatus(v string)`

SetServicePaymentStatus sets ServicePaymentStatus field to given value.

### HasServicePaymentStatus

`func (o *LicenseBillingDetails) HasServicePaymentStatus() bool`

HasServicePaymentStatus returns a boolean if a field has been set.

### GetServiceFrequency

`func (o *LicenseBillingDetails) GetServiceFrequency() string`

GetServiceFrequency returns the ServiceFrequency field if non-nil, zero value otherwise.

### GetServiceFrequencyOk

`func (o *LicenseBillingDetails) GetServiceFrequencyOk() (*string, bool)`

GetServiceFrequencyOk returns a tuple with the ServiceFrequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceFrequency

`func (o *LicenseBillingDetails) SetServiceFrequency(v string)`

SetServiceFrequency sets ServiceFrequency field to given value.

### HasServiceFrequency

`func (o *LicenseBillingDetails) HasServiceFrequency() bool`

HasServiceFrequency returns a boolean if a field has been set.

### GetNextDate

`func (o *LicenseBillingDetails) GetNextDate() time.Time`

GetNextDate returns the NextDate field if non-nil, zero value otherwise.

### GetNextDateOk

`func (o *LicenseBillingDetails) GetNextDateOk() (*time.Time, bool)`

GetNextDateOk returns a tuple with the NextDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNextDate

`func (o *LicenseBillingDetails) SetNextDate(v time.Time)`

SetNextDate sets NextDate field to given value.

### HasNextDate

`func (o *LicenseBillingDetails) HasNextDate() bool`

HasNextDate returns a boolean if a field has been set.

### GetServiceNextInvoiceDate

`func (o *LicenseBillingDetails) GetServiceNextInvoiceDate() string`

GetServiceNextInvoiceDate returns the ServiceNextInvoiceDate field if non-nil, zero value otherwise.

### GetServiceNextInvoiceDateOk

`func (o *LicenseBillingDetails) GetServiceNextInvoiceDateOk() (*string, bool)`

GetServiceNextInvoiceDateOk returns a tuple with the ServiceNextInvoiceDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceNextInvoiceDate

`func (o *LicenseBillingDetails) SetServiceNextInvoiceDate(v string)`

SetServiceNextInvoiceDate sets ServiceNextInvoiceDate field to given value.

### HasServiceNextInvoiceDate

`func (o *LicenseBillingDetails) HasServiceNextInvoiceDate() bool`

HasServiceNextInvoiceDate returns a boolean if a field has been set.

### GetServiceCurrency

`func (o *LicenseBillingDetails) GetServiceCurrency() string`

GetServiceCurrency returns the ServiceCurrency field if non-nil, zero value otherwise.

### GetServiceCurrencyOk

`func (o *LicenseBillingDetails) GetServiceCurrencyOk() (*string, bool)`

GetServiceCurrencyOk returns a tuple with the ServiceCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrency

`func (o *LicenseBillingDetails) SetServiceCurrency(v string)`

SetServiceCurrency sets ServiceCurrency field to given value.

### HasServiceCurrency

`func (o *LicenseBillingDetails) HasServiceCurrency() bool`

HasServiceCurrency returns a boolean if a field has been set.

### GetServiceCurrencySymbol

`func (o *LicenseBillingDetails) GetServiceCurrencySymbol() string`

GetServiceCurrencySymbol returns the ServiceCurrencySymbol field if non-nil, zero value otherwise.

### GetServiceCurrencySymbolOk

`func (o *LicenseBillingDetails) GetServiceCurrencySymbolOk() (*string, bool)`

GetServiceCurrencySymbolOk returns a tuple with the ServiceCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCurrencySymbol

`func (o *LicenseBillingDetails) SetServiceCurrencySymbol(v string)`

SetServiceCurrencySymbol sets ServiceCurrencySymbol field to given value.

### HasServiceCurrencySymbol

`func (o *LicenseBillingDetails) HasServiceCurrencySymbol() bool`

HasServiceCurrencySymbol returns a boolean if a field has been set.

### GetServiceCoupon

`func (o *LicenseBillingDetails) GetServiceCoupon() string`

GetServiceCoupon returns the ServiceCoupon field if non-nil, zero value otherwise.

### GetServiceCouponOk

`func (o *LicenseBillingDetails) GetServiceCouponOk() (*string, bool)`

GetServiceCouponOk returns a tuple with the ServiceCoupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCoupon

`func (o *LicenseBillingDetails) SetServiceCoupon(v string)`

SetServiceCoupon sets ServiceCoupon field to given value.

### HasServiceCoupon

`func (o *LicenseBillingDetails) HasServiceCoupon() bool`

HasServiceCoupon returns a boolean if a field has been set.

### GetServiceCostInfo

`func (o *LicenseBillingDetails) GetServiceCostInfo() string`

GetServiceCostInfo returns the ServiceCostInfo field if non-nil, zero value otherwise.

### GetServiceCostInfoOk

`func (o *LicenseBillingDetails) GetServiceCostInfoOk() (*string, bool)`

GetServiceCostInfoOk returns a tuple with the ServiceCostInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCostInfo

`func (o *LicenseBillingDetails) SetServiceCostInfo(v string)`

SetServiceCostInfo sets ServiceCostInfo field to given value.

### HasServiceCostInfo

`func (o *LicenseBillingDetails) HasServiceCostInfo() bool`

HasServiceCostInfo returns a boolean if a field has been set.

### GetServiceExtra

`func (o *LicenseBillingDetails) GetServiceExtra() []string`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *LicenseBillingDetails) GetServiceExtraOk() (*[]string, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *LicenseBillingDetails) SetServiceExtra(v []string)`

SetServiceExtra sets ServiceExtra field to given value.

### HasServiceExtra

`func (o *LicenseBillingDetails) HasServiceExtra() bool`

HasServiceExtra returns a boolean if a field has been set.

### GetServiceExtraJson

`func (o *LicenseBillingDetails) GetServiceExtraJson() string`

GetServiceExtraJson returns the ServiceExtraJson field if non-nil, zero value otherwise.

### GetServiceExtraJsonOk

`func (o *LicenseBillingDetails) GetServiceExtraJsonOk() (*string, bool)`

GetServiceExtraJsonOk returns a tuple with the ServiceExtraJson field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtraJson

`func (o *LicenseBillingDetails) SetServiceExtraJson(v string)`

SetServiceExtraJson sets ServiceExtraJson field to given value.

### HasServiceExtraJson

`func (o *LicenseBillingDetails) HasServiceExtraJson() bool`

HasServiceExtraJson returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


