#' Create a new AccountInfoLimits
#'
#' @description
#' IP address ranges used to restrict account access to specific IPs.
#'
#' @docType class
#' @title AccountInfoLimits
#' @description AccountInfoLimits Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoLimits <- R6::R6Class(
  "AccountInfoLimits",
  inherit = null<AccountInfoLimits_inner>,
  public = list(

    #' @description
    #' Initialize a new AccountInfoLimits class.
    #'
    #' @param ... Other optional arguments.
    initialize = function(...) {
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
    #' @return AccountInfoLimits as a base R list.
    #' @examples
    #' # convert array of AccountInfoLimits (x) to a data frame
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
    #' Convert AccountInfoLimits to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoLimitsObject <- list()
      return(AccountInfoLimitsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoLimits
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoLimits
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoLimits in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoLimits
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoLimits
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoLimits and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoLimits
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
# AccountInfoLimits$unlock()
#
## Below is an example to define the print function
# AccountInfoLimits$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoLimits$lock()

