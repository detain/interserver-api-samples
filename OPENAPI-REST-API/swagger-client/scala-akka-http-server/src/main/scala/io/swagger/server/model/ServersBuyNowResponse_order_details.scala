package io.swagger.server.model

import java.math.BigDecimal

/**
 * Details of the placed order.
 *
 * @param service_id The newly created service ID for the ordered server. for example: ''1234''
 * @param invoice_id The invoice ID generated for the order. for example: ''2342355''
 */
case class ServersBuyNowResponse_order_details (
  service_id: Option[BigDecimal],
  invoice_id: Option[BigDecimal]
)

