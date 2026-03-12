package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetAccountInfo401Response._

case class GetAccountInfo401Response (
  code: Integer,
message: String)

object GetAccountInfo401Response {
  import DateTimeCodecs._

  implicit val GetAccountInfo401ResponseCodecJson: CodecJson[GetAccountInfo401Response] = CodecJson.derive[GetAccountInfo401Response]
  implicit val GetAccountInfo401ResponseDecoder: EntityDecoder[GetAccountInfo401Response] = jsonOf[GetAccountInfo401Response]
  implicit val GetAccountInfo401ResponseEncoder: EntityEncoder[GetAccountInfo401Response] = jsonEncoderOf[GetAccountInfo401Response]
}
