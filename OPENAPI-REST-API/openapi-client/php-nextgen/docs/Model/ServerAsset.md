# # ServerAsset

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** | Unique identifier for the asset. |
**order_id** | **string** | Order identifier for the asset. |
**hostname** | **string** | Hostname associated with the asset. |
**status** | **string** | Status of the asset. |
**primary_ipv4** | **string** | Primary IPv4 address of the asset. |
**primary_ipv6** | **string** | Primary IPv6 address of the asset. |
**datacenter** | **string** | Datacenter identifier for the asset. |
**type_id** | **string** | Type identifier for the asset. |
**asset_tag** | **string** | Asset tag associated with the asset. |
**rack** | **string** | Rack identifier for the asset. |
**row** | **string** | Row identifier for the asset. |
**col** | **string** | Column identifier for the asset. |
**unit_start** | **string** | Starting unit identifier for the asset. |
**unit_end** | **string** | Ending unit identifier for the asset. |
**unit_sub** | **string** | Subunit identifier for the asset. |
**ipmi_mac** | **string** | IPMI MAC address associated with the asset. |
**ipmi_ip** | **string** | IPMI IP address associated with the asset. |
**ipmi_working** | **string** | IPMI working status associated with the asset. |
**company** | **string** | Company associated with the asset. |
**comments** | **string** | Comments associated with the asset. |
**make** | **string** | Make of the asset. |
**model** | **string** | Model of the asset. |
**description** | **string** | Description of the asset. |
**customer_id** | **string** | Customer identifier for the asset. |
**external_id** | **string** | External identifier for the asset. |
**billing_status** | **string** | Billing status of the asset. |
**overdue** | **string** | Overdue status of the asset. |
**asset_id** | **string** | Asset identifier for the asset. |
**asset_name** | **string** | Name of the asset. |
**rack_id** | **string** | Rack identifier for the asset. |
**rack_name** | **string** | Rack name associated with the asset. |
**rack_location** | **string** | Location of the rack associated with the asset. |
**rack_size** | **string** | Size of the rack associated with the asset. |
**rack_x** | **string** | X-coordinate of the asset within the rack. |
**rack_y** | **string** | Y-coordinate of the asset within the rack. |
**switchports** | **int[]** | List of switchports associated with the asset. |
**vlans** | **string[]** | List of VLANs associated with the asset. |
**vlans6** | **string[]** | List of IPv6 VLANs associated with the asset. |
**lease** | [**\OpenAPI\Client\Model\ServerLease**](ServerLease.md) |  |
**mac** | **mixed** | MAC address associated with the asset. | [optional]
**ipmi_admin_username** | **mixed** | IPMI admin username associated with the asset. | [optional]
**ipmi_admin_password** | **mixed** | IPMI admin password associated with the asset. | [optional]
**ipmi_client_username** | **mixed** | IPMI client username associated with the asset. | [optional]
**ipmi_client_password** | **mixed** | IPMI client password associated with the asset. | [optional]
**ipmi_updated** | **mixed** | IPMI update status associated with the asset. | [optional]
**create_timestamp** | **mixed** | Timestamp of asset creation. | [optional]
**update_timestamp** | **mixed** | Timestamp of asset update. | [optional]
**comment** | **mixed** | Comment associated with the asset. | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
