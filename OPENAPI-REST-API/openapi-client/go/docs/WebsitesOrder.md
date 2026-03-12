# WebsitesOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Step** | **string** | Step description | 
**Website** | **string** | Website description | 
**Period** | **int32** | Period description | 
**ServiceOfferId** | **int32** | Service offer ID description | 
**Packages** | [**WebsitesOrderPackages**](WebsitesOrderPackages.md) |  | 
**EnableDomainRegistering** | **bool** | Enable domain registering description | 
**JsonServices** | [**WebsitesOrderJsonServices**](WebsitesOrderJsonServices.md) |  | 
**JsonServiceOffers** | [**WebsitesOrderJsonServiceOffers**](WebsitesOrderJsonServiceOffers.md) |  | 
**ServiceTypes** | [**WebsitesOrderServiceTypes**](WebsitesOrderServiceTypes.md) |  | 
**ServiceOffers** | [**WebsitesOrderServiceOffers**](WebsitesOrderServiceOffers.md) |  | 
**Packges** | Pointer to [**WebsitesOrderPackges**](WebsitesOrderPackges.md) |  | [optional] 

## Methods

### NewWebsitesOrder

`func NewWebsitesOrder(step string, website string, period int32, serviceOfferId int32, packages WebsitesOrderPackages, enableDomainRegistering bool, jsonServices WebsitesOrderJsonServices, jsonServiceOffers WebsitesOrderJsonServiceOffers, serviceTypes WebsitesOrderServiceTypes, serviceOffers WebsitesOrderServiceOffers, ) *WebsitesOrder`

NewWebsitesOrder instantiates a new WebsitesOrder object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWebsitesOrderWithDefaults

`func NewWebsitesOrderWithDefaults() *WebsitesOrder`

NewWebsitesOrderWithDefaults instantiates a new WebsitesOrder object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStep

`func (o *WebsitesOrder) GetStep() string`

GetStep returns the Step field if non-nil, zero value otherwise.

### GetStepOk

`func (o *WebsitesOrder) GetStepOk() (*string, bool)`

GetStepOk returns a tuple with the Step field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStep

`func (o *WebsitesOrder) SetStep(v string)`

SetStep sets Step field to given value.


### GetWebsite

`func (o *WebsitesOrder) GetWebsite() string`

GetWebsite returns the Website field if non-nil, zero value otherwise.

### GetWebsiteOk

`func (o *WebsitesOrder) GetWebsiteOk() (*string, bool)`

GetWebsiteOk returns a tuple with the Website field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWebsite

`func (o *WebsitesOrder) SetWebsite(v string)`

SetWebsite sets Website field to given value.


### GetPeriod

`func (o *WebsitesOrder) GetPeriod() int32`

GetPeriod returns the Period field if non-nil, zero value otherwise.

### GetPeriodOk

`func (o *WebsitesOrder) GetPeriodOk() (*int32, bool)`

GetPeriodOk returns a tuple with the Period field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPeriod

`func (o *WebsitesOrder) SetPeriod(v int32)`

SetPeriod sets Period field to given value.


### GetServiceOfferId

`func (o *WebsitesOrder) GetServiceOfferId() int32`

GetServiceOfferId returns the ServiceOfferId field if non-nil, zero value otherwise.

### GetServiceOfferIdOk

`func (o *WebsitesOrder) GetServiceOfferIdOk() (*int32, bool)`

GetServiceOfferIdOk returns a tuple with the ServiceOfferId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceOfferId

`func (o *WebsitesOrder) SetServiceOfferId(v int32)`

SetServiceOfferId sets ServiceOfferId field to given value.


### GetPackages

`func (o *WebsitesOrder) GetPackages() WebsitesOrderPackages`

GetPackages returns the Packages field if non-nil, zero value otherwise.

### GetPackagesOk

`func (o *WebsitesOrder) GetPackagesOk() (*WebsitesOrderPackages, bool)`

