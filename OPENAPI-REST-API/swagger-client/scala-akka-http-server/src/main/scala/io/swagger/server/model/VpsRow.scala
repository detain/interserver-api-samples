package io.swagger.server.model


/**
 * = VpsRow =
 *
 * A result row from the `Vps` `GET` request.
 *
 * @param vps_id The id of the vps. for example: ''100''
 * @param vps_name The name of the vps. for example: ''Builder''
 * @param repeat_invoices_cost The repeat invoices cost of the vps. for example: ''10.00''
 * @param vps_hostname The hostname of the vps. for example: ''vps100''
 * @param vps_ip The ip of the vps. for example: ''64.20.46.220''
 * @param vps_status The status of the vps. for example: ''active''
 * @param services_name The services name of the vps. for example: ''KVM Windows VPS Slice''
 * @param vps_comment The comment of the vps.
 */
case class VpsRow (
  vps_id: String,
  vps_name: String,
  repeat_invoices_cost: String,
  vps_hostname: String,
  vps_ip: String,
  vps_status: String,
  services_name: String,
  vps_comment: String
)

