#' Create a new ServerOrderFieldLabel
#'
#' @description
#' A display label for a field in the server order form.
#'
#' @docType class
#' @title ServerOrderFieldLabel
#' @description ServerOrderFieldLabel Class
#' @format An \code{R6Class} generator object
#' @field name Name of the field label. character [optional]
#' @field active Active status of the field label. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderFieldLabel <- R6::R6Class(
  "ServerOrderFieldLabel",
  public = list(
    `name` = NULL,
    `active` = NULL,

    #' @description
    #' Initialize a new ServerOrderFieldLabel class.
    #'
    #' @param name Name of the field label.
    #' @param active Active status of the field label.
    #' @param ... Other optional arguments.
    initialize = function(`name` = NULL, `active` = NULL, ...) {
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`active`)) {
        if (!(is.numeric(`active`) && length(`active`) == 1)) {
          stop(paste("Error! Invalid data for `active`. Must be an integer:", `active`))
        }
        self$`active` <- `active`
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
    #' @return ServerOrderFieldLabel as a base R list.
    #' @examples
    #' # convert array of ServerOrderFieldLabel (x) to a data frame
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
    #' Convert ServerOrderFieldLabel to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderFieldLabelObject <- list()
      if (!is.null(self$`name`)) {
        ServerOrderFieldLabelObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`active`)) {
        ServerOrderFieldLabelObject[["active"]] <-
          self$`active`
      }
      return(ServerOrderFieldLabelObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderFieldLabel
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderFieldLabel
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`active`)) {
        self$`active` <- this_object$`active`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderFieldLabel in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderFieldLabel
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderFieldLabel
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`active` <- this_object$`active`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderFieldLabel and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderFieldLabel
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
# ServerOrderFieldLabel$unlock()
#
## Below is an example to define the print function
# ServerOrderFieldLabel$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderFieldLabel$lock()

