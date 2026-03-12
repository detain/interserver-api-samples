#' Create a new ScrubIpsDeleteRule200Response
#'
#' @description
#' ScrubIpsDeleteRule200Response Class
#'
#' @docType class
#' @title ScrubIpsDeleteRule200Response
#' @description ScrubIpsDeleteRule200Response Class
#' @format An \code{R6Class} generator object
#' @field success  character [optional]
#' @field text  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ScrubIpsDeleteRule200Response <- R6::R6Class(
  "ScrubIpsDeleteRule200Response",
  public = list(
    `success` = NULL,
    `text` = NULL,

    #' @description
    #' Initialize a new ScrubIpsDeleteRule200Response class.
    #'
    #' @param success success
    #' @param text text
    #' @param ... Other optional arguments.
    initialize = function(`success` = NULL, `text` = NULL, ...) {
      if (!is.null(`success`)) {
        if (!(is.logical(`success`) && length(`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", `success`))
        }
        self$`success` <- `success`
      }
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
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
    #' @return ScrubIpsDeleteRule200Response as a base R list.
    #' @examples
    #' # convert array of ScrubIpsDeleteRule200Response (x) to a data frame
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
    #' Convert ScrubIpsDeleteRule200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ScrubIpsDeleteRule200ResponseObject <- list()
      if (!is.null(self$`success`)) {
        ScrubIpsDeleteRule200ResponseObject[["success"]] <-
          self$`success`
      }
      if (!is.null(self$`text`)) {
        ScrubIpsDeleteRule200ResponseObject[["text"]] <-
          self$`text`
      }
      return(ScrubIpsDeleteRule200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpsDeleteRule200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpsDeleteRule200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
      }
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ScrubIpsDeleteRule200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpsDeleteRule200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpsDeleteRule200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`success` <- this_object$`success`
      self$`text` <- this_object$`text`
      self
    },

    #' @description
    #' Validate JSON input with respect to ScrubIpsDeleteRule200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ScrubIpsDeleteRule200Response
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
# ScrubIpsDeleteRule200Response$unlock()
#
## Below is an example to define the print function
# ScrubIpsDeleteRule200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ScrubIpsDeleteRule200Response$lock()

