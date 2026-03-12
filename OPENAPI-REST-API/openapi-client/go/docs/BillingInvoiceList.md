# BillingInvoiceList

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Rows** | Pointer to **[]map[string]interface{}** | Invoice rows returned for the account. | [optional] 
**Summary** | Pointer to **map[string]interface{}** | Totals and summary data for the invoices list. | [optional] 

## Methods

### NewBillingInvoiceList

`func NewBillingInvoiceList() *BillingInvoiceList`

NewBillingInvoiceList instantiates a new BillingInvoiceList object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBillingInvoiceListWithDefaults

`func NewBillingInvoiceListWithDefaults() *BillingInvoiceList`

NewBillingInvoiceListWithDefaults instantiates a new BillingInvoiceList object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetRows

`func (o *BillingInvoiceList) GetRows() []map[string]interface{}`

GetRows returns the Rows field if non-nil, zero value otherwise.

### GetRowsOk

`func (o *BillingInvoiceList) GetRowsOk() (*[]map[string]interface{}, bool)`

GetRowsOk returns a tuple with the Rows field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRows

`func (o *BillingInvoiceList) SetRows(v []map[string]interface{})`

SetRows sets Rows field to given value.

### HasRows

`func (o *BillingInvoiceList) HasRows() bool`

HasRows returns a boolean if a field has been set.

### GetSummary

`func (o *BillingInvoiceList) GetSummary() map[string]interface{}`

GetSummary returns the Summary field if non-nil, zero value otherwise.

### GetSummaryOk

`func (o *BillingInvoiceList) GetSummaryOk() (*map[string]interface{}, bool)`

GetSummaryOk returns a tuple with the Summary field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSummary

`func (o *BillingInvoiceList) SetSummary(v map[string]interface{})`

SetSummary sets Summary field to given value.

### HasSummary

`func (o *BillingInvoiceList) HasSummary() bool`

HasSummary returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


