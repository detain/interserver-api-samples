# ConfigLists
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CpuLi** | [**System.Collections.Hashtable**](Cpu.md) |  | [optional] 
**MemoryLi** | [**System.Collections.Hashtable**](Map.md) |  | [optional] 
**HdLi** | [**System.Collections.Hashtable**](Map.md) |  | [optional] 
**BandwidthLi** | [**System.Collections.Hashtable**](Bandwidth.md) |  | [optional] 
**IpsLi** | [**System.Collections.Hashtable**](IpBlock.md) |  | [optional] 
**OsLi** | [**System.Collections.Hashtable**](OperatingSystem.md) |  | [optional] 
**CpLi** | [**System.Collections.Hashtable**](ControlPanel.md) |  | [optional] 
**RaidLi** | [**RaidOption[]**](RaidOption.md) |  | [optional] 

## Examples

- Prepare the resource
```powershell
$ConfigLists = Initialize-PSOpenAPIToolsConfigLists  -CpuLi null `
 -MemoryLi null `
 -HdLi null `
 -BandwidthLi null `
 -IpsLi null `
 -OsLi null `
 -CpLi null `
 -RaidLi null
```

- Convert the resource to JSON
```powershell
$ConfigLists | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

