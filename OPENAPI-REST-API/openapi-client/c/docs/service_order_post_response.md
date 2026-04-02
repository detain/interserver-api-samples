# service_order_post_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_continue** | **int** | Whether the order was accepted and can proceed to payment. | [optional] 
**errors** | **list_t \*** | List of validation errors (empty on success). | [optional] 
**total_cost** | **char \*** | Total cost of the order. | [optional] 
**iid** | **char \*** | Primary invoice ID for payment. | [optional] 
**iids** | **list_t \*** | All invoice identifiers associated with the order. | [optional] 
**real_iids** | **list_t \*** | Numeric invoice IDs for use with billing endpoints. | [optional] 
**service_id** | **int** | The new service ID created by the order. | [optional] 
**invoice_description** | **char \*** | Human-readable description of the invoice. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


