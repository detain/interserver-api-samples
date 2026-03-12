package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrderVersion._

case class QuickserverOrderVersion (
  centosstream_8: Option[QuickserverOrderVersionCentosstream8])

object QuickserverOrderVersion {
  import DateTimeCodecs._

  implicit val QuickserverOrderVersionCodecJson: CodecJson[QuickserverOrderVersion] = CodecJson.derive[QuickserverOrderVersion]
  implicit val QuickserverOrderVersionDecoder: EntityDecoder[QuickserverOrderVersion] = jsonOf[QuickserverOrderVersion]
  implicit val QuickserverOrderVersionEncoder: EntityEncoder[QuickserverOrderVersion] = jsonEncoderOf[QuickserverOrderVersion]
}
