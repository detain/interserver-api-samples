# IO.Swagger.Model.ServiceOrderPostResponse
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_Continue** | **bool?** | Whether the order was accepted and can proceed to payment. | [optional] 
**Errors** | **List&lt;string&gt;** | List of validation errors (empty on success). | [optional] 
**TotalCost** | **string** | Total cost of the order. | [optional] 
**Iid** | **string** | Primary invoice ID for payment. | [optional] 
**Iids** | **List&lt;string&gt;** | All invoice identifiers associated with the order. | [optional] 
**RealIids** | **List&lt;string&gt;** | Numeric invoice IDs for use with billing endpoints. | [optional] 
**ServiceId** | **int?** | The new service ID created by the order. | [optional] 
**InvoiceDescription** | **string** | Human-readable description of the invoice. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

