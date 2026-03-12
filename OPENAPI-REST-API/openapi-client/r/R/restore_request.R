#' Create a new RestoreRequest
#'
#' @description
#' Request data to trigger a restore from backup.
#'
#' @docType class
#' @title RestoreRequest
#' @description RestoreRequest Class
#' @format An \code{R6Class} generator object
#' @field backup  character [optional]
#' @field password  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RestoreRequest <- R6::R6Class(
  "RestoreRequest",
  public = list(
    `backup` = NULL,
    `password` = NULL,

    #' @description
    #' Initialize a new RestoreRequest class.
    #'
    #' @param backup backup
    #' @param password password
    #' @param ... Other optional arguments.
    initialize = function(`backup` = NULL, `password` = NULL, ...) {
      if (!is.null(`backup`)) {
        if (!(is.character(`backup`) && length(`backup`) == 1)) {
          stop(paste("Error! Invalid data for `backup`. Must be a string:", `backup`))
        }
        self$`backup` <- `backup`
      }
      if (!is.null(`password`)) {
        if (!(is.character(`password`) && length(`password`) == 1)) {
          stop(paste("Error! Invalid data for `password`. Must be a string:", `password`))
        }
        self$`password` <- `password`
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
    #' @return RestoreRequest as a base R list.
    #' @examples
    #' # convert array of RestoreRequest (x) to a data frame
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
    #' Convert RestoreRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      RestoreRequestObject <- list()
      if (!is.null(self$`backup`)) {
        RestoreRequestObject[["backup"]] <-
          self$`backup`
      }
      if (!is.null(self$`password`)) {
        RestoreRequestObject[["password"]] <-
          self$`password`
      }
      return(RestoreRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of RestoreRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of RestoreRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`backup`)) {
        self$`backup` <- this_object$`backup`
      }
      if (!is.null(this_object$`password`)) {
        self$`password` <- this_object$`password`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return RestoreRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of RestoreRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of RestoreRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`backup` <- this_object$`backup`
      self$`password` <- this_object$`password`
      self
    },

    #' @description
    #' Validate JSON input with respect to RestoreRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of RestoreRequest
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
# RestoreRequest$unlock()
#
## Below is an example to define the print function
# RestoreRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# RestoreRequest$lock()

