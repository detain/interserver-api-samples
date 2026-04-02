#' Create a new ServerOrderBandwidthLi
#'
#' @description
#' Bandwidth options for the server order.
#'
#' @docType class
#' @title ServerOrderBandwidthLi
#' @description ServerOrderBandwidthLi Class
#' @format An \code{R6Class} generator object
#' @field 15  \link{ServerOrderBandwidth} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderBandwidthLi <- R6::R6Class(
  "ServerOrderBandwidthLi",
  public = list(
    `15` = NULL,

    #' @description
    #' Initialize a new ServerOrderBandwidthLi class.
    #'
    #' @param 15 15
    #' @param ... Other optional arguments.
    initialize = function(`15` = NULL, ...) {
      if (!is.null(`15`)) {
        stopifnot(R6::is.R6(`15`))
        self$`15` <- `15`
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
    #' @return ServerOrderBandwidthLi as a base R list.
    #' @examples
    #' # convert array of ServerOrderBandwidthLi (x) to a data frame
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
    #' Convert ServerOrderBandwidthLi to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderBandwidthLiObject <- list()
      if (!is.null(self$`15`)) {
        ServerOrderBandwidthLiObject[["15"]] <-
          self$extractSimpleType(self$`15`)
      }
      return(ServerOrderBandwidthLiObject)
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
    #' Deserialize JSON string into an instance of ServerOrderBandwidthLi
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderBandwidthLi
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`15`)) {
        `15_object` <- ServerOrderBandwidth$new()
        `15_object`$fromJSON(jsonlite::toJSON(this_object$`15`, auto_unbox = TRUE, digits = NA))
        self$`15` <- `15_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderBandwidthLi in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderBandwidthLi
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderBandwidthLi
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`15` <- ServerOrderBandwidth$new()$fromJSON(jsonlite::toJSON(this_object$`15`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderBandwidthLi and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderBandwidthLi
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
# ServerOrderBandwidthLi$unlock()
#
## Below is an example to define the print function
# ServerOrderBandwidthLi$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderBandwidthLi$lock()

