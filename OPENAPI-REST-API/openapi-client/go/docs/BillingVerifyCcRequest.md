# BillingVerifyCcRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Idx** | Pointer to **int32** | Card index to verify. | [optional] 
**CcCcv2** | Pointer to **string** | CVV code for verification. | [optional] 
**CcAmount1** | Pointer to **string** | First micro-charge amount for verification. | [optional] 
**CcAmount2** | Pointer to **string** | Second micro-charge amount for verification. | [optional] 
**Terms** | Pointer to **bool** | Whether terms were accepted for verification. | [optional] 

## Methods

### NewBillingVerifyCcRequest

`func NewBillingVerifyCcRequest() *BillingVerifyCcRequest`

NewBillingVerifyCcRequest instantiates a new BillingVerifyCcRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBillingVerifyCcRequestWithDefaults

`func NewBillingVerifyCcRequestWithDefaults() *BillingVerifyCcRequest`

NewBillingVerifyCcRequestWithDefaults instantiates a new BillingVerifyCcRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIdx

`func (o *BillingVerifyCcRequest) GetIdx() int32`

GetIdx returns the Idx field if non-nil, zero value otherwise.

### GetIdxOk

`func (o *BillingVerifyCcRequest) GetIdxOk() (*int32, bool)`

GetIdxOk returns a tuple with the Idx field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIdx

`func (o *BillingVerifyCcRequest) SetIdx(v int32)`

SetIdx sets Idx field to given value.

### HasIdx

`func (o *BillingVerifyCcRequest) HasIdx() bool`

HasIdx returns a boolean if a field has been set.

### GetCcCcv2

`func (o *BillingVerifyCcRequest) GetCcCcv2() string`

GetCcCcv2 returns the CcCcv2 field if non-nil, zero value otherwise.

### GetCcCcv2Ok

`func (o *BillingVerifyCcRequest) GetCcCcv2Ok() (*string, bool)`

GetCcCcv2Ok returns a tuple with the CcCcv2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcCcv2

`func (o *BillingVerifyCcRequest) SetCcCcv2(v string)`

SetCcCcv2 sets CcCcv2 field to given value.

### HasCcCcv2

`func (o *BillingVerifyCcRequest) HasCcCcv2() bool`

HasCcCcv2 returns a boolean if a field has been set.

### GetCcAmount1

`func (o *BillingVerifyCcRequest) GetCcAmount1() string`

GetCcAmount1 returns the CcAmount1 field if non-nil, zero value otherwise.

### GetCcAmount1Ok

`func (o *BillingVerifyCcRequest) GetCcAmount1Ok() (*string, bool)`

GetCcAmount1Ok returns a tuple with the CcAmount1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcAmount1

`func (o *BillingVerifyCcRequest) SetCcAmount1(v string)`

SetCcAmount1 sets CcAmount1 field to given value.

### HasCcAmount1

`func (o *BillingVerifyCcRequest) HasCcAmount1() bool`

HasCcAmount1 returns a boolean if a field has been set.

### GetCcAmount2

`func (o *BillingVerifyCcRequest) GetCcAmount2() string`

GetCcAmount2 returns the CcAmount2 field if non-nil, zero value otherwise.

### GetCcAmount2Ok

`func (o *BillingVerifyCcRequest) GetCcAmount2Ok() (*string, bool)`

GetCcAmount2Ok returns a tuple with the CcAmount2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCcAmount2

`func (o *BillingVerifyCcRequest) SetCcAmount2(v string)`

SetCcAmount2 sets CcAmount2 field to given value.

### HasCcAmount2

`func (o *BillingVerifyCcRequest) HasCcAmount2() bool`

HasCcAmount2 returns a boolean if a field has been set.

### GetTerms

`func (o *BillingVerifyCcRequest) GetTerms() bool`

GetTerms returns the Terms field if non-nil, zero value otherwise.

### GetTermsOk

`func (o *BillingVerifyCcRequest) GetTermsOk() (*bool, bool)`

GetTermsOk returns a tuple with the Terms field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTerms

`func (o *BillingVerifyCcRequest) SetTerms(v bool)`

SetTerms sets Terms field to given value.

### HasTerms

`func (o *BillingVerifyCcRequest) HasTerms() bool`

HasTerms returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


