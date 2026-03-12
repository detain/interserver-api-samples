
package org.openapitools.client.model


case class QueueResponse (
    /* Response text */
    _text: String,
    /* The Queue ID attached to the action. */
    _queueId: Integer
)
object QueueResponse {
    def toStringBody(var_text: Object, var_queueId: Object) =
        s"""
        | {
        | "text":$var_text,"queueId":$var_queueId
        | }
        """.stripMargin
}
