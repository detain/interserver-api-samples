package io.swagger.server.model


/**
 * @param id 
 * @param name 
 * @param sub_name 
 * @param cost 
 */
case class VpsPleskLicense (
  id: Option[Int],
  name: Option[String],
  sub_name: Option[String],
  cost: Option[Int]
)

