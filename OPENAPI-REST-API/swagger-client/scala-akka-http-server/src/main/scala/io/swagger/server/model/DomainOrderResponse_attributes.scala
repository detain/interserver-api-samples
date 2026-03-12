package io.swagger.server.model


/**
 * @param id Registrar order ID.
 * @param admin_email Administrative contact email provided for the order.
 */
case class DomainOrderResponse_attributes (
  id: Option[String],
  admin_email: Option[String]
)

