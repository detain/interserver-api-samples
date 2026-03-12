# VpsOrderPutResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Continue** | Pointer to **bool** |  | [optional] 
**Errors** | Pointer to **[]interface{}** |  | [optional] 
**CouponCode** | Pointer to **int32** |  | [optional] 
**ServiceCost** | Pointer to **int32** |  | [optional] 
**SliceCost** | Pointer to **int32** |  | [optional] 
**ServiceType** | Pointer to **int32** |  | [optional] 
**RepeatSliceCost** | Pointer to **int32** |  | [optional] 
**OriginalSliceCost** | Pointer to **int32** |  | [optional] 
**OriginalCost** | Pointer to **int32** |  | [optional] 
**RepeatServiceCost** | Pointer to **int32** |  | [optional] 
**MonthlyServiceCost** | Pointer to **int32** |  | [optional] 
**Custid** | Pointer to **string** |  | [optional] 
**Os** | Pointer to **string** |  | [optional] 
**Slices** | Pointer to **string** |  | [optional] 
**Platform** | Pointer to **string** |  | [optional] 
**Controlpanel** | Pointer to **string** |  | [optional] 
**Period** | Pointer to **int32** |  | [optional] 
**Location** | Pointer to **int32** |  | [optional] 
**Version** | Pointer to **string** |  | [optional] 
**Hostname** | Pointer to **string** |  | [optional] 
**Coupon** | Pointer to **string** |  | [optional] 
**Rootpass** | Pointer to **string** |  | [optional] 

## Methods

### NewVpsOrderPutResponse

`func NewVpsOrderPutResponse() *VpsOrderPutResponse`

NewVpsOrderPutResponse instantiates a new VpsOrderPutResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsOrderPutResponseWithDefaults

`func NewVpsOrderPutResponseWithDefaults() *VpsOrderPutResponse`

NewVpsOrderPutResponseWithDefaults instantiates a new VpsOrderPutResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetContinue

`func (o *VpsOrderPutResponse) GetContinue() bool`

GetContinue returns the Continue field if non-nil, zero value otherwise.

### GetContinueOk

`func (o *VpsOrderPutResponse) GetContinueOk() (*bool, bool)`

GetContinueOk returns a tuple with the Continue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContinue

`func (o *VpsOrderPutResponse) SetContinue(v bool)`

SetContinue sets Continue field to given value.

### HasContinue

`func (o *VpsOrderPutResponse) HasContinue() bool`

HasContinue returns a boolean if a field has been set.

### GetErrors

`func (o *VpsOrderPutResponse) GetErrors() []interface{}`

GetErrors returns the Errors field if non-nil, zero value otherwise.

### GetErrorsOk

`func (o *VpsOrderPutResponse) GetErrorsOk() (*[]interface{}, bool)`

GetErrorsOk returns a tuple with the Errors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrors

`func (o *VpsOrderPutResponse) SetErrors(v []interface{})`

SetErrors sets Errors field to given value.

### HasErrors

`func (o *VpsOrderPutResponse) HasErrors() bool`

HasErrors returns a boolean if a field has been set.

### GetCouponCode

`func (o *VpsOrderPutResponse) GetCouponCode() int32`

GetCouponCode returns the CouponCode field if non-nil, zero value otherwise.

### GetCouponCodeOk

`func (o *VpsOrderPutResponse) GetCouponCodeOk() (*int32, bool)`

GetCouponCodeOk returns a tuple with the CouponCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCouponCode

`func (o *VpsOrderPutResponse) SetCouponCode(v int32)`

SetCouponCode sets CouponCode field to given value.

### HasCouponCode

`func (o *VpsOrderPutResponse) HasCouponCode() bool`

HasCouponCode returns a boolean if a field has been set.

### GetServiceCost

`func (o *VpsOrderPutResponse) GetServiceCost() int32`

GetServiceCost returns the ServiceCost field if non-nil, zero value otherwise.

