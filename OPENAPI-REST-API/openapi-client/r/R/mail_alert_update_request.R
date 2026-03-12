#' Create a new MailAlertUpdateRequest
#'
#' @description
#' Payload for updating an existing mail alert.
#'
#' @docType class
#' @title MailAlertUpdateRequest
#' @description MailAlertUpdateRequest Class
#' @format An \code{R6Class} generator object
#' @field alert_id Alert ID to update. integer [optional]
#' @field type Alert type identifier. character [optional]
#' @field value Alert value or threshold. character [optional]
#' @field to Email address to notify. character [optional]
#' @field enabled Whether the alert is enabled. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailAlertUpdateRequest <- R6::R6Class(
  "MailAlertUpdateRequest",
  public = list(
    `alert_id` = NULL,
    `type` = NULL,
    `value` = NULL,
    `to` = NULL,
    `enabled` = NULL,

    #' @description
    #' Initialize a new MailAlertUpdateRequest class.
    #'
    #' @param alert_id Alert ID to update.
    #' @param type Alert type identifier.
    #' @param value Alert value or threshold.
    #' @param to Email address to notify.
    #' @param enabled Whether the alert is enabled.
    #' @param ... Other optional arguments.
    initialize = function(`alert_id` = NULL, `type` = NULL, `value` = NULL, `to` = NULL, `enabled` = NULL, ...) {
      if (!is.null(`alert_id`)) {
        if (!(is.numeric(`alert_id`) && length(`alert_id`) == 1)) {
          stop(paste("Error! Invalid data for `alert_id`. Must be an integer:", `alert_id`))
        }
        self$`alert_id` <- `alert_id`
      }
      if (!is.null(`type`)) {
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!is.null(`value`)) {
        if (!(is.character(`value`) && length(`value`) == 1)) {
          stop(paste("Error! Invalid data for `value`. Must be a string:", `value`))
        }
        self$`value` <- `value`
      }
      if (!is.null(`to`)) {
        if (!(is.character(`to`) && length(`to`) == 1)) {
          stop(paste("Error! Invalid data for `to`. Must be a string:", `to`))
        }
        self$`to` <- `to`
      }
      if (!is.null(`enabled`)) {
        if (!(is.character(`enabled`) && length(`enabled`) == 1)) {
          stop(paste("Error! Invalid data for `enabled`. Must be a string:", `enabled`))
        }
        self$`enabled` <- `enabled`
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
    #' @return MailAlertUpdateRequest as a base R list.
    #' @examples
    #' # convert array of MailAlertUpdateRequest (x) to a data frame
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
    #' Convert MailAlertUpdateRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailAlertUpdateRequestObject <- list()
      if (!is.null(self$`alert_id`)) {
        MailAlertUpdateRequestObject[["alert_id"]] <-
          self$`alert_id`
      }
      if (!is.null(self$`type`)) {
        MailAlertUpdateRequestObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`value`)) {
        MailAlertUpdateRequestObject[["value"]] <-
          self$`value`
      }
      if (!is.null(self$`to`)) {
        MailAlertUpdateRequestObject[["to"]] <-
          self$`to`
      }
      if (!is.null(self$`enabled`)) {
        MailAlertUpdateRequestObject[["enabled"]] <-
          self$`enabled`
      }
      return(MailAlertUpdateRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailAlertUpdateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailAlertUpdateRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`alert_id`)) {
        self$`alert_id` <- this_object$`alert_id`
      }
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`value`)) {
        self$`value` <- this_object$`value`
      }
      if (!is.null(this_object$`to`)) {
        self$`to` <- this_object$`to`
      }
      if (!is.null(this_object$`enabled`)) {
        self$`enabled` <- this_object$`enabled`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailAlertUpdateRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailAlertUpdateRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailAlertUpdateRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`alert_id` <- this_object$`alert_id`
      self$`type` <- this_object$`type`
      self$`value` <- this_object$`value`
      self$`to` <- this_object$`to`
      self$`enabled` <- this_object$`enabled`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailAlertUpdateRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailAlertUpdateRequest
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
# MailAlertUpdateRequest$unlock()
#
## Below is an example to define the print function
# MailAlertUpdateRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailAlertUpdateRequest$lock()

