#' Create a new QuickserverOrderDistroSelUbuntu
#'
#' @description
#' QuickserverOrderDistroSelUbuntu Class
#'
#' @docType class
#' @title QuickserverOrderDistroSelUbuntu
#' @description QuickserverOrderDistroSelUbuntu Class
#' @format An \code{R6Class} generator object
#' @field Ubuntu Selected distribution for Ubuntu. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverOrderDistroSelUbuntu <- R6::R6Class(
  "QuickserverOrderDistroSelUbuntu",
  public = list(
    `Ubuntu` = NULL,

    #' @description
    #' Initialize a new QuickserverOrderDistroSelUbuntu class.
    #'
    #' @param Ubuntu Selected distribution for Ubuntu.
    #' @param ... Other optional arguments.
    initialize = function(`Ubuntu` = NULL, ...) {
      if (!is.null(`Ubuntu`)) {
        if (!(is.character(`Ubuntu`) && length(`Ubuntu`) == 1)) {
          stop(paste("Error! Invalid data for `Ubuntu`. Must be a string:", `Ubuntu`))
        }
        self$`Ubuntu` <- `Ubuntu`
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
    #' @return QuickserverOrderDistroSelUbuntu as a base R list.
    #' @examples
    #' # convert array of QuickserverOrderDistroSelUbuntu (x) to a data frame
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
    #' Convert QuickserverOrderDistroSelUbuntu to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverOrderDistroSelUbuntuObject <- list()
      if (!is.null(self$`Ubuntu`)) {
        QuickserverOrderDistroSelUbuntuObject[["Ubuntu"]] <-
          self$`Ubuntu`
      }
      return(QuickserverOrderDistroSelUbuntuObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderDistroSelUbuntu
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderDistroSelUbuntu
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`Ubuntu`)) {
        self$`Ubuntu` <- this_object$`Ubuntu`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverOrderDistroSelUbuntu in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderDistroSelUbuntu
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderDistroSelUbuntu
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`Ubuntu` <- this_object$`Ubuntu`
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverOrderDistroSelUbuntu and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverOrderDistroSelUbuntu
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
# QuickserverOrderDistroSelUbuntu$unlock()
#
## Below is an example to define the print function
# QuickserverOrderDistroSelUbuntu$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverOrderDistroSelUbuntu$lock()

