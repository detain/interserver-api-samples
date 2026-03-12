# VpsServiceAddons

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**HasCpanel** | Pointer to **bool** | Whether a cPanel license is active on this VPS. | [optional] 
**HasDirectadmin** | Pointer to **bool** | Whether a DirectAdmin license is active on this VPS. | [optional] 
**HasFantastico** | Pointer to **bool** | Whether a Fantastico license is active on this VPS. | [optional] 
**HasSoftaculous** | Pointer to **bool** | Whether a Softaculous license is active on this VPS. | [optional] 
**HasHdspace** | Pointer to **bool** | Whether extra disk space has been added to this VPS. | [optional] 
**DedicatedIp** | Pointer to **bool** | Whether a dedicated IP address is assigned to this VPS. | [optional] 
**ExtraIps** | Pointer to **[]string** | List of additional IPv4 addresses assigned to this VPS. | [optional] 
**ExtraIps6** | Pointer to **[]string** | List of additional IPv6 addresses assigned to this VPS. | [optional] 
**UnpaidIps** | Pointer to **[]string** | List of IP addresses that have unpaid charges. | [optional] 
**Ips** | Pointer to **[]string** | All IPv4 addresses assigned to this VPS. | [optional] 
**Ips6** | Pointer to **[]string** | All IPv6 addresses assigned to this VPS. | [optional] 
**CpanelId** | Pointer to **int32** | The add-on service ID for the cPanel license. | [optional] 
**Cost** | Pointer to **int32** | Total monthly add-on cost in cents. | [optional] 
**Ids** | Pointer to **[]string** | List of add-on service IDs active on this VPS. | [optional] 
**Rdata** | Pointer to **[]string** | Raw add-on data entries. | [optional] 

## Methods

### NewVpsServiceAddons

`func NewVpsServiceAddons() *VpsServiceAddons`

NewVpsServiceAddons instantiates a new VpsServiceAddons object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsServiceAddonsWithDefaults

`func NewVpsServiceAddonsWithDefaults() *VpsServiceAddons`

NewVpsServiceAddonsWithDefaults instantiates a new VpsServiceAddons object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetHasCpanel

`func (o *VpsServiceAddons) GetHasCpanel() bool`

GetHasCpanel returns the HasCpanel field if non-nil, zero value otherwise.

### GetHasCpanelOk

`func (o *VpsServiceAddons) GetHasCpanelOk() (*bool, bool)`

GetHasCpanelOk returns a tuple with the HasCpanel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHasCpanel

`func (o *VpsServiceAddons) SetHasCpanel(v bool)`

SetHasCpanel sets HasCpanel field to given value.

### HasHasCpanel

`func (o *VpsServiceAddons) HasHasCpanel() bool`

HasHasCpanel returns a boolean if a field has been set.

### GetHasDirectadmin

`func (o *VpsServiceAddons) GetHasDirectadmin() bool`

GetHasDirectadmin returns the HasDirectadmin field if non-nil, zero value otherwise.

### GetHasDirectadminOk

`func (o *VpsServiceAddons) GetHasDirectadminOk() (*bool, bool)`

GetHasDirectadminOk returns a tuple with the HasDirectadmin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHasDirectadmin

`func (o *VpsServiceAddons) SetHasDirectadmin(v bool)`

SetHasDirectadmin sets HasDirectadmin field to given value.

### HasHasDirectadmin

`func (o *VpsServiceAddons) HasHasDirectadmin() bool`

HasHasDirectadmin returns a boolean if a field has been set.

### GetHasFantastico

`func (o *VpsServiceAddons) GetHasFantastico() bool`

GetHasFantastico returns the HasFantastico field if non-nil, zero value otherwise.

### GetHasFantasticoOk

`func (o *VpsServiceAddons) GetHasFantasticoOk() (*bool, bool)`

GetHasFantasticoOk returns a tuple with the HasFantastico field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHasFantastico

