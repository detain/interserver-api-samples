package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverRow._

case class QuickserverRow (
  /* The id of the qs. */
  qs_id: String,
/* The name of the qs. */
  qs_name: String,
/* The cost of the qs. */
  cost: String,
/* The hostname of the qs. */
  qs_hostname: String,
/* The status of the qs. */
  qs_status: String,
/* The comment of the qs. */
  qs_comment: String)

object QuickserverRow {
  import DateTimeCodecs._

  implicit val QuickserverRowCodecJson: CodecJson[QuickserverRow] = CodecJson.derive[QuickserverRow]
  implicit val QuickserverRowDecoder: EntityDecoder[QuickserverRow] = jsonOf[QuickserverRow]
  implicit val QuickserverRowEncoder: EntityEncoder[QuickserverRow] = jsonEncoderOf[QuickserverRow]
}
