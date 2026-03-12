# ControlPanel
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**ShortDesc** | **String** |  | [optional] 
**MonthlyPrice** | **Decimal** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$ControlPanel = Initialize-PSOpenAPIToolsControlPanel  -Id null `
 -ShortDesc null `
 -MonthlyPrice null
```

- Convert the resource to JSON
```powershell
$ControlPanel | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

