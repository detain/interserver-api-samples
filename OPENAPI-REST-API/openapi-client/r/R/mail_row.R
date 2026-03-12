#' Create a new MailRow
#'
#' @description
#' A result row from the `Mail` `GET` request.
#'
#' @docType class
#' @title MailRow
#' @description MailRow Class
#' @format An \code{R6Class} generator object
#' @field mail_id The id of the mail. character [optional]
#' @field repeat_invoices_cost The repeat invoices cost of the mail. character [optional]
#' @field mail_username The username of the mail. character [optional]
#' @field mail_status The status of the mail. character [optional]
#' @field services_name The services name of the mail. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailRow <- R6::R6Class(
  "MailRow",
  public = list(
    `mail_id` = NULL,
    `repeat_invoices_cost` = NULL,
    `mail_username` = NULL,
    `mail_status` = NULL,
    `services_name` = NULL,

    #' @description
    #' Initialize a new MailRow class.
    #'
    #' @param mail_id The id of the mail.
    #' @param repeat_invoices_cost The repeat invoices cost of the mail.
    #' @param mail_username The username of the mail.
    #' @param mail_status The status of the mail.
    #' @param services_name The services name of the mail.
    #' @param ... Other optional arguments.
    initialize = function(`mail_id` = NULL, `repeat_invoices_cost` = NULL, `mail_username` = NULL, `mail_status` = NULL, `services_name` = NULL, ...) {
      if (!is.null(`mail_id`)) {
        if (!(is.character(`mail_id`) && length(`mail_id`) == 1)) {
          stop(paste("Error! Invalid data for `mail_id`. Must be a string:", `mail_id`))
        }
        self$`mail_id` <- `mail_id`
      }
      if (!is.null(`repeat_invoices_cost`)) {
        if (!(is.character(`repeat_invoices_cost`) && length(`repeat_invoices_cost`) == 1)) {
          stop(paste("Error! Invalid data for `repeat_invoices_cost`. Must be a string:", `repeat_invoices_cost`))
        }
        self$`repeat_invoices_cost` <- `repeat_invoices_cost`
      }
      if (!is.null(`mail_username`)) {
        if (!(is.character(`mail_username`) && length(`mail_username`) == 1)) {
          stop(paste("Error! Invalid data for `mail_username`. Must be a string:", `mail_username`))
        }
        self$`mail_username` <- `mail_username`
      }
      if (!is.null(`mail_status`)) {
        if (!(is.character(`mail_status`) && length(`mail_status`) == 1)) {
          stop(paste("Error! Invalid data for `mail_status`. Must be a string:", `mail_status`))
        }
        self$`mail_status` <- `mail_status`
      }
      if (!is.null(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
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
    #' @return MailRow as a base R list.
    #' @examples
    #' # convert array of MailRow (x) to a data frame
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
    #' Convert MailRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailRowObject <- list()
      if (!is.null(self$`mail_id`)) {
        MailRowObject[["mail_id"]] <-
          self$`mail_id`
      }
      if (!is.null(self$`repeat_invoices_cost`)) {
        MailRowObject[["repeat_invoices_cost"]] <-
          self$`repeat_invoices_cost`
      }
      if (!is.null(self$`mail_username`)) {
        MailRowObject[["mail_username"]] <-
          self$`mail_username`
      }
      if (!is.null(self$`mail_status`)) {
        MailRowObject[["mail_status"]] <-
          self$`mail_status`
      }
      if (!is.null(self$`services_name`)) {
        MailRowObject[["services_name"]] <-
          self$`services_name`
      }
      return(MailRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`mail_id`)) {
        self$`mail_id` <- this_object$`mail_id`
      }
      if (!is.null(this_object$`repeat_invoices_cost`)) {
        self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      }
      if (!is.null(this_object$`mail_username`)) {
        self$`mail_username` <- this_object$`mail_username`
      }
      if (!is.null(this_object$`mail_status`)) {
        self$`mail_status` <- this_object$`mail_status`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`mail_id` <- this_object$`mail_id`
      self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      self$`mail_username` <- this_object$`mail_username`
      self$`mail_status` <- this_object$`mail_status`
      self$`services_name` <- this_object$`services_name`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailRow
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
# MailRow$unlock()
#
## Below is an example to define the print function
# MailRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailRow$lock()