`func (o *VpsServiceAddons) SetHasFantastico(v bool)`

SetHasFantastico sets HasFantastico field to given value.

### HasHasFantastico

`func (o *VpsServiceAddons) HasHasFantastico() bool`

HasHasFantastico returns a boolean if a field has been set.

### GetHasSoftaculous

`func (o *VpsServiceAddons) GetHasSoftaculous() bool`

GetHasSoftaculous returns the HasSoftaculous field if non-nil, zero value otherwise.

### GetHasSoftaculousOk

`func (o *VpsServiceAddons) GetHasSoftaculousOk() (*bool, bool)`

GetHasSoftaculousOk returns a tuple with the HasSoftaculous field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHasSoftaculous

`func (o *VpsServiceAddons) SetHasSoftaculous(v bool)`

SetHasSoftaculous sets HasSoftaculous field to given value.

### HasHasSoftaculous

`func (o *VpsServiceAddons) HasHasSoftaculous() bool`

HasHasSoftaculous returns a boolean if a field has been set.

### GetHasHdspace

`func (o *VpsServiceAddons) GetHasHdspace() bool`

GetHasHdspace returns the HasHdspace field if non-nil, zero value otherwise.

### GetHasHdspaceOk

`func (o *VpsServiceAddons) GetHasHdspaceOk() (*bool, bool)`

GetHasHdspaceOk returns a tuple with the HasHdspace field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHasHdspace

`func (o *VpsServiceAddons) SetHasHdspace(v bool)`

SetHasHdspace sets HasHdspace field to given value.

### HasHasHdspace

`func (o *VpsServiceAddons) HasHasHdspace() bool`

HasHasHdspace returns a boolean if a field has been set.

### GetDedicatedIp

`func (o *VpsServiceAddons) GetDedicatedIp() bool`

GetDedicatedIp returns the DedicatedIp field if non-nil, zero value otherwise.

### GetDedicatedIpOk

`func (o *VpsServiceAddons) GetDedicatedIpOk() (*bool, bool)`

GetDedicatedIpOk returns a tuple with the DedicatedIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDedicatedIp

`func (o *VpsServiceAddons) SetDedicatedIp(v bool)`

SetDedicatedIp sets DedicatedIp field to given value.

### HasDedicatedIp

`func (o *VpsServiceAddons) HasDedicatedIp() bool`

HasDedicatedIp returns a boolean if a field has been set.

### GetExtraIps

`func (o *VpsServiceAddons) GetExtraIps() []string`

GetExtraIps returns the ExtraIps field if non-nil, zero value otherwise.

### GetExtraIpsOk

`func (o *VpsServiceAddons) GetExtraIpsOk() (*[]string, bool)`

GetExtraIpsOk returns a tuple with the ExtraIps field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraIps

`func (o *VpsServiceAddons) SetExtraIps(v []string)`

SetExtraIps sets ExtraIps field to given value.

### HasExtraIps

`func (o *VpsServiceAddons) HasExtraIps() bool`

HasExtraIps returns a boolean if a field has been set.

### GetExtraIps6

`func (o *VpsServiceAddons) GetExtraIps6() []string`

GetExtraIps6 returns the ExtraIps6 field if non-nil, zero value otherwise.

### GetExtraIps6Ok

`func (o *VpsServiceAddons) GetExtraIps6Ok() (*[]string, bool)`

GetExtraIps6Ok returns a tuple with the ExtraIps6 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraIps6

`func (o *VpsServiceAddons) SetExtraIps6(v []string)`

SetExtraIps6 sets ExtraIps6 field to given value.

### HasExtraIps6

`func (o *VpsServiceAddons) HasExtraIps6() bool`

HasExtraIps6 returns a boolean if a field has been set.

### GetUnpaidIps

`func (o *VpsServiceAddons) GetUnpaidIps() []string`

GetUnpaidIps returns the UnpaidIps field if non-nil, zero value otherwise.

