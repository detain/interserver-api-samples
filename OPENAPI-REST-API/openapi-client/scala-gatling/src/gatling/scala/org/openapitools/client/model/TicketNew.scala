
package org.openapitools.client.model


case class TicketNew (
    _subject: String,
    _body: String,
    _service_id: Option[Integer],
    _service_module: Option[String]
)
object TicketNew {
    def toStringBody(var_subject: Object, var_body: Object, var_service_id: Object, var_service_module: Object) =
        s"""
        | {
        | "subject":$var_subject,"body":$var_body,"service_id":$var_service_id,"service_module":$var_service_module
        | }
        """.stripMargin
}
