package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicensesCancel200Response._

case class LicensesCancel200Response (
  success: Boolean,
text: String)

object LicensesCancel200Response {
  import DateTimeCodecs._

  implicit val LicensesCancel200ResponseCodecJson: CodecJson[LicensesCancel200Response] = CodecJson.derive[LicensesCancel200Response]
  implicit val LicensesCancel200ResponseDecoder: EntityDecoder[LicensesCancel200Response] = jsonOf[LicensesCancel200Response]
  implicit val LicensesCancel200ResponseEncoder: EntityEncoder[LicensesCancel200Response] = jsonEncoderOf[LicensesCancel200Response]
}
