# IpBlock
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**ShortDesc** | **String** |  | [optional] 
**Qty** | **String** |  | [optional] 
**MonthlyPrice** | **Decimal** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$IpBlock = Initialize-PSOpenAPIToolsIpBlock  -Id null `
 -ShortDesc null `
 -Qty null `
 -MonthlyPrice null
```

- Convert the resource to JSON
```powershell
$IpBlock | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

