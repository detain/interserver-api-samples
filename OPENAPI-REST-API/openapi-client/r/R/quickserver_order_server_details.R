#' Create a new QuickserverOrderServerDetails
#'
#' @description
#' Server details.
#'
#' @docType class
#' @title QuickserverOrderServerDetails
#' @description QuickserverOrderServerDetails Class
#' @format An \code{R6Class} generator object
#' @field 381  \link{QuickserverOrderServerDetails381} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverOrderServerDetails <- R6::R6Class(
  "QuickserverOrderServerDetails",
  public = list(
    `381` = NULL,

    #' @description
    #' Initialize a new QuickserverOrderServerDetails class.
    #'
    #' @param 381 381
    #' @param ... Other optional arguments.
    initialize = function(`381` = NULL, ...) {
      if (!is.null(`381`)) {
        stopifnot(R6::is.R6(`381`))
        self$`381` <- `381`
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
    #' @return QuickserverOrderServerDetails as a base R list.
    #' @examples
    #' # convert array of QuickserverOrderServerDetails (x) to a data frame
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
    #' Convert QuickserverOrderServerDetails to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverOrderServerDetailsObject <- list()
      if (!is.null(self$`381`)) {
        QuickserverOrderServerDetailsObject[["381"]] <-
          self$extractSimpleType(self$`381`)
      }
      return(QuickserverOrderServerDetailsObject)
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
    #' Deserialize JSON string into an instance of QuickserverOrderServerDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderServerDetails
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`381`)) {
        `381_object` <- QuickserverOrderServerDetails381$new()
        `381_object`$fromJSON(jsonlite::toJSON(this_object$`381`, auto_unbox = TRUE, digits = NA))
        self$`381` <- `381_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverOrderServerDetails in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderServerDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderServerDetails
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`381` <- QuickserverOrderServerDetails381$new()$fromJSON(jsonlite::toJSON(this_object$`381`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverOrderServerDetails and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverOrderServerDetails
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
# QuickserverOrderServerDetails$unlock()
#
## Below is an example to define the print function
# QuickserverOrderServerDetails$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverOrderServerDetails$lock()

