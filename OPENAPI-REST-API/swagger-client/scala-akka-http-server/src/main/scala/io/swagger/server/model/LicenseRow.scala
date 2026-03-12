package io.swagger.server.model

import java.util.Date

/**
 * = LicenseRow =
 *
 * A result row from the `Licenses` `GET` request.
 *
 * @param license_id The id of the license. for example: ''386111''
 * @param license_hostname The hostname of the license.
 * @param license_ip The ip of the license. for example: ''66.45.228.100''
 * @param services_name The services name of the license. for example: ''Imunify360 up to 30 users''
 * @param cost The cost of the license. for example: ''25.00''
 * @param license_status The status of the license. for example: ''canceled''
 * @param invoices_paid The invoices paid of the license. for example: ''1''
 * @param invoices_date The invoices date of the license. for example: ''2019-08-28T14:27:22Z''
 */
case class LicenseRow (
  license_id: Option[String],
  license_hostname: Option[String],
  license_ip: Option[String],
  services_name: Option[String],
  cost: Option[String],
  license_status: Option[String],
  invoices_paid: Option[String],
  invoices_date: Option[Date]
)

