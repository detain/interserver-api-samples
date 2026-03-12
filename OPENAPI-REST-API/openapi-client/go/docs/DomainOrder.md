# DomainOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**WhoisPrivacyCost** | Pointer to **string** | Cost of Whois Privacy | [optional] 
**Services** | Pointer to [**DomainOrderServices**](DomainOrderServices.md) |  | [optional] 
**TldServices** | Pointer to **map[string]interface{}** | Map of TLDs to domain service IDs. | [optional] 

## Methods

### NewDomainOrder

`func NewDomainOrder() *DomainOrder`

NewDomainOrder instantiates a new DomainOrder object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainOrderWithDefaults

`func NewDomainOrderWithDefaults() *DomainOrder`

NewDomainOrderWithDefaults instantiates a new DomainOrder object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetWhoisPrivacyCost

`func (o *DomainOrder) GetWhoisPrivacyCost() string`

GetWhoisPrivacyCost returns the WhoisPrivacyCost field if non-nil, zero value otherwise.

### GetWhoisPrivacyCostOk

`func (o *DomainOrder) GetWhoisPrivacyCostOk() (*string, bool)`

GetWhoisPrivacyCostOk returns a tuple with the WhoisPrivacyCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWhoisPrivacyCost

`func (o *DomainOrder) SetWhoisPrivacyCost(v string)`

SetWhoisPrivacyCost sets WhoisPrivacyCost field to given value.

### HasWhoisPrivacyCost

`func (o *DomainOrder) HasWhoisPrivacyCost() bool`

HasWhoisPrivacyCost returns a boolean if a field has been set.

### GetServices

`func (o *DomainOrder) GetServices() DomainOrderServices`

GetServices returns the Services field if non-nil, zero value otherwise.

### GetServicesOk

`func (o *DomainOrder) GetServicesOk() (*DomainOrderServices, bool)`

GetServicesOk returns a tuple with the Services field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServices

`func (o *DomainOrder) SetServices(v DomainOrderServices)`

SetServices sets Services field to given value.

### HasServices

`func (o *DomainOrder) HasServices() bool`

HasServices returns a boolean if a field has been set.

### GetTldServices

`func (o *DomainOrder) GetTldServices() map[string]interface{}`

GetTldServices returns the TldServices field if non-nil, zero value otherwise.

### GetTldServicesOk

`func (o *DomainOrder) GetTldServicesOk() (*map[string]interface{}, bool)`

GetTldServicesOk returns a tuple with the TldServices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTldServices

`func (o *DomainOrder) SetTldServices(v map[string]interface{})`

SetTldServices sets TldServices field to given value.

### HasTldServices

`func (o *DomainOrder) HasTldServices() bool`

HasTldServices returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


