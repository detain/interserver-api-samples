package io.swagger.server.model


/**
 * A datacenter region where a server can be provisioned.
 *
 * @param region_id 
 * @param region_name 
 */
case class Region (
  region_id: Option[Int],
  region_name: Option[String]
)

