
package org.openapitools.client.model


case class QuickserverServiceExtra (
    /* Platform information */
    _platform: Option[String]
)
object QuickserverServiceExtra {
    def toStringBody(var_platform: Object) =
        s"""
        | {
        | "platform":$var_platform
        | }
        """.stripMargin
}
