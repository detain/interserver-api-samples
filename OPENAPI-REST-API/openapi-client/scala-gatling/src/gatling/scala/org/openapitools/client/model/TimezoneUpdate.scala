
package org.openapitools.client.model


case class TimezoneUpdate (
    /* The time zone */
    _timezone: String
)
object TimezoneUpdate {
    def toStringBody(var_timezone: Object) =
        s"""
        | {
        | "timezone":$var_timezone
        | }
        """.stripMargin
}
