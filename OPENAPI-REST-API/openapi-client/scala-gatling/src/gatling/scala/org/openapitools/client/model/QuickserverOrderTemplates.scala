
package org.openapitools.client.model


case class QuickserverOrderTemplates (
    _Ubuntu: Option[QuickserverOrderTemplatesUbuntu64]
)
object QuickserverOrderTemplates {
    def toStringBody(var_Ubuntu: Object) =
        s"""
        | {
        | "Ubuntu":$var_Ubuntu
        | }
        """.stripMargin
}
