# WebsitesOrderServiceOffer

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceOfferId** | **string** | The ID of the service offer. | 
**ServiceId** | **string** | The ID of the associated service. | 
**IntroCost** | **string** | The introductory cost of the service offer. | 
**RenewalCost** | **string** | The renewal cost of the service offer. | 
**IntroFrequency** | **string** | The introductory frequency of the service offer. | 
**RenewalFrequency** | **string** | The renewal frequency of the service offer. | 
**AllowCoupon** | **string** | Indicates if coupons are allowed (1 for yes, 0 for no). | 
**ServiceModule** | **string** | The module of the service offer. | 
**CreatedAt** | **string** | The creation timestamp of the service offer. | 
**UpdatedAt** | Pointer to **string** | The update timestamp of the service offer. | [optional] 
**DeletedAt** | Pointer to **string** | The deletion timestamp of the service offer. | [optional] 

## Methods

### NewWebsitesOrderServiceOffer

`func NewWebsitesOrderServiceOffer(serviceOfferId string, serviceId string, introCost string, renewalCost string, introFrequency string, renewalFrequency string, allowCoupon string, serviceModule string, createdAt string, ) *WebsitesOrderServiceOffer`

NewWebsitesOrderServiceOffer instantiates a new WebsitesOrderServiceOffer object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWebsitesOrderServiceOfferWithDefaults

`func NewWebsitesOrderServiceOfferWithDefaults() *WebsitesOrderServiceOffer`

NewWebsitesOrderServiceOfferWithDefaults instantiates a new WebsitesOrderServiceOffer object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceOfferId

`func (o *WebsitesOrderServiceOffer) GetServiceOfferId() string`

GetServiceOfferId returns the ServiceOfferId field if non-nil, zero value otherwise.

### GetServiceOfferIdOk

`func (o *WebsitesOrderServiceOffer) GetServiceOfferIdOk() (*string, bool)`

GetServiceOfferIdOk returns a tuple with the ServiceOfferId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceOfferId

`func (o *WebsitesOrderServiceOffer) SetServiceOfferId(v string)`

SetServiceOfferId sets ServiceOfferId field to given value.


### GetServiceId

`func (o *WebsitesOrderServiceOffer) GetServiceId() string`

GetServiceId returns the ServiceId field if non-nil, zero value otherwise.

### GetServiceIdOk

`func (o *WebsitesOrderServiceOffer) GetServiceIdOk() (*string, bool)`

GetServiceIdOk returns a tuple with the ServiceId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceId

`func (o *WebsitesOrderServiceOffer) SetServiceId(v string)`

SetServiceId sets ServiceId field to given value.


### GetIntroCost

`func (o *WebsitesOrderServiceOffer) GetIntroCost() string`

GetIntroCost returns the IntroCost field if non-nil, zero value otherwise.

### GetIntroCostOk

`func (o *WebsitesOrderServiceOffer) GetIntroCostOk() (*string, bool)`

GetIntroCostOk returns a tuple with the IntroCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntroCost

`func (o *WebsitesOrderServiceOffer) SetIntroCost(v string)`

SetIntroCost sets IntroCost field to given value.


### GetRenewalCost

`func (o *WebsitesOrderServiceOffer) GetRenewalCost() string`

GetRenewalCost returns the RenewalCost field if non-nil, zero value otherwise.

### GetRenewalCostOk

`func (o *WebsitesOrderServiceOffer) GetRenewalCostOk() (*string, bool)`

GetRenewalCostOk returns a tuple with the RenewalCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRenewalCost

`func (o *WebsitesOrderServiceOffer) SetRenewalCost(v string)`

SetRenewalCost sets RenewalCost field to given value.


### GetIntroFrequency

`func (o *WebsitesOrderServiceOffer) GetIntroFrequency() string`

GetIntroFrequency returns the IntroFrequency field if non-nil, zero value otherwise.

### GetIntroFrequencyOk

