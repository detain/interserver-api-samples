package io.swagger.server.model


/**
 * @param admin 
 * @param pro 
 * @param host 
 */
case class VpsPlesk12Data (
  admin: Option[VpsPleskLicense],
  pro: Option[VpsPleskLicense],
  host: Option[VpsPleskLicense]
)

