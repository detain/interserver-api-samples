package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteTable._

case class WebsiteTable (
  /* Title of the table */
  title: Option[String],
rows: Option[List[WebsiteTableRow]])

object WebsiteTable {
  import DateTimeCodecs._

  implicit val WebsiteTableCodecJson: CodecJson[WebsiteTable] = CodecJson.derive[WebsiteTable]
  implicit val WebsiteTableDecoder: EntityDecoder[WebsiteTable] = jsonOf[WebsiteTable]
  implicit val WebsiteTableEncoder: EntityEncoder[WebsiteTable] = jsonEncoderOf[WebsiteTable]
}
