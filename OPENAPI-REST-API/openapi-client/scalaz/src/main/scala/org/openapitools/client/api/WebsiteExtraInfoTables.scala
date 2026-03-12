package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteExtraInfoTables._

case class WebsiteExtraInfoTables (
  links: Option[WebsiteTable],
preview: Option[WebsiteTable],
dns: Option[WebsiteTable])

object WebsiteExtraInfoTables {
  import DateTimeCodecs._

  implicit val WebsiteExtraInfoTablesCodecJson: CodecJson[WebsiteExtraInfoTables] = CodecJson.derive[WebsiteExtraInfoTables]
  implicit val WebsiteExtraInfoTablesDecoder: EntityDecoder[WebsiteExtraInfoTables] = jsonOf[WebsiteExtraInfoTables]
  implicit val WebsiteExtraInfoTablesEncoder: EntityEncoder[WebsiteExtraInfoTables] = jsonEncoderOf[WebsiteExtraInfoTables]
}
