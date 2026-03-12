#' Create a new TicketNew
#'
#' @description
#' New helpdesk ticket request.  
#'
#' @docType class
#' @title TicketNew
#' @description TicketNew Class
#' @format An \code{R6Class} generator object
#' @field subject  character
#' @field body  character
#' @field service_id  integer [optional]
#' @field service_module  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
TicketNew <- R6::R6Class(
  "TicketNew",
  public = list(
    `subject` = NULL,
    `body` = NULL,
    `service_id` = NULL,
    `service_module` = NULL,

    #' @description
    #' Initialize a new TicketNew class.
    #'
    #' @param subject subject
    #' @param body body
    #' @param service_id service_id
    #' @param service_module service_module
    #' @param ... Other optional arguments.
    initialize = function(`subject`, `body`, `service_id` = NULL, `service_module` = NULL, ...) {
      if (!missing(`subject`)) {
        if (!(is.character(`subject`) && length(`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", `subject`))
        }
        self$`subject` <- `subject`
      }
      if (!missing(`body`)) {
        if (!(is.character(`body`) && length(`body`) == 1)) {
          stop(paste("Error! Invalid data for `body`. Must be a string:", `body`))
        }
        self$`body` <- `body`
      }
      if (!is.null(`service_id`)) {
        if (!(is.numeric(`service_id`) && length(`service_id`) == 1)) {
          stop(paste("Error! Invalid data for `service_id`. Must be an integer:", `service_id`))
        }
        self$`service_id` <- `service_id`
      }
      if (!is.null(`service_module`)) {
        if (!(is.character(`service_module`) && length(`service_module`) == 1)) {
          stop(paste("Error! Invalid data for `service_module`. Must be a string:", `service_module`))
        }
        self$`service_module` <- `service_module`
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
    #' @return TicketNew as a base R list.
    #' @examples
    #' # convert array of TicketNew (x) to a data frame
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
    #' Convert TicketNew to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      TicketNewObject <- list()
      if (!is.null(self$`subject`)) {
        TicketNewObject[["subject"]] <-
          self$`subject`
      }
      if (!is.null(self$`body`)) {
        TicketNewObject[["body"]] <-
          self$`body`
      }
      if (!is.null(self$`service_id`)) {
        TicketNewObject[["service_id"]] <-
          self$`service_id`
      }
      if (!is.null(self$`service_module`)) {
        TicketNewObject[["service_module"]] <-
          self$`service_module`
      }
      return(TicketNewObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketNew
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketNew
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`subject`)) {
        self$`subject` <- this_object$`subject`
      }
      if (!is.null(this_object$`body`)) {
        self$`body` <- this_object$`body`
      }
      if (!is.null(this_object$`service_id`)) {
        self$`service_id` <- this_object$`service_id`
      }
      if (!is.null(this_object$`service_module`)) {
        self$`service_module` <- this_object$`service_module`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return TicketNew in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketNew
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketNew
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`subject` <- this_object$`subject`
      self$`body` <- this_object$`body`
      self$`service_id` <- this_object$`service_id`
      self$`service_module` <- this_object$`service_module`
      self
    },

    #' @description
    #' Validate JSON input with respect to TicketNew and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `subject`
      if (!is.null(input_json$`subject`)) {
        if (!(is.character(input_json$`subject`) && length(input_json$`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", input_json$`subject`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketNew: the required field `subject` is missing."))
      }
      # check the required field `body`
      if (!is.null(input_json$`body`)) {
        if (!(is.character(input_json$`body`) && length(input_json$`body`) == 1)) {
          stop(paste("Error! Invalid data for `body`. Must be a string:", input_json$`body`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TicketNew: the required field `body` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of TicketNew
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        return(FALSE)
      }

      # check if the required `body` is null
      if (is.null(self$`body`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        invalid_fields["subject"] <- "Non-nullable required field `subject` cannot be null."
      }

      # check if the required `body` is null
      if (is.null(self$`body`)) {
        invalid_fields["body"] <- "Non-nullable required field `body` cannot be null."
      }

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
# TicketNew$unlock()
#
## Below is an example to define the print function
# TicketNew$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# TicketNew$lock()

