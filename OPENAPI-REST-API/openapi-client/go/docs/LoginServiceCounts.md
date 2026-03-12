# LoginServiceCounts

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Vps** | **int32** | The number of total VPS orders that have been placed in our billing system. | 
**Websites** | **int32** | The number of total website orders that have been placed in our billing system. | 
**Servers** | **int32** | The number of total server orders that have been placed in our billing system. | 

## Methods

### NewLoginServiceCounts

`func NewLoginServiceCounts(vps int32, websites int32, servers int32, ) *LoginServiceCounts`

NewLoginServiceCounts instantiates a new LoginServiceCounts object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLoginServiceCountsWithDefaults

`func NewLoginServiceCountsWithDefaults() *LoginServiceCounts`

NewLoginServiceCountsWithDefaults instantiates a new LoginServiceCounts object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVps

`func (o *LoginServiceCounts) GetVps() int32`

GetVps returns the Vps field if non-nil, zero value otherwise.

### GetVpsOk

`func (o *LoginServiceCounts) GetVpsOk() (*int32, bool)`

GetVpsOk returns a tuple with the Vps field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVps

`func (o *LoginServiceCounts) SetVps(v int32)`

SetVps sets Vps field to given value.


### GetWebsites

`func (o *LoginServiceCounts) GetWebsites() int32`

GetWebsites returns the Websites field if non-nil, zero value otherwise.

### GetWebsitesOk

`func (o *LoginServiceCounts) GetWebsitesOk() (*int32, bool)`

GetWebsitesOk returns a tuple with the Websites field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWebsites

`func (o *LoginServiceCounts) SetWebsites(v int32)`

SetWebsites sets Websites field to given value.


### GetServers

`func (o *LoginServiceCounts) GetServers() int32`

GetServers returns the Servers field if non-nil, zero value otherwise.

### GetServersOk

`func (o *LoginServiceCounts) GetServersOk() (*int32, bool)`

GetServersOk returns a tuple with the Servers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServers

`func (o *LoginServiceCounts) SetServers(v int32)`

SetServers sets Servers field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


