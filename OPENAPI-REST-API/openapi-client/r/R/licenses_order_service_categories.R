#' Create a new LicensesOrderServiceCategories
#'
#' @description
#' License service categories
#'
#' @docType class
#' @title LicensesOrderServiceCategories
#' @description LicensesOrderServiceCategories Class
#' @format An \code{R6Class} generator object
#' @field LicensesOrderServiceCategories509  \link{LicensesOrderServiceCategories509} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicensesOrderServiceCategories <- R6::R6Class(
  "LicensesOrderServiceCategories",
  public = list(
    `LicensesOrderServiceCategories509` = NULL,

    #' @description
    #' Initialize a new LicensesOrderServiceCategories class.
    #'
    #' @param LicensesOrderServiceCategories509 LicensesOrderServiceCategories509
    #' @param ... Other optional arguments.
    initialize = function(`LicensesOrderServiceCategories509` = NULL, ...) {
      if (!is.null(`LicensesOrderServiceCategories509`)) {
        stopifnot(R6::is.R6(`LicensesOrderServiceCategories509`))
        self$`LicensesOrderServiceCategories509` <- `LicensesOrderServiceCategories509`
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
    #' @return LicensesOrderServiceCategories as a base R list.
    #' @examples
    #' # convert array of LicensesOrderServiceCategories (x) to a data frame
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
    #' Convert LicensesOrderServiceCategories to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicensesOrderServiceCategoriesObject <- list()
      if (!is.null(self$`LicensesOrderServiceCategories509`)) {
        LicensesOrderServiceCategoriesObject[["LicensesOrderServiceCategories509"]] <-
          self$extractSimpleType(self$`LicensesOrderServiceCategories509`)
      }
      return(LicensesOrderServiceCategoriesObject)
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
    #' Deserialize JSON string into an instance of LicensesOrderServiceCategories
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderServiceCategories
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`LicensesOrderServiceCategories509`)) {
        `licensesorderservicecategories509_object` <- LicensesOrderServiceCategories509$new()
        `licensesorderservicecategories509_object`$fromJSON(jsonlite::toJSON(this_object$`LicensesOrderServiceCategories509`, auto_unbox = TRUE, digits = NA))
        self$`LicensesOrderServiceCategories509` <- `licensesorderservicecategories509_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LicensesOrderServiceCategories in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrderServiceCategories
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderServiceCategories
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`LicensesOrderServiceCategories509` <- LicensesOrderServiceCategories509$new()$fromJSON(jsonlite::toJSON(this_object$`LicensesOrderServiceCategories509`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to LicensesOrderServiceCategories and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicensesOrderServiceCategories
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
# LicensesOrderServiceCategories$unlock()
#
## Below is an example to define the print function
# LicensesOrderServiceCategories$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicensesOrderServiceCategories$lock()

