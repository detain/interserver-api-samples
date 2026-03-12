# ServerAsset

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Integer** | Unique identifier for the asset. | 
**orderId** | **String** | Order identifier for the asset. | 
**hostname** | **String** | Hostname associated with the asset. | 
**status** | **String** | Status of the asset. | 
**primaryIpv4** | **String** | Primary IPv4 address of the asset. | 
**primaryIpv6** | **String** | Primary IPv6 address of the asset. | 
**mac** | **Object** | MAC address associated with the asset. |  [optional]
**datacenter** | **String** | Datacenter identifier for the asset. | 
**typeId** | **String** | Type identifier for the asset. | 
**assetTag** | **String** | Asset tag associated with the asset. | 
**rack** | **String** | Rack identifier for the asset. | 
**row** | **String** | Row identifier for the asset. | 
**col** | **String** | Column identifier for the asset. | 
**unitStart** | **String** | Starting unit identifier for the asset. | 
**unitEnd** | **String** | Ending unit identifier for the asset. | 
**unitSub** | **String** | Subunit identifier for the asset. | 
**ipmiMac** | **String** | IPMI MAC address associated with the asset. | 
**ipmiIp** | **String** | IPMI IP address associated with the asset. | 
**ipmiAdminUsername** | **Object** | IPMI admin username associated with the asset. |  [optional]
**ipmiAdminPassword** | **Object** | IPMI admin password associated with the asset. |  [optional]
**ipmiClientUsername** | **Object** | IPMI client username associated with the asset. |  [optional]
**ipmiClientPassword** | **Object** | IPMI client password associated with the asset. |  [optional]
**ipmiUpdated** | **Object** | IPMI update status associated with the asset. |  [optional]
**ipmiWorking** | **String** | IPMI working status associated with the asset. | 
**company** | **String** | Company associated with the asset. | 
**comments** | **String** | Comments associated with the asset. | 
**make** | **String** | Make of the asset. | 
**model** | **String** | Model of the asset. | 
**description** | **String** | Description of the asset. | 
**customerId** | **String** | Customer identifier for the asset. | 
**externalId** | **String** | External identifier for the asset. | 
**billingStatus** | **String** | Billing status of the asset. | 
**overdue** | **String** | Overdue status of the asset. | 
**createTimestamp** | **Object** | Timestamp of asset creation. |  [optional]
**updateTimestamp** | **Object** | Timestamp of asset update. |  [optional]
**assetId** | **String** | Asset identifier for the asset. | 
**assetName** | **String** | Name of the asset. | 
**rackId** | **String** | Rack identifier for the asset. | 
**rackName** | **String** | Rack name associated with the asset. | 
**rackLocation** | **String** | Location of the rack associated with the asset. | 
**rackSize** | **String** | Size of the rack associated with the asset. | 
**rackX** | **String** | X-coordinate of the asset within the rack. | 
**rackY** | **String** | Y-coordinate of the asset within the rack. | 
**comment** | **Object** | Comment associated with the asset. |  [optional]
**switchports** | **List&lt;Integer&gt;** | List of switchports associated with the asset. | 
**vlans** | **List&lt;String&gt;** | List of VLANs associated with the asset. | 
**vlans6** | **List&lt;String&gt;** | List of IPv6 VLANs associated with the asset. | 
**lease** | [**ServerLease**](ServerLease.md) |  | 
