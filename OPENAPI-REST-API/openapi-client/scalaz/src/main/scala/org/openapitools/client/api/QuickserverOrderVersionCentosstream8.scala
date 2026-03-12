package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrderVersionCentosstream8._

case class QuickserverOrderVersionCentosstream8 (
  /* Version details of CentOS Stream 8. */
  centosstream_8: Option[String])

object QuickserverOrderVersionCentosstream8 {
  import DateTimeCodecs._

  implicit val QuickserverOrderVersionCentosstream8CodecJson: CodecJson[QuickserverOrderVersionCentosstream8] = CodecJson.derive[QuickserverOrderVersionCentosstream8]
  implicit val QuickserverOrderVersionCentosstream8Decoder: EntityDecoder[QuickserverOrderVersionCentosstream8] = jsonOf[QuickserverOrderVersionCentosstream8]
  implicit val QuickserverOrderVersionCentosstream8Encoder: EntityEncoder[QuickserverOrderVersionCentosstream8] = jsonEncoderOf[QuickserverOrderVersionCentosstream8]
}
