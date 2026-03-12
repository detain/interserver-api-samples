
package org.openapitools.client.model


case class MailAlertUpdateRequest (
    /* Alert ID to update. */
    _alert_id: Option[Integer],
    /* Alert type identifier. */
    _type: Option[String],
    /* Alert value or threshold. */
    _value: Option[String],
    /* Email address to notify. */
    _to: Option[String],
    /* Whether the alert is enabled. */
    _enabled: Option[String]
)
object MailAlertUpdateRequest {
    def toStringBody(var_alert_id: Object, var_type: Object, var_value: Object, var_to: Object, var_enabled: Object) =
        s"""
        | {
        | "alert_id":$var_alert_id,"type":$var_type,"value":$var_value,"to":$var_to,"enabled":$var_enabled
        | }
        """.stripMargin
}
