package io.swagger.server.model


/**
 * = Place ScrubIP Order =
 *
 * Place ScrubIP Order
 *
 * @param service_type  for example: ''102''
 * @param ip  for example: ''1.2.3.4''
 */
case class ScrubIpPlaceOrder (
  service_type: Int,
  ip: String
)

