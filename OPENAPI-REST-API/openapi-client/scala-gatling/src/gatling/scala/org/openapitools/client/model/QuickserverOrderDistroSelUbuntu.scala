
package org.openapitools.client.model


case class QuickserverOrderDistroSelUbuntu (
    /* Selected distribution for Ubuntu. */
    _Ubuntu: Option[String]
)
object QuickserverOrderDistroSelUbuntu {
    def toStringBody(var_Ubuntu: Object) =
        s"""
        | {
        | "Ubuntu":$var_Ubuntu
        | }
        """.stripMargin
}
