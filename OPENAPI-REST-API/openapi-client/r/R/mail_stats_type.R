#' Create a new MailStatsType
#'
#' @description
#' Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
#'
#' @docType class
#' @title MailStatsType
#' @description MailStatsType Class
#' @format An \code{R6Class} generator object
#' @field time  character [optional]
#' @field usage  integer [optional]
#' @field currency  character [optional]
#' @field currencySymbol  character [optional]
#' @field cost  numeric [optional]
#' @field received  integer [optional]
#' @field sent  integer [optional]
#' @field volume  \link{MailStatsTypeVolume} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailStatsType <- R6::R6Class(
  "MailStatsType",
  public = list(
    `time` = NULL,
    `usage` = NULL,
    `currency` = NULL,
    `currencySymbol` = NULL,
    `cost` = NULL,
    `received` = NULL,
    `sent` = NULL,
    `volume` = NULL,

    #' @description
    #' Initialize a new MailStatsType class.
    #'
    #' @param time time. Default to "1h".
    #' @param usage usage
    #' @param currency currency
    #' @param currencySymbol currencySymbol
    #' @param cost cost
    #' @param received received
    #' @param sent sent
    #' @param volume volume
    #' @param ... Other optional arguments.
    initialize = function(`time` = "1h", `usage` = NULL, `currency` = NULL, `currencySymbol` = NULL, `cost` = NULL, `received` = NULL, `sent` = NULL, `volume` = NULL, ...) {
      if (!is.null(`time`)) {
        if (!(`time` %in% c("all", "billing", "month", "7d", "24h", "today", "1h"))) {
          stop(paste("Error! \"", `time`, "\" cannot be assigned to `time`. Must be \"all\", \"billing\", \"month\", \"7d\", \"24h\", \"today\", \"1h\".", sep = ""))
        }
        if (!(is.character(`time`) && length(`time`) == 1)) {
          stop(paste("Error! Invalid data for `time`. Must be a string:", `time`))
        }
        self$`time` <- `time`
      }
      if (!is.null(`usage`)) {
        if (!(is.numeric(`usage`) && length(`usage`) == 1)) {
          stop(paste("Error! Invalid data for `usage`. Must be an integer:", `usage`))
        }
        self$`usage` <- `usage`
      }
      if (!is.null(`currency`)) {
        if (!(is.character(`currency`) && length(`currency`) == 1)) {
          stop(paste("Error! Invalid data for `currency`. Must be a string:", `currency`))
        }
        self$`currency` <- `currency`
      }
      if (!is.null(`currencySymbol`)) {
        if (!(is.character(`currencySymbol`) && length(`currencySymbol`) == 1)) {
          stop(paste("Error! Invalid data for `currencySymbol`. Must be a string:", `currencySymbol`))
        }
        self$`currencySymbol` <- `currencySymbol`
      }
      if (!is.null(`cost`)) {
        if (!(is.numeric(`cost`) && length(`cost`) == 1)) {
          stop(paste("Error! Invalid data for `cost`. Must be a number:", `cost`))
        }
        self$`cost` <- `cost`
      }
      if (!is.null(`received`)) {
        if (!(is.numeric(`received`) && length(`received`) == 1)) {
          stop(paste("Error! Invalid data for `received`. Must be an integer:", `received`))
        }
        self$`received` <- `received`
      }
      if (!is.null(`sent`)) {
        if (!(is.numeric(`sent`) && length(`sent`) == 1)) {
          stop(paste("Error! Invalid data for `sent`. Must be an integer:", `sent`))
        }
        self$`sent` <- `sent`
      }
      if (!is.null(`volume`)) {
        stopifnot(R6::is.R6(`volume`))
        self$`volume` <- `volume`
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
    #' @return MailStatsType as a base R list.
    #' @examples
    #' # convert array of MailStatsType (x) to a data frame
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
    #' Convert MailStatsType to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailStatsTypeObject <- list()
      if (!is.null(self$`time`)) {
        MailStatsTypeObject[["time"]] <-
          self$`time`
      }
      if (!is.null(self$`usage`)) {
        MailStatsTypeObject[["usage"]] <-
          self$`usage`
      }
      if (!is.null(self$`currency`)) {
        MailStatsTypeObject[["currency"]] <-
          self$`currency`
      }
      if (!is.null(self$`currencySymbol`)) {
        MailStatsTypeObject[["currencySymbol"]] <-
          self$`currencySymbol`
      }
      if (!is.null(self$`cost`)) {
        MailStatsTypeObject[["cost"]] <-
          self$`cost`
      }
      if (!is.null(self$`received`)) {
        MailStatsTypeObject[["received"]] <-
          self$`received`
      }
      if (!is.null(self$`sent`)) {
        MailStatsTypeObject[["sent"]] <-
          self$`sent`
      }
      if (!is.null(self$`volume`)) {
        MailStatsTypeObject[["volume"]] <-
          self$extractSimpleType(self$`volume`)
      }
      return(MailStatsTypeObject)
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
    #' Deserialize JSON string into an instance of MailStatsType
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsType
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`time`)) {
        if (!is.null(this_object$`time`) && !(this_object$`time` %in% c("all", "billing", "month", "7d", "24h", "today", "1h"))) {
          stop(paste("Error! \"", this_object$`time`, "\" cannot be assigned to `time`. Must be \"all\", \"billing\", \"month\", \"7d\", \"24h\", \"today\", \"1h\".", sep = ""))
        }
        self$`time` <- this_object$`time`
      }
      if (!is.null(this_object$`usage`)) {
        self$`usage` <- this_object$`usage`
      }
      if (!is.null(this_object$`currency`)) {
        self$`currency` <- this_object$`currency`
      }
      if (!is.null(this_object$`currencySymbol`)) {
        self$`currencySymbol` <- this_object$`currencySymbol`
      }
      if (!is.null(this_object$`cost`)) {
        self$`cost` <- this_object$`cost`
      }
      if (!is.null(this_object$`received`)) {
        self$`received` <- this_object$`received`
      }
      if (!is.null(this_object$`sent`)) {
        self$`sent` <- this_object$`sent`
      }
      if (!is.null(this_object$`volume`)) {
        `volume_object` <- MailStatsTypeVolume$new()
        `volume_object`$fromJSON(jsonlite::toJSON(this_object$`volume`, auto_unbox = TRUE, digits = NA))
        self$`volume` <- `volume_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailStatsType in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsType
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsType
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`time`) && !(this_object$`time` %in% c("all", "billing", "month", "7d", "24h", "today", "1h"))) {
        stop(paste("Error! \"", this_object$`time`, "\" cannot be assigned to `time`. Must be \"all\", \"billing\", \"month\", \"7d\", \"24h\", \"today\", \"1h\".", sep = ""))
      }
      self$`time` <- this_object$`time`
      self$`usage` <- this_object$`usage`
      self$`currency` <- this_object$`currency`
      self$`currencySymbol` <- this_object$`currencySymbol`
      self$`cost` <- this_object$`cost`
      self$`received` <- this_object$`received`
      self$`sent` <- this_object$`sent`
      self$`volume` <- MailStatsTypeVolume$new()$fromJSON(jsonlite::toJSON(this_object$`volume`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to MailStatsType and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailStatsType
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
# MailStatsType$unlock()
#
## Below is an example to define the print function
# MailStatsType$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailStatsType$lock()

