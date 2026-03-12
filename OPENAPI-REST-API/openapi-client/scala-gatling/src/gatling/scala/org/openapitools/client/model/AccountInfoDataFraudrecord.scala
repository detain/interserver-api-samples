
package org.openapitools.client.model


case class AccountInfoDataFraudrecord (
    _score: Option[String],
    _count: Option[String],
    _reliability: Option[String],
    _code: Option[String]
)
object AccountInfoDataFraudrecord {
    def toStringBody(var_score: Object, var_count: Object, var_reliability: Object, var_code: Object) =
        s"""
        | {
        | "score":$var_score,"count":$var_count,"reliability":$var_reliability,"code":$var_code
        | }
        """.stripMargin
}
