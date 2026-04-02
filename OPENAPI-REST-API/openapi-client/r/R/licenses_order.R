#' Create a new LicensesOrder
#'
#' @description
#' Available license packages and pricing for ordering a new software license.
#'
#' @docType class
#' @title LicensesOrder
#' @description LicensesOrder Class
#' @format An \code{R6Class} generator object
#' @field serviceCategories  \link{LicensesOrderServiceCategories} [optional]
#' @field packageCosts  \link{LicensesOrderPackageCosts} [optional]
#' @field serviceTypes  \link{LicensesOrderServiceTypes} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicensesOrder <- R6::R6Class(
  "LicensesOrder",
  public = list(
    `serviceCategories` = NULL,
    `packageCosts` = NULL,
    `serviceTypes` = NULL,

    #' @description
    #' Initialize a new LicensesOrder class.
    #'
    #' @param serviceCategories serviceCategories
    #' @param packageCosts packageCosts
    #' @param serviceTypes serviceTypes
    #' @param ... Other optional arguments.
    initialize = function(`serviceCategories` = NULL, `packageCosts` = NULL, `serviceTypes` = NULL, ...) {
      if (!is.null(`serviceCategories`)) {
        stopifnot(R6::is.R6(`serviceCategories`))
        self$`serviceCategories` <- `serviceCategories`
      }
      if (!is.null(`packageCosts`)) {
        stopifnot(R6::is.R6(`packageCosts`))
        self$`packageCosts` <- `packageCosts`
      }
      if (!is.null(`serviceTypes`)) {
        stopifnot(R6::is.R6(`serviceTypes`))
        self$`serviceTypes` <- `serviceTypes`
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
    #' @return LicensesOrder as a base R list.
    #' @examples
    #' # convert array of LicensesOrder (x) to a data frame
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
    #' Convert LicensesOrder to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicensesOrderObject <- list()
      if (!is.null(self$`serviceCategories`)) {
        LicensesOrderObject[["serviceCategories"]] <-
          self$extractSimpleType(self$`serviceCategories`)
      }
      if (!is.null(self$`packageCosts`)) {
        LicensesOrderObject[["packageCosts"]] <-
          self$extractSimpleType(self$`packageCosts`)
      }
      if (!is.null(self$`serviceTypes`)) {
        LicensesOrderObject[["serviceTypes"]] <-
          self$extractSimpleType(self$`serviceTypes`)
      }
      return(LicensesOrderObject)
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
    #' Deserialize JSON string into an instance of LicensesOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrder
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`serviceCategories`)) {
        `servicecategories_object` <- LicensesOrderServiceCategories$new()
        `servicecategories_object`$fromJSON(jsonlite::toJSON(this_object$`serviceCategories`, auto_unbox = TRUE, digits = NA))
        self$`serviceCategories` <- `servicecategories_object`
      }
      if (!is.null(this_object$`packageCosts`)) {
        `packagecosts_object` <- LicensesOrderPackageCosts$new()
        `packagecosts_object`$fromJSON(jsonlite::toJSON(this_object$`packageCosts`, auto_unbox = TRUE, digits = NA))
        self$`packageCosts` <- `packagecosts_object`
      }
      if (!is.null(this_object$`serviceTypes`)) {
        `servicetypes_object` <- LicensesOrderServiceTypes$new()
        `servicetypes_object`$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
        self$`serviceTypes` <- `servicetypes_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LicensesOrder in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrder
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`serviceCategories` <- LicensesOrderServiceCategories$new()$fromJSON(jsonlite::toJSON(this_object$`serviceCategories`, auto_unbox = TRUE, digits = NA))
      self$`packageCosts` <- LicensesOrderPackageCosts$new()$fromJSON(jsonlite::toJSON(this_object$`packageCosts`, auto_unbox = TRUE, digits = NA))
      self$`serviceTypes` <- LicensesOrderServiceTypes$new()$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to LicensesOrder and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicensesOrder
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
# LicensesOrder$unlock()
#
## Below is an example to define the print function
# LicensesOrder$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicensesOrder$lock()

