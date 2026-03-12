# DomainServiceType

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServicesId** | Pointer to **string** | Service type ID. | [optional] 
**ServicesName** | Pointer to **string** | Service type name (e.g., .com Registration). | [optional] 
**ServicesCost** | Pointer to **string** | Service cost per billing period. | [optional] 
**ServicesCategory** | Pointer to **string** | Service category ID. | [optional] 
**ServicesBuyable** | Pointer to **string** | Whether this service type is available for purchase. | [optional] 
**ServicesType** | Pointer to **string** | Internal service type identifier. | [optional] 
**ServicesField1** | Pointer to **string** | TLD or first configurable field for the service type. | [optional] 
**ServicesField2** | Pointer to **string** | Second configurable field for the service type. | [optional] 
**ServicesModule** | Pointer to **string** | Backend module handling this service type. | [optional] 

## Methods

### NewDomainServiceType

`func NewDomainServiceType() *DomainServiceType`

NewDomainServiceType instantiates a new DomainServiceType object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainServiceTypeWithDefaults

`func NewDomainServiceTypeWithDefaults() *DomainServiceType`

NewDomainServiceTypeWithDefaults instantiates a new DomainServiceType object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServicesId

`func (o *DomainServiceType) GetServicesId() string`

GetServicesId returns the ServicesId field if non-nil, zero value otherwise.

### GetServicesIdOk

`func (o *DomainServiceType) GetServicesIdOk() (*string, bool)`

GetServicesIdOk returns a tuple with the ServicesId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesId

`func (o *DomainServiceType) SetServicesId(v string)`

SetServicesId sets ServicesId field to given value.

### HasServicesId

`func (o *DomainServiceType) HasServicesId() bool`

HasServicesId returns a boolean if a field has been set.

### GetServicesName

`func (o *DomainServiceType) GetServicesName() string`

GetServicesName returns the ServicesName field if non-nil, zero value otherwise.

### GetServicesNameOk

`func (o *DomainServiceType) GetServicesNameOk() (*string, bool)`

GetServicesNameOk returns a tuple with the ServicesName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesName

`func (o *DomainServiceType) SetServicesName(v string)`

SetServicesName sets ServicesName field to given value.

### HasServicesName

`func (o *DomainServiceType) HasServicesName() bool`

HasServicesName returns a boolean if a field has been set.

### GetServicesCost

`func (o *DomainServiceType) GetServicesCost() string`

GetServicesCost returns the ServicesCost field if non-nil, zero value otherwise.

### GetServicesCostOk

`func (o *DomainServiceType) GetServicesCostOk() (*string, bool)`

GetServicesCostOk returns a tuple with the ServicesCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesCost

`func (o *DomainServiceType) SetServicesCost(v string)`

SetServicesCost sets ServicesCost field to given value.

### HasServicesCost

`func (o *DomainServiceType) HasServicesCost() bool`

HasServicesCost returns a boolean if a field has been set.

### GetServicesCategory

`func (o *DomainServiceType) GetServicesCategory() string`

GetServicesCategory returns the ServicesCategory field if non-nil, zero value otherwise.

### GetServicesCategoryOk

`func (o *DomainServiceType) GetServicesCategoryOk() (*string, bool)`

GetServicesCategoryOk returns a tuple with the ServicesCategory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesCategory

`func (o *DomainServiceType) SetServicesCategory(v string)`

SetServicesCategory sets ServicesCategory field to given value.

### HasServicesCategory

`func (o *DomainServiceType) HasServicesCategory() bool`

HasServicesCategory returns a boolean if a field has been set.

### GetServicesBuyable

`func (o *DomainServiceType) GetServicesBuyable() string`

GetServicesBuyable returns the ServicesBuyable field if non-nil, zero value otherwise.

### GetServicesBuyableOk

`func (o *DomainServiceType) GetServicesBuyableOk() (*string, bool)`

GetServicesBuyableOk returns a tuple with the ServicesBuyable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesBuyable

`func (o *DomainServiceType) SetServicesBuyable(v string)`

SetServicesBuyable sets ServicesBuyable field to given value.

### HasServicesBuyable

`func (o *DomainServiceType) HasServicesBuyable() bool`

HasServicesBuyable returns a boolean if a field has been set.

### GetServicesType

`func (o *DomainServiceType) GetServicesType() string`

GetServicesType returns the ServicesType field if non-nil, zero value otherwise.

### GetServicesTypeOk

`func (o *DomainServiceType) GetServicesTypeOk() (*string, bool)`

GetServicesTypeOk returns a tuple with the ServicesType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesType

`func (o *DomainServiceType) SetServicesType(v string)`

SetServicesType sets ServicesType field to given value.

### HasServicesType

`func (o *DomainServiceType) HasServicesType() bool`

HasServicesType returns a boolean if a field has been set.

### GetServicesField1

`func (o *DomainServiceType) GetServicesField1() string`

GetServicesField1 returns the ServicesField1 field if non-nil, zero value otherwise.

### GetServicesField1Ok

`func (o *DomainServiceType) GetServicesField1Ok() (*string, bool)`

GetServicesField1Ok returns a tuple with the ServicesField1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesField1

`func (o *DomainServiceType) SetServicesField1(v string)`

SetServicesField1 sets ServicesField1 field to given value.

### HasServicesField1

`func (o *DomainServiceType) HasServicesField1() bool`

HasServicesField1 returns a boolean if a field has been set.

### GetServicesField2

`func (o *DomainServiceType) GetServicesField2() string`

GetServicesField2 returns the ServicesField2 field if non-nil, zero value otherwise.

### GetServicesField2Ok

`func (o *DomainServiceType) GetServicesField2Ok() (*string, bool)`

GetServicesField2Ok returns a tuple with the ServicesField2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesField2

`func (o *DomainServiceType) SetServicesField2(v string)`

SetServicesField2 sets ServicesField2 field to given value.

### HasServicesField2

`func (o *DomainServiceType) HasServicesField2() bool`

HasServicesField2 returns a boolean if a field has been set.

### GetServicesModule

`func (o *DomainServiceType) GetServicesModule() string`

GetServicesModule returns the ServicesModule field if non-nil, zero value otherwise.

### GetServicesModuleOk

`func (o *DomainServiceType) GetServicesModuleOk() (*string, bool)`

GetServicesModuleOk returns a tuple with the ServicesModule field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServicesModule

`func (o *DomainServiceType) SetServicesModule(v string)`

SetServicesModule sets ServicesModule field to given value.

### HasServicesModule

`func (o *DomainServiceType) HasServicesModule() bool`

HasServicesModule returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


