
package org.openapitools.client.model


case class VpsServiceAddons (
    /* Whether a cPanel license is active on this VPS. */
    _has_cpanel: Option[Boolean],
    /* Whether a DirectAdmin license is active on this VPS. */
    _has_directadmin: Option[Boolean],
    /* Whether a Fantastico license is active on this VPS. */
    _has_fantastico: Option[Boolean],
    /* Whether a Softaculous license is active on this VPS. */
    _has_softaculous: Option[Boolean],
    /* Whether extra disk space has been added to this VPS. */
    _has_hdspace: Option[Boolean],
    /* Whether a dedicated IP address is assigned to this VPS. */
    _dedicated_ip: Option[Boolean],
    /* List of additional IPv4 addresses assigned to this VPS. */
    _extra_ips: Option[List[String]],
    /* List of additional IPv6 addresses assigned to this VPS. */
    _extra_ips6: Option[List[String]],
    /* List of IP addresses that have unpaid charges. */
    _unpaid_ips: Option[List[String]],
    /* All IPv4 addresses assigned to this VPS. */
    _ips: Option[List[String]],
    /* All IPv6 addresses assigned to this VPS. */
    _ips6: Option[List[String]],
    /* The add-on service ID for the cPanel license. */
    _cpanel_id: Option[Integer],
    /* Total monthly add-on cost in cents. */
    _cost: Option[Integer],
    /* List of add-on service IDs active on this VPS. */
    _ids: Option[List[String]],
    /* Raw add-on data entries. */
    _rdata: Option[List[String]]
)
object VpsServiceAddons {
    def toStringBody(var_has_cpanel: Object, var_has_directadmin: Object, var_has_fantastico: Object, var_has_softaculous: Object, var_has_hdspace: Object, var_dedicated_ip: Object, var_extra_ips: Object, var_extra_ips6: Object, var_unpaid_ips: Object, var_ips: Object, var_ips6: Object, var_cpanel_id: Object, var_cost: Object, var_ids: Object, var_rdata: Object) =
        s"""
        | {
        | "has_cpanel":$var_has_cpanel,"has_directadmin":$var_has_directadmin,"has_fantastico":$var_has_fantastico,"has_softaculous":$var_has_softaculous,"has_hdspace":$var_has_hdspace,"dedicated_ip":$var_dedicated_ip,"extra_ips":$var_extra_ips,"extra_ips6":$var_extra_ips6,"unpaid_ips":$var_unpaid_ips,"ips":$var_ips,"ips6":$var_ips6,"cpanel_id":$var_cpanel_id,"cost":$var_cost,"ids":$var_ids,"rdata":$var_rdata
        | }
        """.stripMargin
}
