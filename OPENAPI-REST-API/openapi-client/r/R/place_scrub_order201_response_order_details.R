#' Create a new PlaceScrubOrder201ResponseOrderDetails
#'
#' @description
#' PlaceScrubOrder201ResponseOrderDetails Class
#'
#' @docType class
#' @title PlaceScrubOrder201ResponseOrderDetails
#' @description PlaceScrubOrder201ResponseOrderDetails Class
#' @format An \code{R6Class} generator object
#' @field total_cost  integer [optional]
#' @field service_id  integer [optional]
#' @field invoice_id  integer [optional]
#' @field invoice_description  character [optional]
#' @field cj_params  \link{PlaceScrubOrder201ResponseOrderDetailsCjParams} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PlaceScrubOrder201ResponseOrderDetails <- R6::R6Class(
  "PlaceScrubOrder201ResponseOrderDetails",
  public = list(
    `total_cost` = NULL,
    `service_id` = NULL,
    `invoice_id` = NULL,
    `invoice_description` = NULL,
    `cj_params` = NULL,

    #' @description
    #' Initialize a new PlaceScrubOrder201ResponseOrderDetails class.
    #'
    #' @param total_cost total_cost
    #' @param service_id service_id
    #' @param invoice_id invoice_id
    #' @param invoice_description invoice_description
    #' @param cj_params cj_params
    #' @param ... Other optional arguments.
    initialize = function(`total_cost` = NULL, `service_id` = NULL, `invoice_id` = NULL, `invoice_description` = NULL, `cj_params` = NULL, ...) {
      if (!is.null(`total_cost`)) {
        if (!(is.numeric(`total_cost`) && length(`total_cost`) == 1)) {
          stop(paste("Error! Invalid data for `total_cost`. Must be an integer:", `total_cost`))
        }
        self$`total_cost` <- `total_cost`
      }
      if (!is.null(`service_id`)) {
        if (!(is.numeric(`service_id`) && length(`service_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_id`. Must be an integer:", `service_id`))
        }
        self$`service_id` <- `service_id`
      }
      if (!is.null(`invoice_id`)) {
        if (!(is.numeric(`invoice_id`) && length(`invoice_id`) == 1)) {
          stop(paste("Error! Invalid data for `invoice_id`. Must be an integer:", `invoice_id`))
        }
        self$`invoice_id` <- `invoice_id`
      }
      if (!is.null(`invoice_description`)) {
        if (!(is.character(`invoice_description`) && length(`invoice_description`) == 1)) {
          stop(paste("Error! Invalid data for `invoice_description`. Must be a string:", `invoice_description`))
        }
        self$`invoice_description` <- `invoice_description`
      }
      if (!is.null(`cj_params`)) {
        stopifnot(R6::is.R6(`cj_params`))
        self$`cj_params` <- `cj_params`
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
    #' @return PlaceScrubOrder201ResponseOrderDetails as a base R list.
    #' @examples
    #' # convert array of PlaceScrubOrder201ResponseOrderDetails (x) to a data frame
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
    #' Convert PlaceScrubOrder201ResponseOrderDetails to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PlaceScrubOrder201ResponseOrderDetailsObject <- list()
      if (!is.null(self$`total_cost`)) {
        PlaceScrubOrder201ResponseOrderDetailsObject[["total_cost"]] <-
          self$`total_cost`
      }
      if (!is.null(self$`service_id`)) {
        PlaceScrubOrder201ResponseOrderDetailsObject[["service_id"]] <-
          self$`service_id`
      }
      if (!is.null(self$`invoice_id`)) {
        PlaceScrubOrder201ResponseOrderDetailsObject[["invoice_id"]] <-
          self$`invoice_id`
      }
      if (!is.null(self$`invoice_description`)) {
        PlaceScrubOrder201ResponseOrderDetailsObject[["invoice_description"]] <-
          self$`invoice_description`
      }
      if (!is.null(self$`cj_params`)) {
        PlaceScrubOrder201ResponseOrderDetailsObject[["cj_params"]] <-
          self$extractSimpleType(self$`cj_params`)
      }
      return(PlaceScrubOrder201ResponseOrderDetailsObject)
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
    #' Deserialize JSON string into an instance of PlaceScrubOrder201ResponseOrderDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of PlaceScrubOrder201ResponseOrderDetails
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`total_cost`)) {
        self$`total_cost` <- this_object$`total_cost`
      }
      if (!is.null(this_object$`service_id`)) {
        self$`service_id` <- this_object$`service_id`
      }
      if (!is.null(this_object$`invoice_id`)) {
        self$`invoice_id` <- this_object$`invoice_id`
      }
      if (!is.null(this_object$`invoice_description`)) {
        self$`invoice_description` <- this_object$`invoice_description`
      }
      if (!is.null(this_object$`cj_params`)) {
        `cj_params_object` <- PlaceScrubOrder201ResponseOrderDetailsCjParams$new()
        `cj_params_object`$fromJSON(jsonlite::toJSON(this_object$`cj_params`, auto_unbox = TRUE, digits = NA))
        self$`cj_params` <- `cj_params_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PlaceScrubOrder201ResponseOrderDetails in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PlaceScrubOrder201ResponseOrderDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of PlaceScrubOrder201ResponseOrderDetails
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`total_cost` <- this_object$`total_cost`
      self$`service_id` <- this_object$`service_id`
      self$`invoice_id` <- this_object$`invoice_id`
      self$`invoice_description` <- this_object$`invoice_description`
      self$`cj_params` <- PlaceScrubOrder201ResponseOrderDetailsCjParams$new()$fromJSON(jsonlite::toJSON(this_object$`cj_params`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to PlaceScrubOrder201ResponseOrderDetails and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PlaceScrubOrder201ResponseOrderDetails
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
# PlaceScrubOrder201ResponseOrderDetails$unlock()
#
## Below is an example to define the print function
# PlaceScrubOrder201ResponseOrderDetails$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PlaceScrubOrder201ResponseOrderDetails$lock()

