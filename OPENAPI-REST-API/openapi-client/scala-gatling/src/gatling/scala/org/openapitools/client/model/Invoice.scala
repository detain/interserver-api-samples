
package org.openapitools.client.model


case class Invoice (
    _id: Option[Long]
)
object Invoice {
    def toStringBody(var_id: Object) =
        s"""
        | {
        | "id":$var_id
        | }
        """.stripMargin
}
