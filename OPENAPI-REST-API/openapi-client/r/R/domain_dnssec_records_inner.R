#' Create a new DomainDnssecRecordsInner
#'
#' @description
#' DomainDnssecRecordsInner Class
#'
#' @docType class
#' @title DomainDnssecRecordsInner
#' @description DomainDnssecRecordsInner Class
#' @format An \code{R6Class} generator object
#' @field algorithm  character [optional]
#' @field digest_type  character [optional]
#' @field digest  character [optional]
#' @field key_tag  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainDnssecRecordsInner <- R6::R6Class(
  "DomainDnssecRecordsInner",
  public = list(
    `algorithm` = NULL,
    `digest_type` = NULL,
    `digest` = NULL,
    `key_tag` = NULL,

    #' @description
    #' Initialize a new DomainDnssecRecordsInner class.
    #'
    #' @param algorithm algorithm
    #' @param digest_type digest_type
    #' @param digest digest
    #' @param key_tag key_tag
    #' @param ... Other optional arguments.
    initialize = function(`algorithm` = NULL, `digest_type` = NULL, `digest` = NULL, `key_tag` = NULL, ...) {
      if (!is.null(`algorithm`)) {
        if (!(is.character(`algorithm`) && length(`algorithm`) == 1)) {
          stop(paste("Error! Invalid data for `algorithm`. Must be a string:", `algorithm`))
        }
        self$`algorithm` <- `algorithm`
      }
      if (!is.null(`digest_type`)) {
        if (!(is.character(`digest_type`) && length(`digest_type`) == 1)) {
          stop(paste("Error! Invalid data for `digest_type`. Must be a string:", `digest_type`))
        }
        self$`digest_type` <- `digest_type`
      }
      if (!is.null(`digest`)) {
        if (!(is.character(`digest`) && length(`digest`) == 1)) {
          stop(paste("Error! Invalid data for `digest`. Must be a string:", `digest`))
        }
        self$`digest` <- `digest`
      }
      if (!is.null(`key_tag`)) {
        if (!(is.character(`key_tag`) && length(`key_tag`) == 1)) {
          stop(paste("Error! Invalid data for `key_tag`. Must be a string:", `key_tag`))
        }
        self$`key_tag` <- `key_tag`
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
    #' @return DomainDnssecRecordsInner as a base R list.
    #' @examples
    #' # convert array of DomainDnssecRecordsInner (x) to a data frame
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
    #' Convert DomainDnssecRecordsInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainDnssecRecordsInnerObject <- list()
      if (!is.null(self$`algorithm`)) {
        DomainDnssecRecordsInnerObject[["algorithm"]] <-
          self$`algorithm`
      }
      if (!is.null(self$`digest_type`)) {
        DomainDnssecRecordsInnerObject[["digest_type"]] <-
          self$`digest_type`
      }
      if (!is.null(self$`digest`)) {
        DomainDnssecRecordsInnerObject[["digest"]] <-
          self$`digest`
      }
      if (!is.null(self$`key_tag`)) {
        DomainDnssecRecordsInnerObject[["key_tag"]] <-
          self$`key_tag`
      }
      return(DomainDnssecRecordsInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainDnssecRecordsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainDnssecRecordsInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`algorithm`)) {
        self$`algorithm` <- this_object$`algorithm`
      }
      if (!is.null(this_object$`digest_type`)) {
        self$`digest_type` <- this_object$`digest_type`
      }
      if (!is.null(this_object$`digest`)) {
        self$`digest` <- this_object$`digest`
      }
      if (!is.null(this_object$`key_tag`)) {
        self$`key_tag` <- this_object$`key_tag`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainDnssecRecordsInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainDnssecRecordsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainDnssecRecordsInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`algorithm` <- this_object$`algorithm`
      self$`digest_type` <- this_object$`digest_type`
      self$`digest` <- this_object$`digest`
      self$`key_tag` <- this_object$`key_tag`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainDnssecRecordsInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainDnssecRecordsInner
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
# DomainDnssecRecordsInner$unlock()
#
## Below is an example to define the print function
# DomainDnssecRecordsInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainDnssecRecordsInner$lock()

