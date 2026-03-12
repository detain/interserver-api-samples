# IO.Swagger.Model.ServerAsset
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **int?** | Unique identifier for the asset. | 
**OrderId** | **string** | Order identifier for the asset. | 
**Hostname** | **string** | Hostname associated with the asset. | 
**Status** | **string** | Status of the asset. | 
**PrimaryIpv4** | **string** | Primary IPv4 address of the asset. | 
**PrimaryIpv6** | **string** | Primary IPv6 address of the asset. | 
**Mac** | **Object** | MAC address associated with the asset. | [optional] 
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
**IpmiAdminUsername** | **Object** | IPMI admin username associated with the asset. | [optional] 
**IpmiAdminPassword** | **Object** | IPMI admin password associated with the asset. | [optional] 
**IpmiClientUsername** | **Object** | IPMI client username associated with the asset. | [optional] 
**IpmiClientPassword** | **Object** | IPMI client password associated with the asset. | [optional] 
**IpmiUpdated** | **Object** | IPMI update status associated with the asset. | [optional] 
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
**CreateTimestamp** | **Object** | Timestamp of asset creation. | [optional] 
**UpdateTimestamp** | **Object** | Timestamp of asset update. | [optional] 
**AssetId** | **string** | Asset identifier for the asset. | 
**AssetName** | **string** | Name of the asset. | 
**RackId** | **string** | Rack identifier for the asset. | 
**RackName** | **string** | Rack name associated with the asset. | 
**RackLocation** | **string** | Location of the rack associated with the asset. | 
**RackSize** | **string** | Size of the rack associated with the asset. | 
**RackX** | **string** | X-coordinate of the asset within the rack. | 
**RackY** | **string** | Y-coordinate of the asset within the rack. | 
**Comment** | **Object** | Comment associated with the asset. | [optional] 
**Switchports** | **List&lt;int?&gt;** | List of switchports associated with the asset. | 
**Vlans** | **List&lt;string&gt;** | List of VLANs associated with the asset. | 
**Vlans6** | **List&lt;string&gt;** | List of IPv6 VLANs associated with the asset. | 
**Lease** | [**ServerLease**](ServerLease.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

