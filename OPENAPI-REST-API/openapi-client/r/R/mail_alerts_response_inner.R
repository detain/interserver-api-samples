#' Create a new MailAlertsResponseInner
#'
#' @description
#' MailAlertsResponseInner Class
#'
#' @docType class
#' @title MailAlertsResponseInner
#' @description MailAlertsResponseInner Class
#' @format An \code{R6Class} generator object
#' @field alert_id  integer [optional]
#' @field alert_type  character [optional]
#' @field alert_value  character [optional]
#' @field alert_to  character [optional]
#' @field alert_enabled  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailAlertsResponseInner <- R6::R6Class(
  "MailAlertsResponseInner",
  public = list(
    `alert_id` = NULL,
    `alert_type` = NULL,
    `alert_value` = NULL,
    `alert_to` = NULL,
    `alert_enabled` = NULL,

    #' @description
    #' Initialize a new MailAlertsResponseInner class.
    #'
    #' @param alert_id alert_id
    #' @param alert_type alert_type
    #' @param alert_value alert_value
    #' @param alert_to alert_to
    #' @param alert_enabled alert_enabled
    #' @param ... Other optional arguments.
    initialize = function(`alert_id` = NULL, `alert_type` = NULL, `alert_value` = NULL, `alert_to` = NULL, `alert_enabled` = NULL, ...) {
      if (!is.null(`alert_id`)) {
        if (!(is.numeric(`alert_id`) && length(`alert_id`) == 1)) {
          stop(paste("Error! Invalid data for `alert_id`. Must be an integer:", `alert_id`))
        }
        self$`alert_id` <- `alert_id`
      }
      if (!is.null(`alert_type`)) {
        if (!(is.character(`alert_type`) && length(`alert_type`) == 1)) {
          stop(paste("Error! Invalid data for `alert_type`. Must be a string:", `alert_type`))
        }
        self$`alert_type` <- `alert_type`
      }
      if (!is.null(`alert_value`)) {
        if (!(is.character(`alert_value`) && length(`alert_value`) == 1)) {
          stop(paste("Error! Invalid data for `alert_value`. Must be a string:", `alert_value`))
        }
        self$`alert_value` <- `alert_value`
      }
      if (!is.null(`alert_to`)) {
        if (!(is.character(`alert_to`) && length(`alert_to`) == 1)) {
          stop(paste("Error! Invalid data for `alert_to`. Must be a string:", `alert_to`))
        }
        self$`alert_to` <- `alert_to`
      }
      if (!is.null(`alert_enabled`)) {
        if (!(is.character(`alert_enabled`) && length(`alert_enabled`) == 1)) {
          stop(paste("Error! Invalid data for `alert_enabled`. Must be a string:", `alert_enabled`))
        }
        self$`alert_enabled` <- `alert_enabled`
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
    #' @return MailAlertsResponseInner as a base R list.
    #' @examples
    #' # convert array of MailAlertsResponseInner (x) to a data frame
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
    #' Convert MailAlertsResponseInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailAlertsResponseInnerObject <- list()
      if (!is.null(self$`alert_id`)) {
        MailAlertsResponseInnerObject[["alert_id"]] <-
          self$`alert_id`
      }
      if (!is.null(self$`alert_type`)) {
        MailAlertsResponseInnerObject[["alert_type"]] <-
          self$`alert_type`
      }
      if (!is.null(self$`alert_value`)) {
        MailAlertsResponseInnerObject[["alert_value"]] <-
          self$`alert_value`
      }
      if (!is.null(self$`alert_to`)) {
        MailAlertsResponseInnerObject[["alert_to"]] <-
          self$`alert_to`
      }
      if (!is.null(self$`alert_enabled`)) {
        MailAlertsResponseInnerObject[["alert_enabled"]] <-
          self$`alert_enabled`
      }
      return(MailAlertsResponseInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailAlertsResponseInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailAlertsResponseInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`alert_id`)) {
        self$`alert_id` <- this_object$`alert_id`
      }
      if (!is.null(this_object$`alert_type`)) {
        self$`alert_type` <- this_object$`alert_type`
      }
      if (!is.null(this_object$`alert_value`)) {
        self$`alert_value` <- this_object$`alert_value`
      }
      if (!is.null(this_object$`alert_to`)) {
        self$`alert_to` <- this_object$`alert_to`
      }
      if (!is.null(this_object$`alert_enabled`)) {
        self$`alert_enabled` <- this_object$`alert_enabled`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailAlertsResponseInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailAlertsResponseInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailAlertsResponseInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`alert_id` <- this_object$`alert_id`
      self$`alert_type` <- this_object$`alert_type`
      self$`alert_value` <- this_object$`alert_value`
      self$`alert_to` <- this_object$`alert_to`
      self$`alert_enabled` <- this_object$`alert_enabled`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailAlertsResponseInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailAlertsResponseInner
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
# MailAlertsResponseInner$unlock()
#
## Below is an example to define the print function
# MailAlertsResponseInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailAlertsResponseInner$lock()

