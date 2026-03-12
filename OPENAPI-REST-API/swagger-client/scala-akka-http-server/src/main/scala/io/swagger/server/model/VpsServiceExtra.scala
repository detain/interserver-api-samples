package io.swagger.server.model


/**
 * @param spice Spice for example: ''5903''
 * @param snapshots 
 */
case class VpsServiceExtra (
  spice: Option[Int],
  snapshots: Option[List[VpsSnapshot]]
)

