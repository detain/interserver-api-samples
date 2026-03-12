# DomainNameserverGetResponseInner

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | **string** |  | 
**Ipaddress** | **string** |  | 
**CanDelete** | **string** | Whether the registrar allows deletion of this nameserver entry. | 

## Methods

### NewDomainNameserverGetResponseInner

`func NewDomainNameserverGetResponseInner(name string, ipaddress string, canDelete string, ) *DomainNameserverGetResponseInner`

NewDomainNameserverGetResponseInner instantiates a new DomainNameserverGetResponseInner object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainNameserverGetResponseInnerWithDefaults

`func NewDomainNameserverGetResponseInnerWithDefaults() *DomainNameserverGetResponseInner`

NewDomainNameserverGetResponseInnerWithDefaults instantiates a new DomainNameserverGetResponseInner object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *DomainNameserverGetResponseInner) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *DomainNameserverGetResponseInner) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *DomainNameserverGetResponseInner) SetName(v string)`

SetName sets Name field to given value.


### GetIpaddress

`func (o *DomainNameserverGetResponseInner) GetIpaddress() string`

GetIpaddress returns the Ipaddress field if non-nil, zero value otherwise.

### GetIpaddressOk

`func (o *DomainNameserverGetResponseInner) GetIpaddressOk() (*string, bool)`

GetIpaddressOk returns a tuple with the Ipaddress field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpaddress

`func (o *DomainNameserverGetResponseInner) SetIpaddress(v string)`

SetIpaddress sets Ipaddress field to given value.


### GetCanDelete

`func (o *DomainNameserverGetResponseInner) GetCanDelete() string`

GetCanDelete returns the CanDelete field if non-nil, zero value otherwise.

### GetCanDeleteOk

`func (o *DomainNameserverGetResponseInner) GetCanDeleteOk() (*string, bool)`

GetCanDeleteOk returns a tuple with the CanDelete field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCanDelete

`func (o *DomainNameserverGetResponseInner) SetCanDelete(v string)`

SetCanDelete sets CanDelete field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


