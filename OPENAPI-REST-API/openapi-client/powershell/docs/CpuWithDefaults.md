# CpuWithDefaults
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
**MemoryDet** | [**MemoryOption**](MemoryOption.md) |  | [optional] 
**HdDet** | [**HardDrive**](HardDrive.md) |  | [optional] 
**MonthlyFee** | **String** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$CpuWithDefaults = Initialize-PSOpenAPIToolsCpuWithDefaults  -Id null `
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
 -Active null `
 -MemoryDet null `
 -HdDet null `
 -MonthlyFee null
```

- Convert the resource to JSON
```powershell
$CpuWithDefaults | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