`func (o *WebsitesOrderServiceOffer) GetIntroFrequencyOk() (*string, bool)`

GetIntroFrequencyOk returns a tuple with the IntroFrequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIntroFrequency

`func (o *WebsitesOrderServiceOffer) SetIntroFrequency(v string)`

SetIntroFrequency sets IntroFrequency field to given value.


### GetRenewalFrequency

`func (o *WebsitesOrderServiceOffer) GetRenewalFrequency() string`

GetRenewalFrequency returns the RenewalFrequency field if non-nil, zero value otherwise.

### GetRenewalFrequencyOk

`func (o *WebsitesOrderServiceOffer) GetRenewalFrequencyOk() (*string, bool)`

GetRenewalFrequencyOk returns a tuple with the RenewalFrequency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRenewalFrequency

`func (o *WebsitesOrderServiceOffer) SetRenewalFrequency(v string)`

SetRenewalFrequency sets RenewalFrequency field to given value.


### GetAllowCoupon

`func (o *WebsitesOrderServiceOffer) GetAllowCoupon() string`

GetAllowCoupon returns the AllowCoupon field if non-nil, zero value otherwise.

### GetAllowCouponOk

`func (o *WebsitesOrderServiceOffer) GetAllowCouponOk() (*string, bool)`

GetAllowCouponOk returns a tuple with the AllowCoupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAllowCoupon

`func (o *WebsitesOrderServiceOffer) SetAllowCoupon(v string)`

SetAllowCoupon sets AllowCoupon field to given value.


### GetServiceModule

`func (o *WebsitesOrderServiceOffer) GetServiceModule() string`

GetServiceModule returns the ServiceModule field if non-nil, zero value otherwise.

### GetServiceModuleOk

`func (o *WebsitesOrderServiceOffer) GetServiceModuleOk() (*string, bool)`

GetServiceModuleOk returns a tuple with the ServiceModule field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceModule

`func (o *WebsitesOrderServiceOffer) SetServiceModule(v string)`

SetServiceModule sets ServiceModule field to given value.


### GetCreatedAt

`func (o *WebsitesOrderServiceOffer) GetCreatedAt() string`

GetCreatedAt returns the CreatedAt field if non-nil, zero value otherwise.

### GetCreatedAtOk

`func (o *WebsitesOrderServiceOffer) GetCreatedAtOk() (*string, bool)`

GetCreatedAtOk returns a tuple with the CreatedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCreatedAt

`func (o *WebsitesOrderServiceOffer) SetCreatedAt(v string)`

SetCreatedAt sets CreatedAt field to given value.


### GetUpdatedAt

`func (o *WebsitesOrderServiceOffer) GetUpdatedAt() string`

GetUpdatedAt returns the UpdatedAt field if non-nil, zero value otherwise.

### GetUpdatedAtOk

`func (o *WebsitesOrderServiceOffer) GetUpdatedAtOk() (*string, bool)`

GetUpdatedAtOk returns a tuple with the UpdatedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpdatedAt

`func (o *WebsitesOrderServiceOffer) SetUpdatedAt(v string)`

SetUpdatedAt sets UpdatedAt field to given value.

### HasUpdatedAt

`func (o *WebsitesOrderServiceOffer) HasUpdatedAt() bool`

HasUpdatedAt returns a boolean if a field has been set.

### GetDeletedAt

`func (o *WebsitesOrderServiceOffer) GetDeletedAt() string`

GetDeletedAt returns the DeletedAt field if non-nil, zero value otherwise.

### GetDeletedAtOk

`func (o *WebsitesOrderServiceOffer) GetDeletedAtOk() (*string, bool)`

GetDeletedAtOk returns a tuple with the DeletedAt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeletedAt

`func (o *WebsitesOrderServiceOffer) SetDeletedAt(v string)`

SetDeletedAt sets DeletedAt field to given value.

### HasDeletedAt

`func (o *WebsitesOrderServiceOffer) HasDeletedAt() bool`

HasDeletedAt returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


