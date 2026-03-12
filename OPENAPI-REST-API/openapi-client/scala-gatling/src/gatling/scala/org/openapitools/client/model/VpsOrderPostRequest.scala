
package org.openapitools.client.model


case class VpsOrderPostRequest (
    /* OS Distribution */
    _osDistro: String,
    /* Number of slices */
    _slices: Integer,
    /* VPS Platform */
    _vpsPlatform: String,
    /* Billing Period or Frequency */
    _period: Integer,
    /* Location */
    _location: Integer,
    /* OS Version */
    _osVersion: String,
    /* The hostname to assign to the VPS */
    _hostname: String,
    /* Root password to assign to the VVPS */
    _rootpass: String,
    /* Control Panel */
    _controlpanel: Option[String],
    /* Coupon */
    _coupon: Option[String],
    /* Order comments or notes */
    _comment: Option[String]
)
object VpsOrderPostRequest {
    def toStringBody(var_osDistro: Object, var_slices: Object, var_vpsPlatform: Object, var_period: Object, var_location: Object, var_osVersion: Object, var_hostname: Object, var_rootpass: Object, var_controlpanel: Object, var_coupon: Object, var_comment: Object) =
        s"""
        | {
        | "osDistro":$var_osDistro,"slices":$var_slices,"vpsPlatform":$var_vpsPlatform,"period":$var_period,"location":$var_location,"osVersion":$var_osVersion,"hostname":$var_hostname,"rootpass":$var_rootpass,"controlpanel":$var_controlpanel,"coupon":$var_coupon,"comment":$var_comment
        | }
        """.stripMargin
}
