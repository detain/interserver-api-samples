
package org.openapitools.client.model


case class QuickserverRow (
    /* The id of the qs. */
    _qs_id: String,
    /* The name of the qs. */
    _qs_name: String,
    /* The cost of the qs. */
    _cost: String,
    /* The hostname of the qs. */
    _qs_hostname: String,
    /* The status of the qs. */
    _qs_status: String,
    /* The comment of the qs. */
    _qs_comment: String
)
object QuickserverRow {
    def toStringBody(var_qs_id: Object, var_qs_name: Object, var_cost: Object, var_qs_hostname: Object, var_qs_status: Object, var_qs_comment: Object) =
        s"""
        | {
        | "qs_id":$var_qs_id,"qs_name":$var_qs_name,"cost":$var_cost,"qs_hostname":$var_qs_hostname,"qs_status":$var_qs_status,"qs_comment":$var_qs_comment
        | }
        """.stripMargin
}
