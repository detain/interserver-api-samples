#' Create a new DomainAllInfo
#'
#' @description
#' Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
#'
#' @docType class
#' @title DomainAllInfo
#' @description DomainAllInfo Class
#' @format An \code{R6Class} generator object
#' @field _OPS_version  character [optional]
#' @field attributes  \link{DomainAllInfoAttributes} [optional]
#' @field object  character [optional]
#' @field protocol  character [optional]
#' @field response_text  character [optional]
#' @field response_code  character [optional]
#' @field action  character [optional]
#' @field is_success  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainAllInfo <- R6::R6Class(
  "DomainAllInfo",
  public = list(
    `_OPS_version` = NULL,
    `attributes` = NULL,
    `object` = NULL,
    `protocol` = NULL,
    `response_text` = NULL,
    `response_code` = NULL,
    `action` = NULL,
    `is_success` = NULL,

    #' @description
    #' Initialize a new DomainAllInfo class.
    #'
    #' @param _OPS_version _OPS_version
    #' @param attributes attributes
    #' @param object object
    #' @param protocol protocol
    #' @param response_text response_text
    #' @param response_code response_code
    #' @param action action
    #' @param is_success is_success
    #' @param ... Other optional arguments.
    initialize = function(`_OPS_version` = NULL, `attributes` = NULL, `object` = NULL, `protocol` = NULL, `response_text` = NULL, `response_code` = NULL, `action` = NULL, `is_success` = NULL, ...) {
      if (!is.null(`_OPS_version`)) {
        if (!(is.character(`_OPS_version`) && length(`_OPS_version`) == 1)) {
          stop(paste("Error! Invalid data for `_OPS_version`. Must be a string:", `_OPS_version`))
        }
        self$`_OPS_version` <- `_OPS_version`
      }
      if (!is.null(`attributes`)) {
        stopifnot(R6::is.R6(`attributes`))
        self$`attributes` <- `attributes`
      }
      if (!is.null(`object`)) {
        if (!(is.character(`object`) && length(`object`) == 1)) {
          stop(paste("Error! Invalid data for `object`. Must be a string:", `object`))
        }
        self$`object` <- `object`
      }
      if (!is.null(`protocol`)) {
        if (!(is.character(`protocol`) && length(`protocol`) == 1)) {
          stop(paste("Error! Invalid data for `protocol`. Must be a string:", `protocol`))
        }
        self$`protocol` <- `protocol`
      }
      if (!is.null(`response_text`)) {
        if (!(is.character(`response_text`) && length(`response_text`) == 1)) {
          stop(paste("Error! Invalid data for `response_text`. Must be a string:", `response_text`))
        }
        self$`response_text` <- `response_text`
      }
      if (!is.null(`response_code`)) {
        if (!(is.character(`response_code`) && length(`response_code`) == 1)) {
          stop(paste("Error! Invalid data for `response_code`. Must be a string:", `response_code`))
        }
        self$`response_code` <- `response_code`
      }
      if (!is.null(`action`)) {
        if (!(is.character(`action`) && length(`action`) == 1)) {
          stop(paste("Error! Invalid data for `action`. Must be a string:", `action`))
        }
        self$`action` <- `action`
      }
      if (!is.null(`is_success`)) {
        if (!(is.character(`is_success`) && length(`is_success`) == 1)) {
          stop(paste("Error! Invalid data for `is_success`. Must be a string:", `is_success`))
        }
        self$`is_success` <- `is_success`
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
    #' @return DomainAllInfo as a base R list.
    #' @examples
    #' # convert array of DomainAllInfo (x) to a data frame
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
    #' Convert DomainAllInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainAllInfoObject <- list()
      if (!is.null(self$`_OPS_version`)) {
        DomainAllInfoObject[["_OPS_version"]] <-
          self$`_OPS_version`
      }
      if (!is.null(self$`attributes`)) {
        DomainAllInfoObject[["attributes"]] <-
          self$extractSimpleType(self$`attributes`)
      }
      if (!is.null(self$`object`)) {
        DomainAllInfoObject[["object"]] <-
          self$`object`
      }
      if (!is.null(self$`protocol`)) {
        DomainAllInfoObject[["protocol"]] <-
          self$`protocol`
      }
      if (!is.null(self$`response_text`)) {
        DomainAllInfoObject[["response_text"]] <-
          self$`response_text`
      }
      if (!is.null(self$`response_code`)) {
        DomainAllInfoObject[["response_code"]] <-
          self$`response_code`
      }
      if (!is.null(self$`action`)) {
        DomainAllInfoObject[["action"]] <-
          self$`action`
      }
      if (!is.null(self$`is_success`)) {
        DomainAllInfoObject[["is_success"]] <-
          self$`is_success`
      }
      return(DomainAllInfoObject)
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
    #' Deserialize JSON string into an instance of DomainAllInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainAllInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`_OPS_version`)) {
        self$`_OPS_version` <- this_object$`_OPS_version`
      }
      if (!is.null(this_object$`attributes`)) {
        `attributes_object` <- DomainAllInfoAttributes$new()
        `attributes_object`$fromJSON(jsonlite::toJSON(this_object$`attributes`, auto_unbox = TRUE, digits = NA))
        self$`attributes` <- `attributes_object`
      }
      if (!is.null(this_object$`object`)) {
        self$`object` <- this_object$`object`
      }
      if (!is.null(this_object$`protocol`)) {
        self$`protocol` <- this_object$`protocol`
      }
      if (!is.null(this_object$`response_text`)) {
        self$`response_text` <- this_object$`response_text`
      }
      if (!is.null(this_object$`response_code`)) {
        self$`response_code` <- this_object$`response_code`
      }
      if (!is.null(this_object$`action`)) {
        self$`action` <- this_object$`action`
      }
      if (!is.null(this_object$`is_success`)) {
        self$`is_success` <- this_object$`is_success`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainAllInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainAllInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainAllInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`_OPS_version` <- this_object$`_OPS_version`
      self$`attributes` <- DomainAllInfoAttributes$new()$fromJSON(jsonlite::toJSON(this_object$`attributes`, auto_unbox = TRUE, digits = NA))
      self$`object` <- this_object$`object`
      self$`protocol` <- this_object$`protocol`
      self$`response_text` <- this_object$`response_text`
      self$`response_code` <- this_object$`response_code`
      self$`action` <- this_object$`action`
      self$`is_success` <- this_object$`is_success`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainAllInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainAllInfo
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
# DomainAllInfo$unlock()
#
## Below is an example to define the print function
# DomainAllInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainAllInfo$lock()

