package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LoginServiceCounts._

case class LoginServiceCounts (
  /* The number of total VPS orders that have been placed in our billing system. */
  vps: Integer,
/* The number of total website orders that have been placed in our billing system. */
  websites: Integer,
/* The number of total server orders that have been placed in our billing system. */
  servers: Integer)

object LoginServiceCounts {
  import DateTimeCodecs._

  implicit val LoginServiceCountsCodecJson: CodecJson[LoginServiceCounts] = CodecJson.derive[LoginServiceCounts]
  implicit val LoginServiceCountsDecoder: EntityDecoder[LoginServiceCounts] = jsonOf[LoginServiceCounts]
  implicit val LoginServiceCountsEncoder: EntityEncoder[LoginServiceCounts] = jsonEncoderOf[LoginServiceCounts]
}
