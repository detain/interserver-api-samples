# ServerAsset

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int32** | Unique identifier for the asset. | 
**OrderId** | **string** | Order identifier for the asset. | 
**Hostname** | **string** | Hostname associated with the asset. | 
**Status** | **string** | Status of the asset. | 
**PrimaryIpv4** | **string** | Primary IPv4 address of the asset. | 
**PrimaryIpv6** | **string** | Primary IPv6 address of the asset. | 
**Mac** | Pointer to **interface{}** | MAC address associated with the asset. | [optional] 
**Datacenter** | **string** | Datacenter identifier for the asset. | 
**TypeId** | **string** | Type identifier for the asset. | 
**AssetTag** | **string** | Asset tag associated with the asset. | 
**Rack** | **string** | Rack identifier for the asset. | 
**Row** | **string** | Row identifier for the asset. | 
**Col** | **string** | Column identifier for the asset. | 
**UnitStart** | **string** | Starting unit identifier for the asset. | 
**UnitEnd** | **string** | Ending unit identifier for the asset. | 
**UnitSub** | **string** | Subunit identifier for the asset. | 
**IpmiMac** | **string** | IPMI MAC address associated with the asset. | 
**IpmiIp** | **string** | IPMI IP address associated with the asset. | 
**IpmiAdminUsername** | Pointer to **interface{}** | IPMI admin username associated with the asset. | [optional] 
**IpmiAdminPassword** | Pointer to **interface{}** | IPMI admin password associated with the asset. | [optional] 
**IpmiClientUsername** | Pointer to **interface{}** | IPMI client username associated with the asset. | [optional] 
**IpmiClientPassword** | Pointer to **interface{}** | IPMI client password associated with the asset. | [optional] 
**IpmiUpdated** | Pointer to **interface{}** | IPMI update status associated with the asset. | [optional] 
**IpmiWorking** | **string** | IPMI working status associated with the asset. | 
**Company** | **string** | Company associated with the asset. | 
**Comments** | **string** | Comments associated with the asset. | 
**Make** | **string** | Make of the asset. | 
**Model** | **string** | Model of the asset. | 
**Description** | **string** | Description of the asset. | 
**CustomerId** | **string** | Customer identifier for the asset. | 
**ExternalId** | **string** | External identifier for the asset. | 
**BillingStatus** | **string** | Billing status of the asset. | 
**Overdue** | **string** | Overdue status of the asset. | 
**CreateTimestamp** | Pointer to **interface{}** | Timestamp of asset creation. | [optional] 
**UpdateTimestamp** | Pointer to **interface{}** | Timestamp of asset update. | [optional] 
**AssetId** | **string** | Asset identifier for the asset. | 
**AssetName** | **string** | Name of the asset. | 
**RackId** | **string** | Rack identifier for the asset. | 
**RackName** | **string** | Rack name associated with the asset. | 
**RackLocation** | **string** | Location of the rack associated with the asset. | 
**RackSize** | **string** | Size of the rack associated with the asset. | 
**RackX** | **string** | X-coordinate of the asset within the rack. | 
**RackY** | **string** | Y-coordinate of the asset within the rack. | 
**Comment** | Pointer to **interface{}** | Comment associated with the asset. | [optional] 
**Switchports** | **[]int32** | List of switchports associated with the asset. | 
**Vlans** | **[]string** | List of VLANs associated with the asset. | 
**Vlans6** | **[]string** | List of IPv6 VLANs associated with the asset. | 
**Lease** | [**ServerLease**](ServerLease.md) |  | 

## Methods

### NewServerAsset

`func NewServerAsset(id int32, orderId string, hostname string, status string, primaryIpv4 string, primaryIpv6 string, datacenter string, typeId string, assetTag string, rack string, row string, col string, unitStart string, unitEnd string, unitSub string, ipmiMac string, ipmiIp string, ipmiWorking string, company string, comments string, make string, model string, description string, customerId string, externalId string, billingStatus string, overdue string, assetId string, assetName string, rackId string, rackName string, rackLocation string, rackSize string, rackX string, rackY string, switchports []int32, vlans []string, vlans6 []string, lease ServerLease, ) *ServerAsset`

NewServerAsset instantiates a new ServerAsset object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerAssetWithDefaults

`func NewServerAssetWithDefaults() *ServerAsset`

