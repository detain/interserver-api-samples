#' Create a new WebsiteTableRow
#'
#' @description
#' WebsiteTableRow Class
#'
#' @docType class
#' @title WebsiteTableRow
#' @description WebsiteTableRow Class
#' @format An \code{R6Class} generator object
#' @field desc Description for the row character [optional]
#' @field value Value for the row character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsiteTableRow <- R6::R6Class(
  "WebsiteTableRow",
  public = list(
    `desc` = NULL,
    `value` = NULL,

    #' @description
    #' Initialize a new WebsiteTableRow class.
    #'
    #' @param desc Description for the row
    #' @param value Value for the row
    #' @param ... Other optional arguments.
    initialize = function(`desc` = NULL, `value` = NULL, ...) {
      if (!is.null(`desc`)) {
        if (!(is.character(`desc`) && length(`desc`) == 1)) {
          stop(paste("Error! Invalid data for `desc`. Must be a string:", `desc`))
        }
        self$`desc` <- `desc`
      }
      if (!is.null(`value`)) {
        if (!(is.character(`value`) && length(`value`) == 1)) {
          stop(paste("Error! Invalid data for `value`. Must be a string:", `value`))
        }
        self$`value` <- `value`
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
    #' @return WebsiteTableRow as a base R list.
    #' @examples
    #' # convert array of WebsiteTableRow (x) to a data frame
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
    #' Convert WebsiteTableRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsiteTableRowObject <- list()
      if (!is.null(self$`desc`)) {
        WebsiteTableRowObject[["desc"]] <-
          self$`desc`
      }
      if (!is.null(self$`value`)) {
        WebsiteTableRowObject[["value"]] <-
          self$`value`
      }
      return(WebsiteTableRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteTableRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteTableRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`desc`)) {
        self$`desc` <- this_object$`desc`
      }
      if (!is.null(this_object$`value`)) {
        self$`value` <- this_object$`value`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsiteTableRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteTableRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteTableRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`desc` <- this_object$`desc`
      self$`value` <- this_object$`value`
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsiteTableRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsiteTableRow
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
# WebsiteTableRow$unlock()
#
## Below is an example to define the print function
# WebsiteTableRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsiteTableRow$lock()

