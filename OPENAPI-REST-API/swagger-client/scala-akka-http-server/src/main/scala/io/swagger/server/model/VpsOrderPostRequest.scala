package io.swagger.server.model


/**
 * request to validate a vps order
 *
 * @param osDistro OS Distribution
 * @param slices Number of slices
 * @param vpsPlatform VPS Platform
 * @param controlpanel Control Panel
 * @param period Billing Period or Frequency
 * @param location Location
 * @param osVersion OS Version
 * @param hostname The hostname to assign to the VPS
 * @param coupon Coupon
 * @param rootpass Root password to assign to the VVPS
 * @param comment Order comments or notes
 */
case class VpsOrderPostRequest (
  osDistro: String,
  slices: Int,
  vpsPlatform: String,
  controlpanel: Option[String],
  period: Int,
  location: Int,
  osVersion: String,
  hostname: String,
  coupon: Option[String],
  rootpass: String,
  comment: Option[String]
)

