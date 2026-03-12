
package org.openapitools.client.model


case class LoginSubmissionExampleGRecaptchaResponseDep (
    _w: Option[Integer],
    _n: Option[Integer]
)
object LoginSubmissionExampleGRecaptchaResponseDep {
    def toStringBody(var_w: Object, var_n: Object) =
        s"""
        | {
        | "w":$var_w,"n":$var_n
        | }
        """.stripMargin
}
