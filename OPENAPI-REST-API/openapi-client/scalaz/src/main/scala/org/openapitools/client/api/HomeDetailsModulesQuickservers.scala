package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModulesQuickservers._

case class HomeDetailsModulesQuickservers (
  /* The icon for quick servers. */
  icon: Option[String],
/* Link to view quick servers. */
  view_link: Option[String],
/* Heading for quick servers. */
  heading: Option[String],
/* Link to order quick server. */
  buy_link: Option[String],
/* Link to view quick servers list. */
  list_link: Option[String])

object HomeDetailsModulesQuickservers {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesQuickserversCodecJson: CodecJson[HomeDetailsModulesQuickservers] = CodecJson.derive[HomeDetailsModulesQuickservers]
  implicit val HomeDetailsModulesQuickserversDecoder: EntityDecoder[HomeDetailsModulesQuickservers] = jsonOf[HomeDetailsModulesQuickservers]
  implicit val HomeDetailsModulesQuickserversEncoder: EntityEncoder[HomeDetailsModulesQuickservers] = jsonEncoderOf[HomeDetailsModulesQuickservers]
}
