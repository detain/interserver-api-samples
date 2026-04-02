# AssetServer
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**Region** | **String** |  | [optional] 
**Price** | **String** |  | [optional] 
**CPU** | [**AssetServerCPUInner[]**](AssetServerCPUInner.md) |  | [optional] 
**Memory** | [**AssetServerCPUInner[]**](AssetServerCPUInner.md) |  | [optional] 
**Bandwidth** | [**AssetServerCPUInner[]**](AssetServerCPUInner.md) |  | [optional] 
**IPs** | [**AssetServerCPUInner[]**](AssetServerCPUInner.md) |  | [optional] 
**HD** | **System.Collections.Hashtable** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$AssetServer = Initialize-PSOpenAPIToolsAssetServer  -Id null `
 -Region null `
 -Price null `
 -CPU null `
 -Memory null `
 -Bandwidth null `
 -IPs null `
 -HD null
```

- Convert the resource to JSON
```powershell
$AssetServer | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