NewServerAssetWithDefaults instantiates a new ServerAsset object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *ServerAsset) GetId() int32`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *ServerAsset) GetIdOk() (*int32, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *ServerAsset) SetId(v int32)`

SetId sets Id field to given value.


### GetOrderId

`func (o *ServerAsset) GetOrderId() string`

GetOrderId returns the OrderId field if non-nil, zero value otherwise.

### GetOrderIdOk

`func (o *ServerAsset) GetOrderIdOk() (*string, bool)`

GetOrderIdOk returns a tuple with the OrderId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrderId

`func (o *ServerAsset) SetOrderId(v string)`

SetOrderId sets OrderId field to given value.


### GetHostname

`func (o *ServerAsset) GetHostname() string`

GetHostname returns the Hostname field if non-nil, zero value otherwise.

### GetHostnameOk

`func (o *ServerAsset) GetHostnameOk() (*string, bool)`

GetHostnameOk returns a tuple with the Hostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHostname

`func (o *ServerAsset) SetHostname(v string)`

SetHostname sets Hostname field to given value.


### GetStatus

`func (o *ServerAsset) GetStatus() string`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *ServerAsset) GetStatusOk() (*string, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *ServerAsset) SetStatus(v string)`

SetStatus sets Status field to given value.


### GetPrimaryIpv4

`func (o *ServerAsset) GetPrimaryIpv4() string`

GetPrimaryIpv4 returns the PrimaryIpv4 field if non-nil, zero value otherwise.

### GetPrimaryIpv4Ok

`func (o *ServerAsset) GetPrimaryIpv4Ok() (*string, bool)`

GetPrimaryIpv4Ok returns a tuple with the PrimaryIpv4 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrimaryIpv4

`func (o *ServerAsset) SetPrimaryIpv4(v string)`

SetPrimaryIpv4 sets PrimaryIpv4 field to given value.


### GetPrimaryIpv6

`func (o *ServerAsset) GetPrimaryIpv6() string`

GetPrimaryIpv6 returns the PrimaryIpv6 field if non-nil, zero value otherwise.

### GetPrimaryIpv6Ok

`func (o *ServerAsset) GetPrimaryIpv6Ok() (*string, bool)`

GetPrimaryIpv6Ok returns a tuple with the PrimaryIpv6 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrimaryIpv6

`func (o *ServerAsset) SetPrimaryIpv6(v string)`

SetPrimaryIpv6 sets PrimaryIpv6 field to given value.


### GetMac

`func (o *ServerAsset) GetMac() interface{}`

GetMac returns the Mac field if non-nil, zero value otherwise.

### GetMacOk

`func (o *ServerAsset) GetMacOk() (*interface{}, bool)`

GetMacOk returns a tuple with the Mac field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMac

`func (o *ServerAsset) SetMac(v interface{})`

SetMac sets Mac field to given value.

### HasMac

`func (o *ServerAsset) HasMac() bool`

HasMac returns a boolean if a field has been set.

### SetMacNil

`func (o *ServerAsset) SetMacNil(b bool)`

 SetMacNil sets the value for Mac to be an explicit nil

### UnsetMac
`func (o *ServerAsset) UnsetMac()`

UnsetMac ensures that no value is present for Mac, not even an explicit nil
### GetDatacenter

`func (o *ServerAsset) GetDatacenter() string`

GetDatacenter returns the Datacenter field if non-nil, zero value otherwise.

### GetDatacenterOk

`func (o *ServerAsset) GetDatacenterOk() (*string, bool)`

GetDatacenterOk returns a tuple with the Datacenter field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDatacenter

`func (o *ServerAsset) SetDatacenter(v string)`

SetDatacenter sets Datacenter field to given value.


### GetTypeId

`func (o *ServerAsset) GetTypeId() string`

GetTypeId returns the TypeId field if non-nil, zero value otherwise.

### GetTypeIdOk

`func (o *ServerAsset) GetTypeIdOk() (*string, bool)`

GetTypeIdOk returns a tuple with the TypeId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTypeId

`func (o *ServerAsset) SetTypeId(v string)`

SetTypeId sets TypeId field to given value.


### GetAssetTag

`func (o *ServerAsset) GetAssetTag() string`

GetAssetTag returns the AssetTag field if non-nil, zero value otherwise.

### GetAssetTagOk

`func (o *ServerAsset) GetAssetTagOk() (*string, bool)`

GetAssetTagOk returns a tuple with the AssetTag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetTag

`func (o *ServerAsset) SetAssetTag(v string)`

SetAssetTag sets AssetTag field to given value.


### GetRack

`func (o *ServerAsset) GetRack() string`

GetRack returns the Rack field if non-nil, zero value otherwise.

### GetRackOk

`func (o *ServerAsset) GetRackOk() (*string, bool)`

GetRackOk returns a tuple with the Rack field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRack

`func (o *ServerAsset) SetRack(v string)`

SetRack sets Rack field to given value.


### GetRow

`func (o *ServerAsset) GetRow() string`

GetRow returns the Row field if non-nil, zero value otherwise.

### GetRowOk

`func (o *ServerAsset) GetRowOk() (*string, bool)`

GetRowOk returns a tuple with the Row field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRow

`func (o *ServerAsset) SetRow(v string)`

SetRow sets Row field to given value.


### GetCol

`func (o *ServerAsset) GetCol() string`

GetCol returns the Col field if non-nil, zero value otherwise.

### GetColOk

`func (o *ServerAsset) GetColOk() (*string, bool)`

GetColOk returns a tuple with the Col field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCol

`func (o *ServerAsset) SetCol(v string)`

SetCol sets Col field to given value.


### GetUnitStart

`func (o *ServerAsset) GetUnitStart() string`

GetUnitStart returns the UnitStart field if non-nil, zero value otherwise.

### GetUnitStartOk

`func (o *ServerAsset) GetUnitStartOk() (*string, bool)`

GetUnitStartOk returns a tuple with the UnitStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitStart

`func (o *ServerAsset) SetUnitStart(v string)`

SetUnitStart sets UnitStart field to given value.


### GetUnitEnd

`func (o *ServerAsset) GetUnitEnd() string`

GetUnitEnd returns the UnitEnd field if non-nil, zero value otherwise.

### GetUnitEndOk

`func (o *ServerAsset) GetUnitEndOk() (*string, bool)`

GetUnitEndOk returns a tuple with the UnitEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitEnd

`func (o *ServerAsset) SetUnitEnd(v string)`

SetUnitEnd sets UnitEnd field to given value.


### GetUnitSub

`func (o *ServerAsset) GetUnitSub() string`

GetUnitSub returns the UnitSub field if non-nil, zero value otherwise.

### GetUnitSubOk

`func (o *ServerAsset) GetUnitSubOk() (*string, bool)`

GetUnitSubOk returns a tuple with the UnitSub field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitSub

`func (o *ServerAsset) SetUnitSub(v string)`

SetUnitSub sets UnitSub field to given value.


### GetIpmiMac

`func (o *ServerAsset) GetIpmiMac() string`

GetIpmiMac returns the IpmiMac field if non-nil, zero value otherwise.

### GetIpmiMacOk

`func (o *ServerAsset) GetIpmiMacOk() (*string, bool)`

GetIpmiMacOk returns a tuple with the IpmiMac field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiMac

`func (o *ServerAsset) SetIpmiMac(v string)`

SetIpmiMac sets IpmiMac field to given value.


### GetIpmiIp

`func (o *ServerAsset) GetIpmiIp() string`

GetIpmiIp returns the IpmiIp field if non-nil, zero value otherwise.

### GetIpmiIpOk

`func (o *ServerAsset) GetIpmiIpOk() (*string, bool)`

GetIpmiIpOk returns a tuple with the IpmiIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiIp

`func (o *ServerAsset) SetIpmiIp(v string)`

SetIpmiIp sets IpmiIp field to given value.


### GetIpmiAdminUsername

`func (o *ServerAsset) GetIpmiAdminUsername() interface{}`

GetIpmiAdminUsername returns the IpmiAdminUsername field if non-nil, zero value otherwise.

### GetIpmiAdminUsernameOk

`func (o *ServerAsset) GetIpmiAdminUsernameOk() (*interface{}, bool)`

GetIpmiAdminUsernameOk returns a tuple with the IpmiAdminUsername field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiAdminUsername

`func (o *ServerAsset) SetIpmiAdminUsername(v interface{})`

SetIpmiAdminUsername sets IpmiAdminUsername field to given value.

### HasIpmiAdminUsername

`func (o *ServerAsset) HasIpmiAdminUsername() bool`

HasIpmiAdminUsername returns a boolean if a field has been set.

### SetIpmiAdminUsernameNil

`func (o *ServerAsset) SetIpmiAdminUsernameNil(b bool)`

 SetIpmiAdminUsernameNil sets the value for IpmiAdminUsername to be an explicit nil

### UnsetIpmiAdminUsername
`func (o *ServerAsset) UnsetIpmiAdminUsername()`

UnsetIpmiAdminUsername ensures that no value is present for IpmiAdminUsername, not even an explicit nil
### GetIpmiAdminPassword

`func (o *ServerAsset) GetIpmiAdminPassword() interface{}`

GetIpmiAdminPassword returns the IpmiAdminPassword field if non-nil, zero value otherwise.

### GetIpmiAdminPasswordOk

`func (o *ServerAsset) GetIpmiAdminPasswordOk() (*interface{}, bool)`

GetIpmiAdminPasswordOk returns a tuple with the IpmiAdminPassword field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiAdminPassword

`func (o *ServerAsset) SetIpmiAdminPassword(v interface{})`

SetIpmiAdminPassword sets IpmiAdminPassword field to given value.

### HasIpmiAdminPassword

`func (o *ServerAsset) HasIpmiAdminPassword() bool`

HasIpmiAdminPassword returns a boolean if a field has been set.

### SetIpmiAdminPasswordNil

`func (o *ServerAsset) SetIpmiAdminPasswordNil(b bool)`

 SetIpmiAdminPasswordNil sets the value for IpmiAdminPassword to be an explicit nil

### UnsetIpmiAdminPassword
`func (o *ServerAsset) UnsetIpmiAdminPassword()`

UnsetIpmiAdminPassword ensures that no value is present for IpmiAdminPassword, not even an explicit nil
### GetIpmiClientUsername

`func (o *ServerAsset) GetIpmiClientUsername() interface{}`

GetIpmiClientUsername returns the IpmiClientUsername field if non-nil, zero value otherwise.

### GetIpmiClientUsernameOk

`func (o *ServerAsset) GetIpmiClientUsernameOk() (*interface{}, bool)`

GetIpmiClientUsernameOk returns a tuple with the IpmiClientUsername field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiClientUsername

`func (o *ServerAsset) SetIpmiClientUsername(v interface{})`

SetIpmiClientUsername sets IpmiClientUsername field to given value.

### HasIpmiClientUsername

`func (o *ServerAsset) HasIpmiClientUsername() bool`

HasIpmiClientUsername returns a boolean if a field has been set.

### SetIpmiClientUsernameNil

`func (o *ServerAsset) SetIpmiClientUsernameNil(b bool)`

 SetIpmiClientUsernameNil sets the value for IpmiClientUsername to be an explicit nil

### UnsetIpmiClientUsername
`func (o *ServerAsset) UnsetIpmiClientUsername()`

UnsetIpmiClientUsername ensures that no value is present for IpmiClientUsername, not even an explicit nil
### GetIpmiClientPassword

`func (o *ServerAsset) GetIpmiClientPassword() interface{}`

GetIpmiClientPassword returns the IpmiClientPassword field if non-nil, zero value otherwise.

### GetIpmiClientPasswordOk

`func (o *ServerAsset) GetIpmiClientPasswordOk() (*interface{}, bool)`

GetIpmiClientPasswordOk returns a tuple with the IpmiClientPassword field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiClientPassword

`func (o *ServerAsset) SetIpmiClientPassword(v interface{})`

SetIpmiClientPassword sets IpmiClientPassword field to given value.

### HasIpmiClientPassword

`func (o *ServerAsset) HasIpmiClientPassword() bool`

HasIpmiClientPassword returns a boolean if a field has been set.

### SetIpmiClientPasswordNil

`func (o *ServerAsset) SetIpmiClientPasswordNil(b bool)`

 SetIpmiClientPasswordNil sets the value for IpmiClientPassword to be an explicit nil

### UnsetIpmiClientPassword
`func (o *ServerAsset) UnsetIpmiClientPassword()`

UnsetIpmiClientPassword ensures that no value is present for IpmiClientPassword, not even an explicit nil
### GetIpmiUpdated

`func (o *ServerAsset) GetIpmiUpdated() interface{}`

GetIpmiUpdated returns the IpmiUpdated field if non-nil, zero value otherwise.

### GetIpmiUpdatedOk

`func (o *ServerAsset) GetIpmiUpdatedOk() (*interface{}, bool)`

GetIpmiUpdatedOk returns a tuple with the IpmiUpdated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiUpdated

`func (o *ServerAsset) SetIpmiUpdated(v interface{})`

SetIpmiUpdated sets IpmiUpdated field to given value.

### HasIpmiUpdated

`func (o *ServerAsset) HasIpmiUpdated() bool`

HasIpmiUpdated returns a boolean if a field has been set.

### SetIpmiUpdatedNil

`func (o *ServerAsset) SetIpmiUpdatedNil(b bool)`

 SetIpmiUpdatedNil sets the value for IpmiUpdated to be an explicit nil

### UnsetIpmiUpdated
`func (o *ServerAsset) UnsetIpmiUpdated()`

UnsetIpmiUpdated ensures that no value is present for IpmiUpdated, not even an explicit nil
### GetIpmiWorking

`func (o *ServerAsset) GetIpmiWorking() string`

GetIpmiWorking returns the IpmiWorking field if non-nil, zero value otherwise.

### GetIpmiWorkingOk

`func (o *ServerAsset) GetIpmiWorkingOk() (*string, bool)`

GetIpmiWorkingOk returns a tuple with the IpmiWorking field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiWorking

`func (o *ServerAsset) SetIpmiWorking(v string)`

SetIpmiWorking sets IpmiWorking field to given value.


### GetCompany

`func (o *ServerAsset) GetCompany() string`

GetCompany returns the Company field if non-nil, zero value otherwise.

### GetCompanyOk

`func (o *ServerAsset) GetCompanyOk() (*string, bool)`

GetCompanyOk returns a tuple with the Company field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCompany

`func (o *ServerAsset) SetCompany(v string)`

SetCompany sets Company field to given value.


### GetComments

`func (o *ServerAsset) GetComments() string`

GetComments returns the Comments field if non-nil, zero value otherwise.

### GetCommentsOk

`func (o *ServerAsset) GetCommentsOk() (*string, bool)`

GetCommentsOk returns a tuple with the Comments field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetComments

`func (o *ServerAsset) SetComments(v string)`

SetComments sets Comments field to given value.


### GetMake

`func (o *ServerAsset) GetMake() string`

GetMake returns the Make field if non-nil, zero value otherwise.

### GetMakeOk

`func (o *ServerAsset) GetMakeOk() (*string, bool)`

GetMakeOk returns a tuple with the Make field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMake

`func (o *ServerAsset) SetMake(v string)`

SetMake sets Make field to given value.


### GetModel

`func (o *ServerAsset) GetModel() string`

GetModel returns the Model field if non-nil, zero value otherwise.

### GetModelOk

`func (o *ServerAsset) GetModelOk() (*string, bool)`

GetModelOk returns a tuple with the Model field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetModel

`func (o *ServerAsset) SetModel(v string)`

SetModel sets Model field to given value.


### GetDescription

`func (o *ServerAsset) GetDescription() string`

GetDescription returns the Description field if non-nil, zero value otherwise.

### GetDescriptionOk

`func (o *ServerAsset) GetDescriptionOk() (*string, bool)`

GetDescriptionOk returns a tuple with the Description field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDescription

`func (o *ServerAsset) SetDescription(v string)`

SetDescription sets Description field to given value.


### GetCustomerId

`func (o *ServerAsset) GetCustomerId() string`

GetCustomerId returns the CustomerId field if non-nil, zero value otherwise.

### GetCustomerIdOk

`func (o *ServerAsset) GetCustomerIdOk() (*string, bool)`

GetCustomerIdOk returns a tuple with the CustomerId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustomerId

`func (o *ServerAsset) SetCustomerId(v string)`

SetCustomerId sets CustomerId field to given value.


### GetExternalId

`func (o *ServerAsset) GetExternalId() string`

GetExternalId returns the ExternalId field if non-nil, zero value otherwise.

### GetExternalIdOk

`func (o *ServerAsset) GetExternalIdOk() (*string, bool)`

GetExternalIdOk returns a tuple with the ExternalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalId

`func (o *ServerAsset) SetExternalId(v string)`

SetExternalId sets ExternalId field to given value.


### GetBillingStatus

`func (o *ServerAsset) GetBillingStatus() string`

GetBillingStatus returns the BillingStatus field if non-nil, zero value otherwise.

### GetBillingStatusOk

`func (o *ServerAsset) GetBillingStatusOk() (*string, bool)`

GetBillingStatusOk returns a tuple with the BillingStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingStatus

`func (o *ServerAsset) SetBillingStatus(v string)`

SetBillingStatus sets BillingStatus field to given value.


### GetOverdue

`func (o *ServerAsset) GetOverdue() string`

GetOverdue returns the Overdue field if non-nil, zero value otherwise.

### GetOverdueOk

`func (o *ServerAsset) GetOverdueOk() (*string, bool)`

GetOverdueOk returns a tuple with the Overdue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverdue

`func (o *ServerAsset) SetOverdue(v string)`

SetOverdue sets Overdue field to given value.


### GetCreateTimestamp

`func (o *ServerAsset) GetCreateTimestamp() interface{}`

GetCreateTimestamp returns the CreateTimestamp field if non-nil, zero value otherwise.

### GetCreateTimestampOk

`func (o *ServerAsset) GetCreateTimestampOk() (*interface{}, bool)`

GetCreateTimestampOk returns a tuple with the CreateTimestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCreateTimestamp

`func (o *ServerAsset) SetCreateTimestamp(v interface{})`

SetCreateTimestamp sets CreateTimestamp field to given value.

### HasCreateTimestamp

`func (o *ServerAsset) HasCreateTimestamp() bool`

HasCreateTimestamp returns a boolean if a field has been set.

### SetCreateTimestampNil

`func (o *ServerAsset) SetCreateTimestampNil(b bool)`

 SetCreateTimestampNil sets the value for CreateTimestamp to be an explicit nil

### UnsetCreateTimestamp
`func (o *ServerAsset) UnsetCreateTimestamp()`

UnsetCreateTimestamp ensures that no value is present for CreateTimestamp, not even an explicit nil
### GetUpdateTimestamp

`func (o *ServerAsset) GetUpdateTimestamp() interface{}`

GetUpdateTimestamp returns the UpdateTimestamp field if non-nil, zero value otherwise.

### GetUpdateTimestampOk

`func (o *ServerAsset) GetUpdateTimestampOk() (*interface{}, bool)`

GetUpdateTimestampOk returns a tuple with the UpdateTimestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpdateTimestamp

`func (o *ServerAsset) SetUpdateTimestamp(v interface{})`

SetUpdateTimestamp sets UpdateTimestamp field to given value.

### HasUpdateTimestamp

`func (o *ServerAsset) HasUpdateTimestamp() bool`

HasUpdateTimestamp returns a boolean if a field has been set.

### SetUpdateTimestampNil

`func (o *ServerAsset) SetUpdateTimestampNil(b bool)`

 SetUpdateTimestampNil sets the value for UpdateTimestamp to be an explicit nil

### UnsetUpdateTimestamp
`func (o *ServerAsset) UnsetUpdateTimestamp()`

UnsetUpdateTimestamp ensures that no value is present for UpdateTimestamp, not even an explicit nil
### GetAssetId

`func (o *ServerAsset) GetAssetId() string`

GetAssetId returns the AssetId field if non-nil, zero value otherwise.

### GetAssetIdOk

`func (o *ServerAsset) GetAssetIdOk() (*string, bool)`

GetAssetIdOk returns a tuple with the AssetId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetId

`func (o *ServerAsset) SetAssetId(v string)`

SetAssetId sets AssetId field to given value.


### GetAssetName

`func (o *ServerAsset) GetAssetName() string`

GetAssetName returns the AssetName field if non-nil, zero value otherwise.

### GetAssetNameOk

`func (o *ServerAsset) GetAssetNameOk() (*string, bool)`

GetAssetNameOk returns a tuple with the AssetName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetName

`func (o *ServerAsset) SetAssetName(v string)`

SetAssetName sets AssetName field to given value.


### GetRackId

`func (o *ServerAsset) GetRackId() string`

GetRackId returns the RackId field if non-nil, zero value otherwise.

### GetRackIdOk

`func (o *ServerAsset) GetRackIdOk() (*string, bool)`

GetRackIdOk returns a tuple with the RackId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRackId

`func (o *ServerAsset) SetRackId(v string)`

SetRackId sets RackId field to given value.


### GetRackName

`func (o *ServerAsset) GetRackName() string`

GetRackName returns the RackName field if non-nil, zero value otherwise.

### GetRackNameOk

`func (o *ServerAsset) GetRackNameOk() (*string, bool)`

GetRackNameOk returns a tuple with the RackName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRackName

`func (o *ServerAsset) SetRackName(v string)`

SetRackName sets RackName field to given value.


### GetRackLocation

`func (o *ServerAsset) GetRackLocation() string`

GetRackLocation returns the RackLocation field if non-nil, zero value otherwise.

### GetRackLocationOk

`func (o *ServerAsset) GetRackLocationOk() (*string, bool)`

GetRackLocationOk returns a tuple with the RackLocation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRackLocation

`func (o *ServerAsset) SetRackLocation(v string)`

SetRackLocation sets RackLocation field to given value.


### GetRackSize

`func (o *ServerAsset) GetRackSize() string`

GetRackSize returns the RackSize field if non-nil, zero value otherwise.

### GetRackSizeOk

`func (o *ServerAsset) GetRackSizeOk() (*string, bool)`

GetRackSizeOk returns a tuple with the RackSize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRackSize

`func (o *ServerAsset) SetRackSize(v string)`

SetRackSize sets RackSize field to given value.


### GetRackX

`func (o *ServerAsset) GetRackX() string`

GetRackX returns the RackX field if non-nil, zero value otherwise.

### GetRackXOk

`func (o *ServerAsset) GetRackXOk() (*string, bool)`

GetRackXOk returns a tuple with the RackX field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRackX

`func (o *ServerAsset) SetRackX(v string)`

SetRackX sets RackX field to given value.


### GetRackY

`func (o *ServerAsset) GetRackY() string`

GetRackY returns the RackY field if non-nil, zero value otherwise.

### GetRackYOk

`func (o *ServerAsset) GetRackYOk() (*string, bool)`

GetRackYOk returns a tuple with the RackY field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRackY

`func (o *ServerAsset) SetRackY(v string)`

SetRackY sets RackY field to given value.


### GetComment

`func (o *ServerAsset) GetComment() interface{}`

GetComment returns the Comment field if non-nil, zero value otherwise.

### GetCommentOk

`func (o *ServerAsset) GetCommentOk() (*interface{}, bool)`

GetCommentOk returns a tuple with the Comment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetComment

`func (o *ServerAsset) SetComment(v interface{})`

SetComment sets Comment field to given value.

### HasComment

`func (o *ServerAsset) HasComment() bool`

HasComment returns a boolean if a field has been set.

### SetCommentNil

`func (o *ServerAsset) SetCommentNil(b bool)`

 SetCommentNil sets the value for Comment to be an explicit nil

### UnsetComment
`func (o *ServerAsset) UnsetComment()`

UnsetComment ensures that no value is present for Comment, not even an explicit nil
### GetSwitchports

`func (o *ServerAsset) GetSwitchports() []int32`

GetSwitchports returns the Switchports field if non-nil, zero value otherwise.

### GetSwitchportsOk

`func (o *ServerAsset) GetSwitchportsOk() (*[]int32, bool)`

GetSwitchportsOk returns a tuple with the Switchports field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSwitchports

`func (o *ServerAsset) SetSwitchports(v []int32)`

SetSwitchports sets Switchports field to given value.


### GetVlans

`func (o *ServerAsset) GetVlans() []string`

GetVlans returns the Vlans field if non-nil, zero value otherwise.

### GetVlansOk

`func (o *ServerAsset) GetVlansOk() (*[]string, bool)`

GetVlansOk returns a tuple with the Vlans field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVlans

`func (o *ServerAsset) SetVlans(v []string)`

SetVlans sets Vlans field to given value.


### GetVlans6

`func (o *ServerAsset) GetVlans6() []string`

GetVlans6 returns the Vlans6 field if non-nil, zero value otherwise.

### GetVlans6Ok

`func (o *ServerAsset) GetVlans6Ok() (*[]string, bool)`

GetVlans6Ok returns a tuple with the Vlans6 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVlans6

`func (o *ServerAsset) SetVlans6(v []string)`

SetVlans6 sets Vlans6 field to given value.


### GetLease

`func (o *ServerAsset) GetLease() ServerLease`

GetLease returns the Lease field if non-nil, zero value otherwise.

### GetLeaseOk

`func (o *ServerAsset) GetLeaseOk() (*ServerLease, bool)`

GetLeaseOk returns a tuple with the Lease field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLease

`func (o *ServerAsset) SetLease(v ServerLease)`

SetLease sets Lease field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