### GetUnpaidIpsOk

`func (o *VpsServiceAddons) GetUnpaidIpsOk() (*[]string, bool)`

GetUnpaidIpsOk returns a tuple with the UnpaidIps field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnpaidIps

`func (o *VpsServiceAddons) SetUnpaidIps(v []string)`

SetUnpaidIps sets UnpaidIps field to given value.

### HasUnpaidIps

`func (o *VpsServiceAddons) HasUnpaidIps() bool`

HasUnpaidIps returns a boolean if a field has been set.

### GetIps

`func (o *VpsServiceAddons) GetIps() []string`

GetIps returns the Ips field if non-nil, zero value otherwise.

### GetIpsOk

`func (o *VpsServiceAddons) GetIpsOk() (*[]string, bool)`

GetIpsOk returns a tuple with the Ips field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIps

`func (o *VpsServiceAddons) SetIps(v []string)`

SetIps sets Ips field to given value.

### HasIps

`func (o *VpsServiceAddons) HasIps() bool`

HasIps returns a boolean if a field has been set.

### GetIps6

`func (o *VpsServiceAddons) GetIps6() []string`

GetIps6 returns the Ips6 field if non-nil, zero value otherwise.

### GetIps6Ok

`func (o *VpsServiceAddons) GetIps6Ok() (*[]string, bool)`

GetIps6Ok returns a tuple with the Ips6 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIps6

`func (o *VpsServiceAddons) SetIps6(v []string)`

SetIps6 sets Ips6 field to given value.

### HasIps6

`func (o *VpsServiceAddons) HasIps6() bool`

HasIps6 returns a boolean if a field has been set.

### GetCpanelId

`func (o *VpsServiceAddons) GetCpanelId() int32`

GetCpanelId returns the CpanelId field if non-nil, zero value otherwise.

### GetCpanelIdOk

`func (o *VpsServiceAddons) GetCpanelIdOk() (*int32, bool)`

GetCpanelIdOk returns a tuple with the CpanelId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpanelId

`func (o *VpsServiceAddons) SetCpanelId(v int32)`

SetCpanelId sets CpanelId field to given value.

### HasCpanelId

`func (o *VpsServiceAddons) HasCpanelId() bool`

HasCpanelId returns a boolean if a field has been set.

### GetCost

`func (o *VpsServiceAddons) GetCost() int32`

GetCost returns the Cost field if non-nil, zero value otherwise.

### GetCostOk

`func (o *VpsServiceAddons) GetCostOk() (*int32, bool)`

GetCostOk returns a tuple with the Cost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCost

`func (o *VpsServiceAddons) SetCost(v int32)`

SetCost sets Cost field to given value.

### HasCost

`func (o *VpsServiceAddons) HasCost() bool`

HasCost returns a boolean if a field has been set.

### GetIds

`func (o *VpsServiceAddons) GetIds() []string`

GetIds returns the Ids field if non-nil, zero value otherwise.

### GetIdsOk

`func (o *VpsServiceAddons) GetIdsOk() (*[]string, bool)`

GetIdsOk returns a tuple with the Ids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIds

`func (o *VpsServiceAddons) SetIds(v []string)`

SetIds sets Ids field to given value.

### HasIds

`func (o *VpsServiceAddons) HasIds() bool`

HasIds returns a boolean if a field has been set.

### GetRdata

`func (o *VpsServiceAddons) GetRdata() []string`

GetRdata returns the Rdata field if non-nil, zero value otherwise.

### GetRdataOk

`func (o *VpsServiceAddons) GetRdataOk() (*[]string, bool)`

GetRdataOk returns a tuple with the Rdata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRdata

`func (o *VpsServiceAddons) SetRdata(v []string)`

SetRdata sets Rdata field to given value.

### HasRdata

`func (o *VpsServiceAddons) HasRdata() bool`

HasRdata returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


