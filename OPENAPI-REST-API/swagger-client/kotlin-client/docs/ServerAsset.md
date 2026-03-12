# ServerAsset

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | [**kotlin.Int**](.md) | Unique identifier for the asset. | 
**orderId** | [**kotlin.String**](.md) | Order identifier for the asset. | 
**hostname** | [**kotlin.String**](.md) | Hostname associated with the asset. | 
**status** | [**kotlin.String**](.md) | Status of the asset. | 
**primaryIpv4** | [**kotlin.String**](.md) | Primary IPv4 address of the asset. | 
**primaryIpv6** | [**kotlin.String**](.md) | Primary IPv6 address of the asset. | 
**mac** | [**kotlin.Any**](.md) | MAC address associated with the asset. |  [optional]
**datacenter** | [**kotlin.String**](.md) | Datacenter identifier for the asset. | 
**typeId** | [**kotlin.String**](.md) | Type identifier for the asset. | 
**assetTag** | [**kotlin.String**](.md) | Asset tag associated with the asset. | 
**rack** | [**kotlin.String**](.md) | Rack identifier for the asset. | 
**row** | [**kotlin.String**](.md) | Row identifier for the asset. | 
**col** | [**kotlin.String**](.md) | Column identifier for the asset. | 
**unitStart** | [**kotlin.String**](.md) | Starting unit identifier for the asset. | 
**unitEnd** | [**kotlin.String**](.md) | Ending unit identifier for the asset. | 
**unitSub** | [**kotlin.String**](.md) | Subunit identifier for the asset. | 
**ipmiMac** | [**kotlin.String**](.md) | IPMI MAC address associated with the asset. | 
**ipmiIp** | [**kotlin.String**](.md) | IPMI IP address associated with the asset. | 
**ipmiAdminUsername** | [**kotlin.Any**](.md) | IPMI admin username associated with the asset. |  [optional]
**ipmiAdminPassword** | [**kotlin.Any**](.md) | IPMI admin password associated with the asset. |  [optional]
**ipmiClientUsername** | [**kotlin.Any**](.md) | IPMI client username associated with the asset. |  [optional]
**ipmiClientPassword** | [**kotlin.Any**](.md) | IPMI client password associated with the asset. |  [optional]
**ipmiUpdated** | [**kotlin.Any**](.md) | IPMI update status associated with the asset. |  [optional]
**ipmiWorking** | [**kotlin.String**](.md) | IPMI working status associated with the asset. | 
**company** | [**kotlin.String**](.md) | Company associated with the asset. | 
**comments** | [**kotlin.String**](.md) | Comments associated with the asset. | 
**make** | [**kotlin.String**](.md) | Make of the asset. | 
**model** | [**kotlin.String**](.md) | Model of the asset. | 
**description** | [**kotlin.String**](.md) | Description of the asset. | 
**customerId** | [**kotlin.String**](.md) | Customer identifier for the asset. | 
**externalId** | [**kotlin.String**](.md) | External identifier for the asset. | 
**billingStatus** | [**kotlin.String**](.md) | Billing status of the asset. | 
**overdue** | [**kotlin.String**](.md) | Overdue status of the asset. | 
**createTimestamp** | [**kotlin.Any**](.md) | Timestamp of asset creation. |  [optional]
**updateTimestamp** | [**kotlin.Any**](.md) | Timestamp of asset update. |  [optional]
**assetId** | [**kotlin.String**](.md) | Asset identifier for the asset. | 
**assetName** | [**kotlin.String**](.md) | Name of the asset. | 
**rackId** | [**kotlin.String**](.md) | Rack identifier for the asset. | 
**rackName** | [**kotlin.String**](.md) | Rack name associated with the asset. | 
**rackLocation** | [**kotlin.String**](.md) | Location of the rack associated with the asset. | 
**rackSize** | [**kotlin.String**](.md) | Size of the rack associated with the asset. | 
**rackX** | [**kotlin.String**](.md) | X-coordinate of the asset within the rack. | 
**rackY** | [**kotlin.String**](.md) | Y-coordinate of the asset within the rack. | 
**comment** | [**kotlin.Any**](.md) | Comment associated with the asset. |  [optional]
**switchports** | [**kotlin.Array&lt;kotlin.Int&gt;**](.md) | List of switchports associated with the asset. | 
**vlans** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | List of VLANs associated with the asset. | 
**vlans6** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | List of IPv6 VLANs associated with the asset. | 
**lease** | [**ServerLease**](ServerLease.md) |  | 
