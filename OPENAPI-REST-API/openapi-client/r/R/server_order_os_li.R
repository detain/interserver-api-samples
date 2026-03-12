#' Create a new ServerOrderOsLi
#'
#' @description
#' Operating System options for the server order.
#'
#' @docType class
#' @title ServerOrderOsLi
#' @description ServerOrderOsLi Class
#' @format An \code{R6Class} generator object
#' @field 51  \link{ServerOrderOS} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderOsLi <- R6::R6Class(
  "ServerOrderOsLi",
  public = list(
    `51` = NULL,

    #' @description
    #' Initialize a new ServerOrderOsLi class.
    #'
    #' @param 51 51
    #' @param ... Other optional arguments.
    initialize = function(`51` = NULL, ...) {
      if (!is.null(`51`)) {
        stopifnot(R6::is.R6(`51`))
        self$`51` <- `51`
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
    #' @return ServerOrderOsLi as a base R list.
    #' @examples
    #' # convert array of ServerOrderOsLi (x) to a data frame
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
    #' Convert ServerOrderOsLi to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderOsLiObject <- list()
      if (!is.null(self$`51`)) {
        ServerOrderOsLiObject[["51"]] <-
          self$extractSimpleType(self$`51`)
      }
      return(ServerOrderOsLiObject)
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
    #' Deserialize JSON string into an instance of ServerOrderOsLi
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderOsLi
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`51`)) {
        `51_object` <- ServerOrderOS$new()
        `51_object`$fromJSON(jsonlite::toJSON(this_object$`51`, auto_unbox = TRUE, digits = NA))
        self$`51` <- `51_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderOsLi in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderOsLi
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderOsLi
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`51` <- ServerOrderOS$new()$fromJSON(jsonlite::toJSON(this_object$`51`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderOsLi and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderOsLi
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
# ServerOrderOsLi$unlock()
#
## Below is an example to define the print function
# ServerOrderOsLi$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderOsLi$lock()

