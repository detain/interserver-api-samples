package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainProvProcessPending._

case class DomainProvProcessPending (
  _OPS_version: Option[String],
response_text: Option[String],
protocol: Option[String],
response_code: Option[String],
action: Option[String],
`object`: Option[String],
is_success: Option[String],
attributes: Option[DomainProvProcessPendingAttributes])

object DomainProvProcessPending {
  import DateTimeCodecs._

  implicit val DomainProvProcessPendingCodecJson: CodecJson[DomainProvProcessPending] = CodecJson.derive[DomainProvProcessPending]
  implicit val DomainProvProcessPendingDecoder: EntityDecoder[DomainProvProcessPending] = jsonOf[DomainProvProcessPending]
  implicit val DomainProvProcessPendingEncoder: EntityEncoder[DomainProvProcessPending] = jsonEncoderOf[DomainProvProcessPending]
}
