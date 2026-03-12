# VpsServiceAddons

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**HasCpanel** | **bool** | Whether a cPanel license is active on this VPS. | [optional] [default to null]
**HasDirectadmin** | **bool** | Whether a DirectAdmin license is active on this VPS. | [optional] [default to null]
**HasFantastico** | **bool** | Whether a Fantastico license is active on this VPS. | [optional] [default to null]
**HasSoftaculous** | **bool** | Whether a Softaculous license is active on this VPS. | [optional] [default to null]
**HasHdspace** | **bool** | Whether extra disk space has been added to this VPS. | [optional] [default to null]
**DedicatedIp** | **bool** | Whether a dedicated IP address is assigned to this VPS. | [optional] [default to null]
**ExtraIps** | **[]string** | List of additional IPv4 addresses assigned to this VPS. | [optional] [default to null]
**ExtraIps6** | **[]string** | List of additional IPv6 addresses assigned to this VPS. | [optional] [default to null]
**UnpaidIps** | **[]string** | List of IP addresses that have unpaid charges. | [optional] [default to null]
**Ips** | **[]string** | All IPv4 addresses assigned to this VPS. | [optional] [default to null]
**Ips6** | **[]string** | All IPv6 addresses assigned to this VPS. | [optional] [default to null]
**CpanelId** | **int32** | The add-on service ID for the cPanel license. | [optional] [default to null]
**Cost** | **int32** | Total monthly add-on cost in cents. | [optional] [default to null]
**Ids** | **[]string** | List of add-on service IDs active on this VPS. | [optional] [default to null]
**Rdata** | **[]string** | Raw add-on data entries. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

