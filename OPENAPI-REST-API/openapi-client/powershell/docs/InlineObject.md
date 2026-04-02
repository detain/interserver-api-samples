# InlineObject
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Code** | **String** |  | 
**Message** | **String** |  | 

## Examples

- Prepare the resource
```powershell
$InlineObject = Initialize-PSOpenAPIToolsInlineObject  -Code null `
 -Message null
```

- Convert the resource to JSON
```powershell
$InlineObject | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

