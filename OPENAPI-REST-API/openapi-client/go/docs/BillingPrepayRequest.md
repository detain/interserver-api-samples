# BillingPrepayRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Module** | Pointer to **string** | Module the prepay should be applied to (for example &#x60;default&#x60;). | [optional] 
**Amount** | Pointer to **float32** | Amount to add to prepay balance. Minimum is $10. | [optional] 
**AutomaticUse** | Pointer to **string** | Whether the prepay balance should be used automatically. | [optional] 

## Methods

### NewBillingPrepayRequest

`func NewBillingPrepayRequest() *BillingPrepayRequest`

NewBillingPrepayRequest instantiates a new BillingPrepayRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBillingPrepayRequestWithDefaults

`func NewBillingPrepayRequestWithDefaults() *BillingPrepayRequest`

NewBillingPrepayRequestWithDefaults instantiates a new BillingPrepayRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetModule

`func (o *BillingPrepayRequest) GetModule() string`

GetModule returns the Module field if non-nil, zero value otherwise.

### GetModuleOk

`func (o *BillingPrepayRequest) GetModuleOk() (*string, bool)`

GetModuleOk returns a tuple with the Module field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetModule

`func (o *BillingPrepayRequest) SetModule(v string)`

SetModule sets Module field to given value.

### HasModule

`func (o *BillingPrepayRequest) HasModule() bool`

HasModule returns a boolean if a field has been set.

### GetAmount

`func (o *BillingPrepayRequest) GetAmount() float32`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *BillingPrepayRequest) GetAmountOk() (*float32, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *BillingPrepayRequest) SetAmount(v float32)`

SetAmount sets Amount field to given value.

### HasAmount

`func (o *BillingPrepayRequest) HasAmount() bool`

HasAmount returns a boolean if a field has been set.

### GetAutomaticUse

`func (o *BillingPrepayRequest) GetAutomaticUse() string`

GetAutomaticUse returns the AutomaticUse field if non-nil, zero value otherwise.

### GetAutomaticUseOk

`func (o *BillingPrepayRequest) GetAutomaticUseOk() (*string, bool)`

GetAutomaticUseOk returns a tuple with the AutomaticUse field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAutomaticUse

`func (o *BillingPrepayRequest) SetAutomaticUse(v string)`

SetAutomaticUse sets AutomaticUse field to given value.

### HasAutomaticUse

`func (o *BillingPrepayRequest) HasAutomaticUse() bool`

HasAutomaticUse returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


