# BackupOrderPutResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Continue** | Pointer to **bool** |  | [optional] 
**Errors** | Pointer to **[]string** |  | [optional] 
**ServiceType** | Pointer to **int32** |  | [optional] 
**ServiceCost** | Pointer to **string** |  | [optional] 
**OriginalCost** | Pointer to **string** |  | [optional] 
**RepeatServiceCost** | Pointer to **string** |  | [optional] 
**Hostname** | Pointer to **string** |  | [optional] 
**Password** | Pointer to **string** |  | [optional] 
**Coupon** | Pointer to **string** |  | [optional] 
**CouponCode** | Pointer to **int32** |  | [optional] 

## Methods

### NewBackupOrderPutResponse

`func NewBackupOrderPutResponse() *BackupOrderPutResponse`

NewBackupOrderPutResponse instantiates a new BackupOrderPutResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBackupOrderPutResponseWithDefaults

`func NewBackupOrderPutResponseWithDefaults() *BackupOrderPutResponse`

NewBackupOrderPutResponseWithDefaults instantiates a new BackupOrderPutResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetContinue

`func (o *BackupOrderPutResponse) GetContinue() bool`

GetContinue returns the Continue field if non-nil, zero value otherwise.

### GetContinueOk

`func (o *BackupOrderPutResponse) GetContinueOk() (*bool, bool)`

GetContinueOk returns a tuple with the Continue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContinue

`func (o *BackupOrderPutResponse) SetContinue(v bool)`

SetContinue sets Continue field to given value.

### HasContinue

`func (o *BackupOrderPutResponse) HasContinue() bool`

HasContinue returns a boolean if a field has been set.

### GetErrors

`func (o *BackupOrderPutResponse) GetErrors() []string`

GetErrors returns the Errors field if non-nil, zero value otherwise.

### GetErrorsOk

`func (o *BackupOrderPutResponse) GetErrorsOk() (*[]string, bool)`

GetErrorsOk returns a tuple with the Errors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrors

`func (o *BackupOrderPutResponse) SetErrors(v []string)`

SetErrors sets Errors field to given value.

### HasErrors

`func (o *BackupOrderPutResponse) HasErrors() bool`

HasErrors returns a boolean if a field has been set.

### GetServiceType

`func (o *BackupOrderPutResponse) GetServiceType() int32`

GetServiceType returns the ServiceType field if non-nil, zero value otherwise.

### GetServiceTypeOk

`func (o *BackupOrderPutResponse) GetServiceTypeOk() (*int32, bool)`

GetServiceTypeOk returns a tuple with the ServiceType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceType

`func (o *BackupOrderPutResponse) SetServiceType(v int32)`

SetServiceType sets ServiceType field to given value.

### HasServiceType

`func (o *BackupOrderPutResponse) HasServiceType() bool`

HasServiceType returns a boolean if a field has been set.

### GetServiceCost

`func (o *BackupOrderPutResponse) GetServiceCost() string`

GetServiceCost returns the ServiceCost field if non-nil, zero value otherwise.

### GetServiceCostOk

`func (o *BackupOrderPutResponse) GetServiceCostOk() (*string, bool)`

GetServiceCostOk returns a tuple with the ServiceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCost

`func (o *BackupOrderPutResponse) SetServiceCost(v string)`

SetServiceCost sets ServiceCost field to given value.

### HasServiceCost

`func (o *BackupOrderPutResponse) HasServiceCost() bool`

HasServiceCost returns a boolean if a field has been set.

### GetOriginalCost

`func (o *BackupOrderPutResponse) GetOriginalCost() string`

GetOriginalCost returns the OriginalCost field if non-nil, zero value otherwise.

### GetOriginalCostOk

`func (o *BackupOrderPutResponse) GetOriginalCostOk() (*string, bool)`

GetOriginalCostOk returns a tuple with the OriginalCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOriginalCost

`func (o *BackupOrderPutResponse) SetOriginalCost(v string)`

SetOriginalCost sets OriginalCost field to given value.

### HasOriginalCost

`func (o *BackupOrderPutResponse) HasOriginalCost() bool`

HasOriginalCost returns a boolean if a field has been set.

### GetRepeatServiceCost

`func (o *BackupOrderPutResponse) GetRepeatServiceCost() string`

GetRepeatServiceCost returns the RepeatServiceCost field if non-nil, zero value otherwise.

### GetRepeatServiceCostOk

`func (o *BackupOrderPutResponse) GetRepeatServiceCostOk() (*string, bool)`

GetRepeatServiceCostOk returns a tuple with the RepeatServiceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRepeatServiceCost

`func (o *BackupOrderPutResponse) SetRepeatServiceCost(v string)`

SetRepeatServiceCost sets RepeatServiceCost field to given value.

### HasRepeatServiceCost

`func (o *BackupOrderPutResponse) HasRepeatServiceCost() bool`

HasRepeatServiceCost returns a boolean if a field has been set.

### GetHostname

`func (o *BackupOrderPutResponse) GetHostname() string`

GetHostname returns the Hostname field if non-nil, zero value otherwise.

### GetHostnameOk

`func (o *BackupOrderPutResponse) GetHostnameOk() (*string, bool)`

GetHostnameOk returns a tuple with the Hostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHostname

`func (o *BackupOrderPutResponse) SetHostname(v string)`

SetHostname sets Hostname field to given value.

### HasHostname

`func (o *BackupOrderPutResponse) HasHostname() bool`

HasHostname returns a boolean if a field has been set.

### GetPassword

`func (o *BackupOrderPutResponse) GetPassword() string`

GetPassword returns the Password field if non-nil, zero value otherwise.

### GetPasswordOk

`func (o *BackupOrderPutResponse) GetPasswordOk() (*string, bool)`

GetPasswordOk returns a tuple with the Password field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPassword

`func (o *BackupOrderPutResponse) SetPassword(v string)`

SetPassword sets Password field to given value.

### HasPassword

`func (o *BackupOrderPutResponse) HasPassword() bool`

HasPassword returns a boolean if a field has been set.

### GetCoupon

`func (o *BackupOrderPutResponse) GetCoupon() string`

GetCoupon returns the Coupon field if non-nil, zero value otherwise.

### GetCouponOk

`func (o *BackupOrderPutResponse) GetCouponOk() (*string, bool)`

GetCouponOk returns a tuple with the Coupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCoupon

`func (o *BackupOrderPutResponse) SetCoupon(v string)`

SetCoupon sets Coupon field to given value.

### HasCoupon

`func (o *BackupOrderPutResponse) HasCoupon() bool`

HasCoupon returns a boolean if a field has been set.

### GetCouponCode

`func (o *BackupOrderPutResponse) GetCouponCode() int32`

GetCouponCode returns the CouponCode field if non-nil, zero value otherwise.

### GetCouponCodeOk

`func (o *BackupOrderPutResponse) GetCouponCodeOk() (*int32, bool)`

GetCouponCodeOk returns a tuple with the CouponCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCouponCode

`func (o *BackupOrderPutResponse) SetCouponCode(v int32)`

SetCouponCode sets CouponCode field to given value.

### HasCouponCode

`func (o *BackupOrderPutResponse) HasCouponCode() bool`

HasCouponCode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


