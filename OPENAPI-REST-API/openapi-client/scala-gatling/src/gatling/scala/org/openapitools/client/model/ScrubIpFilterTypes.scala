
package org.openapitools.client.model


case class ScrubIpFilterTypes (
    _success: Option[Boolean],
    _filters: Option[Map[String, ScrubIpFilterTypesFiltersValue]]
)
object ScrubIpFilterTypes {
    def toStringBody(var_success: Object, var_filters: Object) =
        s"""
        | {
        | "success":$var_success,"filters":$var_filters
        | }
        """.stripMargin
}
