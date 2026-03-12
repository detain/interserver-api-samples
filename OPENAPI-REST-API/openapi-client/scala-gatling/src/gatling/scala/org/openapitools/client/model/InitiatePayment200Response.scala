
package org.openapitools.client.model


case class InitiatePayment200Response (
    /* The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result). */
    _type: Option[String],
    /* URL to redirect the user to for payment (when type is `redirect`). */
    _redirect: Option[String],
    /* Form action URL (when type is `submit`). */
    _action: Option[String],
    /* HTTP method for the form submission (when type is `submit`). */
    _method: Option[String],
    /* Form field name-value pairs to submit (when type is `submit`). */
    _items: Option[Any],
    /* Status or result text. */
    _text: Option[String]
)
object InitiatePayment200Response {
    def toStringBody(var_type: Object, var_redirect: Object, var_action: Object, var_method: Object, var_items: Object, var_text: Object) =
        s"""
        | {
        | "type":$var_type,"redirect":$var_redirect,"action":$var_action,"method":$var_method,"items":$var_items,"text":$var_text
        | }
        """.stripMargin
}
