# ServiceOrderPostResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Continue** | Pointer to **bool** | Whether the order was accepted and can proceed to payment. | [optional] 
**Errors** | Pointer to **[]string** | List of validation errors (empty on success). | [optional] 
**TotalCost** | Pointer to **string** | Total cost of the order. | [optional] 
**Iid** | Pointer to **string** | Primary invoice ID for payment. | [optional] 
**Iids** | Pointer to **[]string** | All invoice identifiers associated with the order. | [optional] 
**RealIids** | Pointer to **[]string** | Numeric invoice IDs for use with billing endpoints. | [optional] 
**ServiceId** | Pointer to **int32** | The new service ID created by the order. | [optional] 
**InvoiceDescription** | Pointer to **string** | Human-readable description of the invoice. | [optional] 

## Methods

### NewServiceOrderPostResponse

`func NewServiceOrderPostResponse() *ServiceOrderPostResponse`

NewServiceOrderPostResponse instantiates a new ServiceOrderPostResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServiceOrderPostResponseWithDefaults

`func NewServiceOrderPostResponseWithDefaults() *ServiceOrderPostResponse`

NewServiceOrderPostResponseWithDefaults instantiates a new ServiceOrderPostResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetContinue

`func (o *ServiceOrderPostResponse) GetContinue() bool`

GetContinue returns the Continue field if non-nil, zero value otherwise.

### GetContinueOk

`func (o *ServiceOrderPostResponse) GetContinueOk() (*bool, bool)`

GetContinueOk returns a tuple with the Continue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContinue

`func (o *ServiceOrderPostResponse) SetContinue(v bool)`

SetContinue sets Continue field to given value.

### HasContinue

`func (o *ServiceOrderPostResponse) HasContinue() bool`

HasContinue returns a boolean if a field has been set.

### GetErrors

`func (o *ServiceOrderPostResponse) GetErrors() []string`

GetErrors returns the Errors field if non-nil, zero value otherwise.

### GetErrorsOk

`func (o *ServiceOrderPostResponse) GetErrorsOk() (*[]string, bool)`

GetErrorsOk returns a tuple with the Errors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrors

`func (o *ServiceOrderPostResponse) SetErrors(v []string)`

SetErrors sets Errors field to given value.

### HasErrors

`func (o *ServiceOrderPostResponse) HasErrors() bool`

HasErrors returns a boolean if a field has been set.

### GetTotalCost

`func (o *ServiceOrderPostResponse) GetTotalCost() string`

GetTotalCost returns the TotalCost field if non-nil, zero value otherwise.

### GetTotalCostOk

`func (o *ServiceOrderPostResponse) GetTotalCostOk() (*string, bool)`

GetTotalCostOk returns a tuple with the TotalCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalCost

`func (o *ServiceOrderPostResponse) SetTotalCost(v string)`

SetTotalCost sets TotalCost field to given value.

### HasTotalCost

`func (o *ServiceOrderPostResponse) HasTotalCost() bool`

HasTotalCost returns a boolean if a field has been set.

### GetIid

`func (o *ServiceOrderPostResponse) GetIid() string`

GetIid returns the Iid field if non-nil, zero value otherwise.

### GetIidOk

`func (o *ServiceOrderPostResponse) GetIidOk() (*string, bool)`

GetIidOk returns a tuple with the Iid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIid

`func (o *ServiceOrderPostResponse) SetIid(v string)`

SetIid sets Iid field to given value.

### HasIid

`func (o *ServiceOrderPostResponse) HasIid() bool`

HasIid returns a boolean if a field has been set.

### GetIids

`func (o *ServiceOrderPostResponse) GetIids() []string`

GetIids returns the Iids field if non-nil, zero value otherwise.

### GetIidsOk

`func (o *ServiceOrderPostResponse) GetIidsOk() (*[]string, bool)`

GetIidsOk returns a tuple with the Iids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIids

`func (o *ServiceOrderPostResponse) SetIids(v []string)`

SetIids sets Iids field to given value.

### HasIids

`func (o *ServiceOrderPostResponse) HasIids() bool`

HasIids returns a boolean if a field has been set.

### GetRealIids

`func (o *ServiceOrderPostResponse) GetRealIids() []string`

GetRealIids returns the RealIids field if non-nil, zero value otherwise.

### GetRealIidsOk

`func (o *ServiceOrderPostResponse) GetRealIidsOk() (*[]string, bool)`

GetRealIidsOk returns a tuple with the RealIids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRealIids

`func (o *ServiceOrderPostResponse) SetRealIids(v []string)`

SetRealIids sets RealIids field to given value.

### HasRealIids

`func (o *ServiceOrderPostResponse) HasRealIids() bool`

HasRealIids returns a boolean if a field has been set.

### GetServiceId

`func (o *ServiceOrderPostResponse) GetServiceId() int32`

GetServiceId returns the ServiceId field if non-nil, zero value otherwise.

### GetServiceIdOk

`func (o *ServiceOrderPostResponse) GetServiceIdOk() (*int32, bool)`

GetServiceIdOk returns a tuple with the ServiceId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceId

`func (o *ServiceOrderPostResponse) SetServiceId(v int32)`

SetServiceId sets ServiceId field to given value.

### HasServiceId

`func (o *ServiceOrderPostResponse) HasServiceId() bool`

HasServiceId returns a boolean if a field has been set.

### GetInvoiceDescription

`func (o *ServiceOrderPostResponse) GetInvoiceDescription() string`

GetInvoiceDescription returns the InvoiceDescription field if non-nil, zero value otherwise.

### GetInvoiceDescriptionOk

`func (o *ServiceOrderPostResponse) GetInvoiceDescriptionOk() (*string, bool)`

GetInvoiceDescriptionOk returns a tuple with the InvoiceDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoiceDescription

`func (o *ServiceOrderPostResponse) SetInvoiceDescription(v string)`

SetInvoiceDescription sets InvoiceDescription field to given value.

### HasInvoiceDescription

`func (o *ServiceOrderPostResponse) HasInvoiceDescription() bool`

HasInvoiceDescription returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


