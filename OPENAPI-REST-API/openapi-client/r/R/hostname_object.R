#' Create a new HostnameObject
#'
#' @description
#' Request specifying the hostname.
#'
#' @docType class
#' @title HostnameObject
#' @description HostnameObject Class
#' @format An \code{R6Class} generator object
#' @field hostname  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HostnameObject <- R6::R6Class(
  "HostnameObject",
  public = list(
    `hostname` = NULL,

    #' @description
    #' Initialize a new HostnameObject class.
    #'
    #' @param hostname hostname
    #' @param ... Other optional arguments.
    initialize = function(`hostname` = NULL, ...) {
      if (!is.null(`hostname`)) {
        if (!(is.character(`hostname`) && length(`hostname`) == 1)) {
          stop(paste("Error! Invalid data for `hostname`. Must be a string:", `hostname`))
        }
        self$`hostname` <- `hostname`
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
    #' @return HostnameObject as a base R list.
    #' @examples
    #' # convert array of HostnameObject (x) to a data frame
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
    #' Convert HostnameObject to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HostnameObjectObject <- list()
      if (!is.null(self$`hostname`)) {
        HostnameObjectObject[["hostname"]] <-
          self$`hostname`
      }
      return(HostnameObjectObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HostnameObject
    #'
    #' @param input_json the JSON input
    #' @return the instance of HostnameObject
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`hostname`)) {
        self$`hostname` <- this_object$`hostname`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HostnameObject in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HostnameObject
    #'
    #' @param input_json the JSON input
    #' @return the instance of HostnameObject
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`hostname` <- this_object$`hostname`
      self
    },

    #' @description
    #' Validate JSON input with respect to HostnameObject and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HostnameObject
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
# HostnameObject$unlock()
#
## Below is an example to define the print function
# HostnameObject$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HostnameObject$lock()

