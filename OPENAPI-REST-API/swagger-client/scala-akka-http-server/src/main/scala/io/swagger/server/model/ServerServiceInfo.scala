package io.swagger.server.model


/**
 * @param server_id The ID of the server. for example: ''16058''
 * @param server_hostname The hostname of the server. for example: ''myserver.host.com''
 * @param server_custid The customer ID associated with the server. for example: ''771282''
 * @param server_type The type of the server. for example: ''600''
 * @param server_currency The currency used for billing. for example: ''USD''
 * @param server_order_date The date when the server was ordered. for example: ''2020-05-08T17:22:36.000Z''
 * @param server_invoice The invoice number for the server. for example: ''18738142''
 * @param server_coupon The coupon associated with the server. for example: ''0''
 * @param server_status The status of the server. for example: ''active''
 * @param server_root The root of the server.
 * @param server_dedicated_tag The dedicated tag of the server. for example: ''0''
 * @param server_custom_tag The custom tag of the server.
 * @param server_comment Comments related to the server.
 * @param server_initial_bill The initial billing amount for the server. for example: ''0''
 * @param server_hardware The hardware information of the server. for example: ''0''
 * @param server_ips The number of IPs associated with the server. for example: ''0''
 * @param server_monthly_bill The monthly billing amount for the server. for example: ''0''
 * @param server_setup The setup status of the server. for example: ''0''
 * @param server_discount Discount information for the server.
 * @param server_rep The reputation of the server. for example: ''0''
 * @param server_date The date related to the server. for example: ''1588972956''
 * @param server_total_cost The total cost of the server. for example: ''230''
 * @param server_location The location of the server.
 * @param server_hardware_ordered The ordered hardware for the server. for example: ''0''
 * @param server_billed The billed amount for the server. for example: ''0''
 * @param server_welcome_email Indicates whether a welcome email was sent. for example: ''1''
 * @param server_dedicated_cpu The number of dedicated CPUs for the server. for example: ''38''
 * @param server_dedicated_memory The amount of dedicated memory for the server. for example: ''22''
 * @param server_dedicated_hd1 The size of the first dedicated hard drive. for example: ''20''
 * @param server_dedicated_hd2 The size of the second dedicated hard drive.
 * @param server_dedicated_bandwidth The bandwidth of the server. for example: ''3''
 * @param server_dedicated_ips The number of dedicated IPs for the server. for example: ''5''
 * @param server_dedicated_os The operating system of the server. for example: ''30''
 * @param server_dedicated_cp The control panel of the server.
 * @param server_dedicated_raid The RAID configuration of the server. for example: ''0''
 * @param server_extra Additional information about the server. for example: ''[]''
 */
case class ServerServiceInfo (
  server_id: Option[String],
  server_hostname: Option[String],
  server_custid: Option[String],
  server_type: Option[String],
  server_currency: Option[String],
  server_order_date: Option[String],
  server_invoice: Option[String],
  server_coupon: Option[String],
  server_status: Option[String],
  server_root: Option[String],
  server_dedicated_tag: Option[String],
  server_custom_tag: Option[String],
  server_comment: Option[String],
  server_initial_bill: Option[String],
  server_hardware: Option[String],
  server_ips: Option[String],
  server_monthly_bill: Option[String],
  server_setup: Option[String],
  server_discount: Option[String],
  server_rep: Option[String],
  server_date: Option[String],
  server_total_cost: Option[String],
  server_location: Option[String],
  server_hardware_ordered: Option[String],
  server_billed: Option[String],
  server_welcome_email: Option[String],
  server_dedicated_cpu: Option[String],
  server_dedicated_memory: Option[String],
  server_dedicated_hd1: Option[String],
  server_dedicated_hd2: Option[String],
  server_dedicated_bandwidth: Option[String],
  server_dedicated_ips: Option[String],
  server_dedicated_os: Option[String],
  server_dedicated_cp: Option[String],
  server_dedicated_raid: Option[String],
  server_extra: Option[String]
)

