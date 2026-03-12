
package org.openapitools.client.model


case class MailAlertsResponseInner (
    _alert_id: Option[Integer],
    _alert_type: Option[String],
    _alert_value: Option[String],
    _alert_to: Option[String],
    _alert_enabled: Option[String]
)
object MailAlertsResponseInner {
    def toStringBody(var_alert_id: Object, var_alert_type: Object, var_alert_value: Object, var_alert_to: Object, var_alert_enabled: Object) =
        s"""
        | {
        | "alert_id":$var_alert_id,"alert_type":$var_alert_type,"alert_value":$var_alert_value,"alert_to":$var_alert_to,"alert_enabled":$var_alert_enabled
        | }
        """.stripMargin
}
