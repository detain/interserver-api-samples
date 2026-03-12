package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrderTemplates._

case class QuickserverOrderTemplates (
  Ubuntu: Option[QuickserverOrderTemplatesUbuntu64])

object QuickserverOrderTemplates {
  import DateTimeCodecs._

  implicit val QuickserverOrderTemplatesCodecJson: CodecJson[QuickserverOrderTemplates] = CodecJson.derive[QuickserverOrderTemplates]
  implicit val QuickserverOrderTemplatesDecoder: EntityDecoder[QuickserverOrderTemplates] = jsonOf[QuickserverOrderTemplates]
  implicit val QuickserverOrderTemplatesEncoder: EntityEncoder[QuickserverOrderTemplates] = jsonEncoderOf[QuickserverOrderTemplates]
}
