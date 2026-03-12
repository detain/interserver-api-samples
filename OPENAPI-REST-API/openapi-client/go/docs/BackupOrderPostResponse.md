# BackupOrderPostResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Continue** | Pointer to **bool** |  | [optional] 
**Errors** | Pointer to **[]string** |  | [optional] 
**TotalCost** | Pointer to **string** |  | [optional] 
**Iid** | Pointer to **string** |  | [optional] 
**Iids** | Pointer to **[]string** |  | [optional] 
**RealIids** | Pointer to **[]string** |  | [optional] 
**ServiceId** | Pointer to **int32** |  | [optional] 
**InvoiceDescription** | Pointer to **string** |  | [optional] 
**CjParams** | Pointer to [**BackupOrderPostResponseCjParams**](BackupOrderPostResponseCjParams.md) |  | [optional] 

## Methods

### NewBackupOrderPostResponse

`func NewBackupOrderPostResponse() *BackupOrderPostResponse`

NewBackupOrderPostResponse instantiates a new BackupOrderPostResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBackupOrderPostResponseWithDefaults

`func NewBackupOrderPostResponseWithDefaults() *BackupOrderPostResponse`

NewBackupOrderPostResponseWithDefaults instantiates a new BackupOrderPostResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetContinue

`func (o *BackupOrderPostResponse) GetContinue() bool`

GetContinue returns the Continue field if non-nil, zero value otherwise.

### GetContinueOk

`func (o *BackupOrderPostResponse) GetContinueOk() (*bool, bool)`

GetContinueOk returns a tuple with the Continue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContinue

`func (o *BackupOrderPostResponse) SetContinue(v bool)`

SetContinue sets Continue field to given value.

### HasContinue

`func (o *BackupOrderPostResponse) HasContinue() bool`

HasContinue returns a boolean if a field has been set.

### GetErrors

`func (o *BackupOrderPostResponse) GetErrors() []string`

GetErrors returns the Errors field if non-nil, zero value otherwise.

### GetErrorsOk

`func (o *BackupOrderPostResponse) GetErrorsOk() (*[]string, bool)`

GetErrorsOk returns a tuple with the Errors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrors

`func (o *BackupOrderPostResponse) SetErrors(v []string)`

SetErrors sets Errors field to given value.

### HasErrors

`func (o *BackupOrderPostResponse) HasErrors() bool`

HasErrors returns a boolean if a field has been set.

### GetTotalCost

`func (o *BackupOrderPostResponse) GetTotalCost() string`

GetTotalCost returns the TotalCost field if non-nil, zero value otherwise.

### GetTotalCostOk

`func (o *BackupOrderPostResponse) GetTotalCostOk() (*string, bool)`

GetTotalCostOk returns a tuple with the TotalCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalCost

`func (o *BackupOrderPostResponse) SetTotalCost(v string)`

SetTotalCost sets TotalCost field to given value.

### HasTotalCost

`func (o *BackupOrderPostResponse) HasTotalCost() bool`

HasTotalCost returns a boolean if a field has been set.

### GetIid

`func (o *BackupOrderPostResponse) GetIid() string`

GetIid returns the Iid field if non-nil, zero value otherwise.

### GetIidOk

`func (o *BackupOrderPostResponse) GetIidOk() (*string, bool)`

GetIidOk returns a tuple with the Iid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIid

`func (o *BackupOrderPostResponse) SetIid(v string)`

SetIid sets Iid field to given value.

### HasIid

`func (o *BackupOrderPostResponse) HasIid() bool`

HasIid returns a boolean if a field has been set.

### GetIids

`func (o *BackupOrderPostResponse) GetIids() []string`

GetIids returns the Iids field if non-nil, zero value otherwise.

### GetIidsOk

`func (o *BackupOrderPostResponse) GetIidsOk() (*[]string, bool)`

GetIidsOk returns a tuple with the Iids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIids

`func (o *BackupOrderPostResponse) SetIids(v []string)`

SetIids sets Iids field to given value.

### HasIids

`func (o *BackupOrderPostResponse) HasIids() bool`

HasIids returns a boolean if a field has been set.

### GetRealIids

`func (o *BackupOrderPostResponse) GetRealIids() []string`

GetRealIids returns the RealIids field if non-nil, zero value otherwise.

### GetRealIidsOk

`func (o *BackupOrderPostResponse) GetRealIidsOk() (*[]string, bool)`

GetRealIidsOk returns a tuple with the RealIids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRealIids

`func (o *BackupOrderPostResponse) SetRealIids(v []string)`

SetRealIids sets RealIids field to given value.

### HasRealIids

`func (o *BackupOrderPostResponse) HasRealIids() bool`

HasRealIids returns a boolean if a field has been set.

### GetServiceId

`func (o *BackupOrderPostResponse) GetServiceId() int32`

GetServiceId returns the ServiceId field if non-nil, zero value otherwise.

### GetServiceIdOk

`func (o *BackupOrderPostResponse) GetServiceIdOk() (*int32, bool)`

GetServiceIdOk returns a tuple with the ServiceId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceId

`func (o *BackupOrderPostResponse) SetServiceId(v int32)`

SetServiceId sets ServiceId field to given value.

### HasServiceId

`func (o *BackupOrderPostResponse) HasServiceId() bool`

HasServiceId returns a boolean if a field has been set.

### GetInvoiceDescription

`func (o *BackupOrderPostResponse) GetInvoiceDescription() string`

GetInvoiceDescription returns the InvoiceDescription field if non-nil, zero value otherwise.

### GetInvoiceDescriptionOk

`func (o *BackupOrderPostResponse) GetInvoiceDescriptionOk() (*string, bool)`

GetInvoiceDescriptionOk returns a tuple with the InvoiceDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoiceDescription

`func (o *BackupOrderPostResponse) SetInvoiceDescription(v string)`

SetInvoiceDescription sets InvoiceDescription field to given value.

### HasInvoiceDescription

`func (o *BackupOrderPostResponse) HasInvoiceDescription() bool`

HasInvoiceDescription returns a boolean if a field has been set.

### GetCjParams

`func (o *BackupOrderPostResponse) GetCjParams() BackupOrderPostResponseCjParams`

GetCjParams returns the CjParams field if non-nil, zero value otherwise.

### GetCjParamsOk

`func (o *BackupOrderPostResponse) GetCjParamsOk() (*BackupOrderPostResponseCjParams, bool)`

GetCjParamsOk returns a tuple with the CjParams field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCjParams

`func (o *BackupOrderPostResponse) SetCjParams(v BackupOrderPostResponseCjParams)`

SetCjParams sets CjParams field to given value.

### HasCjParams

`func (o *BackupOrderPostResponse) HasCjParams() bool`

HasCjParams returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


