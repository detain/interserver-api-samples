#' Create a new WebsiteBackups
#'
#' @description
#' List of available backups for a webhosting service with their names and sizes.
#'
#' @docType class
#' @title WebsiteBackups
#' @description WebsiteBackups Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsiteBackups <- R6::R6Class(
  "WebsiteBackups",
  inherit = null<WebsiteBackups_inner>,
  public = list(

    #' @description
    #' Initialize a new WebsiteBackups class.
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
    #' @return WebsiteBackups as a base R list.
    #' @examples
    #' # convert array of WebsiteBackups (x) to a data frame
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
    #' Convert WebsiteBackups to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsiteBackupsObject <- list()
      return(WebsiteBackupsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteBackups
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteBackups
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsiteBackups in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteBackups
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteBackups
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsiteBackups and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsiteBackups
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
# WebsiteBackups$unlock()
#
## Below is an example to define the print function
# WebsiteBackups$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsiteBackups$lock()

