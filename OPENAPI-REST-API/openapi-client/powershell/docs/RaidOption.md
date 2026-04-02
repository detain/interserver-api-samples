# RaidOption
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**ShortDesc** | **String** |  | [optional] 
**MonthlyPrice** | **Decimal** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$RaidOption = Initialize-PSOpenAPIToolsRaidOption  -Id null `
 -ShortDesc null `
 -MonthlyPrice null
```

- Convert the resource to JSON
```powershell
$RaidOption | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

