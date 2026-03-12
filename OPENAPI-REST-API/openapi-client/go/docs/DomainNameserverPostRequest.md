# DomainNameserverPostRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | **string** |  | 
**IpAddress** | **string** |  | 

## Methods

### NewDomainNameserverPostRequest

`func NewDomainNameserverPostRequest(name string, ipAddress string, ) *DomainNameserverPostRequest`

NewDomainNameserverPostRequest instantiates a new DomainNameserverPostRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDomainNameserverPostRequestWithDefaults

`func NewDomainNameserverPostRequestWithDefaults() *DomainNameserverPostRequest`

NewDomainNameserverPostRequestWithDefaults instantiates a new DomainNameserverPostRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *DomainNameserverPostRequest) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *DomainNameserverPostRequest) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *DomainNameserverPostRequest) SetName(v string)`

SetName sets Name field to given value.


### GetIpAddress

`func (o *DomainNameserverPostRequest) GetIpAddress() string`

GetIpAddress returns the IpAddress field if non-nil, zero value otherwise.

### GetIpAddressOk

`func (o *DomainNameserverPostRequest) GetIpAddressOk() (*string, bool)`

GetIpAddressOk returns a tuple with the IpAddress field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpAddress

`func (o *DomainNameserverPostRequest) SetIpAddress(v string)`

SetIpAddress sets IpAddress field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


