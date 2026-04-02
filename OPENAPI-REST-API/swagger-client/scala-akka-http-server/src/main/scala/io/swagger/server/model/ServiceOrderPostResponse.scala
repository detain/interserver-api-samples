package io.swagger.server.model


/**
 * = ServiceOrderPostResponse =
 *
 * Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 *
 * @param continue Whether the order was accepted and can proceed to payment.
 * @param errors List of validation errors (empty on success).
 * @param total_cost Total cost of the order.
 * @param iid Primary invoice ID for payment.
 * @param iids All invoice identifiers associated with the order.
 * @param real_iids Numeric invoice IDs for use with billing endpoints.
 * @param serviceId The new service ID created by the order.
 * @param invoice_description Human-readable description of the invoice.
 */
case class ServiceOrderPostResponse (
  continue: Option[Boolean],
  errors: Option[List[String]],
  total_cost: Option[String],
  iid: Option[String],
  iids: Option[List[String]],
  real_iids: Option[List[String]],
  serviceId: Option[Int],
  invoice_description: Option[String]
)

