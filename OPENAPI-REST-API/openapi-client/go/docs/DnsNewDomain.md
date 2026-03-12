# DnsNewDomain

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Domain** | **string** | The domain name. | 
**Ip** | **string** | IP Address to point the domain to. | 

## Methods

### NewDnsNewDomain

`func NewDnsNewDomain(domain string, ip string, ) *DnsNewDomain`

NewDnsNewDomain instantiates a new DnsNewDomain object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDnsNewDomainWithDefaults

`func NewDnsNewDomainWithDefaults() *DnsNewDomain`

NewDnsNewDomainWithDefaults instantiates a new DnsNewDomain object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDomain

`func (o *DnsNewDomain) GetDomain() string`

GetDomain returns the Domain field if non-nil, zero value otherwise.

### GetDomainOk

`func (o *DnsNewDomain) GetDomainOk() (*string, bool)`

GetDomainOk returns a tuple with the Domain field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDomain

`func (o *DnsNewDomain) SetDomain(v string)`

SetDomain sets Domain field to given value.


### GetIp

`func (o *DnsNewDomain) GetIp() string`

GetIp returns the Ip field if non-nil, zero value otherwise.

### GetIpOk

`func (o *DnsNewDomain) GetIpOk() (*string, bool)`

GetIpOk returns a tuple with the Ip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIp

`func (o *DnsNewDomain) SetIp(v string)`

SetIp sets Ip field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


