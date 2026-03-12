package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrderServerDetails381._

case class QuickserverOrderServerDetails381 (
  /* CPU details of the server. */
  cpu: Option[String],
/* RAM capacity of the server. */
  ram: Option[String],
/* Hard disk capacity of the server. */
  hd: Option[String],
/* Number of CPU cores. */
  cores: Option[Integer],
/* Cost of the server. */
  cost: Option[String])

object QuickserverOrderServerDetails381 {
  import DateTimeCodecs._

  implicit val QuickserverOrderServerDetails381CodecJson: CodecJson[QuickserverOrderServerDetails381] = CodecJson.derive[QuickserverOrderServerDetails381]
  implicit val QuickserverOrderServerDetails381Decoder: EntityDecoder[QuickserverOrderServerDetails381] = jsonOf[QuickserverOrderServerDetails381]
  implicit val QuickserverOrderServerDetails381Encoder: EntityEncoder[QuickserverOrderServerDetails381] = jsonEncoderOf[QuickserverOrderServerDetails381]
}
