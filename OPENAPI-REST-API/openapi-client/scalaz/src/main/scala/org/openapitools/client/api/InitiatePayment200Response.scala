package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import InitiatePayment200Response._

case class InitiatePayment200Response (
  /* The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result). */
  `type`: Option[`Type`],
/* URL to redirect the user to for payment (when type is `redirect`). */
  redirect: Option[String],
/* Form action URL (when type is `submit`). */
  action: Option[String],
/* HTTP method for the form submission (when type is `submit`). */
  method: Option[String],
/* Form field name-value pairs to submit (when type is `submit`). */
  items: Option[Any],
/* Status or result text. */
  text: Option[String])

object InitiatePayment200Response {
  import DateTimeCodecs._
  sealed trait `Type`
  case object Redirect extends `Type`
  case object Submit extends `Type`
  case object Single extends `Type`

  object `Type` {
    def to`Type`(s: String): Option[`Type`] = s match {
      case "Redirect" => Some(Redirect)
      case "Submit" => Some(Submit)
      case "Single" => Some(Single)
      case _ => None
    }

    def from`Type`(x: `Type`): String = x match {
      case Redirect => "Redirect"
      case Submit => "Submit"
      case Single => "Single"
    }
  }

  implicit val `Type`EnumEncoder: EncodeJson[`Type`] =
    EncodeJson[`Type`](is => StringEncodeJson(`Type`.from`Type`(is)))

  implicit val `Type`EnumDecoder: DecodeJson[`Type`] =
    DecodeJson.optionDecoder[`Type`](n => n.string.flatMap(jStr => `Type`.to`Type`(jStr)), "`Type` failed to de-serialize")

  implicit val InitiatePayment200ResponseCodecJson: CodecJson[InitiatePayment200Response] = CodecJson.derive[InitiatePayment200Response]
  implicit val InitiatePayment200ResponseDecoder: EntityDecoder[InitiatePayment200Response] = jsonOf[InitiatePayment200Response]
  implicit val InitiatePayment200ResponseEncoder: EntityEncoder[InitiatePayment200Response] = jsonEncoderOf[InitiatePayment200Response]
}
