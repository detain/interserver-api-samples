package io.swagger.server.model


/**
 * IP address information table for a software license service.
 *
 * @param title Table title for example: ''IP Information''
 * @param rows 
 */
case class LicenseIpInfo (
  title: Option[String],
  rows: Option[List[LicenseIpInfoRow]]
)

