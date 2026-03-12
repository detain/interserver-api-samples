#' Create a new ServerOrderMemoryLi254
#'
#' @description
#' ServerOrderMemoryLi254 Class
#'
#' @docType class
#' @title ServerOrderMemoryLi254
#' @description ServerOrderMemoryLi254 Class
#' @format An \code{R6Class} generator object
#' @field 65  \link{ServerOrderMemory} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderMemoryLi254 <- R6::R6Class(
  "ServerOrderMemoryLi254",
  public = list(
    `65` = NULL,

    #' @description
    #' Initialize a new ServerOrderMemoryLi254 class.
    #'
    #' @param 65 65
    #' @param ... Other optional arguments.
    initialize = function(`65` = NULL, ...) {
      if (!is.null(`65`)) {
        stopifnot(R6::is.R6(`65`))
        self$`65` <- `65`
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
    #' @return ServerOrderMemoryLi254 as a base R list.
    #' @examples
    #' # convert array of ServerOrderMemoryLi254 (x) to a data frame
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
    #' Convert ServerOrderMemoryLi254 to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderMemoryLi254Object <- list()
      if (!is.null(self$`65`)) {
        ServerOrderMemoryLi254Object[["65"]] <-
          self$extractSimpleType(self$`65`)
      }
      return(ServerOrderMemoryLi254Object)
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
    #' Deserialize JSON string into an instance of ServerOrderMemoryLi254
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderMemoryLi254
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`65`)) {
        `65_object` <- ServerOrderMemory$new()
        `65_object`$fromJSON(jsonlite::toJSON(this_object$`65`, auto_unbox = TRUE, digits = NA))
        self$`65` <- `65_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerOrderMemoryLi254 in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderMemoryLi254
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderMemoryLi254
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`65` <- ServerOrderMemory$new()$fromJSON(jsonlite::toJSON(this_object$`65`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderMemoryLi254 and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderMemoryLi254
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
# ServerOrderMemoryLi254$unlock()
#
## Below is an example to define the print function
# ServerOrderMemoryLi254$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderMemoryLi254$lock()

