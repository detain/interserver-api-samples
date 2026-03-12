
package org.openapitools.client.model


case class ServerServiceInfo (
    /* The ID of the server. */
    _server_id: Option[String],
    /* The hostname of the server. */
    _server_hostname: Option[String],
    /* The customer ID associated with the server. */
    _server_custid: Option[String],
    /* The type of the server. */
    _server_type: Option[String],
    /* The currency used for billing. */
    _server_currency: Option[String],
    /* The date when the server was ordered. */
    _server_order_date: Option[String],
    /* The invoice number for the server. */
    _server_invoice: Option[String],
    /* The coupon associated with the server. */
    _server_coupon: Option[String],
    /* The status of the server. */
    _server_status: Option[String],
    /* The root of the server. */
    _server_root: Option[String],
    /* The dedicated tag of the server. */
    _server_dedicated_tag: Option[String],
    /* The custom tag of the server. */
    _server_custom_tag: Option[String],
    /* Comments related to the server. */
    _server_comment: Option[String],
    /* The initial billing amount for the server. */
    _server_initial_bill: Option[String],
    /* The hardware information of the server. */
    _server_hardware: Option[String],
    /* The number of IPs associated with the server. */
    _server_ips: Option[String],
    /* The monthly billing amount for the server. */
    _server_monthly_bill: Option[String],
    /* The setup status of the server. */
    _server_setup: Option[String],
    /* Discount information for the server. */
    _server_discount: Option[AnyType],
    /* The reputation of the server. */
    _server_rep: Option[String],
    /* The date related to the server. */
    _server_date: Option[String],
    /* The total cost of the server. */
    _server_total_cost: Option[String],
    /* The location of the server. */
    _server_location: Option[AnyType],
    /* The ordered hardware for the server. */
    _server_hardware_ordered: Option[String],
    /* The billed amount for the server. */
    _server_billed: Option[String],
    /* Indicates whether a welcome email was sent. */
    _server_welcome_email: Option[String],
    /* The number of dedicated CPUs for the server. */
    _server_dedicated_cpu: Option[String],
    /* The amount of dedicated memory for the server. */
    _server_dedicated_memory: Option[String],
    /* The size of the first dedicated hard drive. */
    _server_dedicated_hd1: Option[String],
    /* The size of the second dedicated hard drive. */
    _server_dedicated_hd2: Option[AnyType],
    /* The bandwidth of the server. */
    _server_dedicated_bandwidth: Option[String],
    /* The number of dedicated IPs for the server. */
    _server_dedicated_ips: Option[String],
    /* The operating system of the server. */
    _server_dedicated_os: Option[String],
    /* The control panel of the server. */
    _server_dedicated_cp: Option[AnyType],
    /* The RAID configuration of the server. */
    _server_dedicated_raid: Option[String],
    /* Additional information about the server. */
    _server_extra: Option[String]
)
object ServerServiceInfo {
    def toStringBody(var_server_id: Object, var_server_hostname: Object, var_server_custid: Object, var_server_type: Object, var_server_currency: Object, var_server_order_date: Object, var_server_invoice: Object, var_server_coupon: Object, var_server_status: Object, var_server_root: Object, var_server_dedicated_tag: Object, var_server_custom_tag: Object, var_server_comment: Object, var_server_initial_bill: Object, var_server_hardware: Object, var_server_ips: Object, var_server_monthly_bill: Object, var_server_setup: Object, var_server_discount: Object, var_server_rep: Object, var_server_date: Object, var_server_total_cost: Object, var_server_location: Object, var_server_hardware_ordered: Object, var_server_billed: Object, var_server_welcome_email: Object, var_server_dedicated_cpu: Object, var_server_dedicated_memory: Object, var_server_dedicated_hd1: Object, var_server_dedicated_hd2: Object, var_server_dedicated_bandwidth: Object, var_server_dedicated_ips: Object, var_server_dedicated_os: Object, var_server_dedicated_cp: Object, var_server_dedicated_raid: Object, var_server_extra: Object) =
        s"""
        | {
        | "server_id":$var_server_id,"server_hostname":$var_server_hostname,"server_custid":$var_server_custid,"server_type":$var_server_type,"server_currency":$var_server_currency,"server_order_date":$var_server_order_date,"server_invoice":$var_server_invoice,"server_coupon":$var_server_coupon,"server_status":$var_server_status,"server_root":$var_server_root,"server_dedicated_tag":$var_server_dedicated_tag,"server_custom_tag":$var_server_custom_tag,"server_comment":$var_server_comment,"server_initial_bill":$var_server_initial_bill,"server_hardware":$var_server_hardware,"server_ips":$var_server_ips,"server_monthly_bill":$var_server_monthly_bill,"server_setup":$var_server_setup,"server_discount":$var_server_discount,"server_rep":$var_server_rep,"server_date":$var_server_date,"server_total_cost":$var_server_total_cost,"server_location":$var_server_location,"server_hardware_ordered":$var_server_hardware_ordered,"server_billed":$var_server_billed,"server_welcome_email":$var_server_welcome_email,"server_dedicated_cpu":$var_server_dedicated_cpu,"server_dedicated_memory":$var_server_dedicated_memory,"server_dedicated_hd1":$var_server_dedicated_hd1,"server_dedicated_hd2":$var_server_dedicated_hd2,"server_dedicated_bandwidth":$var_server_dedicated_bandwidth,"server_dedicated_ips":$var_server_dedicated_ips,"server_dedicated_os":$var_server_dedicated_os,"server_dedicated_cp":$var_server_dedicated_cp,"server_dedicated_raid":$var_server_dedicated_raid,"server_extra":$var_server_extra
        | }
        """.stripMargin
}
