# DomainOrderTldServices
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Asia** | **Int32** | Service ID for .asia TLD | [optional] 
**Be** | **Int32** | Service ID for .be TLD | [optional] 
**Biz** | **Int32** | Service ID for .biz TLD | [optional] 
**Ca** | **Int32** | Service ID for .ca TLD | [optional] 

## Examples

- Prepare the resource
```powershell
$DomainOrderTldServices = Initialize-PSOpenAPIToolsDomainOrderTldServices  -Asia 10001 `
 -Be 10002 `
 -Biz 10003 `
 -Ca 10004
```

- Convert the resource to JSON
```powershell
$DomainOrderTldServices | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

