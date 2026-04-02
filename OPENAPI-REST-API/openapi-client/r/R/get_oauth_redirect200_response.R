#' Create a new GetOauthRedirect200Response
#'
#' @description
#' GetOauthRedirect200Response Class
#'
#' @docType class
#' @title GetOauthRedirect200Response
#' @description GetOauthRedirect200Response Class
#' @format An \code{R6Class} generator object
#' @field redirect_url The URL to redirect the user to for OAuth authentication. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetOauthRedirect200Response <- R6::R6Class(
  "GetOauthRedirect200Response",
  public = list(
    `redirect_url` = NULL,

    #' @description
    #' Initialize a new GetOauthRedirect200Response class.
    #'
    #' @param redirect_url The URL to redirect the user to for OAuth authentication.
    #' @param ... Other optional arguments.
    initialize = function(`redirect_url` = NULL, ...) {
      if (!is.null(`redirect_url`)) {
        if (!(is.character(`redirect_url`) && length(`redirect_url`) == 1)) {
          stop(paste("Error! Invalid data for `redirect_url`. Must be a string:", `redirect_url`))
        }
        self$`redirect_url` <- `redirect_url`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return GetOauthRedirect200Response as a base R list.
    #' @examples
    #' # convert array of GetOauthRedirect200Response (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert GetOauthRedirect200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetOauthRedirect200ResponseObject <- list()
      if (!is.null(self$`redirect_url`)) {
        GetOauthRedirect200ResponseObject[["redirect_url"]] <-
          self$`redirect_url`
      }
      return(GetOauthRedirect200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOauthRedirect200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOauthRedirect200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`redirect_url`)) {
        self$`redirect_url` <- this_object$`redirect_url`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetOauthRedirect200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOauthRedirect200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOauthRedirect200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`redirect_url` <- this_object$`redirect_url`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetOauthRedirect200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetOauthRedirect200Response
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# GetOauthRedirect200Response$unlock()
#
## Below is an example to define the print function
# GetOauthRedirect200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetOauthRedirect200Response$lock()

