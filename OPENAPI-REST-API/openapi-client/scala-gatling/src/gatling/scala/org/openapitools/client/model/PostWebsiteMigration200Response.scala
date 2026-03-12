
package org.openapitools.client.model


case class PostWebsiteMigration200Response (
    /* Confirmation message. */
    _text: Option[String],
    /* The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress. */
    _ticket: Option[Integer]
)
object PostWebsiteMigration200Response {
    def toStringBody(var_text: Object, var_ticket: Object) =
        s"""
        | {
        | "text":$var_text,"ticket":$var_ticket
        | }
        """.stripMargin
}
