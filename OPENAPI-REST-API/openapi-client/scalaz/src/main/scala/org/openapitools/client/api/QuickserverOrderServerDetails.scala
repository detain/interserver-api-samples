package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrderServerDetails._

case class QuickserverOrderServerDetails (
  `381`: Option[QuickserverOrderServerDetails381])

object QuickserverOrderServerDetails {
  import DateTimeCodecs._

  implicit val QuickserverOrderServerDetailsCodecJson: CodecJson[QuickserverOrderServerDetails] = CodecJson.derive[QuickserverOrderServerDetails]
  implicit val QuickserverOrderServerDetailsDecoder: EntityDecoder[QuickserverOrderServerDetails] = jsonOf[QuickserverOrderServerDetails]
  implicit val QuickserverOrderServerDetailsEncoder: EntityEncoder[QuickserverOrderServerDetails] = jsonEncoderOf[QuickserverOrderServerDetails]
}
