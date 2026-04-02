# Interserver.MyAdmin.Client.Model.ServiceOrderPostResponse
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_continue** | **bool?** | Whether the order was accepted and can proceed to payment. | [optional] 
**errors** | **List&lt;string&gt;** | List of validation errors (empty on success). | [optional] 
**total_cost** | **string** | Total cost of the order. | [optional] 
**iid** | **string** | Primary invoice ID for payment. | [optional] 
**iids** | **List&lt;string&gt;** | All invoice identifiers associated with the order. | [optional] 
**real_iids** | **List&lt;string&gt;** | Numeric invoice IDs for use with billing endpoints. | [optional] 
**serviceId** | **int?** | The new service ID created by the order. | [optional] 
**invoice_description** | **string** | Human-readable description of the invoice. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

