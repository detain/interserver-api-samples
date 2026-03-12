# ServerOrderGetResponse
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FormValues** | [**FormValues**](FormValues.md) |  | 
**ConfigIds** | [**ConfigIds**](ConfigIds.md) |  | 
**Cpu** | **Int32** |  | 
**CpuLi** | [**System.Collections.Hashtable**](Cpu.md) |  | 
**ConfigLi** | [**ConfigLists**](ConfigLists.md) |  | 
**FieldLabel** | [**System.Collections.Hashtable**](FieldLabel.md) |  | [optional] 
**CpuCores** | [**System.Collections.Hashtable**](Map.md) |  | [optional] 
**Frequency** | **Int32** |  | 
**Currency** | **String** |  | 
**CurrencySymbol** | **String** |  | [optional] 
**Country** | **String** |  | 
**Custid** | **Int32** |  | [optional] 
**Ima** | **String** |  | [optional] 
**Step** | **String** |  | 
**Regions** | [**Region[]**](Region.md) |  | [optional] 
**AssetServers** | [**AssetServer[]**](AssetServer.md) |  | [optional] 
**BuyItServers** | [**SystemCollectionsHashtable[]**](SystemCollectionsHashtable.md) |  | [optional] 
**DisplayShowmore** | **String** |  | [optional] 
**CustDiscount** | **Decimal** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$ServerOrderGetResponse = Initialize-PSOpenAPIToolsServerOrderGetResponse  -FormValues null `
 -ConfigIds null `
 -Cpu null `
 -CpuLi null `
 -ConfigLi null `
 -FieldLabel null `
 -CpuCores null `
 -Frequency null `
 -Currency null `
 -CurrencySymbol null `
 -Country null `
 -Custid null `
 -Ima null `
 -Step null `
 -Regions null `
 -AssetServers null `
 -BuyItServers null `
 -DisplayShowmore null `
 -CustDiscount null
```

- Convert the resource to JSON
```powershell
$ServerOrderGetResponse | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

