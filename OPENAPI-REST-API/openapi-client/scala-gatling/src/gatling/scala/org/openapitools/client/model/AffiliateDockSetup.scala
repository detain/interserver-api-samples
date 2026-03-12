
package org.openapitools.client.model


case class AffiliateDockSetup (
    _affiliate_dock_title: Option[String],
    _affiliate_dock_description: Option[String],
    _referrer_coupon: Option[String]
)
object AffiliateDockSetup {
    def toStringBody(var_affiliate_dock_title: Object, var_affiliate_dock_description: Object, var_referrer_coupon: Object) =
        s"""
        | {
        | "affiliate_dock_title":$var_affiliate_dock_title,"affiliate_dock_description":$var_affiliate_dock_description,"referrer_coupon":$var_referrer_coupon
        | }
        """.stripMargin
}
