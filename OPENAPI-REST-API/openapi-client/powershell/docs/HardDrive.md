# HardDrive
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**ShortDesc** | **String** |  | [optional] 
**Size** | **String** |  | [optional] 
**DriveType** | **String** |  | [optional] 
**MonthlyPrice** | **Decimal** |  | [optional] 
**MonthlyPriceDisplay** | **String** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$HardDrive = Initialize-PSOpenAPIToolsHardDrive  -Id null `
 -ShortDesc null `
 -Size null `
 -DriveType null `
 -MonthlyPrice null `
 -MonthlyPriceDisplay null
```

- Convert the resource to JSON
```powershell
$HardDrive | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

