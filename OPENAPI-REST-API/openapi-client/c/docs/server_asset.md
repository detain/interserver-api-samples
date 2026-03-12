# server_asset_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** | Unique identifier for the asset. | 
**order_id** | **char \*** | Order identifier for the asset. | 
**hostname** | **char \*** | Hostname associated with the asset. | 
**status** | **char \*** | Status of the asset. | 
**primary_ipv4** | **char \*** | Primary IPv4 address of the asset. | 
**primary_ipv6** | **char \*** | Primary IPv6 address of the asset. | 
**datacenter** | **char \*** | Datacenter identifier for the asset. | 
**type_id** | **char \*** | Type identifier for the asset. | 
**asset_tag** | **char \*** | Asset tag associated with the asset. | 
**rack** | **char \*** | Rack identifier for the asset. | 
**row** | **char \*** | Row identifier for the asset. | 
**col** | **char \*** | Column identifier for the asset. | 
**unit_start** | **char \*** | Starting unit identifier for the asset. | 
**unit_end** | **char \*** | Ending unit identifier for the asset. | 
**unit_sub** | **char \*** | Subunit identifier for the asset. | 
**ipmi_mac** | **char \*** | IPMI MAC address associated with the asset. | 
**ipmi_ip** | **char \*** | IPMI IP address associated with the asset. | 
**ipmi_working** | **char \*** | IPMI working status associated with the asset. | 
**company** | **char \*** | Company associated with the asset. | 
**comments** | **char \*** | Comments associated with the asset. | 
**make** | **char \*** | Make of the asset. | 
**model** | **char \*** | Model of the asset. | 
**description** | **char \*** | Description of the asset. | 
**customer_id** | **char \*** | Customer identifier for the asset. | 
**external_id** | **char \*** | External identifier for the asset. | 
**billing_status** | **char \*** | Billing status of the asset. | 
**overdue** | **char \*** | Overdue status of the asset. | 
**asset_id** | **char \*** | Asset identifier for the asset. | 
**asset_name** | **char \*** | Name of the asset. | 
**rack_id** | **char \*** | Rack identifier for the asset. | 
**rack_name** | **char \*** | Rack name associated with the asset. | 
**rack_location** | **char \*** | Location of the rack associated with the asset. | 
**rack_size** | **char \*** | Size of the rack associated with the asset. | 
**rack_x** | **char \*** | X-coordinate of the asset within the rack. | 
**rack_y** | **char \*** | Y-coordinate of the asset within the rack. | 
**switchports** | **list_t \*** | List of switchports associated with the asset. | 
**vlans** | **list_t \*** | List of VLANs associated with the asset. | 
**vlans6** | **list_t \*** | List of IPv6 VLANs associated with the asset. | 
**lease** | [**server_lease_t**](server_lease.md) \* |  | 
**mac** | **any_type_t \*** | MAC address associated with the asset. | [optional] 
**ipmi_admin_username** | **any_type_t \*** | IPMI admin username associated with the asset. | [optional] 
**ipmi_admin_password** | **any_type_t \*** | IPMI admin password associated with the asset. | [optional] 
**ipmi_client_username** | **any_type_t \*** | IPMI client username associated with the asset. | [optional] 
**ipmi_client_password** | **any_type_t \*** | IPMI client password associated with the asset. | [optional] 
**ipmi_updated** | **any_type_t \*** | IPMI update status associated with the asset. | [optional] 
**create_timestamp** | **any_type_t \*** | Timestamp of asset creation. | [optional] 
**update_timestamp** | **any_type_t \*** | Timestamp of asset update. | [optional] 
**comment** | **any_type_t \*** | Comment associated with the asset. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


