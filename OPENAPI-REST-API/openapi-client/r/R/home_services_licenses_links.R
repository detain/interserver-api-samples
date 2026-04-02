#' Create a new HomeServicesLicensesLinks
#'
#' @description
#' Map of license service IDs to their IP addresses for the account dashboard.
#'
#' @docType class
#' @title HomeServicesLicensesLinks
#' @description HomeServicesLicensesLinks Class
#' @format An \code{R6Class} generator object
#' @field 386522 Link to a license. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeServicesLicensesLinks <- R6::R6Class(
  "HomeServicesLicensesLinks",
  public = list(
    `386522` = NULL,

    #' @description
    #' Initialize a new HomeServicesLicensesLinks class.
    #'
    #' @param 386522 Link to a license.
    #' @param ... Other optional arguments.
    initialize = function(`386522` = NULL, ...) {
      if (!is.null(`386522`)) {
        if (!(is.character(`386522`) && length(`386522`) == 1)) {
          stop(paste("Error! Invalid data for `386522`. Must be a string:", `386522`))
        }
        self$`386522` <- `386522`
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
    #' @return HomeServicesLicensesLinks as a base R list.
    #' @examples
    #' # convert array of HomeServicesLicensesLinks (x) to a data frame
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
    #' Convert HomeServicesLicensesLinks to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeServicesLicensesLinksObject <- list()
      if (!is.null(self$`386522`)) {
        HomeServicesLicensesLinksObject[["386522"]] <-
          self$`386522`
      }
      return(HomeServicesLicensesLinksObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesLicensesLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesLicensesLinks
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`386522`)) {
        self$`386522` <- this_object$`386522`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeServicesLicensesLinks in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeServicesLicensesLinks
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeServicesLicensesLinks
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`386522` <- this_object$`386522`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeServicesLicensesLinks and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeServicesLicensesLinks
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
# HomeServicesLicensesLinks$unlock()
#
## Below is an example to define the print function
# HomeServicesLicensesLinks$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeServicesLicensesLinks$lock()