### GetServiceCostOk

`func (o *VpsOrderPutResponse) GetServiceCostOk() (*int32, bool)`

GetServiceCostOk returns a tuple with the ServiceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceCost

`func (o *VpsOrderPutResponse) SetServiceCost(v int32)`

SetServiceCost sets ServiceCost field to given value.

### HasServiceCost

`func (o *VpsOrderPutResponse) HasServiceCost() bool`

HasServiceCost returns a boolean if a field has been set.

### GetSliceCost

`func (o *VpsOrderPutResponse) GetSliceCost() int32`

GetSliceCost returns the SliceCost field if non-nil, zero value otherwise.

### GetSliceCostOk

`func (o *VpsOrderPutResponse) GetSliceCostOk() (*int32, bool)`

GetSliceCostOk returns a tuple with the SliceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSliceCost

`func (o *VpsOrderPutResponse) SetSliceCost(v int32)`

SetSliceCost sets SliceCost field to given value.

### HasSliceCost

`func (o *VpsOrderPutResponse) HasSliceCost() bool`

HasSliceCost returns a boolean if a field has been set.

### GetServiceType

`func (o *VpsOrderPutResponse) GetServiceType() int32`

GetServiceType returns the ServiceType field if non-nil, zero value otherwise.

### GetServiceTypeOk

`func (o *VpsOrderPutResponse) GetServiceTypeOk() (*int32, bool)`

GetServiceTypeOk returns a tuple with the ServiceType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceType

`func (o *VpsOrderPutResponse) SetServiceType(v int32)`

SetServiceType sets ServiceType field to given value.

### HasServiceType

`func (o *VpsOrderPutResponse) HasServiceType() bool`

HasServiceType returns a boolean if a field has been set.

### GetRepeatSliceCost

`func (o *VpsOrderPutResponse) GetRepeatSliceCost() int32`

GetRepeatSliceCost returns the RepeatSliceCost field if non-nil, zero value otherwise.

### GetRepeatSliceCostOk

`func (o *VpsOrderPutResponse) GetRepeatSliceCostOk() (*int32, bool)`

GetRepeatSliceCostOk returns a tuple with the RepeatSliceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRepeatSliceCost

`func (o *VpsOrderPutResponse) SetRepeatSliceCost(v int32)`

SetRepeatSliceCost sets RepeatSliceCost field to given value.

### HasRepeatSliceCost

`func (o *VpsOrderPutResponse) HasRepeatSliceCost() bool`

HasRepeatSliceCost returns a boolean if a field has been set.

### GetOriginalSliceCost

`func (o *VpsOrderPutResponse) GetOriginalSliceCost() int32`

GetOriginalSliceCost returns the OriginalSliceCost field if non-nil, zero value otherwise.

### GetOriginalSliceCostOk

`func (o *VpsOrderPutResponse) GetOriginalSliceCostOk() (*int32, bool)`

GetOriginalSliceCostOk returns a tuple with the OriginalSliceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOriginalSliceCost

`func (o *VpsOrderPutResponse) SetOriginalSliceCost(v int32)`

SetOriginalSliceCost sets OriginalSliceCost field to given value.

### HasOriginalSliceCost

`func (o *VpsOrderPutResponse) HasOriginalSliceCost() bool`

HasOriginalSliceCost returns a boolean if a field has been set.

### GetOriginalCost

`func (o *VpsOrderPutResponse) GetOriginalCost() int32`

GetOriginalCost returns the OriginalCost field if non-nil, zero value otherwise.

### GetOriginalCostOk

`func (o *VpsOrderPutResponse) GetOriginalCostOk() (*int32, bool)`

GetOriginalCostOk returns a tuple with the OriginalCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOriginalCost

`func (o *VpsOrderPutResponse) SetOriginalCost(v int32)`

SetOriginalCost sets OriginalCost field to given value.

### HasOriginalCost

