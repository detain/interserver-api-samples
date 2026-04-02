#' Create a new VpsOrderLocationStock
#'
#' @description
#' Location Stock
#'
#' @docType class
#' @title VpsOrderLocationStock
#' @description VpsOrderLocationStock Class
#' @format An \code{R6Class} generator object
#' @field 1  \link{VpsOrderLocationStock1} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsOrderLocationStock <- R6::R6Class(
  "VpsOrderLocationStock",
  public = list(
    `1` = NULL,

    #' @description
    #' Initialize a new VpsOrderLocationStock class.
    #'
    #' @param 1 1
    #' @param ... Other optional arguments.
    initialize = function(`1` = NULL, ...) {
      if (!is.null(`1`)) {
        stopifnot(R6::is.R6(`1`))
        self$`1` <- `1`
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
    #' @return VpsOrderLocationStock as a base R list.
    #' @examples
    #' # convert array of VpsOrderLocationStock (x) to a data frame
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
    #' Convert VpsOrderLocationStock to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsOrderLocationStockObject <- list()
      if (!is.null(self$`1`)) {
        VpsOrderLocationStockObject[["1"]] <-
          self$extractSimpleType(self$`1`)
      }
      return(VpsOrderLocationStockObject)
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
    #' Deserialize JSON string into an instance of VpsOrderLocationStock
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderLocationStock
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`1`)) {
        `1_object` <- VpsOrderLocationStock1$new()
        `1_object`$fromJSON(jsonlite::toJSON(this_object$`1`, auto_unbox = TRUE, digits = NA))
        self$`1` <- `1_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsOrderLocationStock in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderLocationStock
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderLocationStock
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`1` <- VpsOrderLocationStock1$new()$fromJSON(jsonlite::toJSON(this_object$`1`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsOrderLocationStock and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsOrderLocationStock
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
# VpsOrderLocationStock$unlock()
#
## Below is an example to define the print function
# VpsOrderLocationStock$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsOrderLocationStock$lock()

