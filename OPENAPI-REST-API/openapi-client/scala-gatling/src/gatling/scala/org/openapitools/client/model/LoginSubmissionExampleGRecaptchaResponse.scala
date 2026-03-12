
package org.openapitools.client.model


case class LoginSubmissionExampleGRecaptchaResponse (
    ___v_isShallow: Option[Boolean],
    _dep: Option[LoginSubmissionExampleGRecaptchaResponseDep],
    ___v_isRef: Option[Boolean],
    __rawValue: Option[String],
    __value: Option[String]
)
object LoginSubmissionExampleGRecaptchaResponse {
    def toStringBody(var___v_isShallow: Object, var_dep: Object, var___v_isRef: Object, var__rawValue: Object, var__value: Object) =
        s"""
        | {
        | "__v_isShallow":$var___v_isShallow,"dep":$var_dep,"__v_isRef":$var___v_isRef,"_rawValue":$var__rawValue,"_value":$var__value
        | }
        """.stripMargin
}
