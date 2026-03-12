# ServerLease

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Mac** | **string** | MAC address associated with the lease. | 
**Authenticated** | **bool** | Indicates if the lease is authenticated. | 
**Group** | **string** | Group identifier for the lease. | 

## Methods

### NewServerLease

`func NewServerLease(mac string, authenticated bool, group string, ) *ServerLease`

NewServerLease instantiates a new ServerLease object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerLeaseWithDefaults

`func NewServerLeaseWithDefaults() *ServerLease`

NewServerLeaseWithDefaults instantiates a new ServerLease object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMac

`func (o *ServerLease) GetMac() string`

GetMac returns the Mac field if non-nil, zero value otherwise.

### GetMacOk

`func (o *ServerLease) GetMacOk() (*string, bool)`

GetMacOk returns a tuple with the Mac field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMac

`func (o *ServerLease) SetMac(v string)`

SetMac sets Mac field to given value.


### GetAuthenticated

`func (o *ServerLease) GetAuthenticated() bool`

GetAuthenticated returns the Authenticated field if non-nil, zero value otherwise.

### GetAuthenticatedOk

`func (o *ServerLease) GetAuthenticatedOk() (*bool, bool)`

GetAuthenticatedOk returns a tuple with the Authenticated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuthenticated

`func (o *ServerLease) SetAuthenticated(v bool)`

SetAuthenticated sets Authenticated field to given value.


### GetGroup

`func (o *ServerLease) GetGroup() string`

GetGroup returns the Group field if non-nil, zero value otherwise.

### GetGroupOk

`func (o *ServerLease) GetGroupOk() (*string, bool)`

GetGroupOk returns a tuple with the Group field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGroup

`func (o *ServerLease) SetGroup(v string)`

SetGroup sets Group field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


