
package org.openapitools.client.model


case class BillingAddCcRequest (
    _name: Option[String],
    _address: Option[String],
    _city: Option[String],
    _state: Option[String],
    _country: Option[String],
    _zip: Option[String],
    _cc: Option[String],
    _cc_exp: Option[String],
    _cc_ccv2: Option[String]
)
object BillingAddCcRequest {
    def toStringBody(var_name: Object, var_address: Object, var_city: Object, var_state: Object, var_country: Object, var_zip: Object, var_cc: Object, var_cc_exp: Object, var_cc_ccv2: Object) =
        s"""
        | {
        | "name":$var_name,"address":$var_address,"city":$var_city,"state":$var_state,"country":$var_country,"zip":$var_zip,"cc":$var_cc,"cc_exp":$var_cc_exp,"cc_ccv2":$var_cc_ccv2
        | }
        """.stripMargin
}
