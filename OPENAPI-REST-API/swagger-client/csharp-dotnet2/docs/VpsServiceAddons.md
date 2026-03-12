# IO.Swagger.Model.VpsServiceAddons
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**HasCpanel** | **bool?** | Whether a cPanel license is active on this VPS. | [optional] 
**HasDirectadmin** | **bool?** | Whether a DirectAdmin license is active on this VPS. | [optional] 
**HasFantastico** | **bool?** | Whether a Fantastico license is active on this VPS. | [optional] 
**HasSoftaculous** | **bool?** | Whether a Softaculous license is active on this VPS. | [optional] 
**HasHdspace** | **bool?** | Whether extra disk space has been added to this VPS. | [optional] 
**DedicatedIp** | **bool?** | Whether a dedicated IP address is assigned to this VPS. | [optional] 
**ExtraIps** | **List&lt;string&gt;** | List of additional IPv4 addresses assigned to this VPS. | [optional] 
**ExtraIps6** | **List&lt;string&gt;** | List of additional IPv6 addresses assigned to this VPS. | [optional] 
**UnpaidIps** | **List&lt;string&gt;** | List of IP addresses that have unpaid charges. | [optional] 
**Ips** | **List&lt;string&gt;** | All IPv4 addresses assigned to this VPS. | [optional] 
**Ips6** | **List&lt;string&gt;** | All IPv6 addresses assigned to this VPS. | [optional] 
**CpanelId** | **int?** | The add-on service ID for the cPanel license. | [optional] 
**Cost** | **int?** | Total monthly add-on cost in cents. | [optional] 
**Ids** | **List&lt;string&gt;** | List of add-on service IDs active on this VPS. | [optional] 
**Rdata** | **List&lt;string&gt;** | Raw add-on data entries. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

