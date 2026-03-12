package io.swagger.server.model


/**
 * @param success  for example: ''true''
 * @param text  for example: ''ScrubIp order is placed.''
 * @param order_details 
 */
case class Inline_response_201_2 (
  success: Option[Boolean],
  text: Option[String],
  order_details: Option[inline_response_201_2_order_details]
)

