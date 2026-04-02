

# ServiceOrderPostResponse

Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.

The class is defined in **[ServiceOrderPostResponse.java](../../src/main/java/org/openapitools/model/ServiceOrderPostResponse.java)**

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_continue** | `Boolean` | Whether the order was accepted and can proceed to payment. |  [optional property]
**errors** | `List&lt;String&gt;` | List of validation errors (empty on success). |  [optional property]
**totalCost** | `String` | Total cost of the order. |  [optional property]
**iid** | `String` | Primary invoice ID for payment. |  [optional property]
**iids** | `List&lt;String&gt;` | All invoice identifiers associated with the order. |  [optional property]
**realIids** | `List&lt;String&gt;` | Numeric invoice IDs for use with billing endpoints. |  [optional property]
**serviceId** | `Integer` | The new service ID created by the order. |  [optional property]
**invoiceDescription** | `String` | Human-readable description of the invoice. |  [optional property]










