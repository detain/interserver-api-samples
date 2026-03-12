
package org.openapitools.client.model


case class DomainServiceInfo (
    _domain_id: Option[String],
    _domain_hostname: Option[String],
    _domain_username: Option[String],
    _domain_password: Option[String],
    _domain_type: Option[String],
    _domain_currency: Option[String],
    _domain_expire_date: Option[String],
    _domain_order_date: Option[String],
    _domain_custid: Option[String],
    _domain_status: Option[String],
    _domain_invoice: Option[String],
    _domain_coupon: Option[String]
)
object DomainServiceInfo {
    def toStringBody(var_domain_id: Object, var_domain_hostname: Object, var_domain_username: Object, var_domain_password: Object, var_domain_type: Object, var_domain_currency: Object, var_domain_expire_date: Object, var_domain_order_date: Object, var_domain_custid: Object, var_domain_status: Object, var_domain_invoice: Object, var_domain_coupon: Object) =
        s"""
        | {
        | "domain_id":$var_domain_id,"domain_hostname":$var_domain_hostname,"domain_username":$var_domain_username,"domain_password":$var_domain_password,"domain_type":$var_domain_type,"domain_currency":$var_domain_currency,"domain_expire_date":$var_domain_expire_date,"domain_order_date":$var_domain_order_date,"domain_custid":$var_domain_custid,"domain_status":$var_domain_status,"domain_invoice":$var_domain_invoice,"domain_coupon":$var_domain_coupon
        | }
        """.stripMargin
}
