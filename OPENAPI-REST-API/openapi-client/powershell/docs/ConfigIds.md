# ConfigIds
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Memory** | **Int32** | Configuration ID for the selected memory option. | [optional] 
**Hd** | **Int32** | Configuration ID for the selected hard drive option. | [optional] 
**Bandwidth** | **Int32** | Configuration ID for the selected bandwidth option. | [optional] 
**Ips** | **Int32** | Configuration ID for the selected IP block option. | [optional] 
**Os** | **Int32** | Configuration ID for the selected operating system. | [optional] 
**Cp** | **Int32** | Configuration ID for the selected control panel. | [optional] 
**Raid** | **Int32** | Configuration ID for the selected RAID option. | [optional] 

## Examples

- Prepare the resource
```powershell
$ConfigIds = Initialize-PSOpenAPIToolsConfigIds  -Memory null `
 -Hd null `
 -Bandwidth null `
 -Ips null `
 -Os null `
 -Cp null `
 -Raid null
```

- Convert the resource to JSON
```powershell
$ConfigIds | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

