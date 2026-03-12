#' Create a new UpdateTicketResponseSchema
#'
#' @description
#' UpdateTicketResponseSchema Class
#'
#' @docType class
#' @title UpdateTicketResponseSchema
#' @description UpdateTicketResponseSchema Class
#' @format An \code{R6Class} generator object
#' @field success  character [optional]
#' @field message  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
UpdateTicketResponseSchema <- R6::R6Class(
  "UpdateTicketResponseSchema",
  public = list(
    `success` = NULL,
    `message` = NULL,

    #' @description
    #' Initialize a new UpdateTicketResponseSchema class.
    #'
    #' @param success success
    #' @param message message
    #' @param ... Other optional arguments.
    initialize = function(`success` = NULL, `message` = NULL, ...) {
      if (!is.null(`success`)) {
        if (!(is.logical(`success`) && length(`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", `success`))
        }
        self$`success` <- `success`
      }
      if (!is.null(`message`)) {
        if (!(is.character(`message`) && length(`message`) == 1)) {
          stop(paste("Error! Invalid data for `message`. Must be a string:", `message`))
        }
        self$`message` <- `message`
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
    #' @return UpdateTicketResponseSchema as a base R list.
    #' @examples
    #' # convert array of UpdateTicketResponseSchema (x) to a data frame
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
    #' Convert UpdateTicketResponseSchema to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      UpdateTicketResponseSchemaObject <- list()
      if (!is.null(self$`success`)) {
        UpdateTicketResponseSchemaObject[["success"]] <-
          self$`success`
      }
      if (!is.null(self$`message`)) {
        UpdateTicketResponseSchemaObject[["message"]] <-
          self$`message`
      }
      return(UpdateTicketResponseSchemaObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of UpdateTicketResponseSchema
    #'
    #' @param input_json the JSON input
    #' @return the instance of UpdateTicketResponseSchema
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
      }
      if (!is.null(this_object$`message`)) {
        self$`message` <- this_object$`message`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return UpdateTicketResponseSchema in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of UpdateTicketResponseSchema
    #'
    #' @param input_json the JSON input
    #' @return the instance of UpdateTicketResponseSchema
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`success` <- this_object$`success`
      self$`message` <- this_object$`message`
      self
    },

    #' @description
    #' Validate JSON input with respect to UpdateTicketResponseSchema and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of UpdateTicketResponseSchema
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
# UpdateTicketResponseSchema$unlock()
#
## Below is an example to define the print function
# UpdateTicketResponseSchema$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# UpdateTicketResponseSchema$lock()

