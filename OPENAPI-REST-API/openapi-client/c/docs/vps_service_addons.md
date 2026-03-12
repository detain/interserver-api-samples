# vps_service_addons_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**has_cpanel** | **int** | Whether a cPanel license is active on this VPS. | [optional] 
**has_directadmin** | **int** | Whether a DirectAdmin license is active on this VPS. | [optional] 
**has_fantastico** | **int** | Whether a Fantastico license is active on this VPS. | [optional] 
**has_softaculous** | **int** | Whether a Softaculous license is active on this VPS. | [optional] 
**has_hdspace** | **int** | Whether extra disk space has been added to this VPS. | [optional] 
**dedicated_ip** | **int** | Whether a dedicated IP address is assigned to this VPS. | [optional] 
**extra_ips** | **list_t \*** | List of additional IPv4 addresses assigned to this VPS. | [optional] 
**extra_ips6** | **list_t \*** | List of additional IPv6 addresses assigned to this VPS. | [optional] 
**unpaid_ips** | **list_t \*** | List of IP addresses that have unpaid charges. | [optional] 
**ips** | **list_t \*** | All IPv4 addresses assigned to this VPS. | [optional] 
**ips6** | **list_t \*** | All IPv6 addresses assigned to this VPS. | [optional] 
**cpanel_id** | **int** | The add-on service ID for the cPanel license. | [optional] 
**cost** | **int** | Total monthly add-on cost in cents. | [optional] 
**ids** | **list_t \*** | List of add-on service IDs active on this VPS. | [optional] 
**rdata** | **list_t \*** | Raw add-on data entries. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


