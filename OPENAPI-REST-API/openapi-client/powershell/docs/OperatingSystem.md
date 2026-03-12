# OperatingSystem
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**ShortDesc** | **String** |  | [optional] 
**MonthlyPrice** | **Decimal** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$OperatingSystem = Initialize-PSOpenAPIToolsOperatingSystem  -Id null `
 -ShortDesc null `
 -MonthlyPrice null
```

- Convert the resource to JSON
```powershell
$OperatingSystem | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

