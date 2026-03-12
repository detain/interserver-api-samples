#' Create a new GetOrderDetail200ResponseServiceTypesInner
#'
#' @description
#' GetOrderDetail200ResponseServiceTypesInner Class
#'
#' @docType class
#' @title GetOrderDetail200ResponseServiceTypesInner
#' @description GetOrderDetail200ResponseServiceTypesInner Class
#' @format An \code{R6Class} generator object
#' @field services_id  integer [optional]
#' @field services_name  character [optional]
#' @field services_cost  integer [optional]
#' @field services_field1  character [optional]
#' @field services_field2  character [optional]
#' @field services_module  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetOrderDetail200ResponseServiceTypesInner <- R6::R6Class(
  "GetOrderDetail200ResponseServiceTypesInner",
  public = list(
    `services_id` = NULL,
    `services_name` = NULL,
    `services_cost` = NULL,
    `services_field1` = NULL,
    `services_field2` = NULL,
    `services_module` = NULL,

    #' @description
    #' Initialize a new GetOrderDetail200ResponseServiceTypesInner class.
    #'
    #' @param services_id services_id
    #' @param services_name services_name
    #' @param services_cost services_cost
    #' @param services_field1 services_field1
    #' @param services_field2 services_field2
    #' @param services_module services_module
    #' @param ... Other optional arguments.
    initialize = function(`services_id` = NULL, `services_name` = NULL, `services_cost` = NULL, `services_field1` = NULL, `services_field2` = NULL, `services_module` = NULL, ...) {
      if (!is.null(`services_id`)) {
        if (!(is.numeric(`services_id`) && length(`services_id`) == 1)) {
          stop(paste("Error! Invalid data for `services_id`. Must be an integer:", `services_id`))
        }
        self$`services_id` <- `services_id`
      }
      if (!is.null(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
      }
      if (!is.null(`services_cost`)) {
        if (!(is.numeric(`services_cost`) && length(`services_cost`) == 1)) {
          stop(paste("Error! Invalid data for `services_cost`. Must be an integer:", `services_cost`))
        }
        self$`services_cost` <- `services_cost`
      }
      if (!is.null(`services_field1`)) {
        if (!(is.character(`services_field1`) && length(`services_field1`) == 1)) {
          stop(paste("Error! Invalid data for `services_field1`. Must be a string:", `services_field1`))
        }
        self$`services_field1` <- `services_field1`
      }
      if (!is.null(`services_field2`)) {
        if (!(is.character(`services_field2`) && length(`services_field2`) == 1)) {
          stop(paste("Error! Invalid data for `services_field2`. Must be a string:", `services_field2`))
        }
        self$`services_field2` <- `services_field2`
      }
      if (!is.null(`services_module`)) {
        if (!(is.character(`services_module`) && length(`services_module`) == 1)) {
          stop(paste("Error! Invalid data for `services_module`. Must be a string:", `services_module`))
        }
        self$`services_module` <- `services_module`
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
    #' @return GetOrderDetail200ResponseServiceTypesInner as a base R list.
    #' @examples
    #' # convert array of GetOrderDetail200ResponseServiceTypesInner (x) to a data frame
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
    #' Convert GetOrderDetail200ResponseServiceTypesInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetOrderDetail200ResponseServiceTypesInnerObject <- list()
      if (!is.null(self$`services_id`)) {
        GetOrderDetail200ResponseServiceTypesInnerObject[["services_id"]] <-
          self$`services_id`
      }
      if (!is.null(self$`services_name`)) {
        GetOrderDetail200ResponseServiceTypesInnerObject[["services_name"]] <-
          self$`services_name`
      }
      if (!is.null(self$`services_cost`)) {
        GetOrderDetail200ResponseServiceTypesInnerObject[["services_cost"]] <-
          self$`services_cost`
      }
      if (!is.null(self$`services_field1`)) {
        GetOrderDetail200ResponseServiceTypesInnerObject[["services_field1"]] <-
          self$`services_field1`
      }
      if (!is.null(self$`services_field2`)) {
        GetOrderDetail200ResponseServiceTypesInnerObject[["services_field2"]] <-
          self$`services_field2`
      }
      if (!is.null(self$`services_module`)) {
        GetOrderDetail200ResponseServiceTypesInnerObject[["services_module"]] <-
          self$`services_module`
      }
      return(GetOrderDetail200ResponseServiceTypesInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOrderDetail200ResponseServiceTypesInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOrderDetail200ResponseServiceTypesInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`services_id`)) {
        self$`services_id` <- this_object$`services_id`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      if (!is.null(this_object$`services_cost`)) {
        self$`services_cost` <- this_object$`services_cost`
      }
      if (!is.null(this_object$`services_field1`)) {
        self$`services_field1` <- this_object$`services_field1`
      }
      if (!is.null(this_object$`services_field2`)) {
        self$`services_field2` <- this_object$`services_field2`
      }
      if (!is.null(this_object$`services_module`)) {
        self$`services_module` <- this_object$`services_module`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetOrderDetail200ResponseServiceTypesInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOrderDetail200ResponseServiceTypesInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOrderDetail200ResponseServiceTypesInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`services_id` <- this_object$`services_id`
      self$`services_name` <- this_object$`services_name`
      self$`services_cost` <- this_object$`services_cost`
      self$`services_field1` <- this_object$`services_field1`
      self$`services_field2` <- this_object$`services_field2`
      self$`services_module` <- this_object$`services_module`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetOrderDetail200ResponseServiceTypesInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetOrderDetail200ResponseServiceTypesInner
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
# GetOrderDetail200ResponseServiceTypesInner$unlock()
#
## Below is an example to define the print function
# GetOrderDetail200ResponseServiceTypesInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetOrderDetail200ResponseServiceTypesInner$lock()