`func (o *VpsOrderPutResponse) HasOriginalCost() bool`

HasOriginalCost returns a boolean if a field has been set.

### GetRepeatServiceCost

`func (o *VpsOrderPutResponse) GetRepeatServiceCost() int32`

GetRepeatServiceCost returns the RepeatServiceCost field if non-nil, zero value otherwise.

### GetRepeatServiceCostOk

`func (o *VpsOrderPutResponse) GetRepeatServiceCostOk() (*int32, bool)`

GetRepeatServiceCostOk returns a tuple with the RepeatServiceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRepeatServiceCost

`func (o *VpsOrderPutResponse) SetRepeatServiceCost(v int32)`

SetRepeatServiceCost sets RepeatServiceCost field to given value.

### HasRepeatServiceCost

`func (o *VpsOrderPutResponse) HasRepeatServiceCost() bool`

HasRepeatServiceCost returns a boolean if a field has been set.

### GetMonthlyServiceCost

`func (o *VpsOrderPutResponse) GetMonthlyServiceCost() int32`

GetMonthlyServiceCost returns the MonthlyServiceCost field if non-nil, zero value otherwise.

### GetMonthlyServiceCostOk

`func (o *VpsOrderPutResponse) GetMonthlyServiceCostOk() (*int32, bool)`

GetMonthlyServiceCostOk returns a tuple with the MonthlyServiceCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMonthlyServiceCost

`func (o *VpsOrderPutResponse) SetMonthlyServiceCost(v int32)`

SetMonthlyServiceCost sets MonthlyServiceCost field to given value.

### HasMonthlyServiceCost

`func (o *VpsOrderPutResponse) HasMonthlyServiceCost() bool`

HasMonthlyServiceCost returns a boolean if a field has been set.

### GetCustid

`func (o *VpsOrderPutResponse) GetCustid() string`

GetCustid returns the Custid field if non-nil, zero value otherwise.

### GetCustidOk

`func (o *VpsOrderPutResponse) GetCustidOk() (*string, bool)`

GetCustidOk returns a tuple with the Custid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustid

`func (o *VpsOrderPutResponse) SetCustid(v string)`

SetCustid sets Custid field to given value.

### HasCustid

`func (o *VpsOrderPutResponse) HasCustid() bool`

HasCustid returns a boolean if a field has been set.

### GetOs

`func (o *VpsOrderPutResponse) GetOs() string`

GetOs returns the Os field if non-nil, zero value otherwise.

### GetOsOk

`func (o *VpsOrderPutResponse) GetOsOk() (*string, bool)`

GetOsOk returns a tuple with the Os field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOs

`func (o *VpsOrderPutResponse) SetOs(v string)`

SetOs sets Os field to given value.

### HasOs

`func (o *VpsOrderPutResponse) HasOs() bool`

HasOs returns a boolean if a field has been set.

### GetSlices

`func (o *VpsOrderPutResponse) GetSlices() string`

GetSlices returns the Slices field if non-nil, zero value otherwise.

### GetSlicesOk

`func (o *VpsOrderPutResponse) GetSlicesOk() (*string, bool)`

GetSlicesOk returns a tuple with the Slices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSlices

`func (o *VpsOrderPutResponse) SetSlices(v string)`

SetSlices sets Slices field to given value.

### HasSlices

`func (o *VpsOrderPutResponse) HasSlices() bool`

HasSlices returns a boolean if a field has been set.

### GetPlatform

`func (o *VpsOrderPutResponse) GetPlatform() string`

GetPlatform returns the Platform field if non-nil, zero value otherwise.

### GetPlatformOk

`func (o *VpsOrderPutResponse) GetPlatformOk() (*string, bool)`

GetPlatformOk returns a tuple with the Platform field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlatform

`func (o *VpsOrderPutResponse) SetPlatform(v string)`

SetPlatform sets Platform field to given value.

### HasPlatform

