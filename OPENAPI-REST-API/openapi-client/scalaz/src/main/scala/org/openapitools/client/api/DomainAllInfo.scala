package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainAllInfo._

case class DomainAllInfo (
  _OPS_version: Option[String],
attributes: Option[DomainAllInfoAttributes],
`object`: Option[String],
protocol: Option[String],
response_text: Option[String],
response_code: Option[String],
action: Option[String],
is_success: Option[String])

object DomainAllInfo {
  import DateTimeCodecs._

  implicit val DomainAllInfoCodecJson: CodecJson[DomainAllInfo] = CodecJson.derive[DomainAllInfo]
  implicit val DomainAllInfoDecoder: EntityDecoder[DomainAllInfo] = jsonOf[DomainAllInfo]
  implicit val DomainAllInfoEncoder: EntityEncoder[DomainAllInfo] = jsonEncoderOf[DomainAllInfo]
}
