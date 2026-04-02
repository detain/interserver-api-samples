#' Create a new ViewTicketResponse
#'
#' @description
#' Ticket details
#'
#' @docType class
#' @title ViewTicketResponse
#' @description ViewTicketResponse Class
#' @format An \code{R6Class} generator object
#' @field success  character
#' @field ticket  \link{TicketDetails}
#' @field ticket_custom_fields  \link{TicketCustomFieldDetails} [optional]
#' @field ticket_posts  \link{TicketPostDetails} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ViewTicketResponse <- R6::R6Class(
  "ViewTicketResponse",
  public = list(
    `success` = NULL,
    `ticket` = NULL,
    `ticket_custom_fields` = NULL,
    `ticket_posts` = NULL,

    #' @description
    #' Initialize a new ViewTicketResponse class.
    #'
    #' @param success success
    #' @param ticket ticket
    #' @param ticket_custom_fields ticket_custom_fields
    #' @param ticket_posts ticket_posts
    #' @param ... Other optional arguments.
    initialize = function(`success`, `ticket`, `ticket_custom_fields` = NULL, `ticket_posts` = NULL, ...) {
      if (!missing(`success`)) {
        if (!(is.logical(`success`) && length(`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", `success`))
        }
        self$`success` <- `success`
      }
      if (!missing(`ticket`)) {
        stopifnot(R6::is.R6(`ticket`))
        self$`ticket` <- `ticket`
      }
      if (!is.null(`ticket_custom_fields`)) {
        stopifnot(R6::is.R6(`ticket_custom_fields`))
        self$`ticket_custom_fields` <- `ticket_custom_fields`
      }
      if (!is.null(`ticket_posts`)) {
        stopifnot(R6::is.R6(`ticket_posts`))
        self$`ticket_posts` <- `ticket_posts`
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
    #' @return ViewTicketResponse as a base R list.
    #' @examples
    #' # convert array of ViewTicketResponse (x) to a data frame
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
    #' Convert ViewTicketResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ViewTicketResponseObject <- list()
      if (!is.null(self$`success`)) {
        ViewTicketResponseObject[["success"]] <-
          self$`success`
      }
      if (!is.null(self$`ticket`)) {
        ViewTicketResponseObject[["ticket"]] <-
          self$extractSimpleType(self$`ticket`)
      }
      if (!is.null(self$`ticket_custom_fields`)) {
        ViewTicketResponseObject[["ticket_custom_fields"]] <-
          self$extractSimpleType(self$`ticket_custom_fields`)
      }
      if (!is.null(self$`ticket_posts`)) {
        ViewTicketResponseObject[["ticket_posts"]] <-
          self$extractSimpleType(self$`ticket_posts`)
      }
      return(ViewTicketResponseObject)
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
    #' Deserialize JSON string into an instance of ViewTicketResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of ViewTicketResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
      }
      if (!is.null(this_object$`ticket`)) {
        `ticket_object` <- TicketDetails$new()
        `ticket_object`$fromJSON(jsonlite::toJSON(this_object$`ticket`, auto_unbox = TRUE, digits = NA))
        self$`ticket` <- `ticket_object`
      }
      if (!is.null(this_object$`ticket_custom_fields`)) {
        `ticket_custom_fields_object` <- TicketCustomFieldDetails$new()
        `ticket_custom_fields_object`$fromJSON(jsonlite::toJSON(this_object$`ticket_custom_fields`, auto_unbox = TRUE, digits = NA))
        self$`ticket_custom_fields` <- `ticket_custom_fields_object`
      }
      if (!is.null(this_object$`ticket_posts`)) {
        `ticket_posts_object` <- TicketPostDetails$new()
        `ticket_posts_object`$fromJSON(jsonlite::toJSON(this_object$`ticket_posts`, auto_unbox = TRUE, digits = NA))
        self$`ticket_posts` <- `ticket_posts_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ViewTicketResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ViewTicketResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of ViewTicketResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`success` <- this_object$`success`
      self$`ticket` <- TicketDetails$new()$fromJSON(jsonlite::toJSON(this_object$`ticket`, auto_unbox = TRUE, digits = NA))
      self$`ticket_custom_fields` <- TicketCustomFieldDetails$new()$fromJSON(jsonlite::toJSON(this_object$`ticket_custom_fields`, auto_unbox = TRUE, digits = NA))
      self$`ticket_posts` <- TicketPostDetails$new()$fromJSON(jsonlite::toJSON(this_object$`ticket_posts`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ViewTicketResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `success`
      if (!is.null(input_json$`success`)) {
        if (!(is.logical(input_json$`success`) && length(input_json$`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", input_json$`success`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ViewTicketResponse: the required field `success` is missing."))
      }
      # check the required field `ticket`
      if (!is.null(input_json$`ticket`)) {
        stopifnot(R6::is.R6(input_json$`ticket`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ViewTicketResponse: the required field `ticket` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ViewTicketResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `success` is null
      if (is.null(self$`success`)) {
        return(FALSE)
      }

      # check if the required `ticket` is null
      if (is.null(self$`ticket`)) {
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
      # check if the required `success` is null
      if (is.null(self$`success`)) {
        invalid_fields["success"] <- "Non-nullable required field `success` cannot be null."
      }

      # check if the required `ticket` is null
      if (is.null(self$`ticket`)) {
        invalid_fields["ticket"] <- "Non-nullable required field `ticket` cannot be null."
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
# ViewTicketResponse$unlock()
#
## Below is an example to define the print function
# ViewTicketResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ViewTicketResponse$lock()

