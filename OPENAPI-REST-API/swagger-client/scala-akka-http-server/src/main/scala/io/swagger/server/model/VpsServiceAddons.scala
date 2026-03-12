package io.swagger.server.model


/**
 * Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 *
 * @param has_cpanel Whether a cPanel license is active on this VPS.
 * @param has_directadmin Whether a DirectAdmin license is active on this VPS.
 * @param has_fantastico Whether a Fantastico license is active on this VPS.
 * @param has_softaculous Whether a Softaculous license is active on this VPS.
 * @param has_hdspace Whether extra disk space has been added to this VPS.
 * @param dedicated_ip Whether a dedicated IP address is assigned to this VPS.
 * @param extra_ips List of additional IPv4 addresses assigned to this VPS.
 * @param extra_ips6 List of additional IPv6 addresses assigned to this VPS.
 * @param unpaid_ips List of IP addresses that have unpaid charges.
 * @param ips All IPv4 addresses assigned to this VPS.
 * @param ips6 All IPv6 addresses assigned to this VPS.
 * @param cpanel_id The add-on service ID for the cPanel license.
 * @param cost Total monthly add-on cost in cents.
 * @param ids List of add-on service IDs active on this VPS.
 * @param rdata Raw add-on data entries.
 */
case class VpsServiceAddons (
  has_cpanel: Option[Boolean],
  has_directadmin: Option[Boolean],
  has_fantastico: Option[Boolean],
  has_softaculous: Option[Boolean],
  has_hdspace: Option[Boolean],
  dedicated_ip: Option[Boolean],
  extra_ips: Option[List[String]],
  extra_ips6: Option[List[String]],
  unpaid_ips: Option[List[String]],
  ips: Option[List[String]],
  ips6: Option[List[String]],
  cpanel_id: Option[Int],
  cost: Option[Int],
  ids: Option[List[String]],
  rdata: Option[List[String]]
)

