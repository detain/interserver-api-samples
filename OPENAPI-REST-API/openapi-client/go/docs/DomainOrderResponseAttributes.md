# DomainOrderResponseAttributes

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** | Registrar order ID. | [optional] 
**AdminEmail** | Pointer to **string** | Administrative contact email provided for the order. | [optional] 

## Methods

### NewDomainOrderResponseAttributes

`func NewDomainOrderResponseAttributes() *DomainOrderResponseAttributes`

NewDomainOrderResponseAttributes instantiates a new DomainOrderResponseAttributes object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainOrderResponseAttributesWithDefaults

`func NewDomainOrderResponseAttributesWithDefaults() *DomainOrderResponseAttributes`

NewDomainOrderResponseAttributesWithDefaults instantiates a new DomainOrderResponseAttributes object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *DomainOrderResponseAttributes) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *DomainOrderResponseAttributes) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *DomainOrderResponseAttributes) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *DomainOrderResponseAttributes) HasId() bool`

HasId returns a boolean if a field has been set.

### GetAdminEmail

`func (o *DomainOrderResponseAttributes) GetAdminEmail() string`

GetAdminEmail returns the AdminEmail field if non-nil, zero value otherwise.

### GetAdminEmailOk

`func (o *DomainOrderResponseAttributes) GetAdminEmailOk() (*string, bool)`

GetAdminEmailOk returns a tuple with the AdminEmail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAdminEmail

`func (o *DomainOrderResponseAttributes) SetAdminEmail(v string)`

SetAdminEmail sets AdminEmail field to given value.

### HasAdminEmail

`func (o *DomainOrderResponseAttributes) HasAdminEmail() bool`

HasAdminEmail returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


