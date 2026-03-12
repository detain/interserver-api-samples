# LicenseRow

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**LicenseId** | Pointer to **string** | The id of the license. | [optional] 
**LicenseHostname** | Pointer to **string** | The hostname of the license. | [optional] 
**LicenseIp** | Pointer to **string** | The ip of the license. | [optional] 
**ServicesName** | Pointer to **string** | The services name of the license. | [optional] 
**Cost** | Pointer to **string** | The cost of the license. | [optional] 
**LicenseStatus** | Pointer to **string** | The status of the license. | [optional] 
**InvoicesPaid** | Pointer to **string** | The invoices paid of the license. | [optional] 
**InvoicesDate** | Pointer to **time.Time** | The invoices date of the license. | [optional] 

## Methods

### NewLicenseRow

`func NewLicenseRow() *LicenseRow`

NewLicenseRow instantiates a new LicenseRow object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLicenseRowWithDefaults

`func NewLicenseRowWithDefaults() *LicenseRow`

NewLicenseRowWithDefaults instantiates a new LicenseRow object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLicenseId

`func (o *LicenseRow) GetLicenseId() string`

GetLicenseId returns the LicenseId field if non-nil, zero value otherwise.

### GetLicenseIdOk

`func (o *LicenseRow) GetLicenseIdOk() (*string, bool)`

GetLicenseIdOk returns a tuple with the LicenseId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLicenseId

`func (o *LicenseRow) SetLicenseId(v string)`

SetLicenseId sets LicenseId field to given value.

### HasLicenseId

`func (o *LicenseRow) HasLicenseId() bool`

HasLicenseId returns a boolean if a field has been set.

### GetLicenseHostname

`func (o *LicenseRow) GetLicenseHostname() string`

GetLicenseHostname returns the LicenseHostname field if non-nil, zero value otherwise.

### GetLicenseHostnameOk

`func (o *LicenseRow) GetLicenseHostnameOk() (*string, bool)`

GetLicenseHostnameOk returns a tuple with the LicenseHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLicenseHostname

`func (o *LicenseRow) SetLicenseHostname(v string)`

SetLicenseHostname sets LicenseHostname field to given value.

### HasLicenseHostname

`func (o *LicenseRow) HasLicenseHostname() bool`

HasLicenseHostname returns a boolean if a field has been set.

### GetLicenseIp

`func (o *LicenseRow) GetLicenseIp() string`

GetLicenseIp returns the LicenseIp field if non-nil, zero value otherwise.

### GetLicenseIpOk

`func (o *LicenseRow) GetLicenseIpOk() (*string, bool)`

GetLicenseIpOk returns a tuple with the LicenseIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLicenseIp

`func (o *LicenseRow) SetLicenseIp(v string)`

SetLicenseIp sets LicenseIp field to given value.

### HasLicenseIp

`func (o *LicenseRow) HasLicenseIp() bool`

HasLicenseIp returns a boolean if a field has been set.

### GetServicesName

`func (o *LicenseRow) GetServicesName() string`

GetServicesName returns the ServicesName field if non-nil, zero value otherwise.

### GetServicesNameOk

`func (o *LicenseRow) GetServicesNameOk() (*string, bool)`

GetServicesNameOk returns a tuple with the ServicesName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesName

`func (o *LicenseRow) SetServicesName(v string)`

SetServicesName sets ServicesName field to given value.

### HasServicesName

`func (o *LicenseRow) HasServicesName() bool`

HasServicesName returns a boolean if a field has been set.

### GetCost

`func (o *LicenseRow) GetCost() string`

GetCost returns the Cost field if non-nil, zero value otherwise.

### GetCostOk

`func (o *LicenseRow) GetCostOk() (*string, bool)`

GetCostOk returns a tuple with the Cost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCost

`func (o *LicenseRow) SetCost(v string)`

SetCost sets Cost field to given value.

### HasCost

`func (o *LicenseRow) HasCost() bool`

HasCost returns a boolean if a field has been set.

### GetLicenseStatus

`func (o *LicenseRow) GetLicenseStatus() string`

GetLicenseStatus returns the LicenseStatus field if non-nil, zero value otherwise.

### GetLicenseStatusOk

`func (o *LicenseRow) GetLicenseStatusOk() (*string, bool)`

GetLicenseStatusOk returns a tuple with the LicenseStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLicenseStatus

`func (o *LicenseRow) SetLicenseStatus(v string)`

SetLicenseStatus sets LicenseStatus field to given value.

### HasLicenseStatus

`func (o *LicenseRow) HasLicenseStatus() bool`

HasLicenseStatus returns a boolean if a field has been set.

### GetInvoicesPaid

`func (o *LicenseRow) GetInvoicesPaid() string`

GetInvoicesPaid returns the InvoicesPaid field if non-nil, zero value otherwise.

### GetInvoicesPaidOk

`func (o *LicenseRow) GetInvoicesPaidOk() (*string, bool)`

GetInvoicesPaidOk returns a tuple with the InvoicesPaid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesPaid

`func (o *LicenseRow) SetInvoicesPaid(v string)`

SetInvoicesPaid sets InvoicesPaid field to given value.

### HasInvoicesPaid

`func (o *LicenseRow) HasInvoicesPaid() bool`

HasInvoicesPaid returns a boolean if a field has been set.

### GetInvoicesDate

`func (o *LicenseRow) GetInvoicesDate() time.Time`

GetInvoicesDate returns the InvoicesDate field if non-nil, zero value otherwise.

### GetInvoicesDateOk

`func (o *LicenseRow) GetInvoicesDateOk() (*time.Time, bool)`

GetInvoicesDateOk returns a tuple with the InvoicesDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoicesDate

`func (o *LicenseRow) SetInvoicesDate(v time.Time)`

SetInvoicesDate sets InvoicesDate field to given value.

### HasInvoicesDate

`func (o *LicenseRow) HasInvoicesDate() bool`

HasInvoicesDate returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


