#' Create a new AccountInfoLimitsInner
#'
#' @description
#' AccountInfoLimitsInner Class
#'
#' @docType class
#' @title AccountInfoLimitsInner
#' @description AccountInfoLimitsInner Class
#' @format An \code{R6Class} generator object
#' @field start  character [optional]
#' @field end  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoLimitsInner <- R6::R6Class(
  "AccountInfoLimitsInner",
  public = list(
    `start` = NULL,
    `end` = NULL,

    #' @description
    #' Initialize a new AccountInfoLimitsInner class.
    #'
    #' @param start start
    #' @param end end
    #' @param ... Other optional arguments.
    initialize = function(`start` = NULL, `end` = NULL, ...) {
      if (!is.null(`start`)) {
        if (!(is.character(`start`) && length(`start`) == 1)) {
          stop(paste("Error! Invalid data for `start`. Must be a string:", `start`))
        }
        self$`start` <- `start`
      }
      if (!is.null(`end`)) {
        if (!(is.character(`end`) && length(`end`) == 1)) {
          stop(paste("Error! Invalid data for `end`. Must be a string:", `end`))
        }
        self$`end` <- `end`
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
    #' @return AccountInfoLimitsInner as a base R list.
    #' @examples
    #' # convert array of AccountInfoLimitsInner (x) to a data frame
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
    #' Convert AccountInfoLimitsInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoLimitsInnerObject <- list()
      if (!is.null(self$`start`)) {
        AccountInfoLimitsInnerObject[["start"]] <-
          self$`start`
      }
      if (!is.null(self$`end`)) {
        AccountInfoLimitsInnerObject[["end"]] <-
          self$`end`
      }
      return(AccountInfoLimitsInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoLimitsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoLimitsInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`start`)) {
        self$`start` <- this_object$`start`
      }
      if (!is.null(this_object$`end`)) {
        self$`end` <- this_object$`end`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoLimitsInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoLimitsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoLimitsInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`start` <- this_object$`start`
      self$`end` <- this_object$`end`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoLimitsInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoLimitsInner
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
# AccountInfoLimitsInner$unlock()
#
## Below is an example to define the print function
# AccountInfoLimitsInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoLimitsInner$lock()