GetPackagesOk returns a tuple with the Packages field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackages

`func (o *WebsitesOrder) SetPackages(v WebsitesOrderPackages)`

SetPackages sets Packages field to given value.


### GetEnableDomainRegistering

`func (o *WebsitesOrder) GetEnableDomainRegistering() bool`

GetEnableDomainRegistering returns the EnableDomainRegistering field if non-nil, zero value otherwise.

### GetEnableDomainRegisteringOk

`func (o *WebsitesOrder) GetEnableDomainRegisteringOk() (*bool, bool)`

GetEnableDomainRegisteringOk returns a tuple with the EnableDomainRegistering field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnableDomainRegistering

`func (o *WebsitesOrder) SetEnableDomainRegistering(v bool)`

SetEnableDomainRegistering sets EnableDomainRegistering field to given value.


### GetJsonServices

`func (o *WebsitesOrder) GetJsonServices() WebsitesOrderJsonServices`

GetJsonServices returns the JsonServices field if non-nil, zero value otherwise.

### GetJsonServicesOk

`func (o *WebsitesOrder) GetJsonServicesOk() (*WebsitesOrderJsonServices, bool)`

GetJsonServicesOk returns a tuple with the JsonServices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetJsonServices

`func (o *WebsitesOrder) SetJsonServices(v WebsitesOrderJsonServices)`

SetJsonServices sets JsonServices field to given value.


### GetJsonServiceOffers

`func (o *WebsitesOrder) GetJsonServiceOffers() WebsitesOrderJsonServiceOffers`

GetJsonServiceOffers returns the JsonServiceOffers field if non-nil, zero value otherwise.

### GetJsonServiceOffersOk

`func (o *WebsitesOrder) GetJsonServiceOffersOk() (*WebsitesOrderJsonServiceOffers, bool)`

GetJsonServiceOffersOk returns a tuple with the JsonServiceOffers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetJsonServiceOffers

`func (o *WebsitesOrder) SetJsonServiceOffers(v WebsitesOrderJsonServiceOffers)`

SetJsonServiceOffers sets JsonServiceOffers field to given value.


### GetServiceTypes

`func (o *WebsitesOrder) GetServiceTypes() WebsitesOrderServiceTypes`

GetServiceTypes returns the ServiceTypes field if non-nil, zero value otherwise.

### GetServiceTypesOk

`func (o *WebsitesOrder) GetServiceTypesOk() (*WebsitesOrderServiceTypes, bool)`

GetServiceTypesOk returns a tuple with the ServiceTypes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceTypes

`func (o *WebsitesOrder) SetServiceTypes(v WebsitesOrderServiceTypes)`

SetServiceTypes sets ServiceTypes field to given value.


### GetServiceOffers

`func (o *WebsitesOrder) GetServiceOffers() WebsitesOrderServiceOffers`

GetServiceOffers returns the ServiceOffers field if non-nil, zero value otherwise.

### GetServiceOffersOk

`func (o *WebsitesOrder) GetServiceOffersOk() (*WebsitesOrderServiceOffers, bool)`

GetServiceOffersOk returns a tuple with the ServiceOffers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceOffers

`func (o *WebsitesOrder) SetServiceOffers(v WebsitesOrderServiceOffers)`

SetServiceOffers sets ServiceOffers field to given value.


### GetPackges

`func (o *WebsitesOrder) GetPackges() WebsitesOrderPackges`

GetPackges returns the Packges field if non-nil, zero value otherwise.

### GetPackgesOk

`func (o *WebsitesOrder) GetPackgesOk() (*WebsitesOrderPackges, bool)`

GetPackgesOk returns a tuple with the Packges field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackges

`func (o *WebsitesOrder) SetPackges(v WebsitesOrderPackges)`

SetPackges sets Packges field to given value.

### HasPackges

`func (o *WebsitesOrder) HasPackges() bool`

HasPackges returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


