#' Create a new GetAccountTfaSetup200Response
#'
#' @description
#' GetAccountTfaSetup200Response Class
#'
#' @docType class
#' @title GetAccountTfaSetup200Response
#' @description GetAccountTfaSetup200Response Class
#' @format An \code{R6Class} generator object
#' @field 2fa_google_key Base64-encoded secret key for TOTP setup. character [optional]
#' @field 2fa_google_split Human-readable formatted key (chunks of 4 characters). character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetAccountTfaSetup200Response <- R6::R6Class(
  "GetAccountTfaSetup200Response",
  public = list(
    `2fa_google_key` = NULL,
    `2fa_google_split` = NULL,

    #' @description
    #' Initialize a new GetAccountTfaSetup200Response class.
    #'
    #' @param 2fa_google_key Base64-encoded secret key for TOTP setup.
    #' @param 2fa_google_split Human-readable formatted key (chunks of 4 characters).
    #' @param ... Other optional arguments.
    initialize = function(`2fa_google_key` = NULL, `2fa_google_split` = NULL, ...) {
      if (!is.null(`2fa_google_key`)) {
        if (!(is.character(`2fa_google_key`) && length(`2fa_google_key`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_key`. Must be a string:", `2fa_google_key`))
        }
        self$`2fa_google_key` <- `2fa_google_key`
      }
      if (!is.null(`2fa_google_split`)) {
        if (!(is.character(`2fa_google_split`) && length(`2fa_google_split`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_split`. Must be a string:", `2fa_google_split`))
        }
        self$`2fa_google_split` <- `2fa_google_split`
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
    #' @return GetAccountTfaSetup200Response as a base R list.
    #' @examples
    #' # convert array of GetAccountTfaSetup200Response (x) to a data frame
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
    #' Convert GetAccountTfaSetup200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetAccountTfaSetup200ResponseObject <- list()
      if (!is.null(self$`2fa_google_key`)) {
        GetAccountTfaSetup200ResponseObject[["2fa_google_key"]] <-
          self$`2fa_google_key`
      }
      if (!is.null(self$`2fa_google_split`)) {
        GetAccountTfaSetup200ResponseObject[["2fa_google_split"]] <-
          self$`2fa_google_split`
      }
      return(GetAccountTfaSetup200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetAccountTfaSetup200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetAccountTfaSetup200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`2fa_google_key`)) {
        self$`2fa_google_key` <- this_object$`2fa_google_key`
      }
      if (!is.null(this_object$`2fa_google_split`)) {
        self$`2fa_google_split` <- this_object$`2fa_google_split`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetAccountTfaSetup200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetAccountTfaSetup200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetAccountTfaSetup200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`2fa_google_key` <- this_object$`2fa_google_key`
      self$`2fa_google_split` <- this_object$`2fa_google_split`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetAccountTfaSetup200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetAccountTfaSetup200Response
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
# GetAccountTfaSetup200Response$unlock()
#
## Below is an example to define the print function
# GetAccountTfaSetup200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetAccountTfaSetup200Response$lock()

