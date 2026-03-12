package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModulesServers._

case class HomeDetailsModulesServers (
  /* The icon for dedicated servers. */
  icon: Option[String],
/* Link to view server. */
  view_link: Option[String],
/* Heading for dedicated servers. */
  heading: Option[String],
/* Link to order server. */
  buy_link: Option[String],
/* Link to view servers list. */
  list_link: Option[String])

object HomeDetailsModulesServers {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesServersCodecJson: CodecJson[HomeDetailsModulesServers] = CodecJson.derive[HomeDetailsModulesServers]
  implicit val HomeDetailsModulesServersDecoder: EntityDecoder[HomeDetailsModulesServers] = jsonOf[HomeDetailsModulesServers]
  implicit val HomeDetailsModulesServersEncoder: EntityEncoder[HomeDetailsModulesServers] = jsonEncoderOf[HomeDetailsModulesServers]
}
