package io.swagger.server.model


/**
 * Success response after placing a buy-it-now dedicated server order.
 *
 * @param success Whether the order was placed successfully. for example: ''true''
 * @param text Human-readable status message. for example: ''Server order is placed.''
 * @param order_details 
 */
case class ServersBuyNowResponse (
  success: Option[Boolean],
  text: Option[String],
  order_details: Option[ServersBuyNowResponse_order_details]
)

