#' Create a new ScrubIpFilterTypesFiltersValue
#'
#' @description
#' ScrubIpFilterTypesFiltersValue Class
#'
#' @docType class
#' @title ScrubIpFilterTypesFiltersValue
#' @description ScrubIpFilterTypesFiltersValue Class
#' @format An \code{R6Class} generator object
#' @field name  character [optional]
#' @field desc  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ScrubIpFilterTypesFiltersValue <- R6::R6Class(
  "ScrubIpFilterTypesFiltersValue",
  public = list(
    `name` = NULL,
    `desc` = NULL,

    #' @description
    #' Initialize a new ScrubIpFilterTypesFiltersValue class.
    #'
    #' @param name name
    #' @param desc desc
    #' @param ... Other optional arguments.
    initialize = function(`name` = NULL, `desc` = NULL, ...) {
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`desc`)) {
        if (!(is.character(`desc`) && length(`desc`) == 1)) {
          stop(paste("Error! Invalid data for `desc`. Must be a string:", `desc`))
        }
        self$`desc` <- `desc`
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
    #' @return ScrubIpFilterTypesFiltersValue as a base R list.
    #' @examples
    #' # convert array of ScrubIpFilterTypesFiltersValue (x) to a data frame
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
    #' Convert ScrubIpFilterTypesFiltersValue to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ScrubIpFilterTypesFiltersValueObject <- list()
      if (!is.null(self$`name`)) {
        ScrubIpFilterTypesFiltersValueObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`desc`)) {
        ScrubIpFilterTypesFiltersValueObject[["desc"]] <-
          self$`desc`
      }
      return(ScrubIpFilterTypesFiltersValueObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpFilterTypesFiltersValue
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpFilterTypesFiltersValue
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`desc`)) {
        self$`desc` <- this_object$`desc`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ScrubIpFilterTypesFiltersValue in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpFilterTypesFiltersValue
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpFilterTypesFiltersValue
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`desc` <- this_object$`desc`
      self
    },

    #' @description
    #' Validate JSON input with respect to ScrubIpFilterTypesFiltersValue and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ScrubIpFilterTypesFiltersValue
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
# ScrubIpFilterTypesFiltersValue$unlock()
#
## Below is an example to define the print function
# ScrubIpFilterTypesFiltersValue$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ScrubIpFilterTypesFiltersValue$lock()

