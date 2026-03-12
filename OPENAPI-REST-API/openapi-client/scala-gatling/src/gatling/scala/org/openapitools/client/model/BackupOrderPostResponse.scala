
package org.openapitools.client.model


case class BackupOrderPostResponse (
    _continue: Option[Boolean],
    _errors: Option[List[String]],
    _total_cost: Option[String],
    _iid: Option[String],
    _iids: Option[List[String]],
    _real_iids: Option[List[String]],
    _serviceId: Option[Integer],
    _invoice_description: Option[String],
    _cj_params: Option[BackupOrderPostResponseCjParams]
)
object BackupOrderPostResponse {
    def toStringBody(var_continue: Object, var_errors: Object, var_total_cost: Object, var_iid: Object, var_iids: Object, var_real_iids: Object, var_serviceId: Object, var_invoice_description: Object, var_cj_params: Object) =
        s"""
        | {
        | "continue":$var_continue,"errors":$var_errors,"total_cost":$var_total_cost,"iid":$var_iid,"iids":$var_iids,"real_iids":$var_real_iids,"serviceId":$var_serviceId,"invoice_description":$var_invoice_description,"cj_params":$var_cj_params
        | }
        """.stripMargin
}
