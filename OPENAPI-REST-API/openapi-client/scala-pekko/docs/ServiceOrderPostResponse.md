

# ServiceOrderPostResponse

Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**continue** | **Boolean** | Whether the order was accepted and can proceed to payment. |  [optional]
**errors** | **Seq&lt;String&gt;** | List of validation errors (empty on success). |  [optional]
**total_cost** | **String** | Total cost of the order. |  [optional]
**iid** | **String** | Primary invoice ID for payment. |  [optional]
**iids** | **Seq&lt;String&gt;** | All invoice identifiers associated with the order. |  [optional]
**real_iids** | **Seq&lt;String&gt;** | Numeric invoice IDs for use with billing endpoints. |  [optional]
**serviceId** | **Int** | The new service ID created by the order. |  [optional]
**invoice_description** | **String** | Human-readable description of the invoice. |  [optional]



