#' Create a new GetOrderDetail200ResponseIpsInner
#'
#' @description
#' GetOrderDetail200ResponseIpsInner Class
#'
#' @docType class
#' @title GetOrderDetail200ResponseIpsInner
#' @description GetOrderDetail200ResponseIpsInner Class
#' @format An \code{R6Class} generator object
#' @field service_id  numeric [optional]
#' @field service_module  character [optional]
#' @field service_hostname  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetOrderDetail200ResponseIpsInner <- R6::R6Class(
  "GetOrderDetail200ResponseIpsInner",
  public = list(
    `service_id` = NULL,
    `service_module` = NULL,
    `service_hostname` = NULL,

    #' @description
    #' Initialize a new GetOrderDetail200ResponseIpsInner class.
    #'
    #' @param service_id service_id
    #' @param service_module service_module
    #' @param service_hostname service_hostname
    #' @param ... Other optional arguments.
    initialize = function(`service_id` = NULL, `service_module` = NULL, `service_hostname` = NULL, ...) {
      if (!is.null(`service_id`)) {
        self$`service_id` <- `service_id`
      }
      if (!is.null(`service_module`)) {
        if (!(is.character(`service_module`) && length(`service_module`) == 1)) {
          stop(paste("Error! Invalid data for `service_module`. Must be a string:", `service_module`))
        }
        self$`service_module` <- `service_module`
      }
      if (!is.null(`service_hostname`)) {
        if (!(is.character(`service_hostname`) && length(`service_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `service_hostname`. Must be a string:", `service_hostname`))
        }
        self$`service_hostname` <- `service_hostname`
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
    #' @return GetOrderDetail200ResponseIpsInner as a base R list.
    #' @examples
    #' # convert array of GetOrderDetail200ResponseIpsInner (x) to a data frame
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
    #' Convert GetOrderDetail200ResponseIpsInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetOrderDetail200ResponseIpsInnerObject <- list()
      if (!is.null(self$`service_id`)) {
        GetOrderDetail200ResponseIpsInnerObject[["service_id"]] <-
          self$`service_id`
      }
      if (!is.null(self$`service_module`)) {
        GetOrderDetail200ResponseIpsInnerObject[["service_module"]] <-
          self$`service_module`
      }
      if (!is.null(self$`service_hostname`)) {
        GetOrderDetail200ResponseIpsInnerObject[["service_hostname"]] <-
          self$`service_hostname`
      }
      return(GetOrderDetail200ResponseIpsInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOrderDetail200ResponseIpsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOrderDetail200ResponseIpsInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`service_id`)) {
        self$`service_id` <- this_object$`service_id`
      }
      if (!is.null(this_object$`service_module`)) {
        self$`service_module` <- this_object$`service_module`
      }
      if (!is.null(this_object$`service_hostname`)) {
        self$`service_hostname` <- this_object$`service_hostname`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetOrderDetail200ResponseIpsInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOrderDetail200ResponseIpsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOrderDetail200ResponseIpsInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`service_id` <- this_object$`service_id`
      self$`service_module` <- this_object$`service_module`
      self$`service_hostname` <- this_object$`service_hostname`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetOrderDetail200ResponseIpsInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetOrderDetail200ResponseIpsInner
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
# GetOrderDetail200ResponseIpsInner$unlock()
#
## Below is an example to define the print function
# GetOrderDetail200ResponseIpsInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetOrderDetail200ResponseIpsInner$lock()

