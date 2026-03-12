package io.swagger.server.model


/**
 * = VpsTrafficDataSectionResponse =
 *
 * VPS Traffic Data Section Response
 *
 * @param name 
 * @param data 
 */
case class VpsTrafficDataSectionResponse (
  name: String,
  data: List[VPSTrafficDataDataSectionResponse]
)

