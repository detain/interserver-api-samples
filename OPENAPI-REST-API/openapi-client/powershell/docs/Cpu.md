# Cpu
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **Int32** |  | [optional] 
**ShortDesc** | **String** |  | [optional] 
**LongDesc** | **String** |  | [optional] 
**Type** | **String** |  | [optional] 
**Speed** | **String** |  | [optional] 
**NumCores** | **String** |  | [optional] 
**NumCpus** | **String** |  | [optional] 
**Benchmark** | **String** |  | [optional] 
**MonthlyPrice** | **Decimal** |  | [optional] 
**MonthlyPriceDisplay** | **String** |  | [optional] 
**MaxRam** | **String** |  | [optional] 
**MinRam** | **String** |  | [optional] 
**MaxLff** | **String** |  | [optional] 
**MaxSff** | **String** |  | [optional] 
**MaxNve** | **String** |  | [optional] 
**Visible** | **String** |  | [optional] 
**Active** | **String** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$Cpu = Initialize-PSOpenAPIToolsCpu  -Id null `
 -ShortDesc null `
 -LongDesc null `
 -Type null `
 -Speed null `
 -NumCores null `
 -NumCpus null `
 -Benchmark null `
 -MonthlyPrice null `
 -MonthlyPriceDisplay null `
 -MaxRam null `
 -MinRam null `
 -MaxLff null `
 -MaxSff null `
 -MaxNve null `
 -Visible null `
 -Active null
```

- Convert the resource to JSON
```powershell
$Cpu | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

