# server_switchport_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**switchport_id** | **int** | Unique identifier for the switchport. | 
**switch_id** | **char \*** | Unique identifier for the switch associated with the switchport. | 
**_switch** | **char \*** | Name of the switch associated with the switchport. | 
**port** | **char \*** | Port name on the switch. | 
**blade** | **char \*** | Blade name associated with the port. | 
**justport** | **char \*** | Port identifier. | 
**graph_id** | **char \*** | Identifier for the graph associated with the switchport. | 
**asset_id** | **int** | Unique identifier of the asset associated with the switchport. | 
**vlans** | **list_t \*** | List of VLANs associated with the switchport. | [optional] 
**vlans6** | **list_t \*** | List of IPv6 VLANs associated with the switchport. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


