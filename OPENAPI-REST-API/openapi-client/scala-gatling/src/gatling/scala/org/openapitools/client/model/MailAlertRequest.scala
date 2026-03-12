
package org.openapitools.client.model


case class MailAlertRequest (
    /* Alert type identifier. */
    _type: Option[String],
    /* Alert value or threshold. */
    _value: Option[String],
    /* Email address to notify. */
    _to: Option[String],
    /* Whether the alert is enabled. */
    _enabled: Option[String]
)
object MailAlertRequest {
    def toStringBody(var_type: Object, var_value: Object, var_to: Object, var_enabled: Object) =
        s"""
        | {
        | "type":$var_type,"value":$var_value,"to":$var_to,"enabled":$var_enabled
        | }
        """.stripMargin
}
