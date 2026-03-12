package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VPSTrafficDataDataSectionResponseInner._

case class VPSTrafficDataDataSectionResponseInner (
  
object VPSTrafficDataDataSectionResponseInner {
  import DateTimeCodecs._

  implicit val VPSTrafficDataDataSectionResponseInnerCodecJson: CodecJson[VPSTrafficDataDataSectionResponseInner] = CodecJson.derive[VPSTrafficDataDataSectionResponseInner]
  implicit val VPSTrafficDataDataSectionResponseInnerDecoder: EntityDecoder[VPSTrafficDataDataSectionResponseInner] = jsonOf[VPSTrafficDataDataSectionResponseInner]
  implicit val VPSTrafficDataDataSectionResponseInnerEncoder: EntityEncoder[VPSTrafficDataDataSectionResponseInner] = jsonEncoderOf[VPSTrafficDataDataSectionResponseInner]
}
