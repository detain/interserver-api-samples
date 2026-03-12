#' Create a new TicketDetails
#'
#' @description
#' Detailed ticket information
#'
#' @docType class
#' @title TicketDetails
#' @description TicketDetails Class
#' @format An \code{R6Class} generator object
#' @field ticketid  integer [optional]
#' @field ticketmaskid  character [optional]
#' @field department  character [optional]
#' @field status  character [optional]
#' @field priority  character [optional]
#' @field subject  character [optional]
#' @field created_on  character [optional]
#' @field updated_on  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
TicketDetails <- R6::R6Class(
  "TicketDetails",
  public = list(
    `ticketid` = NULL,
    `ticketmaskid` = NULL,
    `department` = NULL,
    `status` = NULL,
    `priority` = NULL,
    `subject` = NULL,
    `created_on` = NULL,
    `updated_on` = NULL,

    #' @description
    #' Initialize a new TicketDetails class.
    #'
    #' @param ticketid ticketid
    #' @param ticketmaskid ticketmaskid
    #' @param department department
    #' @param status status
    #' @param priority priority
    #' @param subject subject
    #' @param created_on created_on
    #' @param updated_on updated_on
    #' @param ... Other optional arguments.
    initialize = function(`ticketid` = NULL, `ticketmaskid` = NULL, `department` = NULL, `status` = NULL, `priority` = NULL, `subject` = NULL, `created_on` = NULL, `updated_on` = NULL, ...) {
      if (!is.null(`ticketid`)) {
        if (!(is.numeric(`ticketid`) && length(`ticketid`) == 1)) {
          stop(paste("Error! Invalid data for `ticketid`. Must be an integer:", `ticketid`))
        }
        self$`ticketid` <- `ticketid`
      }
      if (!is.null(`ticketmaskid`)) {
        if (!(is.character(`ticketmaskid`) && length(`ticketmaskid`) == 1)) {
          stop(paste("Error! Invalid data for `ticketmaskid`. Must be a string:", `ticketmaskid`))
        }
        self$`ticketmaskid` <- `ticketmaskid`
      }
      if (!is.null(`department`)) {
        if (!(is.character(`department`) && length(`department`) == 1)) {
          stop(paste("Error! Invalid data for `department`. Must be a string:", `department`))
        }
        self$`department` <- `department`
      }
      if (!is.null(`status`)) {
        if (!(is.character(`status`) && length(`status`) == 1)) {
          stop(paste("Error! Invalid data for `status`. Must be a string:", `status`))
        }
        self$`status` <- `status`
      }
      if (!is.null(`priority`)) {
        if (!(is.character(`priority`) && length(`priority`) == 1)) {
          stop(paste("Error! Invalid data for `priority`. Must be a string:", `priority`))
        }
        self$`priority` <- `priority`
      }
      if (!is.null(`subject`)) {
        if (!(is.character(`subject`) && length(`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", `subject`))
        }
        self$`subject` <- `subject`
      }
      if (!is.null(`created_on`)) {
        if (!(is.character(`created_on`) && length(`created_on`) == 1)) {
          stop(paste("Error! Invalid data for `created_on`. Must be a string:", `created_on`))
        }
        self$`created_on` <- `created_on`
      }
      if (!is.null(`updated_on`)) {
        if (!(is.character(`updated_on`) && length(`updated_on`) == 1)) {
          stop(paste("Error! Invalid data for `updated_on`. Must be a string:", `updated_on`))
        }
        self$`updated_on` <- `updated_on`
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
    #' @return TicketDetails as a base R list.
    #' @examples
    #' # convert array of TicketDetails (x) to a data frame
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
    #' Convert TicketDetails to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      TicketDetailsObject <- list()
      if (!is.null(self$`ticketid`)) {
        TicketDetailsObject[["ticketid"]] <-
          self$`ticketid`
      }
      if (!is.null(self$`ticketmaskid`)) {
        TicketDetailsObject[["ticketmaskid"]] <-
          self$`ticketmaskid`
      }
      if (!is.null(self$`department`)) {
        TicketDetailsObject[["department"]] <-
          self$`department`
      }
      if (!is.null(self$`status`)) {
        TicketDetailsObject[["status"]] <-
          self$`status`
      }
      if (!is.null(self$`priority`)) {
        TicketDetailsObject[["priority"]] <-
          self$`priority`
      }
      if (!is.null(self$`subject`)) {
        TicketDetailsObject[["subject"]] <-
          self$`subject`
      }
      if (!is.null(self$`created_on`)) {
        TicketDetailsObject[["created_on"]] <-
          self$`created_on`
      }
      if (!is.null(self$`updated_on`)) {
        TicketDetailsObject[["updated_on"]] <-
          self$`updated_on`
      }
      return(TicketDetailsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketDetails
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`ticketid`)) {
        self$`ticketid` <- this_object$`ticketid`
      }
      if (!is.null(this_object$`ticketmaskid`)) {
        self$`ticketmaskid` <- this_object$`ticketmaskid`
      }
      if (!is.null(this_object$`department`)) {
        self$`department` <- this_object$`department`
      }
      if (!is.null(this_object$`status`)) {
        self$`status` <- this_object$`status`
      }
      if (!is.null(this_object$`priority`)) {
        self$`priority` <- this_object$`priority`
      }
      if (!is.null(this_object$`subject`)) {
        self$`subject` <- this_object$`subject`
      }
      if (!is.null(this_object$`created_on`)) {
        self$`created_on` <- this_object$`created_on`
      }
      if (!is.null(this_object$`updated_on`)) {
        self$`updated_on` <- this_object$`updated_on`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return TicketDetails in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketDetails
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`ticketid` <- this_object$`ticketid`
      self$`ticketmaskid` <- this_object$`ticketmaskid`
      self$`department` <- this_object$`department`
      self$`status` <- this_object$`status`
      self$`priority` <- this_object$`priority`
      self$`subject` <- this_object$`subject`
      self$`created_on` <- this_object$`created_on`
      self$`updated_on` <- this_object$`updated_on`
      self
    },

    #' @description
    #' Validate JSON input with respect to TicketDetails and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of TicketDetails
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
# TicketDetails$unlock()
#
## Below is an example to define the print function
# TicketDetails$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# TicketDetails$lock()

