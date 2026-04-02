#' Create a new LicensesOrderServiceTypes
#'
#' @description
#' Types of license services
#'
#' @docType class
#' @title LicensesOrderServiceTypes
#' @description LicensesOrderServiceTypes Class
#' @format An \code{R6Class} generator object
#' @field LicensesOrderServiceTypes11482  \link{LicensesOrderServiceTypes11482} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicensesOrderServiceTypes <- R6::R6Class(
  "LicensesOrderServiceTypes",
  public = list(
    `LicensesOrderServiceTypes11482` = NULL,

    #' @description
    #' Initialize a new LicensesOrderServiceTypes class.
    #'
    #' @param LicensesOrderServiceTypes11482 LicensesOrderServiceTypes11482
    #' @param ... Other optional arguments.
    initialize = function(`LicensesOrderServiceTypes11482` = NULL, ...) {
      if (!is.null(`LicensesOrderServiceTypes11482`)) {
        stopifnot(R6::is.R6(`LicensesOrderServiceTypes11482`))
        self$`LicensesOrderServiceTypes11482` <- `LicensesOrderServiceTypes11482`
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
    #' @return LicensesOrderServiceTypes as a base R list.
    #' @examples
    #' # convert array of LicensesOrderServiceTypes (x) to a data frame
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
    #' Convert LicensesOrderServiceTypes to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicensesOrderServiceTypesObject <- list()
      if (!is.null(self$`LicensesOrderServiceTypes11482`)) {
        LicensesOrderServiceTypesObject[["LicensesOrderServiceTypes11482"]] <-
          self$extractSimpleType(self$`LicensesOrderServiceTypes11482`)
      }
      return(LicensesOrderServiceTypesObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrderServiceTypes
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderServiceTypes
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`LicensesOrderServiceTypes11482`)) {
        `licensesorderservicetypes11482_object` <- LicensesOrderServiceTypes11482$new()
        `licensesorderservicetypes11482_object`$fromJSON(jsonlite::toJSON(this_object$`LicensesOrderServiceTypes11482`, auto_unbox = TRUE, digits = NA))
        self$`LicensesOrderServiceTypes11482` <- `licensesorderservicetypes11482_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LicensesOrderServiceTypes in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrderServiceTypes
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderServiceTypes
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`LicensesOrderServiceTypes11482` <- LicensesOrderServiceTypes11482$new()$fromJSON(jsonlite::toJSON(this_object$`LicensesOrderServiceTypes11482`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to LicensesOrderServiceTypes and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicensesOrderServiceTypes
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
# LicensesOrderServiceTypes$unlock()
#
## Below is an example to define the print function
# LicensesOrderServiceTypes$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicensesOrderServiceTypes$lock()

