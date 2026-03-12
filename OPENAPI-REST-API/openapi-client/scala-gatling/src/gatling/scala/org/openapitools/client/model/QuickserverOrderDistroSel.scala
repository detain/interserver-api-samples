
package org.openapitools.client.model


case class QuickserverOrderDistroSel (
    _Ubuntu: Option[QuickserverOrderDistroSelUbuntu]
)
object QuickserverOrderDistroSel {
    def toStringBody(var_Ubuntu: Object) =
        s"""
        | {
        | "Ubuntu":$var_Ubuntu
        | }
        """.stripMargin
}
