package io.swagger.server.model


/**
 * Error response when a buy-it-now server order fails validation.
 *
 * @param success Always false for error responses. for example: ''false''
 * @param text Human-readable error summary. for example: ''Unable to place order.''
 * @param errors List of specific validation error messages. for example: ''["Server ID is missing.","Server Hostname is missing.;","Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number & one special character"]''
 */
case class ServersBuyNowError (
  success: Option[Boolean],
  text: Option[String],
  errors: Option[List[String]]
)