`func (o *VpsOrderPutResponse) HasPlatform() bool`

HasPlatform returns a boolean if a field has been set.

### GetControlpanel

`func (o *VpsOrderPutResponse) GetControlpanel() string`

GetControlpanel returns the Controlpanel field if non-nil, zero value otherwise.

### GetControlpanelOk

`func (o *VpsOrderPutResponse) GetControlpanelOk() (*string, bool)`

GetControlpanelOk returns a tuple with the Controlpanel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetControlpanel

`func (o *VpsOrderPutResponse) SetControlpanel(v string)`

SetControlpanel sets Controlpanel field to given value.

### HasControlpanel

`func (o *VpsOrderPutResponse) HasControlpanel() bool`

HasControlpanel returns a boolean if a field has been set.

### GetPeriod

`func (o *VpsOrderPutResponse) GetPeriod() int32`

GetPeriod returns the Period field if non-nil, zero value otherwise.

### GetPeriodOk

`func (o *VpsOrderPutResponse) GetPeriodOk() (*int32, bool)`

GetPeriodOk returns a tuple with the Period field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPeriod

`func (o *VpsOrderPutResponse) SetPeriod(v int32)`

SetPeriod sets Period field to given value.

### HasPeriod

`func (o *VpsOrderPutResponse) HasPeriod() bool`

HasPeriod returns a boolean if a field has been set.

### GetLocation

`func (o *VpsOrderPutResponse) GetLocation() int32`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *VpsOrderPutResponse) GetLocationOk() (*int32, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *VpsOrderPutResponse) SetLocation(v int32)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *VpsOrderPutResponse) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetVersion

`func (o *VpsOrderPutResponse) GetVersion() string`

GetVersion returns the Version field if non-nil, zero value otherwise.

### GetVersionOk

`func (o *VpsOrderPutResponse) GetVersionOk() (*string, bool)`

GetVersionOk returns a tuple with the Version field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVersion

`func (o *VpsOrderPutResponse) SetVersion(v string)`

SetVersion sets Version field to given value.

### HasVersion

`func (o *VpsOrderPutResponse) HasVersion() bool`

HasVersion returns a boolean if a field has been set.

### GetHostname

`func (o *VpsOrderPutResponse) GetHostname() string`

GetHostname returns the Hostname field if non-nil, zero value otherwise.

### GetHostnameOk

`func (o *VpsOrderPutResponse) GetHostnameOk() (*string, bool)`

GetHostnameOk returns a tuple with the Hostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHostname

`func (o *VpsOrderPutResponse) SetHostname(v string)`

SetHostname sets Hostname field to given value.

### HasHostname

`func (o *VpsOrderPutResponse) HasHostname() bool`

HasHostname returns a boolean if a field has been set.

### GetCoupon

`func (o *VpsOrderPutResponse) GetCoupon() string`

GetCoupon returns the Coupon field if non-nil, zero value otherwise.

### GetCouponOk

`func (o *VpsOrderPutResponse) GetCouponOk() (*string, bool)`

GetCouponOk returns a tuple with the Coupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCoupon

`func (o *VpsOrderPutResponse) SetCoupon(v string)`

SetCoupon sets Coupon field to given value.

### HasCoupon

`func (o *VpsOrderPutResponse) HasCoupon() bool`

HasCoupon returns a boolean if a field has been set.

### GetRootpass

`func (o *VpsOrderPutResponse) GetRootpass() string`

GetRootpass returns the Rootpass field if non-nil, zero value otherwise.

### GetRootpassOk

`func (o *VpsOrderPutResponse) GetRootpassOk() (*string, bool)`

GetRootpassOk returns a tuple with the Rootpass field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRootpass

`func (o *VpsOrderPutResponse) SetRootpass(v string)`

SetRootpass sets Rootpass field to given value.

### HasRootpass

`func (o *VpsOrderPutResponse) HasRootpass() bool`

HasRootpass returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


