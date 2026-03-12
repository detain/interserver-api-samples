# FormValues
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Memory** | **Int32** | Selected memory option ID. | [optional] 
**Bandwidth** | **Int32** | Selected bandwidth option ID. | [optional] 
**Ips** | **Int32** | Selected IP block option ID. | [optional] 
**Os** | **Int32** | Selected operating system option ID. | [optional] 
**Cp** | **Int32** | Selected control panel option ID. | [optional] 
**Raid** | **Int32** | Selected RAID option ID. | [optional] 
**Hd** | **Int32** | Selected hard drive option ID. | [optional] 
**Region** | **Int32** | Selected datacenter region ID. | [optional] 

## Examples

- Prepare the resource
```powershell
$FormValues = Initialize-PSOpenAPIToolsFormValues  -Memory null `
 -Bandwidth null `
 -Ips null `
 -Os null `
 -Cp null `
 -Raid null `
 -Hd null `
 -Region null
```

- Convert the resource to JSON
```powershell
$FormValues | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

