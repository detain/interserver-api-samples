# ServerNetworkInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Vlans** | **[]string** | List of VLANs. | 
**Vlans6** | **[]string** | List of IPv6 VLANs. | 
**Assets** | [**ServerNetworkInfoAssets**](ServerNetworkInfoAssets.md) |  | 
**Switchports** | [**ServerNetworkInfoSwitchports**](ServerNetworkInfoSwitchports.md) |  | 

## Methods

### NewServerNetworkInfo

`func NewServerNetworkInfo(vlans []string, vlans6 []string, assets ServerNetworkInfoAssets, switchports ServerNetworkInfoSwitchports, ) *ServerNetworkInfo`

NewServerNetworkInfo instantiates a new ServerNetworkInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerNetworkInfoWithDefaults

`func NewServerNetworkInfoWithDefaults() *ServerNetworkInfo`

NewServerNetworkInfoWithDefaults instantiates a new ServerNetworkInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVlans

`func (o *ServerNetworkInfo) GetVlans() []string`

GetVlans returns the Vlans field if non-nil, zero value otherwise.

### GetVlansOk

`func (o *ServerNetworkInfo) GetVlansOk() (*[]string, bool)`

GetVlansOk returns a tuple with the Vlans field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVlans

`func (o *ServerNetworkInfo) SetVlans(v []string)`

SetVlans sets Vlans field to given value.


### GetVlans6

`func (o *ServerNetworkInfo) GetVlans6() []string`

GetVlans6 returns the Vlans6 field if non-nil, zero value otherwise.

### GetVlans6Ok

`func (o *ServerNetworkInfo) GetVlans6Ok() (*[]string, bool)`

GetVlans6Ok returns a tuple with the Vlans6 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVlans6

`func (o *ServerNetworkInfo) SetVlans6(v []string)`

SetVlans6 sets Vlans6 field to given value.


### GetAssets

`func (o *ServerNetworkInfo) GetAssets() ServerNetworkInfoAssets`

GetAssets returns the Assets field if non-nil, zero value otherwise.

### GetAssetsOk

`func (o *ServerNetworkInfo) GetAssetsOk() (*ServerNetworkInfoAssets, bool)`

GetAssetsOk returns a tuple with the Assets field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssets

`func (o *ServerNetworkInfo) SetAssets(v ServerNetworkInfoAssets)`

SetAssets sets Assets field to given value.


### GetSwitchports

`func (o *ServerNetworkInfo) GetSwitchports() ServerNetworkInfoSwitchports`

GetSwitchports returns the Switchports field if non-nil, zero value otherwise.

### GetSwitchportsOk

`func (o *ServerNetworkInfo) GetSwitchportsOk() (*ServerNetworkInfoSwitchports, bool)`

GetSwitchportsOk returns a tuple with the Switchports field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSwitchports

`func (o *ServerNetworkInfo) SetSwitchports(v ServerNetworkInfoSwitchports)`

SetSwitchports sets Switchports field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


