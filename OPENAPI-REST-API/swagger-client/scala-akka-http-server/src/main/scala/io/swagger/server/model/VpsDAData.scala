package io.swagger.server.model


/**
 * DirectAdmin license options available for a VPS.
 *
 * @param free 
 */
case class VpsDAData (
  free: Option[VpsDALicense]
)

