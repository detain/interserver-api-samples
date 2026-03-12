
package org.openapitools.client.model


case class AccountInfoDataCc (
    _cc: Option[String],
    _cc_exp: Option[String],
    _name: Option[String],
    _address: Option[String],
    _city: Option[String],
    _state: Option[String],
    _zip: Option[String],
    _country: Option[String],
    _maxmind_riskscore: Option[String],
    _maxmind: Option[AccountInfoMaxMindResponse],
    _verified: Option[Boolean]
)
object AccountInfoDataCc {
    def toStringBody(var_cc: Object, var_cc_exp: Object, var_name: Object, var_address: Object, var_city: Object, var_state: Object, var_zip: Object, var_country: Object, var_maxmind_riskscore: Object, var_maxmind: Object, var_verified: Object) =
        s"""
        | {
        | "cc":$var_cc,"cc_exp":$var_cc_exp,"name":$var_name,"address":$var_address,"city":$var_city,"state":$var_state,"zip":$var_zip,"country":$var_country,"maxmind_riskscore":$var_maxmind_riskscore,"maxmind":$var_maxmind,"verified":$var_verified
        | }
        """.stripMargin
}
