# VPS_SERVICE_ADDONS

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**has_cpanel** | **BOOLEAN** | Whether a cPanel license is active on this VPS. | [optional] [default to null]
**has_directadmin** | **BOOLEAN** | Whether a DirectAdmin license is active on this VPS. | [optional] [default to null]
**has_fantastico** | **BOOLEAN** | Whether a Fantastico license is active on this VPS. | [optional] [default to null]
**has_softaculous** | **BOOLEAN** | Whether a Softaculous license is active on this VPS. | [optional] [default to null]
**has_hdspace** | **BOOLEAN** | Whether extra disk space has been added to this VPS. | [optional] [default to null]
**dedicated_ip** | **BOOLEAN** | Whether a dedicated IP address is assigned to this VPS. | [optional] [default to null]
**extra_ips** | [**LIST [STRING_32]**](STRING_32.md) | List of additional IPv4 addresses assigned to this VPS. | [optional] [default to null]
**extra_ips6** | [**LIST [STRING_32]**](STRING_32.md) | List of additional IPv6 addresses assigned to this VPS. | [optional] [default to null]
**unpaid_ips** | [**LIST [STRING_32]**](STRING_32.md) | List of IP addresses that have unpaid charges. | [optional] [default to null]
**ips** | [**LIST [STRING_32]**](STRING_32.md) | All IPv4 addresses assigned to this VPS. | [optional] [default to null]
**ips6** | [**LIST [STRING_32]**](STRING_32.md) | All IPv6 addresses assigned to this VPS. | [optional] [default to null]
**cpanel_id** | **INTEGER_32** | The add-on service ID for the cPanel license. | [optional] [default to null]
**cost** | **INTEGER_32** | Total monthly add-on cost in cents. | [optional] [default to null]
**ids** | [**LIST [STRING_32]**](STRING_32.md) | List of add-on service IDs active on this VPS. | [optional] [default to null]
**rdata** | [**LIST [STRING_32]**](STRING_32.md) | Raw add-on data entries. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


