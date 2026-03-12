package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteTableRow._

case class WebsiteTableRow (
  /* Description for the row */
  desc: Option[String],
/* Value for the row */
  value: Option[String])

object WebsiteTableRow {
  import DateTimeCodecs._

  implicit val WebsiteTableRowCodecJson: CodecJson[WebsiteTableRow] = CodecJson.derive[WebsiteTableRow]
  implicit val WebsiteTableRowDecoder: EntityDecoder[WebsiteTableRow] = jsonOf[WebsiteTableRow]
  implicit val WebsiteTableRowEncoder: EntityEncoder[WebsiteTableRow] = jsonEncoderOf[WebsiteTableRow]
}
