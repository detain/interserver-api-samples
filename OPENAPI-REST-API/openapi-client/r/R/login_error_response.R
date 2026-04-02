#' Create a new LoginErrorResponse
#'
#' @description
#' Error resposne during login indicating further action.
#'
#' @docType class
#' @title LoginErrorResponse
#' @description LoginErrorResponse Class
#' @format An \code{R6Class} generator object
#' @field message  character [optional]
#' @field field  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LoginErrorResponse <- R6::R6Class(
  "LoginErrorResponse",
  public = list(
    `message` = NULL,
    `field` = NULL,

    #' @description
    #' Initialize a new LoginErrorResponse class.
    #'
    #' @param message message
    #' @param field field
    #' @param ... Other optional arguments.
    initialize = function(`message` = NULL, `field` = NULL, ...) {
      if (!is.null(`message`)) {
        if (!(is.character(`message`) && length(`message`) == 1)) {
          stop(paste("Error! Invalid data for `message`. Must be a string:", `message`))
        }
        self$`message` <- `message`
      }
      if (!is.null(`field`)) {
        if (!(is.character(`field`) && length(`field`) == 1)) {
          stop(paste("Error! Invalid data for `field`. Must be a string:", `field`))
        }
        self$`field` <- `field`
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
    #' @return LoginErrorResponse as a base R list.
    #' @examples
    #' # convert array of LoginErrorResponse (x) to a data frame
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
    #' Convert LoginErrorResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LoginErrorResponseObject <- list()
      if (!is.null(self$`message`)) {
        LoginErrorResponseObject[["message"]] <-
          self$`message`
      }
      if (!is.null(self$`field`)) {
        LoginErrorResponseObject[["field"]] <-
          self$`field`
      }
      return(LoginErrorResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginErrorResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginErrorResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`message`)) {
        self$`message` <- this_object$`message`
      }
      if (!is.null(this_object$`field`)) {
        self$`field` <- this_object$`field`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LoginErrorResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginErrorResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginErrorResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`message` <- this_object$`message`
      self$`field` <- this_object$`field`
      self
    },

    #' @description
    #' Validate JSON input with respect to LoginErrorResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LoginErrorResponse
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
# LoginErrorResponse$unlock()
#
## Below is an example to define the print function
# LoginErrorResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LoginErrorResponse$lock()

