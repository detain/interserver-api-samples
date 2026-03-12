
package org.openapitools.client.model


case class PostOauthCallbackRequest (
    /* The OAuth provider name (e.g. `Google`). */
    _provider: Option[String]
)
object PostOauthCallbackRequest {
    def toStringBody(var_provider: Object) =
        s"""
        | {
        | "provider":$var_provider
        | }
        """.stripMargin
}
