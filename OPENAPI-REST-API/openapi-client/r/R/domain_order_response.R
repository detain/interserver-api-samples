#' Create a new DomainOrderResponse
#'
#' @description
#' Registrar response metadata returned after a domain order.
#'
#' @docType class
#' @title DomainOrderResponse
#' @description DomainOrderResponse Class
#' @format An \code{R6Class} generator object
#' @field _OPS_version  character [optional]
#' @field protocol  character [optional]
#' @field is_success  character [optional]
#' @field action  character [optional]
#' @field attributes  \link{DomainOrderResponseAttributes} [optional]
#' @field response_text  character [optional]
#' @field object  character [optional]
#' @field response_code  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainOrderResponse <- R6::R6Class(
  "DomainOrderResponse",
  public = list(
    `_OPS_version` = NULL,
    `protocol` = NULL,
    `is_success` = NULL,
    `action` = NULL,
    `attributes` = NULL,
    `response_text` = NULL,
    `object` = NULL,
    `response_code` = NULL,

    #' @description
    #' Initialize a new DomainOrderResponse class.
    #'
    #' @param _OPS_version _OPS_version
    #' @param protocol protocol
    #' @param is_success is_success
    #' @param action action
    #' @param attributes attributes
    #' @param response_text response_text
    #' @param object object
    #' @param response_code response_code
    #' @param ... Other optional arguments.
    initialize = function(`_OPS_version` = NULL, `protocol` = NULL, `is_success` = NULL, `action` = NULL, `attributes` = NULL, `response_text` = NULL, `object` = NULL, `response_code` = NULL, ...) {
      if (!is.null(`_OPS_version`)) {
        if (!(is.character(`_OPS_version`) && length(`_OPS_version`) == 1)) {
          stop(paste("Error! Invalid data for `_OPS_version`. Must be a string:", `_OPS_version`))
        }
        self$`_OPS_version` <- `_OPS_version`
      }
      if (!is.null(`protocol`)) {
        if (!(is.character(`protocol`) && length(`protocol`) == 1)) {
          stop(paste("Error! Invalid data for `protocol`. Must be a string:", `protocol`))
        }
        self$`protocol` <- `protocol`
      }
      if (!is.null(`is_success`)) {
        if (!(is.character(`is_success`) && length(`is_success`) == 1)) {
          stop(paste("Error! Invalid data for `is_success`. Must be a string:", `is_success`))
        }
        self$`is_success` <- `is_success`
      }
      if (!is.null(`action`)) {
        if (!(is.character(`action`) && length(`action`) == 1)) {
          stop(paste("Error! Invalid data for `action`. Must be a string:", `action`))
        }
        self$`action` <- `action`
      }
      if (!is.null(`attributes`)) {
        stopifnot(R6::is.R6(`attributes`))
        self$`attributes` <- `attributes`
      }
      if (!is.null(`response_text`)) {
        if (!(is.character(`response_text`) && length(`response_text`) == 1)) {
          stop(paste("Error! Invalid data for `response_text`. Must be a string:", `response_text`))
        }
        self$`response_text` <- `response_text`
      }
      if (!is.null(`object`)) {
        if (!(is.character(`object`) && length(`object`) == 1)) {
          stop(paste("Error! Invalid data for `object`. Must be a string:", `object`))
        }
        self$`object` <- `object`
      }
      if (!is.null(`response_code`)) {
        if (!(is.character(`response_code`) && length(`response_code`) == 1)) {
          stop(paste("Error! Invalid data for `response_code`. Must be a string:", `response_code`))
        }
        self$`response_code` <- `response_code`
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
    #' @return DomainOrderResponse as a base R list.
    #' @examples
    #' # convert array of DomainOrderResponse (x) to a data frame
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
    #' Convert DomainOrderResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainOrderResponseObject <- list()
      if (!is.null(self$`_OPS_version`)) {
        DomainOrderResponseObject[["_OPS_version"]] <-
          self$`_OPS_version`
      }
      if (!is.null(self$`protocol`)) {
        DomainOrderResponseObject[["protocol"]] <-
          self$`protocol`
      }
      if (!is.null(self$`is_success`)) {
        DomainOrderResponseObject[["is_success"]] <-
          self$`is_success`
      }
      if (!is.null(self$`action`)) {
        DomainOrderResponseObject[["action"]] <-
          self$`action`
      }
      if (!is.null(self$`attributes`)) {
        DomainOrderResponseObject[["attributes"]] <-
          self$extractSimpleType(self$`attributes`)
      }
      if (!is.null(self$`response_text`)) {
        DomainOrderResponseObject[["response_text"]] <-
          self$`response_text`
      }
      if (!is.null(self$`object`)) {
        DomainOrderResponseObject[["object"]] <-
          self$`object`
      }
      if (!is.null(self$`response_code`)) {
        DomainOrderResponseObject[["response_code"]] <-
          self$`response_code`
      }
      return(DomainOrderResponseObject)
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
    #' Deserialize JSON string into an instance of DomainOrderResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainOrderResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`_OPS_version`)) {
        self$`_OPS_version` <- this_object$`_OPS_version`
      }
      if (!is.null(this_object$`protocol`)) {
        self$`protocol` <- this_object$`protocol`
      }
      if (!is.null(this_object$`is_success`)) {
        self$`is_success` <- this_object$`is_success`
      }
      if (!is.null(this_object$`action`)) {
        self$`action` <- this_object$`action`
      }
      if (!is.null(this_object$`attributes`)) {
        `attributes_object` <- DomainOrderResponseAttributes$new()
        `attributes_object`$fromJSON(jsonlite::toJSON(this_object$`attributes`, auto_unbox = TRUE, digits = NA))
        self$`attributes` <- `attributes_object`
      }
      if (!is.null(this_object$`response_text`)) {
        self$`response_text` <- this_object$`response_text`
      }
      if (!is.null(this_object$`object`)) {
        self$`object` <- this_object$`object`
      }
      if (!is.null(this_object$`response_code`)) {
        self$`response_code` <- this_object$`response_code`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainOrderResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainOrderResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainOrderResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`_OPS_version` <- this_object$`_OPS_version`
      self$`protocol` <- this_object$`protocol`
      self$`is_success` <- this_object$`is_success`
      self$`action` <- this_object$`action`
      self$`attributes` <- DomainOrderResponseAttributes$new()$fromJSON(jsonlite::toJSON(this_object$`attributes`, auto_unbox = TRUE, digits = NA))
      self$`response_text` <- this_object$`response_text`
      self$`object` <- this_object$`object`
      self$`response_code` <- this_object$`response_code`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainOrderResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainOrderResponse
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
# DomainOrderResponse$unlock()
#
## Below is an example to define the print function
# DomainOrderResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainOrderResponse$lock()

