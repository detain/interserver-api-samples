#' Create a new DnsUpdateRecord
#'
#' @description
#' The request data to update a dns record.
#'
#' @docType class
#' @title DnsUpdateRecord
#' @description DnsUpdateRecord Class
#' @format An \code{R6Class} generator object
#' @field name  character [optional]
#' @field type  \link{DnsRecordType} [optional]
#' @field content  character [optional]
#' @field ttl  character [optional]
#' @field prio  character [optional]
#' @field disabled  character [optional]
#' @field ordername  character [optional]
#' @field auth  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DnsUpdateRecord <- R6::R6Class(
  "DnsUpdateRecord",
  public = list(
    `name` = NULL,
    `type` = NULL,
    `content` = NULL,
    `ttl` = NULL,
    `prio` = NULL,
    `disabled` = NULL,
    `ordername` = NULL,
    `auth` = NULL,

    #' @description
    #' Initialize a new DnsUpdateRecord class.
    #'
    #' @param name name
    #' @param type type
    #' @param content content
    #' @param ttl ttl
    #' @param prio prio
    #' @param disabled disabled
    #' @param ordername ordername
    #' @param auth auth
    #' @param ... Other optional arguments.
    initialize = function(`name` = NULL, `type` = NULL, `content` = NULL, `ttl` = NULL, `prio` = NULL, `disabled` = NULL, `ordername` = NULL, `auth` = NULL, ...) {
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`type`)) {
        if (!(`type` %in% c())) {
          stop(paste("Error! \"", `type`, "\" cannot be assigned to `type`. Must be .", sep = ""))
        }
        stopifnot(R6::is.R6(`type`))
        self$`type` <- `type`
      }
      if (!is.null(`content`)) {
        if (!(is.character(`content`) && length(`content`) == 1)) {
          stop(paste("Error! Invalid data for `content`. Must be a string:", `content`))
        }
        self$`content` <- `content`
      }
      if (!is.null(`ttl`)) {
        if (!(is.character(`ttl`) && length(`ttl`) == 1)) {
          stop(paste("Error! Invalid data for `ttl`. Must be a string:", `ttl`))
        }
        self$`ttl` <- `ttl`
      }
      if (!is.null(`prio`)) {
        if (!(is.character(`prio`) && length(`prio`) == 1)) {
          stop(paste("Error! Invalid data for `prio`. Must be a string:", `prio`))
        }
        self$`prio` <- `prio`
      }
      if (!is.null(`disabled`)) {
        if (!(is.character(`disabled`) && length(`disabled`) == 1)) {
          stop(paste("Error! Invalid data for `disabled`. Must be a string:", `disabled`))
        }
        self$`disabled` <- `disabled`
      }
      if (!is.null(`ordername`)) {
        if (!(is.character(`ordername`) && length(`ordername`) == 1)) {
          stop(paste("Error! Invalid data for `ordername`. Must be a string:", `ordername`))
        }
        self$`ordername` <- `ordername`
      }
      if (!is.null(`auth`)) {
        if (!(is.character(`auth`) && length(`auth`) == 1)) {
          stop(paste("Error! Invalid data for `auth`. Must be a string:", `auth`))
        }
        self$`auth` <- `auth`
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
    #' @return DnsUpdateRecord as a base R list.
    #' @examples
    #' # convert array of DnsUpdateRecord (x) to a data frame
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
    #' Convert DnsUpdateRecord to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DnsUpdateRecordObject <- list()
      if (!is.null(self$`name`)) {
        DnsUpdateRecordObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`type`)) {
        DnsUpdateRecordObject[["type"]] <-
          self$extractSimpleType(self$`type`)
      }
      if (!is.null(self$`content`)) {
        DnsUpdateRecordObject[["content"]] <-
          self$`content`
      }
      if (!is.null(self$`ttl`)) {
        DnsUpdateRecordObject[["ttl"]] <-
          self$`ttl`
      }
      if (!is.null(self$`prio`)) {
        DnsUpdateRecordObject[["prio"]] <-
          self$`prio`
      }
      if (!is.null(self$`disabled`)) {
        DnsUpdateRecordObject[["disabled"]] <-
          self$`disabled`
      }
      if (!is.null(self$`ordername`)) {
        DnsUpdateRecordObject[["ordername"]] <-
          self$`ordername`
      }
      if (!is.null(self$`auth`)) {
        DnsUpdateRecordObject[["auth"]] <-
          self$`auth`
      }
      return(DnsUpdateRecordObject)
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
    #' Deserialize JSON string into an instance of DnsUpdateRecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsUpdateRecord
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`type`)) {
        `type_object` <- DnsRecordType$new()
        `type_object`$fromJSON(jsonlite::toJSON(this_object$`type`, auto_unbox = TRUE, digits = NA))
        self$`type` <- `type_object`
      }
      if (!is.null(this_object$`content`)) {
        self$`content` <- this_object$`content`
      }
      if (!is.null(this_object$`ttl`)) {
        self$`ttl` <- this_object$`ttl`
      }
      if (!is.null(this_object$`prio`)) {
        self$`prio` <- this_object$`prio`
      }
      if (!is.null(this_object$`disabled`)) {
        self$`disabled` <- this_object$`disabled`
      }
      if (!is.null(this_object$`ordername`)) {
        self$`ordername` <- this_object$`ordername`
      }
      if (!is.null(this_object$`auth`)) {
        self$`auth` <- this_object$`auth`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DnsUpdateRecord in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DnsUpdateRecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsUpdateRecord
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`type` <- DnsRecordType$new()$fromJSON(jsonlite::toJSON(this_object$`type`, auto_unbox = TRUE, digits = NA))
      self$`content` <- this_object$`content`
      self$`ttl` <- this_object$`ttl`
      self$`prio` <- this_object$`prio`
      self$`disabled` <- this_object$`disabled`
      self$`ordername` <- this_object$`ordername`
      self$`auth` <- this_object$`auth`
      self
    },

    #' @description
    #' Validate JSON input with respect to DnsUpdateRecord and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DnsUpdateRecord
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
# DnsUpdateRecord$unlock()
#
## Below is an example to define the print function
# DnsUpdateRecord$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DnsUpdateRecord$lock()

