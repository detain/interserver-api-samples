package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import SearchAutocompleteResponse._

case class SearchAutocompleteResponse (
  
object SearchAutocompleteResponse {
  import DateTimeCodecs._

  implicit val SearchAutocompleteResponseCodecJson: CodecJson[SearchAutocompleteResponse] = CodecJson.derive[SearchAutocompleteResponse]
  implicit val SearchAutocompleteResponseDecoder: EntityDecoder[SearchAutocompleteResponse] = jsonOf[SearchAutocompleteResponse]
  implicit val SearchAutocompleteResponseEncoder: EntityEncoder[SearchAutocompleteResponse] = jsonEncoderOf[SearchAutocompleteResponse]
}
