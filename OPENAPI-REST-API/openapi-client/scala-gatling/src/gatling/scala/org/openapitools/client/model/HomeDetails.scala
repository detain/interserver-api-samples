
package org.openapitools.client.model


case class HomeDetails (
    _modules: Option[HomeDetailsModules]
)
object HomeDetails {
    def toStringBody(var_modules: Object) =
        s"""
        | {
        | "modules":$var_modules
        | }
        """.stripMargin
}
