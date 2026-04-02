#' Create a new QuickserverOrderVersion
#'
#' @description
#' Version details.
#'
#' @docType class
#' @title QuickserverOrderVersion
#' @description QuickserverOrderVersion Class
#' @format An \code{R6Class} generator object
#' @field centosstream-8  \link{QuickserverOrderVersionCentosstream8} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverOrderVersion <- R6::R6Class(
  "QuickserverOrderVersion",
  public = list(
    `centosstream-8` = NULL,

    #' @description
    #' Initialize a new QuickserverOrderVersion class.
    #'
    #' @param centosstream-8 centosstream-8
    #' @param ... Other optional arguments.
    initialize = function(`centosstream-8` = NULL, ...) {
      if (!is.null(`centosstream-8`)) {
        stopifnot(R6::is.R6(`centosstream-8`))
        self$`centosstream-8` <- `centosstream-8`
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
    #' @return QuickserverOrderVersion as a base R list.
    #' @examples
    #' # convert array of QuickserverOrderVersion (x) to a data frame
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
    #' Convert QuickserverOrderVersion to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverOrderVersionObject <- list()
      if (!is.null(self$`centosstream-8`)) {
        QuickserverOrderVersionObject[["centosstream-8"]] <-
          self$extractSimpleType(self$`centosstream-8`)
      }
      return(QuickserverOrderVersionObject)
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
    #' Deserialize JSON string into an instance of QuickserverOrderVersion
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderVersion
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`centosstream-8`)) {
        `centosstream-8_object` <- QuickserverOrderVersionCentosstream8$new()
        `centosstream-8_object`$fromJSON(jsonlite::toJSON(this_object$`centosstream-8`, auto_unbox = TRUE, digits = NA))
        self$`centosstream-8` <- `centosstream-8_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverOrderVersion in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderVersion
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderVersion
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`centosstream-8` <- QuickserverOrderVersionCentosstream8$new()$fromJSON(jsonlite::toJSON(this_object$`centosstream-8`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverOrderVersion and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverOrderVersion
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
# QuickserverOrderVersion$unlock()
#
## Below is an example to define the print function
# QuickserverOrderVersion$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverOrderVersion$lock()

