# MemoryOption
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**ShortDesc** | **String** |  | [optional] 
**MonthlyPrice** | **Decimal** |  | [optional] 
**MonthlyPriceDisplay** | **String** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$MemoryOption = Initialize-PSOpenAPIToolsMemoryOption  -Id null `
 -ShortDesc null `
 -MonthlyPrice null `
 -MonthlyPriceDisplay null
```

- Convert the resource to JSON
```powershell
$MemoryOption | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

