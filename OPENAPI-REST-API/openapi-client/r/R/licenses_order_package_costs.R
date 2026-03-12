#' Create a new LicensesOrderPackageCosts
#'
#' @description
#' Costs of license packages
#'
#' @docType class
#' @title LicensesOrderPackageCosts
#' @description LicensesOrderPackageCosts Class
#' @format An \code{R6Class} generator object
#' @field LicensesOrderPackageCosts11468 Cost of package with ID 11468 numeric [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicensesOrderPackageCosts <- R6::R6Class(
  "LicensesOrderPackageCosts",
  public = list(
    `LicensesOrderPackageCosts11468` = NULL,

    #' @description
    #' Initialize a new LicensesOrderPackageCosts class.
    #'
    #' @param LicensesOrderPackageCosts11468 Cost of package with ID 11468
    #' @param ... Other optional arguments.
    initialize = function(`LicensesOrderPackageCosts11468` = NULL, ...) {
      if (!is.null(`LicensesOrderPackageCosts11468`)) {
        self$`LicensesOrderPackageCosts11468` <- `LicensesOrderPackageCosts11468`
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
    #' @return LicensesOrderPackageCosts as a base R list.
    #' @examples
    #' # convert array of LicensesOrderPackageCosts (x) to a data frame
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
    #' Convert LicensesOrderPackageCosts to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicensesOrderPackageCostsObject <- list()
      if (!is.null(self$`LicensesOrderPackageCosts11468`)) {
        LicensesOrderPackageCostsObject[["LicensesOrderPackageCosts11468"]] <-
          self$`LicensesOrderPackageCosts11468`
      }
      return(LicensesOrderPackageCostsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrderPackageCosts
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderPackageCosts
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`LicensesOrderPackageCosts11468`)) {
        self$`LicensesOrderPackageCosts11468` <- this_object$`LicensesOrderPackageCosts11468`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LicensesOrderPackageCosts in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicensesOrderPackageCosts
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicensesOrderPackageCosts
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`LicensesOrderPackageCosts11468` <- this_object$`LicensesOrderPackageCosts11468`
      self
    },

    #' @description
    #' Validate JSON input with respect to LicensesOrderPackageCosts and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicensesOrderPackageCosts
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
# LicensesOrderPackageCosts$unlock()
#
## Below is an example to define the print function
# LicensesOrderPackageCosts$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicensesOrderPackageCosts$lock()

